import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from geometry_msgs.msg import PoseStamped
from nav2_msgs.action import NavigateToPose


class Nav2ActionClient(Node):

    def __init__(self):
        super().__init__('nav2_action_client')

        self._client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

    def send_goal(self):
        goal_msg = NavigateToPose.Goal()

        goal_msg.pose = PoseStamped()
        goal_msg.pose.header.frame_id = 'map'
        goal_msg.pose.header.stamp = self.get_clock().now().to_msg()

        goal_msg.pose.pose.position.x = -2.0
        goal_msg.pose.pose.position.y = 3.0
        goal_msg.pose.pose.orientation.w = 1.0

        self._client.wait_for_server()

        self._send_goal_future = self._client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(
            f'Distance remaining: {feedback.distance_remaining:.2f}'
        )

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Navigation finished')

        rclpy.shutdown()


def main():
    rclpy.init()

    node = Nav2ActionClient()
    node.send_goal()

    rclpy.spin(node)


if __name__ == '__main__':
    main()