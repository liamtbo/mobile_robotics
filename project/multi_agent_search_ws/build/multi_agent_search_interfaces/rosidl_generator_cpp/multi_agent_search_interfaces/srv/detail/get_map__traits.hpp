// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_agent_search_interfaces:srv/GetMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/srv/get_map.hpp"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__TRAITS_HPP_
#define MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multi_agent_search_interfaces/srv/detail/get_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multi_agent_search_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMap_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMap_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace multi_agent_search_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use multi_agent_search_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_agent_search_interfaces::srv::GetMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_agent_search_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_agent_search_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const multi_agent_search_interfaces::srv::GetMap_Request & msg)
{
  return multi_agent_search_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<multi_agent_search_interfaces::srv::GetMap_Request>()
{
  return "multi_agent_search_interfaces::srv::GetMap_Request";
}

template<>
inline const char * name<multi_agent_search_interfaces::srv::GetMap_Request>()
{
  return "multi_agent_search_interfaces/srv/GetMap_Request";
}

template<>
struct has_fixed_size<multi_agent_search_interfaces::srv::GetMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<multi_agent_search_interfaces::srv::GetMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<multi_agent_search_interfaces::srv::GetMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace multi_agent_search_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: map
  {
    out << "map: ";
    to_flow_style_yaml(msg.map, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map:\n";
    to_block_style_yaml(msg.map, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMap_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace multi_agent_search_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use multi_agent_search_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_agent_search_interfaces::srv::GetMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_agent_search_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_agent_search_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const multi_agent_search_interfaces::srv::GetMap_Response & msg)
{
  return multi_agent_search_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<multi_agent_search_interfaces::srv::GetMap_Response>()
{
  return "multi_agent_search_interfaces::srv::GetMap_Response";
}

template<>
inline const char * name<multi_agent_search_interfaces::srv::GetMap_Response>()
{
  return "multi_agent_search_interfaces/srv/GetMap_Response";
}

template<>
struct has_fixed_size<multi_agent_search_interfaces::srv::GetMap_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<multi_agent_search_interfaces::srv::GetMap_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<multi_agent_search_interfaces::srv::GetMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace multi_agent_search_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMap_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMap_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMap_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace multi_agent_search_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use multi_agent_search_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_agent_search_interfaces::srv::GetMap_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_agent_search_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_agent_search_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const multi_agent_search_interfaces::srv::GetMap_Event & msg)
{
  return multi_agent_search_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<multi_agent_search_interfaces::srv::GetMap_Event>()
{
  return "multi_agent_search_interfaces::srv::GetMap_Event";
}

template<>
inline const char * name<multi_agent_search_interfaces::srv::GetMap_Event>()
{
  return "multi_agent_search_interfaces/srv/GetMap_Event";
}

template<>
struct has_fixed_size<multi_agent_search_interfaces::srv::GetMap_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_agent_search_interfaces::srv::GetMap_Event>
  : std::integral_constant<bool, has_bounded_size<multi_agent_search_interfaces::srv::GetMap_Request>::value && has_bounded_size<multi_agent_search_interfaces::srv::GetMap_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<multi_agent_search_interfaces::srv::GetMap_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<multi_agent_search_interfaces::srv::GetMap>()
{
  return "multi_agent_search_interfaces::srv::GetMap";
}

template<>
inline const char * name<multi_agent_search_interfaces::srv::GetMap>()
{
  return "multi_agent_search_interfaces/srv/GetMap";
}

template<>
struct has_fixed_size<multi_agent_search_interfaces::srv::GetMap>
  : std::integral_constant<
    bool,
    has_fixed_size<multi_agent_search_interfaces::srv::GetMap_Request>::value &&
    has_fixed_size<multi_agent_search_interfaces::srv::GetMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<multi_agent_search_interfaces::srv::GetMap>
  : std::integral_constant<
    bool,
    has_bounded_size<multi_agent_search_interfaces::srv::GetMap_Request>::value &&
    has_bounded_size<multi_agent_search_interfaces::srv::GetMap_Response>::value
  >
{
};

template<>
struct is_service<multi_agent_search_interfaces::srv::GetMap>
  : std::true_type
{
};

template<>
struct is_service_request<multi_agent_search_interfaces::srv::GetMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<multi_agent_search_interfaces::srv::GetMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__TRAITS_HPP_
