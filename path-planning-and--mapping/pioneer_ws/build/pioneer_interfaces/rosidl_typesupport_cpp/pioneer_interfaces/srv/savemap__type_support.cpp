// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pioneer_interfaces:srv/Savemap.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pioneer_interfaces/srv/detail/savemap__functions.h"
#include "pioneer_interfaces/srv/detail/savemap__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pioneer_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Savemap_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Savemap_Request_type_support_ids_t;

static const _Savemap_Request_type_support_ids_t _Savemap_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Savemap_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Savemap_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Savemap_Request_type_support_symbol_names_t _Savemap_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pioneer_interfaces, srv, Savemap_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pioneer_interfaces, srv, Savemap_Request)),
  }
};

typedef struct _Savemap_Request_type_support_data_t
{
  void * data[2];
} _Savemap_Request_type_support_data_t;

static _Savemap_Request_type_support_data_t _Savemap_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Savemap_Request_message_typesupport_map = {
  2,
  "pioneer_interfaces",
  &_Savemap_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Savemap_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Savemap_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Savemap_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Savemap_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Savemap_Request__get_type_hash,
  &pioneer_interfaces__srv__Savemap_Request__get_type_description,
  &pioneer_interfaces__srv__Savemap_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pioneer_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Request>()
{
  return &::pioneer_interfaces::srv::rosidl_typesupport_cpp::Savemap_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pioneer_interfaces, srv, Savemap_Request)() {
  return get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Request>();
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
// #include "pioneer_interfaces/srv/detail/savemap__functions.h"
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__struct.hpp"
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

namespace pioneer_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Savemap_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Savemap_Response_type_support_ids_t;

static const _Savemap_Response_type_support_ids_t _Savemap_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Savemap_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Savemap_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Savemap_Response_type_support_symbol_names_t _Savemap_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pioneer_interfaces, srv, Savemap_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pioneer_interfaces, srv, Savemap_Response)),
  }
};

typedef struct _Savemap_Response_type_support_data_t
{
  void * data[2];
} _Savemap_Response_type_support_data_t;

static _Savemap_Response_type_support_data_t _Savemap_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Savemap_Response_message_typesupport_map = {
  2,
  "pioneer_interfaces",
  &_Savemap_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Savemap_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Savemap_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Savemap_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Savemap_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Savemap_Response__get_type_hash,
  &pioneer_interfaces__srv__Savemap_Response__get_type_description,
  &pioneer_interfaces__srv__Savemap_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pioneer_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Response>()
{
  return &::pioneer_interfaces::srv::rosidl_typesupport_cpp::Savemap_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pioneer_interfaces, srv, Savemap_Response)() {
  return get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Response>();
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
// #include "pioneer_interfaces/srv/detail/savemap__functions.h"
// already included above
// #include "pioneer_interfaces/srv/detail/savemap__struct.hpp"
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

namespace pioneer_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Savemap_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Savemap_Event_type_support_ids_t;

static const _Savemap_Event_type_support_ids_t _Savemap_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Savemap_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Savemap_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Savemap_Event_type_support_symbol_names_t _Savemap_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pioneer_interfaces, srv, Savemap_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pioneer_interfaces, srv, Savemap_Event)),
  }
};

typedef struct _Savemap_Event_type_support_data_t
{
  void * data[2];
} _Savemap_Event_type_support_data_t;

static _Savemap_Event_type_support_data_t _Savemap_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Savemap_Event_message_typesupport_map = {
  2,
  "pioneer_interfaces",
  &_Savemap_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Savemap_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Savemap_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Savemap_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Savemap_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Savemap_Event__get_type_hash,
  &pioneer_interfaces__srv__Savemap_Event__get_type_description,
  &pioneer_interfaces__srv__Savemap_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pioneer_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Event>()
{
  return &::pioneer_interfaces::srv::rosidl_typesupport_cpp::Savemap_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pioneer_interfaces, srv, Savemap_Event)() {
  return get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Event>();
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
// #include "pioneer_interfaces/srv/detail/savemap__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pioneer_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Savemap_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Savemap_type_support_ids_t;

static const _Savemap_type_support_ids_t _Savemap_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Savemap_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Savemap_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Savemap_type_support_symbol_names_t _Savemap_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pioneer_interfaces, srv, Savemap)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pioneer_interfaces, srv, Savemap)),
  }
};

typedef struct _Savemap_type_support_data_t
{
  void * data[2];
} _Savemap_type_support_data_t;

static _Savemap_type_support_data_t _Savemap_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Savemap_service_typesupport_map = {
  2,
  "pioneer_interfaces",
  &_Savemap_service_typesupport_ids.typesupport_identifier[0],
  &_Savemap_service_typesupport_symbol_names.symbol_name[0],
  &_Savemap_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Savemap_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Savemap_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<pioneer_interfaces::srv::Savemap_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<pioneer_interfaces::srv::Savemap>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<pioneer_interfaces::srv::Savemap>,
  &pioneer_interfaces__srv__Savemap__get_type_hash,
  &pioneer_interfaces__srv__Savemap__get_type_description,
  &pioneer_interfaces__srv__Savemap__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pioneer_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pioneer_interfaces::srv::Savemap>()
{
  return &::pioneer_interfaces::srv::rosidl_typesupport_cpp::Savemap_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, pioneer_interfaces, srv, Savemap)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<pioneer_interfaces::srv::Savemap>();
}

#ifdef __cplusplus
}
#endif
