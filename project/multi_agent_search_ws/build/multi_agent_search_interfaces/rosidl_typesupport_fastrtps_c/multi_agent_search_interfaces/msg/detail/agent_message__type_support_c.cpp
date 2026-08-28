// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from multi_agent_search_interfaces:msg/AgentMessage.idl
// generated code does not contain a copyright notice
#include "multi_agent_search_interfaces/msg/detail/agent_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "multi_agent_search_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "multi_agent_search_interfaces/msg/detail/agent_message__struct.h"
#include "multi_agent_search_interfaces/msg/detail/agent_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // payload
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // payload
#include "rosidl_runtime_c/string.h"  // recipient_id, sender_id
#include "rosidl_runtime_c/string_functions.h"  // recipient_id, sender_id

// forward declare type support functions


using _AgentMessage__ros_msg_type = multi_agent_search_interfaces__msg__AgentMessage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multi_agent_search_interfaces
bool cdr_serialize_multi_agent_search_interfaces__msg__AgentMessage(
  const multi_agent_search_interfaces__msg__AgentMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: msg_type
  {
    cdr << ros_message->msg_type;
  }

  // Field name: sender_id
  {
    const rosidl_runtime_c__String * str = &ros_message->sender_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: recipient_id
  {
    const rosidl_runtime_c__String * str = &ros_message->recipient_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: overwrite_targeted
  {
    cdr << (ros_message->overwrite_targeted ? true : false);
  }

  // Field name: payload
  {
    size_t size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multi_agent_search_interfaces
bool cdr_deserialize_multi_agent_search_interfaces__msg__AgentMessage(
  eprosima::fastcdr::Cdr & cdr,
  multi_agent_search_interfaces__msg__AgentMessage * ros_message)
{
  // Field name: msg_type
  {
    cdr >> ros_message->msg_type;
  }

  // Field name: sender_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sender_id.data) {
      rosidl_runtime_c__String__init(&ros_message->sender_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sender_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sender_id'\n");
      return false;
    }
  }

  // Field name: recipient_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->recipient_id.data) {
      rosidl_runtime_c__String__init(&ros_message->recipient_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->recipient_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'recipient_id'\n");
      return false;
    }
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: overwrite_targeted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overwrite_targeted = tmp ? true : false;
  }

  // Field name: payload
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->payload.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->payload);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->payload, size)) {
      fprintf(stderr, "failed to create array for field 'payload'");
      return false;
    }
    auto array_ptr = ros_message->payload.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multi_agent_search_interfaces
size_t get_serialized_size_multi_agent_search_interfaces__msg__AgentMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AgentMessage__ros_msg_type * ros_message = static_cast<const _AgentMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: msg_type
  {
    size_t item_size = sizeof(ros_message->msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sender_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sender_id.size + 1);

  // Field name: recipient_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->recipient_id.size + 1);

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: overwrite_targeted
  {
    size_t item_size = sizeof(ros_message->overwrite_targeted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: payload
  {
    size_t array_size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multi_agent_search_interfaces
size_t max_serialized_size_multi_agent_search_interfaces__msg__AgentMessage(
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

  // Field name: msg_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sender_id
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

  // Field name: recipient_id
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

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: overwrite_targeted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: payload
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
    using DataType = multi_agent_search_interfaces__msg__AgentMessage;
    is_plain =
      (
      offsetof(DataType, payload) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multi_agent_search_interfaces
bool cdr_serialize_key_multi_agent_search_interfaces__msg__AgentMessage(
  const multi_agent_search_interfaces__msg__AgentMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: msg_type
  {
    cdr << ros_message->msg_type;
  }

  // Field name: sender_id
  {
    const rosidl_runtime_c__String * str = &ros_message->sender_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: recipient_id
  {
    const rosidl_runtime_c__String * str = &ros_message->recipient_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: overwrite_targeted
  {
    cdr << (ros_message->overwrite_targeted ? true : false);
  }

  // Field name: payload
  {
    size_t size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multi_agent_search_interfaces
size_t get_serialized_size_key_multi_agent_search_interfaces__msg__AgentMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AgentMessage__ros_msg_type * ros_message = static_cast<const _AgentMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: msg_type
  {
    size_t item_size = sizeof(ros_message->msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sender_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sender_id.size + 1);

  // Field name: recipient_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->recipient_id.size + 1);

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: overwrite_targeted
  {
    size_t item_size = sizeof(ros_message->overwrite_targeted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: payload
  {
    size_t array_size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multi_agent_search_interfaces
size_t max_serialized_size_key_multi_agent_search_interfaces__msg__AgentMessage(
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
  // Field name: msg_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sender_id
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

  // Field name: recipient_id
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

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: overwrite_targeted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: payload
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
    using DataType = multi_agent_search_interfaces__msg__AgentMessage;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const multi_agent_search_interfaces__msg__AgentMessage * ros_message = static_cast<const multi_agent_search_interfaces__msg__AgentMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_multi_agent_search_interfaces__msg__AgentMessage(ros_message, cdr);
}

static bool _AgentMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  multi_agent_search_interfaces__msg__AgentMessage * ros_message = static_cast<multi_agent_search_interfaces__msg__AgentMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_multi_agent_search_interfaces__msg__AgentMessage(cdr, ros_message);
}

static uint32_t _AgentMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_multi_agent_search_interfaces__msg__AgentMessage(
      untyped_ros_message, 0));
}

static size_t _AgentMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_multi_agent_search_interfaces__msg__AgentMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AgentMessage = {
  "multi_agent_search_interfaces::msg",
  "AgentMessage",
  _AgentMessage__cdr_serialize,
  _AgentMessage__cdr_deserialize,
  _AgentMessage__get_serialized_size,
  _AgentMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AgentMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AgentMessage,
  get_message_typesupport_handle_function,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_hash,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_description,
  &multi_agent_search_interfaces__msg__AgentMessage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, multi_agent_search_interfaces, msg, AgentMessage)() {
  return &_AgentMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
