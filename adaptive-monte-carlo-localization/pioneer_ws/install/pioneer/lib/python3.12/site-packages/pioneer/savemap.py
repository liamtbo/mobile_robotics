import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from pioneer_interfaces.srv import Savemap
import numpy as np
import cv2


class SaveMapClient(Node):

    def __init__(self):
        super().__init__('savemap_client')

        self.cli = self.create_client(Savemap, 'savemap')

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')

        self.req = Savemap.Request()

    def send_request(self):
        return self.cli.call_async(self.req)


def main(args=None):
    try:
        rclpy.init(args=args)

        client = SaveMapClient()
        future = client.send_request()
        rclpy.spin_until_future_complete(client, future)

        response = future.result()

        if response is not None:
            # Get the occupancy grid
            grid_msg = response.grid
            width = grid_msg.info.width
            height = grid_msg.info.height

            grid = np.array(grid_msg.data, dtype=np.int16).reshape((height, width))
            grid = np.fliplr(np.flipud(grid))
            img = np.zeros_like(grid, dtype=np.uint8)
            # known_mask = (grid >= 0)
            img = ((100 - grid) * 255 / 100).astype(np.uint8)

            # Flip image vertically if needed (OccupancyGrid row-major)
            img = np.flipud(img)

            cv2.imwrite("src/pioneer/pioneer/saved_maps/map.png", img)

            client.get_logger().info("Map saved as map.png")
        else:
            client.get_logger().error('Service call failed.')

        client.destroy_node()
        rclpy.shutdown()

    except (KeyboardInterrupt, ExternalShutdownException):
        pass


if __name__ == '__main__':
    main()
