// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from pioneer_interfaces:srv/Getpoints.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pioneer_interfaces/srv/detail/getpoints__struct.h"
#include "pioneer_interfaces/srv/detail/getpoints__type_support.h"
#include "pioneer_interfaces/srv/detail/getpoints__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pioneer_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Getpoints_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Getpoints_Request_type_support_ids_t;

static const _Getpoints_Request_type_support_ids_t _Getpoints_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Getpoints_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Getpoints_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Getpoints_Request_type_support_symbol_names_t _Getpoints_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pioneer_interfaces, srv, Getpoints_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Getpoints_Request)),
  }
};

typedef struct _Getpoints_Request_type_support_data_t
{
  void * data[2];
} _Getpoints_Request_type_support_data_t;

static _Getpoints_Request_type_support_data_t _Getpoints_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Getpoints_Request_message_typesupport_map = {
  2,
  "pioneer_interfaces",
  &_Getpoints_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Getpoints_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Getpoints_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Getpoints_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Getpoints_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Getpoints_Request__get_type_hash,
  &pioneer_interfaces__srv__Getpoints_Request__get_type_description,
  &pioneer_interfaces__srv__Getpoints_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace pioneer_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pioneer_interfaces, srv, Getpoints_Request)() {
  return &::pioneer_interfaces::srv::rosidl_typesupport_c::Getpoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pioneer_interfaces/srv/detail/getpoints__struct.h"
// already included above
// #include "pioneer_interfaces/srv/detail/getpoints__type_support.h"
// already included above
// #include "pioneer_interfaces/srv/detail/getpoints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pioneer_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Getpoints_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Getpoints_Response_type_support_ids_t;

static const _Getpoints_Response_type_support_ids_t _Getpoints_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Getpoints_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Getpoints_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Getpoints_Response_type_support_symbol_names_t _Getpoints_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pioneer_interfaces, srv, Getpoints_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Getpoints_Response)),
  }
};

typedef struct _Getpoints_Response_type_support_data_t
{
  void * data[2];
} _Getpoints_Response_type_support_data_t;

static _Getpoints_Response_type_support_data_t _Getpoints_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Getpoints_Response_message_typesupport_map = {
  2,
  "pioneer_interfaces",
  &_Getpoints_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Getpoints_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Getpoints_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Getpoints_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Getpoints_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Getpoints_Response__get_type_hash,
  &pioneer_interfaces__srv__Getpoints_Response__get_type_description,
  &pioneer_interfaces__srv__Getpoints_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace pioneer_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pioneer_interfaces, srv, Getpoints_Response)() {
  return &::pioneer_interfaces::srv::rosidl_typesupport_c::Getpoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pioneer_interfaces/srv/detail/getpoints__struct.h"
// already included above
// #include "pioneer_interfaces/srv/detail/getpoints__type_support.h"
// already included above
// #include "pioneer_interfaces/srv/detail/getpoints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pioneer_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Getpoints_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Getpoints_Event_type_support_ids_t;

static const _Getpoints_Event_type_support_ids_t _Getpoints_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Getpoints_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Getpoints_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Getpoints_Event_type_support_symbol_names_t _Getpoints_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pioneer_interfaces, srv, Getpoints_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Getpoints_Event)),
  }
};

typedef struct _Getpoints_Event_type_support_data_t
{
  void * data[2];
} _Getpoints_Event_type_support_data_t;

static _Getpoints_Event_type_support_data_t _Getpoints_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Getpoints_Event_message_typesupport_map = {
  2,
  "pioneer_interfaces",
  &_Getpoints_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Getpoints_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Getpoints_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Getpoints_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Getpoints_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &pioneer_interfaces__srv__Getpoints_Event__get_type_hash,
  &pioneer_interfaces__srv__Getpoints_Event__get_type_description,
  &pioneer_interfaces__srv__Getpoints_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace pioneer_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pioneer_interfaces, srv, Getpoints_Event)() {
  return &::pioneer_interfaces::srv::rosidl_typesupport_c::Getpoints_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pioneer_interfaces/srv/detail/getpoints__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace pioneer_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Getpoints_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Getpoints_type_support_ids_t;

static const _Getpoints_type_support_ids_t _Getpoints_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Getpoints_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Getpoints_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Getpoints_type_support_symbol_names_t _Getpoints_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pioneer_interfaces, srv, Getpoints)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pioneer_interfaces, srv, Getpoints)),
  }
};

typedef struct _Getpoints_type_support_data_t
{
  void * data[2];
} _Getpoints_type_support_data_t;

static _Getpoints_type_support_data_t _Getpoints_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Getpoints_service_typesupport_map = {
  2,
  "pioneer_interfaces",
  &_Getpoints_service_typesupport_ids.typesupport_identifier[0],
  &_Getpoints_service_typesupport_symbol_names.symbol_name[0],
  &_Getpoints_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Getpoints_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Getpoints_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Getpoints_Request_message_type_support_handle,
  &Getpoints_Response_message_type_support_handle,
  &Getpoints_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pioneer_interfaces,
    srv,
    Getpoints
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pioneer_interfaces,
    srv,
    Getpoints
  ),
  &pioneer_interfaces__srv__Getpoints__get_type_hash,
  &pioneer_interfaces__srv__Getpoints__get_type_description,
  &pioneer_interfaces__srv__Getpoints__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace pioneer_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, pioneer_interfaces, srv, Getpoints)() {
  return &::pioneer_interfaces::srv::rosidl_typesupport_c::Getpoints_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
