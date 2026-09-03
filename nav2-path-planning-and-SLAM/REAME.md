export TURTLEBOT3_MODEL=waffle

ros2 launch turtlebot3_gazebo turtlebot3_house.launch.py use_sim_time:=True

ros2 launch nav2_bringup navigation_launch.py use_sim_time:=True

ros2 launch slam_toolbox online_async_launch.py use_sim_time:=True

rviz2

map saved to map.pgm and map.yaml