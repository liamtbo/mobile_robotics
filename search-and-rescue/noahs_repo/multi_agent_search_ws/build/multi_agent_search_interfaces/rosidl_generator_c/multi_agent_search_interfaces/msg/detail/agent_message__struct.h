// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_agent_search_interfaces:msg/AgentMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "multi_agent_search_interfaces/msg/agent_message.h"


#ifndef MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__STRUCT_H_
#define MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HEARTBEAT'.
enum
{
  multi_agent_search_interfaces__msg__AgentMessage__HEARTBEAT = 0
};

/// Constant 'COORDINATION'.
enum
{
  multi_agent_search_interfaces__msg__AgentMessage__COORDINATION = 1
};

// Include directives for member types
// Member 'sender_id'
// Member 'recipient_id'
#include "rosidl_runtime_c/string.h"
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AgentMessage in the package multi_agent_search_interfaces.
typedef struct multi_agent_search_interfaces__msg__AgentMessage
{
  uint8_t msg_type;
  rosidl_runtime_c__String sender_id;
  /// Empty string = broadcast
  rosidl_runtime_c__String recipient_id;
  uint64_t timestamp;
  /// If broadcast, whether to overwrite recipient-specific messages
  bool overwrite_targeted;
  /// Serialized inner message
  rosidl_runtime_c__uint8__Sequence payload;
} multi_agent_search_interfaces__msg__AgentMessage;

// Struct for a sequence of multi_agent_search_interfaces__msg__AgentMessage.
typedef struct multi_agent_search_interfaces__msg__AgentMessage__Sequence
{
  multi_agent_search_interfaces__msg__AgentMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_agent_search_interfaces__msg__AgentMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTI_AGENT_SEARCH_INTERFACES__MSG__DETAIL__AGENT_MESSAGE__STRUCT_H_
