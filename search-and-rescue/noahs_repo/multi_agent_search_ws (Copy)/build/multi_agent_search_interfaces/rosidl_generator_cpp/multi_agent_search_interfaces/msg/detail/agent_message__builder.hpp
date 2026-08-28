// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_agent_search_interfaces:msg/AgentMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/msg/agent_message.hpp"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__BUILDER_HPP_
#define MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multi_agent_search_interfaces/msg/detail/agent_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multi_agent_search_interfaces
{

namespace msg
{

namespace builder
{

class Init_AgentMessage_payload
{
public:
  explicit Init_AgentMessage_payload(::multi_agent_search_interfaces::msg::AgentMessage & msg)
  : msg_(msg)
  {}
  ::multi_agent_search_interfaces::msg::AgentMessage payload(::multi_agent_search_interfaces::msg::AgentMessage::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_agent_search_interfaces::msg::AgentMessage msg_;
};

class Init_AgentMessage_overwrite_targeted
{
public:
  explicit Init_AgentMessage_overwrite_targeted(::multi_agent_search_interfaces::msg::AgentMessage & msg)
  : msg_(msg)
  {}
  Init_AgentMessage_payload overwrite_targeted(::multi_agent_search_interfaces::msg::AgentMessage::_overwrite_targeted_type arg)
  {
    msg_.overwrite_targeted = std::move(arg);
    return Init_AgentMessage_payload(msg_);
  }

private:
  ::multi_agent_search_interfaces::msg::AgentMessage msg_;
};

class Init_AgentMessage_timestamp
{
public:
  explicit Init_AgentMessage_timestamp(::multi_agent_search_interfaces::msg::AgentMessage & msg)
  : msg_(msg)
  {}
  Init_AgentMessage_overwrite_targeted timestamp(::multi_agent_search_interfaces::msg::AgentMessage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AgentMessage_overwrite_targeted(msg_);
  }

private:
  ::multi_agent_search_interfaces::msg::AgentMessage msg_;
};

class Init_AgentMessage_recipient_id
{
public:
  explicit Init_AgentMessage_recipient_id(::multi_agent_search_interfaces::msg::AgentMessage & msg)
  : msg_(msg)
  {}
  Init_AgentMessage_timestamp recipient_id(::multi_agent_search_interfaces::msg::AgentMessage::_recipient_id_type arg)
  {
    msg_.recipient_id = std::move(arg);
    return Init_AgentMessage_timestamp(msg_);
  }

private:
  ::multi_agent_search_interfaces::msg::AgentMessage msg_;
};

class Init_AgentMessage_sender_id
{
public:
  explicit Init_AgentMessage_sender_id(::multi_agent_search_interfaces::msg::AgentMessage & msg)
  : msg_(msg)
  {}
  Init_AgentMessage_recipient_id sender_id(::multi_agent_search_interfaces::msg::AgentMessage::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_AgentMessage_recipient_id(msg_);
  }

private:
  ::multi_agent_search_interfaces::msg::AgentMessage msg_;
};

class Init_AgentMessage_msg_type
{
public:
  Init_AgentMessage_msg_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentMessage_sender_id msg_type(::multi_agent_search_interfaces::msg::AgentMessage::_msg_type_type arg)
  {
    msg_.msg_type = std::move(arg);
    return Init_AgentMessage_sender_id(msg_);
  }

private:
  ::multi_agent_search_interfaces::msg::AgentMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_agent_search_interfaces::msg::AgentMessage>()
{
  return multi_agent_search_interfaces::msg::builder::Init_AgentMessage_msg_type();
}

}  // namespace multi_agent_search_interfaces

#endif  // MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__BUILDER_HPP_
