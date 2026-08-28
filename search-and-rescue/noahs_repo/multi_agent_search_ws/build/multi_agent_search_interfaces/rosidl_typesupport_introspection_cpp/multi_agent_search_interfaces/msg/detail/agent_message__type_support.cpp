// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from multi_agent_search_interfaces:msg/AgentMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "multi_agent_search_interfaces/msg/detail/agent_message__functions.h"
#include "multi_agent_search_interfaces/msg/detail/agent_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace multi_agent_search_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AgentMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) multi_agent_search_interfaces::msg::AgentMessage(_init);
}

void AgentMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<multi_agent_search_interfaces::msg::AgentMessage *>(message_memory);
  typed_message->~AgentMessage();
}

size_t size_function__AgentMessage__payload(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AgentMessage__payload(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AgentMessage__payload(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AgentMessage__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__AgentMessage__payload(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__AgentMessage__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__AgentMessage__payload(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__AgentMessage__payload(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgentMessage_message_member_array[6] = {
  {
    "msg_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces::msg::AgentMessage, msg_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sender_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces::msg::AgentMessage, sender_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "recipient_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces::msg::AgentMessage, recipient_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces::msg::AgentMessage, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "overwrite_targeted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces::msg::AgentMessage, overwrite_targeted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "payload",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_agent_search_interfaces::msg::AgentMessage, payload),  // bytes offset in struct
    nullptr,  // default value
    size_function__AgentMessage__payload,  // size() function pointer
    get_const_function__AgentMessage__payload,  // get_const(index) function pointer
    get_function__AgentMessage__payload,  // get(index) function pointer
    fetch_function__AgentMessage__payload,  // fetch(index, &value) function pointer
    assign_function__AgentMessage__payload,  // assign(index, value) function pointer
    resize_function__AgentMessage__payload  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgentMessage_message_members = {
  "multi_agent_search_interfaces::msg",  // message namespace
  "AgentMessage",  // message name
  6,  // number of fields
  sizeof(multi_agent_search_interfaces::msg::AgentMessage),
  false,  // has_any_key_member_
  AgentMessage_message_member_array,  // message members
  AgentMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  AgentMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgentMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgentMessage_message_members,
  get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_hash,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_description,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace multi_agent_search_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_agent_search_interfaces::msg::AgentMessage>()
{
  return &::multi_agent_search_interfaces::msg::rosidl_typesupport_introspection_cpp::AgentMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multi_agent_search_interfaces, msg, AgentMessage)() {
  return &::multi_agent_search_interfaces::msg::rosidl_typesupport_introspection_cpp::AgentMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
