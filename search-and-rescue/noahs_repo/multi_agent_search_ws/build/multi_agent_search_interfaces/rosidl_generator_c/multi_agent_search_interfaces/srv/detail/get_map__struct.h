// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_agent_search_interfaces:srv/GetMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/srv/get_map.h"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__STRUCT_H_
#define MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetMap in the package multi_agent_search_interfaces.
typedef struct multi_agent_search_interfaces__srv__GetMap_Request
{
  uint8_t structure_needs_at_least_one_member;
} multi_agent_search_interfaces__srv__GetMap_Request;

// Struct for a sequence of multi_agent_search_interfaces__srv__GetMap_Request.
typedef struct multi_agent_search_interfaces__srv__GetMap_Request__Sequence
{
  multi_agent_search_interfaces__srv__GetMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_agent_search_interfaces__srv__GetMap_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"

/// Struct defined in srv/GetMap in the package multi_agent_search_interfaces.
typedef struct multi_agent_search_interfaces__srv__GetMap_Response
{
  nav_msgs__msg__OccupancyGrid map;
} multi_agent_search_interfaces__srv__GetMap_Response;

// Struct for a sequence of multi_agent_search_interfaces__srv__GetMap_Response.
typedef struct multi_agent_search_interfaces__srv__GetMap_Response__Sequence
{
  multi_agent_search_interfaces__srv__GetMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_agent_search_interfaces__srv__GetMap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  multi_agent_search_interfaces__srv__GetMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  multi_agent_search_interfaces__srv__GetMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetMap in the package multi_agent_search_interfaces.
typedef struct multi_agent_search_interfaces__srv__GetMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  multi_agent_search_interfaces__srv__GetMap_Request__Sequence request;
  multi_agent_search_interfaces__srv__GetMap_Response__Sequence response;
} multi_agent_search_interfaces__srv__GetMap_Event;

// Struct for a sequence of multi_agent_search_interfaces__srv__GetMap_Event.
typedef struct multi_agent_search_interfaces__srv__GetMap_Event__Sequence
{
  multi_agent_search_interfaces__srv__GetMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_agent_search_interfaces__srv__GetMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__STRUCT_H_
