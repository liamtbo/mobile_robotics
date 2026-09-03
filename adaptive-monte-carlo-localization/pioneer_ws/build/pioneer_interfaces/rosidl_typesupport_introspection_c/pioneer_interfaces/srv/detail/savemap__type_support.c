// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pioneer_interfaces:srv/Savemap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pioneer_interfaces/srv/detail/savemap__rosidl_typesupport_introspection_c.h"
#include "pioneer_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pioneer_interfaces/srv/detail/savemap__functions.h"
#include "pioneer_interfaces/srv/detail/savemap__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pioneer_interfaces__srv__Savemap_Request__init(message_memory);
}

void pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_fini_function(void * message_memory)
{
  pioneer_interfaces__srv__Savemap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pioneer_interfaces__srv__Savemap_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_members = {
  "pioneer_interfaces__srv",  // message namespace
  "Savemap_Request",  // message name
  1,  // number of fields
  sizeof(pioneer_interfaces__srv__Savemap_Request),
  false,  // has_any_key_member_
  pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_member_array,  // message members
  pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_type_support_handle = {
  0,
  &pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_members,
  get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Savemap_Request__get_type_hash,
  &pioneer_interfaces__srv__Savemap_Request__get_type_description,
  &pioneer_interfaces__srv__Savemap_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pioneer_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Request)() {
  if (!pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_type_support_handle.typesupport_identifier) {
    pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pioneer_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__functions.h"
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__struct.h"


// Include directives for member types
// Member `grid`
#include "nav_msgs/msg/occupancy_grid.h"
// Member `grid`
#include "nav_msgs/msg/detail/occupancy_grid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pioneer_interfaces__srv__Savemap_Response__init(message_memory);
}

void pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_fini_function(void * message_memory)
{
  pioneer_interfaces__srv__Savemap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_member_array[1] = {
  {
    "grid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pioneer_interfaces__srv__Savemap_Response, grid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_members = {
  "pioneer_interfaces__srv",  // message namespace
  "Savemap_Response",  // message name
  1,  // number of fields
  sizeof(pioneer_interfaces__srv__Savemap_Response),
  false,  // has_any_key_member_
  pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_member_array,  // message members
  pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_type_support_handle = {
  0,
  &pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_members,
  get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Savemap_Response__get_type_hash,
  &pioneer_interfaces__srv__Savemap_Response__get_type_description,
  &pioneer_interfaces__srv__Savemap_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pioneer_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Response)() {
  pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, OccupancyGrid)();
  if (!pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_type_support_handle.typesupport_identifier) {
    pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pioneer_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__functions.h"
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "pioneer_interfaces/srv/savemap.h"
// Member `request`
// Member `response`
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pioneer_interfaces__srv__Savemap_Event__init(message_memory);
}

void pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_fini_function(void * message_memory)
{
  pioneer_interfaces__srv__Savemap_Event__fini(message_memory);
}

size_t pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__size_function__Savemap_Event__request(
  const void * untyped_member)
{
  const pioneer_interfaces__srv__Savemap_Request__Sequence * member =
    (const pioneer_interfaces__srv__Savemap_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_const_function__Savemap_Event__request(
  const void * untyped_member, size_t index)
{
  const pioneer_interfaces__srv__Savemap_Request__Sequence * member =
    (const pioneer_interfaces__srv__Savemap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_function__Savemap_Event__request(
  void * untyped_member, size_t index)
{
  pioneer_interfaces__srv__Savemap_Request__Sequence * member =
    (pioneer_interfaces__srv__Savemap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__fetch_function__Savemap_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pioneer_interfaces__srv__Savemap_Request * item =
    ((const pioneer_interfaces__srv__Savemap_Request *)
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_const_function__Savemap_Event__request(untyped_member, index));
  pioneer_interfaces__srv__Savemap_Request * value =
    (pioneer_interfaces__srv__Savemap_Request *)(untyped_value);
  *value = *item;
}

void pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__assign_function__Savemap_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pioneer_interfaces__srv__Savemap_Request * item =
    ((pioneer_interfaces__srv__Savemap_Request *)
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_function__Savemap_Event__request(untyped_member, index));
  const pioneer_interfaces__srv__Savemap_Request * value =
    (const pioneer_interfaces__srv__Savemap_Request *)(untyped_value);
  *item = *value;
}

bool pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__resize_function__Savemap_Event__request(
  void * untyped_member, size_t size)
{
  pioneer_interfaces__srv__Savemap_Request__Sequence * member =
    (pioneer_interfaces__srv__Savemap_Request__Sequence *)(untyped_member);
  pioneer_interfaces__srv__Savemap_Request__Sequence__fini(member);
  return pioneer_interfaces__srv__Savemap_Request__Sequence__init(member, size);
}

size_t pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__size_function__Savemap_Event__response(
  const void * untyped_member)
{
  const pioneer_interfaces__srv__Savemap_Response__Sequence * member =
    (const pioneer_interfaces__srv__Savemap_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_const_function__Savemap_Event__response(
  const void * untyped_member, size_t index)
{
  const pioneer_interfaces__srv__Savemap_Response__Sequence * member =
    (const pioneer_interfaces__srv__Savemap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_function__Savemap_Event__response(
  void * untyped_member, size_t index)
{
  pioneer_interfaces__srv__Savemap_Response__Sequence * member =
    (pioneer_interfaces__srv__Savemap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__fetch_function__Savemap_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pioneer_interfaces__srv__Savemap_Response * item =
    ((const pioneer_interfaces__srv__Savemap_Response *)
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_const_function__Savemap_Event__response(untyped_member, index));
  pioneer_interfaces__srv__Savemap_Response * value =
    (pioneer_interfaces__srv__Savemap_Response *)(untyped_value);
  *value = *item;
}

void pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__assign_function__Savemap_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pioneer_interfaces__srv__Savemap_Response * item =
    ((pioneer_interfaces__srv__Savemap_Response *)
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_function__Savemap_Event__response(untyped_member, index));
  const pioneer_interfaces__srv__Savemap_Response * value =
    (const pioneer_interfaces__srv__Savemap_Response *)(untyped_value);
  *item = *value;
}

bool pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__resize_function__Savemap_Event__response(
  void * untyped_member, size_t size)
{
  pioneer_interfaces__srv__Savemap_Response__Sequence * member =
    (pioneer_interfaces__srv__Savemap_Response__Sequence *)(untyped_member);
  pioneer_interfaces__srv__Savemap_Response__Sequence__fini(member);
  return pioneer_interfaces__srv__Savemap_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pioneer_interfaces__srv__Savemap_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(pioneer_interfaces__srv__Savemap_Event, request),  // bytes offset in struct
    NULL,  // default value
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__size_function__Savemap_Event__request,  // size() function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_const_function__Savemap_Event__request,  // get_const(index) function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_function__Savemap_Event__request,  // get(index) function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__fetch_function__Savemap_Event__request,  // fetch(index, &value) function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__assign_function__Savemap_Event__request,  // assign(index, value) function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__resize_function__Savemap_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(pioneer_interfaces__srv__Savemap_Event, response),  // bytes offset in struct
    NULL,  // default value
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__size_function__Savemap_Event__response,  // size() function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_const_function__Savemap_Event__response,  // get_const(index) function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__get_function__Savemap_Event__response,  // get(index) function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__fetch_function__Savemap_Event__response,  // fetch(index, &value) function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__assign_function__Savemap_Event__response,  // assign(index, value) function pointer
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__resize_function__Savemap_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_members = {
  "pioneer_interfaces__srv",  // message namespace
  "Savemap_Event",  // message name
  3,  // number of fields
  sizeof(pioneer_interfaces__srv__Savemap_Event),
  false,  // has_any_key_member_
  pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_member_array,  // message members
  pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_type_support_handle = {
  0,
  &pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_members,
  get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Savemap_Event__get_type_hash,
  &pioneer_interfaces__srv__Savemap_Event__get_type_description,
  &pioneer_interfaces__srv__Savemap_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pioneer_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Event)() {
  pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Request)();
  pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Response)();
  if (!pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_type_support_handle.typesupport_identifier) {
    pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pioneer_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_service_members = {
  "pioneer_interfaces__srv",  // service namespace
  "Savemap",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_Request_message_type_support_handle,
  NULL,  // response message
  // pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_Response_message_type_support_handle
  NULL  // event_message
  // pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_Response_message_type_support_handle
};


static rosidl_service_type_support_t pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_service_type_support_handle = {
  0,
  &pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_service_members,
  get_service_typesupport_handle_function,
  &pioneer_interfaces__srv__Savemap_Request__rosidl_typesupport_introspection_c__Savemap_Request_message_type_support_handle,
  &pioneer_interfaces__srv__Savemap_Response__rosidl_typesupport_introspection_c__Savemap_Response_message_type_support_handle,
  &pioneer_interfaces__srv__Savemap_Event__rosidl_typesupport_introspection_c__Savemap_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pioneer_interfaces,
    srv,
    Savemap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pioneer_interfaces,
    srv,
    Savemap
  ),
  &pioneer_interfaces__srv__Savemap__get_type_hash,
  &pioneer_interfaces__srv__Savemap__get_type_description,
  &pioneer_interfaces__srv__Savemap__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pioneer_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap)(void) {
  if (!pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_service_type_support_handle.typesupport_identifier) {
    pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Savemap_Event)()->data;
  }

  return &pioneer_interfaces__srv__detail__savemap__rosidl_typesupport_introspection_c__Savemap_service_type_support_handle;
}
