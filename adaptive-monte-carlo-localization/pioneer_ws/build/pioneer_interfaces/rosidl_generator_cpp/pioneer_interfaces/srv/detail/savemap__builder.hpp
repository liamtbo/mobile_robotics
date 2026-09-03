// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pioneer_interfaces:srv/Savemap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pioneer_interfaces/srv/savemap.hpp"


#ifndef PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__BUILDER_HPP_
#define PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pioneer_interfaces/srv/detail/savemap__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pioneer_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pioneer_interfaces::srv::Savemap_Request>()
{
  return ::pioneer_interfaces::srv::Savemap_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pioneer_interfaces


namespace pioneer_interfaces
{

namespace srv
{

namespace builder
{

class Init_Savemap_Response_grid
{
public:
  Init_Savemap_Response_grid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pioneer_interfaces::srv::Savemap_Response grid(::pioneer_interfaces::srv::Savemap_Response::_grid_type arg)
  {
    msg_.grid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pioneer_interfaces::srv::Savemap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pioneer_interfaces::srv::Savemap_Response>()
{
  return pioneer_interfaces::srv::builder::Init_Savemap_Response_grid();
}

}  // namespace pioneer_interfaces


namespace pioneer_interfaces
{

namespace srv
{

namespace builder
{

class Init_Savemap_Event_response
{
public:
  explicit Init_Savemap_Event_response(::pioneer_interfaces::srv::Savemap_Event & msg)
  : msg_(msg)
  {}
  ::pioneer_interfaces::srv::Savemap_Event response(::pioneer_interfaces::srv::Savemap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pioneer_interfaces::srv::Savemap_Event msg_;
};

class Init_Savemap_Event_request
{
public:
  explicit Init_Savemap_Event_request(::pioneer_interfaces::srv::Savemap_Event & msg)
  : msg_(msg)
  {}
  Init_Savemap_Event_response request(::pioneer_interfaces::srv::Savemap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Savemap_Event_response(msg_);
  }

private:
  ::pioneer_interfaces::srv::Savemap_Event msg_;
};

class Init_Savemap_Event_info
{
public:
  Init_Savemap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Savemap_Event_request info(::pioneer_interfaces::srv::Savemap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Savemap_Event_request(msg_);
  }

private:
  ::pioneer_interfaces::srv::Savemap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pioneer_interfaces::srv::Savemap_Event>()
{
  return pioneer_interfaces::srv::builder::Init_Savemap_Event_info();
}

}  // namespace pioneer_interfaces

#endif  // PIONEER_INTERFACES__SRV__DETAIL__SAVEMAP__BUILDER_HPP_
