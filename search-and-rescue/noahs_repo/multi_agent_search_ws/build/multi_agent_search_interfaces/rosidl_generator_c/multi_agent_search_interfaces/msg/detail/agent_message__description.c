// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from multi_agent_search_interfaces:msg/AgentMessage.idl
// generated code does not contain a copyright notice

#include "multi_agent_search_interfaces/msg/detail/agent_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_multi_agent_search_interfaces
const rosidl_type_hash_t *
multi_agent_search_interfaces__msg__AgentMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x0e, 0x1b, 0x9d, 0xbe, 0x3d, 0x25, 0x4f,
      0x07, 0xf4, 0x56, 0x42, 0x3e, 0x41, 0x1c, 0x59,
      0x30, 0x69, 0xb1, 0x66, 0x24, 0x48, 0x42, 0x1c,
      0xb2, 0xbf, 0xc0, 0x96, 0x3d, 0x16, 0x3f, 0xd1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char multi_agent_search_interfaces__msg__AgentMessage__TYPE_NAME[] = "multi_agent_search_interfaces/msg/AgentMessage";

// Define type names, field names, and default values
static char multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__msg_type[] = "msg_type";
static char multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__sender_id[] = "sender_id";
static char multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__recipient_id[] = "recipient_id";
static char multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__timestamp[] = "timestamp";
static char multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__overwrite_targeted[] = "overwrite_targeted";
static char multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__payload[] = "payload";

static rosidl_runtime_c__type_description__Field multi_agent_search_interfaces__msg__AgentMessage__FIELDS[] = {
  {
    {multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__msg_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__sender_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__recipient_id, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__overwrite_targeted, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_agent_search_interfaces__msg__AgentMessage__FIELD_NAME__payload, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
multi_agent_search_interfaces__msg__AgentMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multi_agent_search_interfaces__msg__AgentMessage__TYPE_NAME, 46, 46},
      {multi_agent_search_interfaces__msg__AgentMessage__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 HEARTBEAT = 0\n"
  "uint8 COORDINATION = 1\n"
  "\n"
  "uint8 msg_type\n"
  "string sender_id\n"
  "string recipient_id           # Empty string = broadcast\n"
  "uint64 timestamp\n"
  "bool overwrite_targeted       # If broadcast, whether to overwrite recipient-specific messages\n"
  "uint8[] payload               # Serialized inner message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
multi_agent_search_interfaces__msg__AgentMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multi_agent_search_interfaces__msg__AgentMessage__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 302, 302},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multi_agent_search_interfaces__msg__AgentMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multi_agent_search_interfaces__msg__AgentMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
