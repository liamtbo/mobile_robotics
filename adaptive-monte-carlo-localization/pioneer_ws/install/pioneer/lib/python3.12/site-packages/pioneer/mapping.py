import rclpy
from rclpy.node import Node
import time
from nav_msgs.msg import OccupancyGrid, Odometry
import numpy as np
from rclpy.executors import ExternalShutdownException
from sensor_msgs.msg import LaserScan
from copy import deepcopy

from pioneer_interfaces.srv import Savemap   
from scipy.stats import norm


class Mapping(Node):

    def __init__(self):

        super().__init__('mapping')

        # this node needs to create, init, and publish an occupancy grid
        # this occupancy grid needs to continuously update as the robot traverses the terrain
            # this will use lidar scans to bayes rule update each cell
        # make a sub to lidar

        self.last_scan_time = self.get_clock().now()

        # I want x and y to range [-10, 10]
        # if resolution is 0.05 meters per cell, to get 20 meters you need:
        # if 20 cells = 1 meter, then 400 cells = 20 meters
        self.width = 400
        self.height = 400
        self.resolution = 0.05 # meters per cell

        self.occ_grid_probs = np.full((self.width, self.height), -1, dtype=np.float32)
        np.savetxt('init_grid.txt', self.occ_grid_probs, fmt='%0.3f')

        # self.get_logger().info(f'{self.occ_grid_probs}')
        self.occ_grid_rviz = self._init_occ_grid_rviz()

        self.occ_grid_pub = self.create_publisher(
            OccupancyGrid,
            'occupancy_grid',
            10
        )

        # stores (x,y,theta) loc of robot
        self.odom = None
        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self._odom_callback,
            10,
        )

        self.scan_sub = self.create_subscription(
            LaserScan, 
            '/base_scan', 
            self._scan_callback, 
            10
        )

        self.srv = self.create_service(
            Savemap, 
            'savemap', 
            self.savemap_callback
        )
    
    def savemap_callback(self, request, response):

        
        # np.savetxt('grid.txt', self.occ_grid_probs, fmt='%0.3f')
        probs_copy = self.occ_grid_probs.copy()
        probs_copy[probs_copy == -1] = 0.9 # make unkown values black
        response.grid.data = (probs_copy * 100).round().astype(np.int8).flatten().tolist()
        response.grid.header.stamp = self.get_clock().now().to_msg()
        response.grid.header.frame_id = "map"

        response.grid.info.width = self.width
        response.grid.info.height = self.height
        response.grid.info.resolution = self.resolution
        response.grid.info.origin.position.x = 0.0
        response.grid.info.origin.position.y = 0.0
        response.grid.info.origin.orientation.w = 1.0
        
        self.get_logger().info("Savemap service called. Sending map.")
        return response



    def _odom_callback(self, msg):
        # self.get_logger().info(f'odom: {msg}')
        q = msg.pose.pose.orientation
        yaw = 2.0 * np.arctan2(q.z, q.w)
        self.odom = (msg.pose.pose.position.x, msg.pose.pose.position.y, yaw)
        # self.get_logger().info(f'odom: {self.odom}')


    def _init_occ_grid_rviz(self):

        msg = OccupancyGrid()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "map"

        msg.info.width = self.width
        msg.info.height = self.height
        msg.info.resolution = self.resolution
        # center it in rviz
        msg.info.origin.position.x = - (self.width * self.resolution) / 2
        msg.info.origin.position.y = - (self.height * self.resolution) / 2
        msg.info.origin.position.z = 0.0
        msg.info.origin.orientation.w = 1.0

        # create grid
        grid = np.zeros((self.height, self.width), dtype=np.int8)
        msg.data = grid.flatten()

        return msg


    def _scan_callback(self, scan):
        # self.get_logger().info(f'scan: {scan}')
        # slow it down a bit
        # now = self.get_clock().now()
        # # if (now - self.last_scan_time).nanoseconds < 2e8:  # 0.2 sec = 5 Hz
        # if (now - self.last_scan_time).nanoseconds < 10e8:  # 0.2 sec = 5 Hz
        #     return
        # self.last_scan_time = now

        self.update_probs(scan)

        # convert occ_grid_ints into 0, 100 for rviz 
        
        self.occ_grid_rviz.data = self.convert_probs_to_rviz(self.occ_grid_probs)
        # self.get_logger().info(f'{occ_grid_rviz_data[:10]}')

        # publish updated occ grid
        self.occ_grid_pub.publish(self.occ_grid_rviz)


    def update_probs(self, scan):
        # scan_dist = np.array(scan.ranges) # len(scan_values) = 180
        # scan_angle = np.linspace(scan.angle_min, scan.angle_max, len(scan.ranges))

        for i in range(len(scan.ranges)):

        # i = len(scan.ranges) // 2

            robot_x, robot_y, robot_yaw = self.odom

            # self.get_logger().info(f'i: {i}')
            laser_dist = scan.ranges[i]
            # self.get_logger().info(f'laser_dist[i]: {laser_dist}')
            angle = scan.angle_min + i * scan.angle_increment
            # self.get_logger().info(f'angle: {angle}')
            theta = robot_yaw + angle
            # self.get_logger().info(f'theta: {theta}')

            end_x = robot_x + laser_dist * np.cos(theta)
            # self.get_logger().info(f'end_x: {end_x}')
            end_y = robot_y + laser_dist * np.sin(theta)
            # self.get_logger().info(f'end_y: {end_y}')

            occ_robot_x, occ_robot_y = self.convert_stage_to_occ_grid(robot_x, robot_y)
            occ_end_x, occ_end_y = self.convert_stage_to_occ_grid(end_x, end_y)
            occ_laser_cells = self.bresenham(int(occ_robot_x), int(occ_robot_y), int(occ_end_x), int(occ_end_y))


            # TODO do i really need to extract and combine again?
            occ_laser_cells_x = occ_laser_cells[:,0]
            # self.get_logger().info(f'occ_laser_cells_x: {occ_laser_cells_x}')
            occ_laser_cells_y = occ_laser_cells[:,1]
            # self.get_logger().info(f'occ_laser_cells_y: {occ_laser_cells_y}')

            prob_occ = self.occ_grid_probs[occ_laser_cells_x, occ_laser_cells_y]
            prob_occ[prob_occ == -1] = 0.9
            # self.get_logger().info(f'prob_occ: {prob_occ}')

            robot_loc = np.tile((occ_robot_x, occ_robot_y), (len(occ_laser_cells), 1))
            dist_to_cell = np.linalg.norm(robot_loc - occ_laser_cells)

            sensor_reading_occ_grid = laser_dist / self.resolution

            prob_sensor_given_occ = norm.pdf(sensor_reading_occ_grid, dist_to_cell, 0.5)

            prob_sensor_given_not_occ = 1 - prob_sensor_given_occ

            prob_not_occ = 1 - prob_occ

            bayes = (prob_sensor_given_occ * prob_occ) \
                / (prob_sensor_given_occ * prob_occ \
                + prob_sensor_given_not_occ * prob_not_occ)

            bayes = np.clip(bayes, 0.01, 0.99)
            # self.get_logger().info(f'bayes: {bayes}')
            self.occ_grid_probs[occ_laser_cells_x, occ_laser_cells_y] = bayes 

            
            # # if not object is hit
            # if scan.ranges[i] == 8:
            #     for cell_x, cell_y in occ_laser_cells:
            #         self.occ_grid_probs[cell_x, cell_y] = 0.1
            # # if object is hit
            # else:
            #     for cell_x, cell_y in occ_laser_cells[:-1]:
            #         self.occ_grid_probs[cell_x, cell_y] = 0.1
            #     self.occ_grid_probs[occ_laser_cells[-1][0], occ_laser_cells[-1][1]] = 0.9


    def normal_pdf(self, x, mean, std):
        return (1 / (std * np.sqrt(2 * np.pi))) * \
            np.exp(-((x - mean)**2) / (2 * std**2))
        
    # (10,10) -> (400, 400)
    # (-10,-10) -> (0, 0)
    def convert_stage_to_occ_grid(self, x, y):
        origin_x = self.width / 2
        origin_y = self.height / 2
        grid_x = int(np.floor(origin_x - (x / self.resolution)))
        grid_y = int(np.floor(origin_y - (y / self.resolution)))
        return grid_y, grid_x

    def bresenham(self, x0, y0, x1, y1):
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

    def convert_probs_to_rviz(self, occ_grid_probs, occupied_thresh=0.75):
        # self.get_logger().info(f'before: {occ_grid_rviz[0]}')
        occ_grid_rviz = occ_grid_probs.copy()
        occ_grid_rviz[occ_grid_probs == -1] = -1
        occ_grid_rviz[(occ_grid_probs >= 0) & (occ_grid_probs < occupied_thresh)] = 0
        occ_grid_rviz[occ_grid_probs >= occupied_thresh] = 100
        # self.get_logger().info(f'after: {occ_grid_rviz[0]}')
        return np.flipud(np.fliplr(occ_grid_rviz.astype(np.int8))).flatten()

def main(args=None):
    rclpy.init(args=args)
    mapping = None
    try:
        mapping = Mapping()
        rclpy.spin(mapping)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        if mapping is not None: 
            mapping.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()