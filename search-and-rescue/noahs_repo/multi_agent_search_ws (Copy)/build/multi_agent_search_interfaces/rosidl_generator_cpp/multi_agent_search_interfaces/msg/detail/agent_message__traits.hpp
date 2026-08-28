// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_agent_search_interfaces:msg/AgentMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/msg/agent_message.hpp"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__TRAITS_HPP_
#define MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multi_agent_search_interfaces/msg/detail/agent_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multi_agent_search_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgentMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: msg_type
  {
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << ", ";
  }

  // member: sender_id
  {
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << ", ";
  }

  // member: recipient_id
  {
    out << "recipient_id: ";
    rosidl_generator_traits::value_to_yaml(msg.recipient_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: overwrite_targeted
  {
    out << "overwrite_targeted: ";
    rosidl_generator_traits::value_to_yaml(msg.overwrite_targeted, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const AgentMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << "\n";
  }

  // member: sender_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << "\n";
  }

  // member: recipient_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recipient_id: ";
    rosidl_generator_traits::value_to_yaml(msg.recipient_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: overwrite_targeted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overwrite_targeted: ";
    rosidl_generator_traits::value_to_yaml(msg.overwrite_targeted, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgentMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace multi_agent_search_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use multi_agent_search_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_agent_search_interfaces::msg::AgentMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_agent_search_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_agent_search_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const multi_agent_search_interfaces::msg::AgentMessage & msg)
{
  return multi_agent_search_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multi_agent_search_interfaces::msg::AgentMessage>()
{
  return "multi_agent_search_interfaces::msg::AgentMessage";
}

template<>
inline const char * name<multi_agent_search_interfaces::msg::AgentMessage>()
{
  return "multi_agent_search_interfaces/msg/AgentMessage";
}

template<>
struct has_fixed_size<multi_agent_search_interfaces::msg::AgentMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_agent_search_interfaces::msg::AgentMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_agent_search_interfaces::msg::AgentMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__TRAITS_HPP_
