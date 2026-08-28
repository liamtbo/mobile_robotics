// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multi_agent_search_interfaces:srv/TargetDetected.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multi_agent_search_interfaces/srv/detail/target_detected__rosidl_typesupport_introspection_c.h"
#include "multi_agent_search_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multi_agent_search_interfaces/srv/detail/target_detected__functions.h"
#include "multi_agent_search_interfaces/srv/detail/target_detected__struct.h"


// Include directives for member types
// Member `targets`
#include "geometry_msgs/msg/point.h"
// Member `targets`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_agent_search_interfaces__srv__TargetDetected_Request__init(message_memory);
}

void multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_fini_function(void * message_memory)
{
  multi_agent_search_interfaces__srv__TargetDetected_Request__fini(message_memory);
}

size_t multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__size_function__TargetDetected_Request__targets(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Request__targets(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__get_function__TargetDetected_Request__targets(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__fetch_function__TargetDetected_Request__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Request__targets(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__assign_function__TargetDetected_Request__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__get_function__TargetDetected_Request__targets(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__resize_function__TargetDetected_Request__targets(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_member_array[1] = {
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces__srv__TargetDetected_Request, targets),  // bytes offset in struct
    NULL,  // default value
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__size_function__TargetDetected_Request__targets,  // size() function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Request__targets,  // get_const(index) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__get_function__TargetDetected_Request__targets,  // get(index) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__fetch_function__TargetDetected_Request__targets,  // fetch(index, &value) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__assign_function__TargetDetected_Request__targets,  // assign(index, value) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__resize_function__TargetDetected_Request__targets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_members = {
  "multi_agent_search_interfaces__srv",  // message namespace
  "TargetDetected_Request",  // message name
  1,  // number of fields
  sizeof(multi_agent_search_interfaces__srv__TargetDetected_Request),
  false,  // has_any_key_member_
  multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_member_array,  // message members
  multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_type_support_handle = {
  0,
  &multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_members,
  get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__srv__TargetDetected_Request__get_type_hash,
  &multi_agent_search_interfaces__srv__TargetDetected_Request__get_type_description,
  &multi_agent_search_interfaces__srv__TargetDetected_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_agent_search_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Request)() {
  multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_type_support_handle.typesupport_identifier) {
    multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__rosidl_typesupport_introspection_c.h"
// already included above
// #include "multi_agent_search_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__functions.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_agent_search_interfaces__srv__TargetDetected_Response__init(message_memory);
}

void multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_fini_function(void * message_memory)
{
  multi_agent_search_interfaces__srv__TargetDetected_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces__srv__TargetDetected_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_members = {
  "multi_agent_search_interfaces__srv",  // message namespace
  "TargetDetected_Response",  // message name
  1,  // number of fields
  sizeof(multi_agent_search_interfaces__srv__TargetDetected_Response),
  false,  // has_any_key_member_
  multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_member_array,  // message members
  multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_type_support_handle = {
  0,
  &multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_members,
  get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__srv__TargetDetected_Response__get_type_hash,
  &multi_agent_search_interfaces__srv__TargetDetected_Response__get_type_description,
  &multi_agent_search_interfaces__srv__TargetDetected_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_agent_search_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Response)() {
  if (!multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_type_support_handle.typesupport_identifier) {
    multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__rosidl_typesupport_introspection_c.h"
// already included above
// #include "multi_agent_search_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__functions.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "multi_agent_search_interfaces/srv/target_detected.h"
// Member `request`
// Member `response`
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_agent_search_interfaces__srv__TargetDetected_Event__init(message_memory);
}

void multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_fini_function(void * message_memory)
{
  multi_agent_search_interfaces__srv__TargetDetected_Event__fini(message_memory);
}

size_t multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__size_function__TargetDetected_Event__request(
  const void * untyped_member)
{
  const multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence * member =
    (const multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Event__request(
  const void * untyped_member, size_t index)
{
  const multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence * member =
    (const multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_function__TargetDetected_Event__request(
  void * untyped_member, size_t index)
{
  multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence * member =
    (multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__fetch_function__TargetDetected_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const multi_agent_search_interfaces__srv__TargetDetected_Request * item =
    ((const multi_agent_search_interfaces__srv__TargetDetected_Request *)
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Event__request(untyped_member, index));
  multi_agent_search_interfaces__srv__TargetDetected_Request * value =
    (multi_agent_search_interfaces__srv__TargetDetected_Request *)(untyped_value);
  *value = *item;
}

void multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__assign_function__TargetDetected_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  multi_agent_search_interfaces__srv__TargetDetected_Request * item =
    ((multi_agent_search_interfaces__srv__TargetDetected_Request *)
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_function__TargetDetected_Event__request(untyped_member, index));
  const multi_agent_search_interfaces__srv__TargetDetected_Request * value =
    (const multi_agent_search_interfaces__srv__TargetDetected_Request *)(untyped_value);
  *item = *value;
}

bool multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__resize_function__TargetDetected_Event__request(
  void * untyped_member, size_t size)
{
  multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence * member =
    (multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence *)(untyped_member);
  multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence__fini(member);
  return multi_agent_search_interfaces__srv__TargetDetected_Request__Sequence__init(member, size);
}

size_t multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__size_function__TargetDetected_Event__response(
  const void * untyped_member)
{
  const multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence * member =
    (const multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Event__response(
  const void * untyped_member, size_t index)
{
  const multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence * member =
    (const multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_function__TargetDetected_Event__response(
  void * untyped_member, size_t index)
{
  multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence * member =
    (multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__fetch_function__TargetDetected_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const multi_agent_search_interfaces__srv__TargetDetected_Response * item =
    ((const multi_agent_search_interfaces__srv__TargetDetected_Response *)
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Event__response(untyped_member, index));
  multi_agent_search_interfaces__srv__TargetDetected_Response * value =
    (multi_agent_search_interfaces__srv__TargetDetected_Response *)(untyped_value);
  *value = *item;
}

void multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__assign_function__TargetDetected_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  multi_agent_search_interfaces__srv__TargetDetected_Response * item =
    ((multi_agent_search_interfaces__srv__TargetDetected_Response *)
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_function__TargetDetected_Event__response(untyped_member, index));
  const multi_agent_search_interfaces__srv__TargetDetected_Response * value =
    (const multi_agent_search_interfaces__srv__TargetDetected_Response *)(untyped_value);
  *item = *value;
}

bool multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__resize_function__TargetDetected_Event__response(
  void * untyped_member, size_t size)
{
  multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence * member =
    (multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence *)(untyped_member);
  multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence__fini(member);
  return multi_agent_search_interfaces__srv__TargetDetected_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces__srv__TargetDetected_Event, info),  // bytes offset in struct
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
    offsetof(multi_agent_search_interfaces__srv__TargetDetected_Event, request),  // bytes offset in struct
    NULL,  // default value
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__size_function__TargetDetected_Event__request,  // size() function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Event__request,  // get_const(index) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_function__TargetDetected_Event__request,  // get(index) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__fetch_function__TargetDetected_Event__request,  // fetch(index, &value) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__assign_function__TargetDetected_Event__request,  // assign(index, value) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__resize_function__TargetDetected_Event__request  // resize(index) function pointer
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
    offsetof(multi_agent_search_interfaces__srv__TargetDetected_Event, response),  // bytes offset in struct
    NULL,  // default value
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__size_function__TargetDetected_Event__response,  // size() function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_const_function__TargetDetected_Event__response,  // get_const(index) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__get_function__TargetDetected_Event__response,  // get(index) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__fetch_function__TargetDetected_Event__response,  // fetch(index, &value) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__assign_function__TargetDetected_Event__response,  // assign(index, value) function pointer
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__resize_function__TargetDetected_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_members = {
  "multi_agent_search_interfaces__srv",  // message namespace
  "TargetDetected_Event",  // message name
  3,  // number of fields
  sizeof(multi_agent_search_interfaces__srv__TargetDetected_Event),
  false,  // has_any_key_member_
  multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_member_array,  // message members
  multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_type_support_handle = {
  0,
  &multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_members,
  get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__srv__TargetDetected_Event__get_type_hash,
  &multi_agent_search_interfaces__srv__TargetDetected_Event__get_type_description,
  &multi_agent_search_interfaces__srv__TargetDetected_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_agent_search_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Event)() {
  multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Request)();
  multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Response)();
  if (!multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_type_support_handle.typesupport_identifier) {
    multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "multi_agent_search_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_service_members = {
  "multi_agent_search_interfaces__srv",  // service namespace
  "TargetDetected",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_Request_message_type_support_handle,
  NULL,  // response message
  // multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_Response_message_type_support_handle
  NULL  // event_message
  // multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_Response_message_type_support_handle
};


static rosidl_service_type_support_t multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_service_type_support_handle = {
  0,
  &multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_service_members,
  get_service_typesupport_handle_function,
  &multi_agent_search_interfaces__srv__TargetDetected_Request__rosidl_typesupport_introspection_c__TargetDetected_Request_message_type_support_handle,
  &multi_agent_search_interfaces__srv__TargetDetected_Response__rosidl_typesupport_introspection_c__TargetDetected_Response_message_type_support_handle,
  &multi_agent_search_interfaces__srv__TargetDetected_Event__rosidl_typesupport_introspection_c__TargetDetected_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    multi_agent_search_interfaces,
    srv,
    TargetDetected
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    multi_agent_search_interfaces,
    srv,
    TargetDetected
  ),
  &multi_agent_search_interfaces__srv__TargetDetected__get_type_hash,
  &multi_agent_search_interfaces__srv__TargetDetected__get_type_description,
  &multi_agent_search_interfaces__srv__TargetDetected__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_agent_search_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected)(void) {
  if (!multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_service_type_support_handle.typesupport_identifier) {
    multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_agent_search_interfaces, srv, TargetDetected_Event)()->data;
  }

  return &multi_agent_search_interfaces__srv__detail__target_detected__rosidl_typesupport_introspection_c__TargetDetected_service_type_support_handle;
}
