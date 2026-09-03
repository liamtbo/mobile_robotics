// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pioneer_interfaces:srv/Savemap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pioneer_interfaces/srv/savemap.hpp"


#ifndef PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__TRAITS_HPP_
#define PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pioneer_interfaces/srv/detail/savemap__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pioneer_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Savemap_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Savemap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Savemap_Request & msg, bool use_flow_style = false)
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

}  // namespace pioneer_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pioneer_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pioneer_interfaces::srv::Savemap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pioneer_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pioneer_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pioneer_interfaces::srv::Savemap_Request & msg)
{
  return pioneer_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pioneer_interfaces::srv::Savemap_Request>()
{
  return "pioneer_interfaces::srv::Savemap_Request";
}

template<>
inline const char * name<pioneer_interfaces::srv::Savemap_Request>()
{
  return "pioneer_interfaces/srv/Savemap_Request";
}

template<>
struct has_fixed_size<pioneer_interfaces::srv::Savemap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pioneer_interfaces::srv::Savemap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pioneer_interfaces::srv::Savemap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'grid'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace pioneer_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Savemap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: grid
  {
    out << "grid: ";
    to_flow_style_yaml(msg.grid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Savemap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid:\n";
    to_block_style_yaml(msg.grid, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Savemap_Response & msg, bool use_flow_style = false)
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

}  // namespace pioneer_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pioneer_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pioneer_interfaces::srv::Savemap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pioneer_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pioneer_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pioneer_interfaces::srv::Savemap_Response & msg)
{
  return pioneer_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pioneer_interfaces::srv::Savemap_Response>()
{
  return "pioneer_interfaces::srv::Savemap_Response";
}

template<>
inline const char * name<pioneer_interfaces::srv::Savemap_Response>()
{
  return "pioneer_interfaces/srv/Savemap_Response";
}

template<>
struct has_fixed_size<pioneer_interfaces::srv::Savemap_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<pioneer_interfaces::srv::Savemap_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<pioneer_interfaces::srv::Savemap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace pioneer_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Savemap_Event & msg,
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
  const Savemap_Event & msg,
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

inline std::string to_yaml(const Savemap_Event & msg, bool use_flow_style = false)
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

}  // namespace pioneer_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pioneer_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pioneer_interfaces::srv::Savemap_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  pioneer_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pioneer_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pioneer_interfaces::srv::Savemap_Event & msg)
{
  return pioneer_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pioneer_interfaces::srv::Savemap_Event>()
{
  return "pioneer_interfaces::srv::Savemap_Event";
}

template<>
inline const char * name<pioneer_interfaces::srv::Savemap_Event>()
{
  return "pioneer_interfaces/srv/Savemap_Event";
}

template<>
struct has_fixed_size<pioneer_interfaces::srv::Savemap_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pioneer_interfaces::srv::Savemap_Event>
  : std::integral_constant<bool, has_bounded_size<pioneer_interfaces::srv::Savemap_Request>::value && has_bounded_size<pioneer_interfaces::srv::Savemap_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<pioneer_interfaces::srv::Savemap_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pioneer_interfaces::srv::Savemap>()
{
  return "pioneer_interfaces::srv::Savemap";
}

template<>
inline const char * name<pioneer_interfaces::srv::Savemap>()
{
  return "pioneer_interfaces/srv/Savemap";
}

template<>
struct has_fixed_size<pioneer_interfaces::srv::Savemap>
  : std::integral_constant<
    bool,
    has_fixed_size<pioneer_interfaces::srv::Savemap_Request>::value &&
    has_fixed_size<pioneer_interfaces::srv::Savemap_Response>::value
  >
{
};

template<>
struct has_bounded_size<pioneer_interfaces::srv::Savemap>
  : std::integral_constant<
    bool,
    has_bounded_size<pioneer_interfaces::srv::Savemap_Request>::value &&
    has_bounded_size<pioneer_interfaces::srv::Savemap_Response>::value
  >
{
};

template<>
struct is_service<pioneer_interfaces::srv::Savemap>
  : std::true_type
{
};

template<>
struct is_service_request<pioneer_interfaces::srv::Savemap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pioneer_interfaces::srv::Savemap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__TRAITS_HPP_
