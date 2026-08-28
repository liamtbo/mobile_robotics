// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_agent_search_interfaces:srv/TargetDetected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/srv/target_detected.hpp"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__TARGET_DETECTED__STRUCT_HPP_
#define MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__TARGET_DETECTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'targets'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Request __attribute__((deprecated))
#else
# define DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Request __declspec(deprecated)
#endif

namespace multi_agent_search_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetDetected_Request_
{
  using Type = TargetDetected_Request_<ContainerAllocator>;

  explicit TargetDetected_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TargetDetected_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _targets_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _targets_type targets;

  // setters for named parameter idiom
  Type & set__targets(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Request
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Request
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetDetected_Request_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetDetected_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetDetected_Request_

// alias to use template instance with default allocator
using TargetDetected_Request =
  multi_agent_search_interfaces::srv::TargetDetected_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace multi_agent_search_interfaces


#ifndef _WIN32
# define DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Response __attribute__((deprecated))
#else
# define DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Response __declspec(deprecated)
#endif

namespace multi_agent_search_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetDetected_Response_
{
  using Type = TargetDetected_Response_<ContainerAllocator>;

  explicit TargetDetected_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TargetDetected_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Response
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Response
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetDetected_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetDetected_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetDetected_Response_

// alias to use template instance with default allocator
using TargetDetected_Response =
  multi_agent_search_interfaces::srv::TargetDetected_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace multi_agent_search_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Event __attribute__((deprecated))
#else
# define DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Event __declspec(deprecated)
#endif

namespace multi_agent_search_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TargetDetected_Event_
{
  using Type = TargetDetected_Event_<ContainerAllocator>;

  explicit TargetDetected_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TargetDetected_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<multi_agent_search_interfaces::srv::TargetDetected_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<multi_agent_search_interfaces::srv::TargetDetected_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Event
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_agent_search_interfaces__srv__TargetDetected_Event
    std::shared_ptr<multi_agent_search_interfaces::srv::TargetDetected_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetDetected_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetDetected_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetDetected_Event_

// alias to use template instance with default allocator
using TargetDetected_Event =
  multi_agent_search_interfaces::srv::TargetDetected_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace multi_agent_search_interfaces

namespace multi_agent_search_interfaces
{

namespace srv
{

struct TargetDetected
{
  using Request = multi_agent_search_interfaces::srv::TargetDetected_Request;
  using Response = multi_agent_search_interfaces::srv::TargetDetected_Response;
  using Event = multi_agent_search_interfaces::srv::TargetDetected_Event;
};

}  // namespace srv

}  // namespace multi_agent_search_interfaces

#endif  // MULTI_AGENT_SEARCH_INTERFACES__SRV__DETAIL__TARGET_DETECTED__STRUCT_HPP_
