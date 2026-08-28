
# Running Stage:

Follow stage install directions provided in assignment description.
Copy the world directory provided content's into stage_ros2/world 
cd to root of stage.
colcon build;
source install/setup.bash;
ros2 launch stage_ros2 stage.launch.py world:=office enforce_prefixes:=false one_tf_tree:=true;

# Running Driver

mkdir pioneer_ws/src
create a ros package within src
copy the driver.py file provded into the package
cd ~/pioneer_ws;
rm -rf build install log; colcon build --symlink-install; 
source install/setup.bash;
ros2 run pioneer driver;



