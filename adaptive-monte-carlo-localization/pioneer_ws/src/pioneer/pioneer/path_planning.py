import rclpy
from rclpy.node import Node

import cv2
import numpy as np
from rclpy.executors import ExternalShutdownException

import math
import heapq

from pioneer_interfaces.srv import Getpoints 
from geometry_msgs.msg import PointStamped, Point


"""

make driver has parameters:
    explore -> driver simply explores to make a map
    path_planning -> sends server request to path_planning with desired path. path planning return a set of points

get a full map manually
import grayscale image
convert to occupany grid based on threshold
create occupancy grid copy
    buffer the edges 
create start end point parameter
    conversion methods from stage -> occ grid
implement A*
run A*
pick out points along A* path
plot them on non-buffered occupancy grid

"""

"""CITATION: A-star, functions, data structures are derived from geeksforgeeks website:
    https://www.geeksforgeeks.org/dsa/a-search-algorithm/"""
    
# Define the Cell class
class Cell:
    def __init__(self):
        self.parent_i = 0  # Parent cell's row index
        self.parent_j = 0  # Parent cell's column index
        self.f = float('inf')  # Total cost of the cell (g + h)
        self.g = float('inf')  # Cost from start to this cell
        self.h = 0  # Heuristic cost from this cell to destination


