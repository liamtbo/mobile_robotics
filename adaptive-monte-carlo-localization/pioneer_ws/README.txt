
Run the following commands in the order they're given

cd /home/liam-bouffard/Desktop/rob599_mobile_robotics/Homework_3/pioneer_ws/;
source install/setup.bash;

rm -rf build install log; colcon build --symlink-install; 

ros2 launch stage_ros2 stage.launch.py world:=office enforce_prefixes:=false one_tf_tree:=true;

ros2 run pioneer mapping

ros2 run pioneer savemap

ros2 run pioneer path_planning

ros2 run pioneer driver;

rviz2