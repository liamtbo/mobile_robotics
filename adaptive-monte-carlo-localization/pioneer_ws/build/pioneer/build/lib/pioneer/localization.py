
import rclpy
from rclpy.node import Node
from nav_msgs.msg import OccupancyGrid
from geometry_msgs.msg import Pose
from rclpy.qos import QoSProfile, DurabilityPolicy

import os
import cv2
import sys
import numpy as np

from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry

from ament_index_python.packages import get_package_share_directory
import os

from sensor_msgs.msg import LaserScan
from visualization_msgs.msg import Marker, MarkerArray
from scipy.stats import norm
import copy

from pioneer_interfaces.srv import Getpoints 
from geometry_msgs.msg import PointStamped, Point
from std_msgs.msg import Header

import matplotlib.pyplot as plt
import numpy as np



"""
make sure prob sampling is working correctly with min particle test
send list of points to driver
move driver one
"""

GRID_WIDTH = 400
GRID_HEIGHT = 400
STAGE_WIDTH = 16
STAGE_HEIGHT = 16
NUM_PARTICLES = 1000

DRIVE_NOISE = 0.05
TURN_NOISE = 0.01

ERROR = []

np.random.seed(42)

class Robot:
    def __init__(self, particle_id):
        self.particle_id = particle_id
        
        self.x = np.random.uniform(-STAGE_WIDTH // 2.0, STAGE_WIDTH // 2.0)
        self.y = np.random.uniform(-STAGE_HEIGHT // 2.0, STAGE_HEIGHT // 2.0)
        self.orient = np.random.uniform(-np.pi, np.pi)

class Localization(Node):

    def __init__(self):
        super().__init__('ground_truth_node')
        self.get_logger().info("Ground Truth Node Started")

        # Parameter for world png desired
        package_share = get_package_share_directory('pioneer')
        # self.map_path = os.path.join(package_share, 'saved_maps', 'office_cropped.png')
        self.map_path = os.path.join(package_share, 'saved_maps', 'open_map.png')

        self.get_logger().info(f'file: {self.map_path}')

        self.gray_image = self._load_grayscale_image(self.map_path)

        # Resize image to occupancy grid size, should match stage map size
        self.grid_width = GRID_WIDTH
        self.grid_height = GRID_HEIGHT
        self.resolution = 0.04 # 0.05 meters per cell, so 320 x 0.05 = 16 meters for the width and height
        self.grid_origin = (GRID_WIDTH / 2, GRID_HEIGHT / 2)

        self.get_logger().info(f'Converting image to occ_grid and publishing to /map')
        self.occ_grid = self._convert_image_to_2darray()
        self.occ_grid_pub = self.create_publisher(
            OccupancyGrid,
            '/map',
            10,
        )

        self.timer = self.create_timer(1.0, self.publish_map)

        self.marker_pub = self.create_publisher(
            MarkerArray,
            '/particle_markers',
            10
        )
        # self.get_logger().info(f'Publishing particles')

        # Constantly populate self.laser_scan with most recent front scan
        self.laser_scan = None
        self.laser_sub = self.create_subscription(
            LaserScan, 
            '/base_scan', 
            self._scan_callback, 
            10
        )

        self.prior_odom = None
        self.curr_odom = None
        self.odom_sub = self.create_subscription(
            Odometry, 
            '/odom', 
            self._odom_callback, 
            10
        )

        error = []

        # init particles
        self.get_logger().info(f'Initializing particles')
        self.particles = np.array([Robot(i) for i in range(NUM_PARTICLES)])
        # TODO remove this line
        self.particles[0].x = 0.0
        self.particles[0].y = 0.0
        self.particles[0].orient = 0.0
        self.particle_probabilities = np.full(NUM_PARTICLES, 1 / NUM_PARTICLES)

        self._main_timer = self.create_timer(0.1, self._main)

    def _main(self):

        # self.get_logger().info(f'starting particles {[(round(p.x, 2), round(p.y,2)) for p in self.particles]}')
        # self.get_logger().info(f'moving particles {[(round(p.x, 2), round(p.y,2)) for p in self.particles]}')
        self._move_particles()
        # self.get_logger().info(f'starting particle probs: {self.particle_probabilities}')
        self._create_particle_markers()
        self._probability_update()
        # self.get_logger().info(f'probs: {self.particle_probabilities}')
        # self.get_logger().info(f'moved particle probs: {self.particle_probabilities}')
        # self.get_logger().info(f'resampled particled {[(round(p.x, 2), round(p.y,2)) for p in self.particles]}')
        self._resample_particles()
        self._log_error()


    def _log_error(self):
        highest_prob_idx = np.argmax(self.particle_probabilities)
        highest_prob_particle = self.particles[highest_prob_idx]
        x_error = np.abs(self.curr_odom[0] - highest_prob_particle.x)
        y_error = np.abs(self.curr_odom[1] - highest_prob_particle.y)
        orient_error = np.abs(self.curr_odom[2] - highest_prob_particle.orient)
        ERROR.append(x_error + y_error + orient_error)
        self.plot_values()

    def plot_values(self, title="Error Plot", xlabel="Iteration", ylabel="Error"):
        values = np.array(ERROR)
        x = np.arange(len(values))
    
        plt.figure()
        plt.plot(x, values)
        plt.title(title)
        plt.xlabel(xlabel)
        plt.ylabel(ylabel)
        plt.grid(True)

        plt.savefig('src/pioneer/pioneer/saved_maps', dpi=300, bbox_inches='tight')
        plt.close() 

    def _resample_particles(self):
        self.get_logger().info(f'-------------------')
        # self.get_logger().info(f'{[(round(p.x, 2), round(p.y,2)) for p in self.particles]}')
        # self.get_logger().info(f'particle_probs: {self.particle_probabilities}')
        new_particle_samples_idxs = np.random.choice(NUM_PARTICLES, size=NUM_PARTICLES, p=self.particle_probabilities)
        # self.get_logger().info(f'new_particle_idxs: {new_particle_samples_idxs}')
        self.particles = np.array([copy.deepcopy(self.particles[idx]) for idx in new_particle_samples_idxs])
        # self.get_logger().info(f'{[(round(p.x, 2), round(p.y,2)) for p in self.particles]}')
        for i, p in enumerate(self.particles):
            p.particle_id = i
        self.particle_probabilities = np.full(
            NUM_PARTICLES,
            1.0 / NUM_PARTICLES
        )

    def _move_particles(self):
        if self.prior_odom is None or self.curr_odom is None:
            return

        prior = np.array([self.prior_odom[0], self.prior_odom[1]])
        curr = np.array([self.curr_odom[0], self.curr_odom[1]])

        if np.array_equal(prior, curr):
            return

        movement = np.linalg.norm(curr - prior)
        angle_change = self.curr_odom[2] - self.prior_odom[2]

        # self.get_logger().info(f'movement: {movement:.3f}')

        for particle in self.particles:
            px = particle.x
            py = particle.y
            pw = particle.orient

            move_noisy = movement + np.random.normal(0, DRIVE_NOISE)
            turn_noisy = angle_change + np.random.normal(0, TURN_NOISE)

            # Update orientation FIRST
            new_theta = pw + turn_noisy

            # Then move forward in that direction
            particle.x = px + move_noisy * np.cos(new_theta)
            particle.y = py + move_noisy * np.sin(new_theta)
            particle.orient = new_theta

        self.prior_odom = copy.copy(self.curr_odom)


    def _probability_update(self):

        for i, particle in enumerate(self.particles):

            particle_distance = self._get_particle_object_distance(particle)
            if particle_distance is None:
                self.get_logger().info('particle_distanece is None')
                continue
            robot_distance = self.laser_scan[0]

            if robot_distance is None:
                self.get_logger().info(f'Robot distance is None')
                continue
            
            prob_particle = self.particle_probabilities[i]
            # self.get_logger().info(f'prob_particle: {prob_particle}')
            # self.get_logger().info(f'particle_distance: {particle_distance:.2f}')
            # self.get_logger().info(f'robot_distance: {robot_distance:.2f}')

            prob_particle_distance_given_robot_distance = norm.pdf(particle_distance, robot_distance, 0.5)
            # self.get_logger().info(f'prob_particle_distance_given_robot_distance: {prob_particle_distance_given_robot_distance}')

            prob_not_particle = 1 - prob_particle
            prob_particle_distance_given_not_robot_distance = 1 - prob_particle_distance_given_robot_distance

            bayes = (prob_particle_distance_given_robot_distance * prob_particle) \
                / ((prob_particle_distance_given_robot_distance * prob_particle) \
                + (prob_particle_distance_given_not_robot_distance * prob_not_particle))
            
            self.particle_probabilities[i] = np.clip(bayes, 0.001, 0.999)

        # normalize
        self.particle_probabilities = self.particle_probabilities / np.sum(self.particle_probabilities)


    def _get_particle_object_distance(self, particle):

        occ_x, occ_y = self._convert_stage_to_occ(particle.x, particle.y)
        occ_w = self._convert_stage_angle_to_occ(particle.orient)

        if self.occ_grid[occ_x, occ_y] == 100:
            return 0.0

        # self.get_logger().info(
        #     f"Particle (stage): x={particle.x:.3f}, y={particle.y:.3f}, w={particle.orient:.3f}"
        # )
        # self.get_logger().info(f'occ_x, occ_y, occ_w: {occ_x, occ_y, occ_w}')
        max_end_point = self._get_ray_max_end_point(occ_x, occ_y, occ_w)
        # self.get_logger().info(f'max end point: {max_end_point}')
        if max_end_point:
            occ_ray_end_point_x, occ_ray_end_point_y = max_end_point
        else:
            self.get_logger().info(f'max_end_point is None')
            return
        
        # self.get_logger().info(
        #     f"Particle (occ):   x={occ_x}, y={occ_y}, w={occ_w:.3f}"
        # )
        # self.get_logger().info(
        #     f"Particle End (occ):   x={occ_ray_end_point_x}, y={occ_ray_end_point_y}, w={occ_w:.3f}"
        # )
        # self.get_logger().info('Getting cells in ray')
        ray_cells = self._bresenham(occ_x, occ_y, occ_ray_end_point_x, occ_ray_end_point_y)
        # TODO remove
        # rows, cols = zip(*ray_cells)
        # self.occ_grid[rows, cols] = 100
        # self.get_logger().info(f'Iterating through ray cells')
        # for cell in ray_cells:
        #     self.get_logger().info(f'ray_cells: {cell} -> {self.occ_grid[cell[0], cell[1]]}')
      
        distance_to_obstacle = self._get_distance_to_obstacle(occ_x, occ_y, ray_cells)
        if distance_to_obstacle is None:
            self.get_logger().info(f'distance_to obstacle returned None')
            return
      
        # self.get_logger().info(f'distance to obstacle: {distance_to_obstacle:.2f}')

        return distance_to_obstacle

    def _get_distance_to_obstacle(self, occ_x, occ_y, ray_cells):

        for cell in ray_cells:
            if (self.occ_grid[cell[0], cell[1]] != 100 \
                and cell[0] != 0 and cell[0] != GRID_WIDTH - 1 \
                and cell[1] != 0 and cell[1] != GRID_HEIGHT - 1):

                continue

            a = np.array([occ_x, occ_y])
            b = cell
            occ_distance = np.linalg.norm(a - b)
            stage_distance = occ_distance * self.resolution
            return stage_distance
        return None
        

    def _get_ray_max_end_point(self, occ_x, occ_y, occ_w):
        dx = np.cos(occ_w)
        dy = np.sin(occ_w)

        left   = 0
        right  = GRID_WIDTH - 1
        bottom = 0
        top    = GRID_HEIGHT - 1

        t_values = []

        if not np.isclose(dx, 0):
            t_right = (right - occ_x) / dx
            if t_right > 0:
                y_hit = occ_y + t_right * dy
                if bottom <= y_hit <= top:
                    t_values.append(t_right)

            t_left = (left - occ_x) / dx
            if t_left > 0:
                y_hit = occ_y + t_left * dy
                if bottom <= y_hit <= top:
                    t_values.append(t_left)

        if not np.isclose(dy, 0):
            t_top = (top - occ_y) / dy
            if t_top > 0:
                x_hit = occ_x + t_top * dx
                if left <= x_hit <= right:
                    t_values.append(t_top)

            t_bottom = (bottom - occ_y) / dy
            if t_bottom > 0:
                x_hit = occ_x + t_bottom * dx
                if left <= x_hit <= right:
                    t_values.append(t_bottom)

        if not t_values:
            return None

        t_min = min(t_values)

        x_final = occ_x + t_min * dx
        y_final = occ_y + t_min * dy

        return (int(np.round(x_final)), int(np.round(y_final)))
        


    def _bresenham(self, x0, y0, x1, y1):
        cells = []
    
        dx = abs(x1 - x0)
        dy = abs(y1 - y0)
        sx = 1 if x0 < x1 else -1
        sy = 1 if y0 < y1 else -1
        err = dx - dy
    
        while True:
            cells.append((x0, y0))
    
            # if robot is ontop of end of laser
            if x0 == x1 and y0 == y1:
                break
    
            e2 = 2 * err
            if e2 > -dy:
                err -= dy
                x0 += sx
            if e2 < dx:
                err += dx
                y0 += sy
        return np.array(cells)


    def _convert_stage_to_occ(self, stage_x, stage_y):
        # something like (5,2) -> (-150, -75)
        occ_x = stage_x / self.resolution + self.grid_origin[0]
        occ_y = stage_y / self.resolution + self.grid_origin[1]

        occ_x = np.clip(occ_x, 0, self.grid_width - 1)
        occ_y = np.clip(occ_y, 0, self.grid_height - 1)


        return int(np.round(occ_y)), int(np.round(occ_x))

    def _convert_stage_angle_to_occ(self, w):
        return -w + np.pi / 2

    def _create_particle_markers(self):
        self._clear_particle_markers()
        self._generate_particle_markers()

    def _clear_particle_markers(self):
        marker_array = MarkerArray()
    
        delete_marker = Marker()
        delete_marker.action = Marker.DELETEALL
    
        marker_array.markers.append(delete_marker)
    
        self.marker_pub.publish(marker_array)

    def _generate_particle_markers(self):
        particles = self.particles
        marker_array = MarkerArray()

        best_idx = np.argmax(self.particle_probabilities)


        for i, p in enumerate(particles):

            marker = Marker()
            marker.header.frame_id = "world" 
            marker.header.stamp = self.get_clock().now().to_msg()

            marker.ns = "particles"
            marker.id = p.particle_id
            marker.type = Marker.ARROW
            marker.action = Marker.ADD

            marker.pose.position.x = float(p.x)
            marker.pose.position.y = float(p.y)
            marker.pose.position.z = 0.0
            # self.get_logger().info(f'marker generated x,y: ({p.x}, {p.y})')
            # orientation from yaw
            marker.pose.orientation.z = np.sin(p.orient / 2.0)
            marker.pose.orientation.w = np.cos(p.orient / 2.0)


            if i == best_idx:
                marker.scale.x = 0.2   # arrow length
                marker.scale.y = 0.15
                marker.scale.z = 0.15
                marker.color.a = 1.0
                marker.color.r = 0.0
                marker.color.b = 1.0
                marker.color.g = 0.0
            else:
                marker.scale.x = 0.2   # arrow length
                marker.scale.y = 0.05
                marker.scale.z = 0.05
                marker.color.a = 1.0
                marker.color.r = 1.0
                marker.color.b = 0.0
                marker.color.g = 0.0

            marker_array.markers.append(marker)

        # self.get_logger().info(f'length of marker array: {len(marker_array.markers)}')
        # self.get_logger().info(f'particle example: {}')
        self.marker_pub.publish(marker_array)
    
    def _odom_callback(self, msg):
        # self.get_logger().info(f'odom: {msg}')
        q = msg.pose.pose.orientation
        yaw = 2.0 * np.arctan2(q.z, q.w)
        self.curr_odom = (msg.pose.pose.position.x, msg.pose.pose.position.y, yaw)
        if self.prior_odom is None: 
            self.prior_odom = copy.deepcopy(self.curr_odom)
        # self.get_logger().info(f'odom: {self.odom}')

    # scan, update probablites loop
    def _scan_callback(self, scan):
        # get just middle laser for simplicity
        self.laser_scan = [scan.ranges[len(scan.ranges) // 2]]
        # self.get_logger().info(f'scan callback: {self.laser_scan}')
    
    def publish_map(self):
        # self.get_logger().info(f'Publishing occ_grid')
        map_msg = self._create_occupancy_grid(self.occ_grid)
        self.occ_grid_pub.publish(map_msg)

    def _load_grayscale_image(self, map_path):
        if not os.path.isfile(map_path):
            raise FileNotFoundError(f"File does not exist: {map_path}")
    
        # Load as grayscale directly
        image = cv2.imread(map_path, cv2.IMREAD_GRAYSCALE)
    
        if image is None:
            raise ValueError("Failed to load image")
    
        return image

    def _convert_image_to_2darray(self):
        resized = cv2.resize(self.gray_image, (self.grid_width, self.grid_height), interpolation=cv2.INTER_AREA)

        # Convert to occupancy values: 0 = free, 100 = occupied, -1 = unknown
        occ = np.full_like(resized, -1, dtype=np.int8)
        occ[resized > 127] = 0
        occ[resized <= 127] = 100
        occ = np.flipud(occ)
        return occ

    def _create_occupancy_grid(self, occ_array):

        height, width = occ_array.shape

        msg = OccupancyGrid()
        msg.header.stamp = self.get_clock().now().to_msg()
        # msg.header.frame_id = "world"
        msg.header.frame_id = "world"

        # meters per pixel
        # image is 320x320, world size is 32mx32m, thus occ grid res is 0.1 meters per cell
        # msg.info.resolution = self.grid_width / width
        msg.info.resolution = self.resolution

        msg.info.width = self.grid_width
        msg.info.height = self.grid_height

        msg.info.origin.position.x = -self.grid_width * self.resolution / 2.0
        msg.info.origin.position.y = -self.grid_height * self.resolution / 2.0

        # self.get_logger().info(f'origin_x: {msg.info.origin.position.x}')
        # self.get_logger().info(f'origin_y: {msg.info.origin.position.y}')

        msg.info.origin.position.z = 0.0
        msg.info.origin.orientation.w = 1.0

        msg.data = occ_array.flatten().tolist()
        return msg



def main(args=None):
    rclpy.init(args=args)
    node = Localization()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Keyboard Interrupt detected")
    finally:
        node.destroy_node()
        rclpy.shutdown()
    plot_values(ERROR)


if __name__ == '__main__':
    main()
