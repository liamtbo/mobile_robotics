// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pioneer_interfaces:srv/Savemap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pioneer_interfaces/srv/savemap.h"


#ifndef PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__STRUCT_H_
#define PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Savemap in the package pioneer_interfaces.
typedef struct pioneer_interfaces__srv__Savemap_Request
{
  uint8_t structure_needs_at_least_one_member;
} pioneer_interfaces__srv__Savemap_Request;

// Struct for a sequence of pioneer_interfaces__srv__Savemap_Request.
typedef struct pioneer_interfaces__srv__Savemap_Request__Sequence
{
  pioneer_interfaces__srv__Savemap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pioneer_interfaces__srv__Savemap_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'grid'
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"

/// Struct defined in srv/Savemap in the package pioneer_interfaces.
typedef struct pioneer_interfaces__srv__Savemap_Response
{
  nav_msgs__msg__OccupancyGrid grid;
} pioneer_interfaces__srv__Savemap_Response;

// Struct for a sequence of pioneer_interfaces__srv__Savemap_Response.
typedef struct pioneer_interfaces__srv__Savemap_Response__Sequence
{
  pioneer_interfaces__srv__Savemap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pioneer_interfaces__srv__Savemap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pioneer_interfaces__srv__Savemap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pioneer_interfaces__srv__Savemap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Savemap in the package pioneer_interfaces.
typedef struct pioneer_interfaces__srv__Savemap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pioneer_interfaces__srv__Savemap_Request__Sequence request;
  pioneer_interfaces__srv__Savemap_Response__Sequence response;
} pioneer_interfaces__srv__Savemap_Event;

// Struct for a sequence of pioneer_interfaces__srv__Savemap_Event.
typedef struct pioneer_interfaces__srv__Savemap_Event__Sequence
{
  pioneer_interfaces__srv__Savemap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pioneer_interfaces__srv__Savemap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__STRUCT_H_
