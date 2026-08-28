// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_agent_search_interfaces:msg/AgentMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/msg/agent_message.hpp"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__STRUCT_HPP_
#define MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multi_agent_search_interfaces__msg__AgentMessage __attribute__((deprecated))
#else
# define DEPRECATED__multi_agent_search_interfaces__msg__AgentMessage __declspec(deprecated)
#endif

namespace multi_agent_search_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentMessage_
{
  using Type = AgentMessage_<ContainerAllocator>;

  explicit AgentMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_type = 0;
      this->sender_id = "";
      this->recipient_id = "";
      this->timestamp = 0ull;
      this->overwrite_targeted = false;
    }
  }

  explicit AgentMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sender_id(_alloc),
    recipient_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_type = 0;
      this->sender_id = "";
      this->recipient_id = "";
      this->timestamp = 0ull;
      this->overwrite_targeted = false;
    }
  }

  // field types and members
  using _msg_type_type =
    uint8_t;
  _msg_type_type msg_type;
  using _sender_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sender_id_type sender_id;
  using _recipient_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _recipient_id_type recipient_id;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _overwrite_targeted_type =
    bool;
  _overwrite_targeted_type overwrite_targeted;
  using _payload_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__msg_type(
    const uint8_t & _arg)
  {
    this->msg_type = _arg;
    return *this;
  }
  Type & set__sender_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__recipient_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->recipient_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__overwrite_targeted(
    const bool & _arg)
  {
    this->overwrite_targeted = _arg;
    return *this;
  }
  Type & set__payload(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HEARTBEAT =
    0u;
  static constexpr uint8_t COORDINATION =
    1u;

  // pointer types
  using RawPtr =
    multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_agent_search_interfaces__msg__AgentMessage
    std::shared_ptr<multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_agent_search_interfaces__msg__AgentMessage
    std::shared_ptr<multi_agent_search_interfaces::msg::AgentMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentMessage_ & other) const
  {
    if (this->msg_type != other.msg_type) {
      return false;
    }
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->recipient_id != other.recipient_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->overwrite_targeted != other.overwrite_targeted) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentMessage_

// alias to use template instance with default allocator
using AgentMessage =
  multi_agent_search_interfaces::msg::AgentMessage_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentMessage_<ContainerAllocator>::HEARTBEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AgentMessage_<ContainerAllocator>::COORDINATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace multi_agent_search_interfaces

#endif  // MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__STRUCT_HPP_
