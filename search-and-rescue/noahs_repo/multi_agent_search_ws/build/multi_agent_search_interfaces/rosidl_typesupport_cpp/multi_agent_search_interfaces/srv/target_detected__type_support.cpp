// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from multi_agent_search_interfaces:srv/TargetDetected.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "multi_agent_search_interfaces/srv/detail/target_detected__functions.h"
#include "multi_agent_search_interfaces/srv/detail/target_detected__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace multi_agent_search_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetDetected_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetDetected_Request_type_support_ids_t;

static const _TargetDetected_Request_type_support_ids_t _TargetDetected_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetDetected_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetDetected_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetDetected_Request_type_support_symbol_names_t _TargetDetected_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_agent_search_interfaces, srv, TargetDetected_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multi_agent_search_interfaces, srv, TargetDetected_Request)),
  }
};

typedef struct _TargetDetected_Request_type_support_data_t
{
  void * data[2];
} _TargetDetected_Request_type_support_data_t;

static _TargetDetected_Request_type_support_data_t _TargetDetected_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetDetected_Request_message_typesupport_map = {
  2,
  "multi_agent_search_interfaces",
  &_TargetDetected_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TargetDetected_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TargetDetected_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TargetDetected_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetDetected_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__srv__TargetDetected_Request__get_type_hash,
  &multi_agent_search_interfaces__srv__TargetDetected_Request__get_type_description,
  &multi_agent_search_interfaces__srv__TargetDetected_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace multi_agent_search_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Request>()
{
  return &::multi_agent_search_interfaces::srv::rosidl_typesupport_cpp::TargetDetected_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, multi_agent_search_interfaces, srv, TargetDetected_Request)() {
  return get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__functions.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace multi_agent_search_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetDetected_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetDetected_Response_type_support_ids_t;

static const _TargetDetected_Response_type_support_ids_t _TargetDetected_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetDetected_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetDetected_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetDetected_Response_type_support_symbol_names_t _TargetDetected_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_agent_search_interfaces, srv, TargetDetected_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multi_agent_search_interfaces, srv, TargetDetected_Response)),
  }
};

typedef struct _TargetDetected_Response_type_support_data_t
{
  void * data[2];
} _TargetDetected_Response_type_support_data_t;

static _TargetDetected_Response_type_support_data_t _TargetDetected_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetDetected_Response_message_typesupport_map = {
  2,
  "multi_agent_search_interfaces",
  &_TargetDetected_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TargetDetected_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TargetDetected_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TargetDetected_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetDetected_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__srv__TargetDetected_Response__get_type_hash,
  &multi_agent_search_interfaces__srv__TargetDetected_Response__get_type_description,
  &multi_agent_search_interfaces__srv__TargetDetected_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace multi_agent_search_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Response>()
{
  return &::multi_agent_search_interfaces::srv::rosidl_typesupport_cpp::TargetDetected_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, multi_agent_search_interfaces, srv, TargetDetected_Response)() {
  return get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__functions.h"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace multi_agent_search_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetDetected_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetDetected_Event_type_support_ids_t;

static const _TargetDetected_Event_type_support_ids_t _TargetDetected_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetDetected_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetDetected_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetDetected_Event_type_support_symbol_names_t _TargetDetected_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_agent_search_interfaces, srv, TargetDetected_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multi_agent_search_interfaces, srv, TargetDetected_Event)),
  }
};

typedef struct _TargetDetected_Event_type_support_data_t
{
  void * data[2];
} _TargetDetected_Event_type_support_data_t;

static _TargetDetected_Event_type_support_data_t _TargetDetected_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetDetected_Event_message_typesupport_map = {
  2,
  "multi_agent_search_interfaces",
  &_TargetDetected_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TargetDetected_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TargetDetected_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TargetDetected_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetDetected_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__srv__TargetDetected_Event__get_type_hash,
  &multi_agent_search_interfaces__srv__TargetDetected_Event__get_type_description,
  &multi_agent_search_interfaces__srv__TargetDetected_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace multi_agent_search_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Event>()
{
  return &::multi_agent_search_interfaces::srv::rosidl_typesupport_cpp::TargetDetected_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, multi_agent_search_interfaces, srv, TargetDetected_Event)() {
  return get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "multi_agent_search_interfaces/srv/detail/target_detected__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace multi_agent_search_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetDetected_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetDetected_type_support_ids_t;

static const _TargetDetected_type_support_ids_t _TargetDetected_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetDetected_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetDetected_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetDetected_type_support_symbol_names_t _TargetDetected_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_agent_search_interfaces, srv, TargetDetected)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multi_agent_search_interfaces, srv, TargetDetected)),
  }
};

typedef struct _TargetDetected_type_support_data_t
{
  void * data[2];
} _TargetDetected_type_support_data_t;

static _TargetDetected_type_support_data_t _TargetDetected_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetDetected_service_typesupport_map = {
  2,
  "multi_agent_search_interfaces",
  &_TargetDetected_service_typesupport_ids.typesupport_identifier[0],
  &_TargetDetected_service_typesupport_symbol_names.symbol_name[0],
  &_TargetDetected_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TargetDetected_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetDetected_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<multi_agent_search_interfaces::srv::TargetDetected>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<multi_agent_search_interfaces::srv::TargetDetected>,
  &multi_agent_search_interfaces__srv__TargetDetected__get_type_hash,
  &multi_agent_search_interfaces__srv__TargetDetected__get_type_description,
  &multi_agent_search_interfaces__srv__TargetDetected__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace multi_agent_search_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected>()
{
  return &::multi_agent_search_interfaces::srv::rosidl_typesupport_cpp::TargetDetected_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, multi_agent_search_interfaces, srv, TargetDetected)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<multi_agent_search_interfaces::srv::TargetDetected>();
}

#ifdef __cplusplus
}
#endif
