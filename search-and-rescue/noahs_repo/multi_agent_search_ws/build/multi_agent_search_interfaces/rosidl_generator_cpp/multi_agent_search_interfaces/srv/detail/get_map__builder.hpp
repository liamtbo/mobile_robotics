// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_agent_search_interfaces:srv/GetMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/srv/get_map.hpp"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__BUILDER_HPP_
#define MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multi_agent_search_interfaces/srv/detail/get_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multi_agent_search_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_agent_search_interfaces::srv::GetMap_Request>()
{
  return ::multi_agent_search_interfaces::srv::GetMap_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace multi_agent_search_interfaces


namespace multi_agent_search_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetMap_Response_map
{
public:
  Init_GetMap_Response_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::multi_agent_search_interfaces::srv::GetMap_Response map(::multi_agent_search_interfaces::srv::GetMap_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::GetMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_agent_search_interfaces::srv::GetMap_Response>()
{
  return multi_agent_search_interfaces::srv::builder::Init_GetMap_Response_map();
}

}  // namespace multi_agent_search_interfaces


namespace multi_agent_search_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetMap_Event_response
{
public:
  explicit Init_GetMap_Event_response(::multi_agent_search_interfaces::srv::GetMap_Event & msg)
  : msg_(msg)
  {}
  ::multi_agent_search_interfaces::srv::GetMap_Event response(::multi_agent_search_interfaces::srv::GetMap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::GetMap_Event msg_;
};

class Init_GetMap_Event_request
{
public:
  explicit Init_GetMap_Event_request(::multi_agent_search_interfaces::srv::GetMap_Event & msg)
  : msg_(msg)
  {}
  Init_GetMap_Event_response request(::multi_agent_search_interfaces::srv::GetMap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetMap_Event_response(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::GetMap_Event msg_;
};

class Init_GetMap_Event_info
{
public:
  Init_GetMap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMap_Event_request info(::multi_agent_search_interfaces::srv::GetMap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetMap_Event_request(msg_);
  }

private:
  ::multi_agent_search_interfaces::srv::GetMap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_agent_search_interfaces::srv::GetMap_Event>()
{
  return multi_agent_search_interfaces::srv::builder::Init_GetMap_Event_info();
}

}  // namespace multi_agent_search_interfaces

#endif  // MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__GET_MAP__BUILDER_HPP_
