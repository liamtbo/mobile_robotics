// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_agent_search_interfaces:srv/TargetDetected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/srv/target_detected.hpp"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__TARGET_DETECTED__BUILDER_HPP_
#define MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__TARGET_DETECTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multi_agent_search_interfaces/srv/detail/target_detected__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multi_agent_search_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetDetected_Request_targets
{
public:
  Init_TargetDetected_Request_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::multi_agent_search_interfaces::srv::TargetDetected_Request targets(::multi_agent_search_interfaces::srv::TargetDetected_Request::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::TargetDetected_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_agent_search_interfaces::srv::TargetDetected_Request>()
{
  return multi_agent_search_interfaces::srv::builder::Init_TargetDetected_Request_targets();
}

}  // namespace multi_agent_search_interfaces


namespace multi_agent_search_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetDetected_Response_success
{
public:
  Init_TargetDetected_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::multi_agent_search_interfaces::srv::TargetDetected_Response success(::multi_agent_search_interfaces::srv::TargetDetected_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::TargetDetected_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_agent_search_interfaces::srv::TargetDetected_Response>()
{
  return multi_agent_search_interfaces::srv::builder::Init_TargetDetected_Response_success();
}

}  // namespace multi_agent_search_interfaces


namespace multi_agent_search_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetDetected_Event_response
{
public:
  explicit Init_TargetDetected_Event_response(::multi_agent_search_interfaces::srv::TargetDetected_Event & msg)
  : msg_(msg)
  {}
  ::multi_agent_search_interfaces::srv::TargetDetected_Event response(::multi_agent_search_interfaces::srv::TargetDetected_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::TargetDetected_Event msg_;
};

class Init_TargetDetected_Event_request
{
public:
  explicit Init_TargetDetected_Event_request(::multi_agent_search_interfaces::srv::TargetDetected_Event & msg)
  : msg_(msg)
  {}
  Init_TargetDetected_Event_response request(::multi_agent_search_interfaces::srv::TargetDetected_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TargetDetected_Event_response(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::TargetDetected_Event msg_;
};

class Init_TargetDetected_Event_info
{
public:
  Init_TargetDetected_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetDetected_Event_request info(::multi_agent_search_interfaces::srv::TargetDetected_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TargetDetected_Event_request(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::TargetDetected_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_agent_search_interfaces::srv::TargetDetected_Event>()
{
  return multi_agent_search_interfaces::srv::builder::Init_TargetDetected_Event_info();
}

}  // namespace multi_agent_search_interfaces

#endif  // MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__TARGET_DETECTED__BUILDER_HPP_
