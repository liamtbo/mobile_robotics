from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os
from launch_ros.actions import Node


"""rviz needs to be launch prior !!! just launch it first"""
def generate_launch_description():

    # Launch RViz first, independently
    rviz_config_file = os.path.join(
        get_package_share_directory('nav2_bringup'), 'rviz', 'nav2_default_view.rviz'
    )
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_file],
        output='screen'
    )

    turtle_gazebo_path = os.path.join(
        get_package_share_directory('turtlebot3_gazebo'), 'launch'
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(turtle_gazebo_path, 'turtlebot3_house.launch.py')
        ),
        launch_arguments={'use_sim_time': 'true'}.items()
    )

    nav2_path = os.path.join(
        get_package_share_directory('nav2_bringup'), 'launch'
    )

    map_file = os.path.join(
        get_package_share_directory('hw5'), 'maps', 'map.yaml'
    )

    params_file = os.path.join(
        get_package_share_directory('nav2_bringup'), 'params', 'nav2_params.yaml'
    )

    nav2 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_path, 'bringup_launch.py')
        ),
        launch_arguments={
            'map': map_file,
            'use_sim_time': 'true',
            'params_file': params_file,
            'use_rviz': 'true'
        }.items()
    )

    # delayed_nav2 = TimerAction(
    #     period=5.0,
    #     actions=[nav2]
    # )

    # Add path planning node
    path_planning_node = Node(
        package='hw5',
        executable='path_planning',
        name='path_planning',
        output='screen'
    )

    ld = LaunchDescription()
    ld.add_action(rviz_node)  # RViz launches first
    ld.add_action(gazebo)
    ld.add_action(nav2)
    # ld.add_action(path_planning_node)
    return ld