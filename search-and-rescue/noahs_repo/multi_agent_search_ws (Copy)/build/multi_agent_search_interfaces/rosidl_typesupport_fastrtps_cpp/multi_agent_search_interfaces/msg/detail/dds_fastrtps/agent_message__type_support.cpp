// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from multi_agent_search_interfaces:msg/AgentMessage.idl
// generated code does not contain a copyright notice
#include "multi_agent_search_interfaces/msg/detail/agent_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "multi_agent_search_interfaces/msg/detail/agent_message__functions.h"
#include "multi_agent_search_interfaces/msg/detail/agent_message__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace multi_agent_search_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_agent_search_interfaces
cdr_serialize(
  const multi_agent_search_interfaces::msg::AgentMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: msg_type
  cdr << ros_message.msg_type;

  // Member: sender_id
  cdr << ros_message.sender_id;

  // Member: recipient_id
  cdr << ros_message.recipient_id;

  // Member: timestamp
  cdr << ros_message.timestamp;

  // Member: overwrite_targeted
  cdr << (ros_message.overwrite_targeted ? true : false);

  // Member: payload
  {
    cdr << ros_message.payload;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_agent_search_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multi_agent_search_interfaces::msg::AgentMessage & ros_message)
{
  // Member: msg_type
  cdr >> ros_message.msg_type;

  // Member: sender_id
  cdr >> ros_message.sender_id;

  // Member: recipient_id
  cdr >> ros_message.recipient_id;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: overwrite_targeted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.overwrite_targeted = tmp ? true : false;
  }

  // Member: payload
  {
    cdr >> ros_message.payload;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_agent_search_interfaces
get_serialized_size(
  const multi_agent_search_interfaces::msg::AgentMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: msg_type
  {
    size_t item_size = sizeof(ros_message.msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sender_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sender_id.size() + 1);

  // Member: recipient_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.recipient_id.size() + 1);

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: overwrite_targeted
  {
    size_t item_size = sizeof(ros_message.overwrite_targeted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: payload
  {
    size_t array_size = ros_message.payload.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.payload[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_agent_search_interfaces
max_serialized_size_AgentMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: msg_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: sender_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: recipient_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: overwrite_targeted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: payload
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = multi_agent_search_interfaces::msg::AgentMessage;
    is_plain =
      (
      offsetof(DataType, payload) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_agent_search_interfaces
cdr_serialize_key(
  const multi_agent_search_interfaces::msg::AgentMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: msg_type
  cdr << ros_message.msg_type;

  // Member: sender_id
  cdr << ros_message.sender_id;

  // Member: recipient_id
  cdr << ros_message.recipient_id;

  // Member: timestamp
  cdr << ros_message.timestamp;

  // Member: overwrite_targeted
  cdr << (ros_message.overwrite_targeted ? true : false);

  // Member: payload
  {
    cdr << ros_message.payload;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_agent_search_interfaces
get_serialized_size_key(
  const multi_agent_search_interfaces::msg::AgentMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: msg_type
  {
    size_t item_size = sizeof(ros_message.msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sender_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sender_id.size() + 1);

  // Member: recipient_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.recipient_id.size() + 1);

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: overwrite_targeted
  {
    size_t item_size = sizeof(ros_message.overwrite_targeted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: payload
  {
    size_t array_size = ros_message.payload.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.payload[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_agent_search_interfaces
max_serialized_size_key_AgentMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: msg_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sender_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: recipient_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: overwrite_targeted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: payload
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = multi_agent_search_interfaces::msg::AgentMessage;
    is_plain =
      (
      offsetof(DataType, payload) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _AgentMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const multi_agent_search_interfaces::msg::AgentMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AgentMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<multi_agent_search_interfaces::msg::AgentMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AgentMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const multi_agent_search_interfaces::msg::AgentMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AgentMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AgentMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AgentMessage__callbacks = {
  "multi_agent_search_interfaces::msg",
  "AgentMessage",
  _AgentMessage__cdr_serialize,
  _AgentMessage__cdr_deserialize,
  _AgentMessage__get_serialized_size,
  _AgentMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AgentMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AgentMessage__callbacks,
  get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_hash,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_description,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace multi_agent_search_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_multi_agent_search_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_agent_search_interfaces::msg::AgentMessage>()
{
  return &multi_agent_search_interfaces::msg::typesupport_fastrtps_cpp::_AgentMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_agent_search_interfaces, msg, AgentMessage)() {
  return &multi_agent_search_interfaces::msg::typesupport_fastrtps_cpp::_AgentMessage__handle;
}

#ifdef __cplusplus
}
#endif
