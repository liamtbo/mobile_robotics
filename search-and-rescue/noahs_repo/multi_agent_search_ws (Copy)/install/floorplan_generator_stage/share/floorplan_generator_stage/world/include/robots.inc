include "include/pioneer2dx.inc"

define hokuyolaser ranger
(
  sensor(       
    pose [ 0 0 0 0 ]
    size [ 0.07 0.07 0.05 ]
    range [ 0.0  5.0 ]
    fov 270.0
    samples 270
    color_rgba [ 0 0 1 0.15 ]
  )
  model
  (
    pose [ 0.0 0.0 -0.2 0.0 ]
    size [ 0.07 0.07 0.05 ]  
    color "blue"
  )
)

define camera_realsens_d435 camera
(
	range [ 0.3 3.0 ]
	resolution [ 160 90 ]
 	fov [ 87 58 ]
	pantilt [ 0 0 ]
	alwayson 1
  size [ 0.025 0.09 0.025 ]
  color "gray"
)

define qrcodereader fiducial
(
  fiducial_key 1

  range_min 0.0
  range_max 8.0
  range_max_id 5.0
  fov 270.0
  ignore_zloc 1

  model
  (
    size [ 0.1 0.1 0.1 ]
    color "green"
  )
)

define pioneer2dx_with_laser pioneer2dx_no_sonar 
(
  # robots ignore each other
  obstacle_return 0
  ranger_return 0
  blob_return 0
  fiducial_return 0

  hokuyolaser(pose [ 0.15 0 0 0 ])

  model
  (
    pose [ -0.1 0.0 0 0.0 ]
    size [ 0.2 0.2 0.05 ]  
    color "DimGray"
  )
)

define pioneer2dx_with_laser_and_camera pioneer2dx_with_laser 
(
  camera_realsens_d435(pose [ 0 0 0.5 0 ])
  mount( pose [ 0 -0.15 0 0.000 ] color "gray")
  mount( pose [ 0  0.15 0 0.000 ] color "gray")
)

define pioneer2dx_with_two_laser pioneer2dx_no_sonar 
(
  # robots ignore each other
  obstacle_return 0
  ranger_return 0
  blob_return 0
  fiducial_return 0

  hokuyolaser(pose [ 0.15 0.15 0 45 ])

  model
  (
    pose [ -0.1 0.0 0 0 ]
    size [ 0.2 0.2 0.05 ]  
    color "DimGray"
  )  

  hokuyolaser(pose [ -0.20 -0.15 0 -135 ])

  model
  (
    pose [ -0.1 0.0 0 0.0 ]
    size [ 0.2 0.2 0.05 ]  
    color "DimGray"
  )
)