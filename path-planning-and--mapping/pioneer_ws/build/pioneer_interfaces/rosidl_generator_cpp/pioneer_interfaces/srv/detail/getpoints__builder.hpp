// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pioneer_interfaces:srv/Getpoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pioneer_interfaces/srv/getpoints.hpp"


#ifndef PIONEER_INTERFACES__SRV__DETAIL__GETPOINTS__BUILDER_HPP_
#define PIONEER_INTERFACES__SRV__DETAIL__GETPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pioneer_interfaces/srv/detail/getpoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pioneer_interfaces
{

namespace srv
{

namespace builder
{

class Init_Getpoints_Request_points
{
public:
  Init_Getpoints_Request_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pioneer_interfaces::srv::Getpoints_Request points(::pioneer_interfaces::srv::Getpoints_Request::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pioneer_interfaces::srv::Getpoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pioneer_interfaces::srv::Getpoints_Request>()
{
  return pioneer_interfaces::srv::builder::Init_Getpoints_Request_points();
}

}  // namespace pioneer_interfaces


namespace pioneer_interfaces
{

namespace srv
{

namespace builder
{

class Init_Getpoints_Response_success
{
public:
  Init_Getpoints_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pioneer_interfaces::srv::Getpoints_Response success(::pioneer_interfaces::srv::Getpoints_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pioneer_interfaces::srv::Getpoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pioneer_interfaces::srv::Getpoints_Response>()
{
  return pioneer_interfaces::srv::builder::Init_Getpoints_Response_success();
}

}  // namespace pioneer_interfaces


namespace pioneer_interfaces
{

namespace srv
{

namespace builder
{

class Init_Getpoints_Event_response
{
public:
  explicit Init_Getpoints_Event_response(::pioneer_interfaces::srv::Getpoints_Event & msg)
  : msg_(msg)
  {}
  ::pioneer_interfaces::srv::Getpoints_Event response(::pioneer_interfaces::srv::Getpoints_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pioneer_interfaces::srv::Getpoints_Event msg_;
};

class Init_Getpoints_Event_request
{
public:
  explicit Init_Getpoints_Event_request(::pioneer_interfaces::srv::Getpoints_Event & msg)
  : msg_(msg)
  {}
  Init_Getpoints_Event_response request(::pioneer_interfaces::srv::Getpoints_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Getpoints_Event_response(msg_);
  }

private:
  ::pioneer_interfaces::srv::Getpoints_Event msg_;
};

class Init_Getpoints_Event_info
{
public:
  Init_Getpoints_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Getpoints_Event_request info(::pioneer_interfaces::srv::Getpoints_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Getpoints_Event_request(msg_);
  }

private:
  ::pioneer_interfaces::srv::Getpoints_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pioneer_interfaces::srv::Getpoints_Event>()
{
  return pioneer_interfaces::srv::builder::Init_Getpoints_Event_info();
}

}  // namespace pioneer_interfaces

#endif  // PIONEER_INTERFACES__SRV__DETAIL__GETPOINTS__BUILDER_HPP_