class PathPlanning(Node):

    def __init__(self):

        super().__init__('PathPlanning')

        # map_file = "./src/pioneer/pioneer/saved_maps/warehouse.png"
        map_file = "./src/pioneer/pioneer/saved_maps/warehouse_obstacle.png"

        # taken from mapping.py, this results in a 20m range for both x and y
        self.width = 400
        self.height = 400
        self.resolution = 0.05

        self.map_image = cv2.imread(map_file, cv2.IMREAD_GRAYSCALE)
        self.map_np = np.flipud(np.array(self.map_image))
        self.map_width = len(self.map_np[0])
        self.map_height = len(self.map_np)

        # threshold
        self.occ_grid = self.map_np.copy()
        self.occ_grid[self.map_np > 127] = 0 # free space
        self.occ_grid[self.map_np <= 127] = 100 # obstacles
        cv2.imwrite("src/pioneer/pioneer/saved_maps/occ_grid.png", np.flipud(self.occ_grid))

        # buffer edges
        # self._buffer_edges()
        kernel_size = 2 * 9 + 1   # full diameter
        kernel = np.ones((kernel_size, kernel_size), np.uint8)
        self.buffed_occ_grid = cv2.dilate(self.occ_grid, kernel, iterations=1)

        # Set robot starting and goal locations
        self.start_loc_stage = [0, 0]
        self.end_loc_stage = [5, 5]
        self.start_loc_occ_grid = self.convert_stage_to_occ_grid(self.start_loc_stage)
        self.end_loc_occ_grid = self.convert_stage_to_occ_grid(self.end_loc_stage)

        # visualize buffering - testing
        buff_image = np.array(self.buffed_occ_grid).copy()
        self.get_logger().info(f'start: {self.start_loc_occ_grid}')
        self.get_logger().info(f'end: {self.end_loc_occ_grid}')
        buff_image[self.start_loc_occ_grid[0], self.start_loc_occ_grid[1]] = 85
        buff_image[self.end_loc_occ_grid[0], self.end_loc_occ_grid[1]] = 85
        # reversed bc in grayscale png 0 is black and 255 is white
        buff_image[self.buffed_occ_grid > 90] = 0
        buff_image[self.buffed_occ_grid <= 90] = 255
        buff_image[self.buffed_occ_grid == 85] = 127

        cv2.imwrite("src/pioneer/pioneer/saved_maps/buffed_occ_grid.png", np.flipud(buff_image))
        self.get_logger().info("buffed_occ_grid saved as buffed_occ_grid.png")


        path = self.a_star_search(self.buffed_occ_grid, 
                                self.start_loc_occ_grid,
                                self.end_loc_occ_grid)
        
        if path:
            for x, y in path:
                self.map_np[x, y] = 127
        self.map_np = np.flipud(self.map_np)
        cv2.imwrite("src/pioneer/pioneer/saved_maps/path_planned.png", self.map_np)
        self.get_logger().info("Path planned saved as path_planned.png")

        path = np.array(path)
        waypoints_i = np.linspace(0, len(path)-1, 5, dtype=int)
        self.waypoints = path[waypoints_i]
        self.cli = self.create_client(Getpoints, 'getpoints')

        
        self.req = Getpoints.Request() # TODO populate with points

        # TODO covert to stage coords
        point_list = []
        for x, y in self.waypoints:
            x, y = self.convert_occ_grid_to_stage((x,y))

            # image flipped coordinates, resolving here
            tmp = x
            x = y
            y = tmp

            point = PointStamped(point=Point(x=float(x), y=float(y), z=0.0))
            self.get_logger().info(f"Adding point to send: x: {point.point.x}, y: {point.point.y}, z: {point.point.z}")
            point_list.append(point)

        self.req.points = point_list
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')

    def send_request(self):
        return self.cli.call_async(self.req)
        

    def convert_stage_to_occ_grid(self, point):
        origin_x = self.width / 2
        origin_y = self.height / 2
        grid_x = int(np.floor(origin_x + (point[0] / self.resolution))) - 1
        grid_y = int(np.floor(origin_y + (point[1] / self.resolution))) - 1
        return grid_y, grid_x

    def convert_occ_grid_to_stage(self, point):
        origin_x = self.width / 2
        origin_y = self.height / 2
        stage_x = (point[0] + 1 - origin_x) * self.resolution
        stage_y = (point[1] + 1 - origin_y) * self.resolution
        return stage_x, stage_y


    """CITATION: A-star, functions, data structures are derived from geeksforgeeks website:
       https://www.geeksforgeeks.org/dsa/a-search-algorithm/"""

    # Check if a cell is valid (within the grid)
    def is_valid(self, row, col):
        return (row >= 0) and (row < self.height) and (col >= 0) and (col < self.width)

    # Check if a cell is unblocked
    def is_unblocked(self, grid, row, col):
        return grid[row][col] == 0

    # Check if a cell is the destination
    def is_destination(self, row, col, dest):
        return row == dest[0] and col == dest[1]

    # Calculate the heuristic value of a cell (Euclidean distance to destination)
    def calculate_h_value(self, row, col, dest):
        return ((row - dest[0]) ** 2 + (col - dest[1]) ** 2) ** 0.5

    # Trace the path from source to destination
    def trace_path(self, cell_details, dest):
        self.get_logger().info("The Path is ")
        path = []
        row = dest[0]
        col = dest[1]

        # Trace the path from destination to source using parent cells
        while not (cell_details[row][col].parent_i == row and cell_details[row][col].parent_j == col):
            path.append((row, col))
            temp_row = cell_details[row][col].parent_i
            temp_col = cell_details[row][col].parent_j
            row = temp_row
            col = temp_col

        # Add the source cell to the path
        path.append((row, col))
        # Reverse the path to get the path from source to destination
        path.reverse()

        # Print the path
        return path
        # for i in path:
            # self.get_logger().info(f"-> {i} ")
        # print()

    # Implement the A* search algorithm
    def a_star_search(self, grid, src, dest):
        # Check if the source and destination are valid
        if not self.is_valid(src[0], src[1]) or not self.is_valid(dest[0], dest[1]):
            self.get_logger().info("Source or destination is invalid")
            return

        # Check if the source and destination are unblocked
        if not self.is_unblocked(grid, src[0], src[1]) or not self.is_unblocked(grid, dest[0], dest[1]):
            self.get_logger().info("Source or the destination is blocked")
            return

        # Check if we are already at the destination
        if self.is_destination(src[0], src[1], dest):
            self.get_logger().info("We are already at the destination")
            return

        # Initialize the closed list (visited cells)
        closed_list = [[False for _ in range(self.width)] for _ in range(self.height)]
        # Initialize the details of each cell
        cell_details = [[Cell() for _ in range(self.width)] for _ in range(self.height)]

        # Initialize the start cell details
        i = src[0]
        j = src[1]
        cell_details[i][j].f = 0
        cell_details[i][j].g = 0
        cell_details[i][j].h = 0
        cell_details[i][j].parent_i = i
        cell_details[i][j].parent_j = j

        # Initialize the open list (cells to be visited) with the start cell
        open_list = []
        heapq.heappush(open_list, (0.0, i, j))

        # Initialize the flag for whether destination is found
        found_dest = False

        # Main loop of A* search algorithm
        while len(open_list) > 0:
            # Pop the cell with the smallest f value from the open list
            p = heapq.heappop(open_list)

            # Mark the cell as visited
            i = p[1]
            j = p[2]
            closed_list[i][j] = True

            # For each direction, check the successors
            directions = [(0, 1), (0, -1), (1, 0), (-1, 0), (1, 1), (1, -1), (-1, 1), (-1, -1)]
            for dir in directions:
                new_i = i + dir[0]
                new_j = j + dir[1]

                # If the successor is valid, unblocked, and not visited
                if self.is_valid(new_i, new_j) and self.is_unblocked(grid, new_i, new_j) and not closed_list[new_i][new_j]:
                    # If the successor is the destination
                    if self.is_destination(new_i, new_j, dest):
                        # Set the parent of the destination cell
                        cell_details[new_i][new_j].parent_i = i
                        cell_details[new_i][new_j].parent_j = j
                        self.get_logger().info("The destination cell is found")
                        # Trace and self.get_logger().info the path from source to destination
                        path = self.trace_path(cell_details, dest)
                        found_dest = True
                        return path
                    else:
                        # Calculate the new f, g, and h values
                        g_new = cell_details[i][j].g + 1.0
                        h_new = self.calculate_h_value(new_i, new_j, dest)
                        f_new = g_new + h_new

                        # If the cell is not in the open list or the new f value is smaller
                        if cell_details[new_i][new_j].f == float('inf') or cell_details[new_i][new_j].f > f_new:
                            # Add the cell to the open list
                            heapq.heappush(open_list, (f_new, new_i, new_j))
                            # Update the cell details
                            cell_details[new_i][new_j].f = f_new
                            cell_details[new_i][new_j].g = g_new
                            cell_details[new_i][new_j].h = h_new
                            cell_details[new_i][new_j].parent_i = i
                            cell_details[new_i][new_j].parent_j = j

        # If the destination is not found after visiting all cells
        if not found_dest:
            self.get_logger().info("Failed to find the destination cell")
            return None


def main(args=None):
    try:
        rclpy.init(args=args)
        client = PathPlanning()
        future = client.send_request()
        rclpy.spin_until_future_complete(client, future)
        response = future.result()
    except(KeyboardInterrupt, ExternalShutdownException):
        pass