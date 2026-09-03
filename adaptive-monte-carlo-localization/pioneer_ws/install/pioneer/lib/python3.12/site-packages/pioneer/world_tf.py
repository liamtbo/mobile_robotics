import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
from tf2_ros import StaticTransformBroadcaster

class StaticFramePublisher(Node):

    def __init__(self):
        super().__init__('world_tf')

        self.get_logger().info(f'Broadcasting static tf: world -> stage')

        self.tf_broadcaster = StaticTransformBroadcaster(self)

        self.world_to_stage_tf()


    def world_to_stage_tf(self):
        
        t = TransformStamped()

        # Time stamp
        t.header.stamp = self.get_clock().now().to_msg()

        # Parent frame
        t.header.frame_id = "world"

        # Child frame
        t.child_frame_id = "stage"

        # Translation
        t.transform.translation.x = 0.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.0
    
        t.transform.rotation.w = 1.0  # identity quaternion
        t.transform.rotation.x = 0.0
        t.transform.rotation.y = 0.0
        t.transform.rotation.z = 0.0

        self.tf_broadcaster.sendTransform(t)


def main():
    logger = rclpy.logging.get_logger('logger')

    # pass parameters and initialize node
    rclpy.init()
    node = StaticFramePublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass