// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from multi_agent_search_interfaces:srv/GetMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/srv/get_map.h"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__TYPE_SUPPORT_H_
#define MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "multi_agent_search_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_multi_agent_search_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  multi_agent_search_interfaces,
  srv,
  GetMap_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_multi_agent_search_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  multi_agent_search_interfaces,
  srv,
  GetMap_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_multi_agent_search_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  multi_agent_search_interfaces,
  srv,
  GetMap_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_multi_agent_search_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  multi_agent_search_interfaces,
  srv,
  GetMap
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_multi_agent_search_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  multi_agent_search_interfaces,
  srv,
  GetMap
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_multi_agent_search_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  multi_agent_search_interfaces,
  srv,
  GetMap
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__TYPE_SUPPORT_H_
