// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pioneer_interfaces:srv/Getpoints.idl
// generated code does not contain a copyright notice

#include "pioneer_interfaces/srv/detail/getpoints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pioneer_interfaces
const rosidl_type_hash_t *
pioneer_interfaces__srv__Getpoints__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x3f, 0xf0, 0x53, 0x42, 0xd9, 0x48, 0x05,
      0xd7, 0xa7, 0xfd, 0xd4, 0x9a, 0x52, 0x6b, 0xb4,
      0x1b, 0x72, 0x22, 0x46, 0xc6, 0x18, 0x6c, 0x0b,
      0x13, 0x27, 0x44, 0xa5, 0x78, 0xb1, 0x60, 0xc2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pioneer_interfaces
const rosidl_type_hash_t *
pioneer_interfaces__srv__Getpoints_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0xcf, 0xbe, 0x37, 0x03, 0x13, 0x96, 0x44,
      0x2f, 0xce, 0x5e, 0xae, 0x20, 0xd1, 0xb2, 0x13,
      0x43, 0x3f, 0x6e, 0x1e, 0x01, 0x8c, 0xbf, 0x2d,
      0x6f, 0x54, 0xdd, 0x44, 0xda, 0x22, 0xe5, 0x87,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pioneer_interfaces
const rosidl_type_hash_t *
pioneer_interfaces__srv__Getpoints_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x67, 0x9d, 0x35, 0x47, 0x5c, 0x48, 0xaf,
      0x21, 0x0b, 0xdf, 0xb2, 0xab, 0x54, 0xf5, 0x97,
      0xea, 0x5c, 0xc3, 0x43, 0x9e, 0xbb, 0x51, 0xb0,
      0x5e, 0x91, 0x69, 0xe0, 0xc4, 0x29, 0x69, 0x5b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pioneer_interfaces
const rosidl_type_hash_t *
pioneer_interfaces__srv__Getpoints_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0x82, 0xb2, 0xe6, 0x61, 0x30, 0x67, 0xbf,
      0x0a, 0x57, 0x41, 0xec, 0xa2, 0x87, 0xe9, 0x92,
      0xd7, 0x73, 0xd4, 0xbc, 0x24, 0x93, 0xaf, 0xdf,
      0xcd, 0x6f, 0xe6, 0x04, 0xbc, 0x1f, 0xdd, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/point_stamped__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PointStamped__EXPECTED_HASH = {1, {
    0x4c, 0x02, 0x96, 0xaf, 0x86, 0xe0, 0x1e, 0x56,
    0x2e, 0x9e, 0x04, 0x05, 0xd1, 0x38, 0xa0, 0x15,
    0x37, 0x24, 0x75, 0x80, 0x07, 0x6c, 0x58, 0xea,
    0x38, 0xd7, 0x92, 0x3a, 0xc1, 0x04, 0x58, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char pioneer_interfaces__srv__Getpoints__TYPE_NAME[] = "pioneer_interfaces/srv/Getpoints";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__PointStamped__TYPE_NAME[] = "geometry_msgs/msg/PointStamped";
static char pioneer_interfaces__srv__Getpoints_Event__TYPE_NAME[] = "pioneer_interfaces/srv/Getpoints_Event";
static char pioneer_interfaces__srv__Getpoints_Request__TYPE_NAME[] = "pioneer_interfaces/srv/Getpoints_Request";
static char pioneer_interfaces__srv__Getpoints_Response__TYPE_NAME[] = "pioneer_interfaces/srv/Getpoints_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char pioneer_interfaces__srv__Getpoints__FIELD_NAME__request_message[] = "request_message";
static char pioneer_interfaces__srv__Getpoints__FIELD_NAME__response_message[] = "response_message";
static char pioneer_interfaces__srv__Getpoints__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field pioneer_interfaces__srv__Getpoints__FIELDS[] = {
  {
    {pioneer_interfaces__srv__Getpoints__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pioneer_interfaces__srv__Getpoints_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pioneer_interfaces__srv__Getpoints_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pioneer_interfaces__srv__Getpoints_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pioneer_interfaces__srv__Getpoints__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PointStamped__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pioneer_interfaces__srv__Getpoints__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pioneer_interfaces__srv__Getpoints__TYPE_NAME, 32, 32},
      {pioneer_interfaces__srv__Getpoints__FIELDS, 3, 3},
    },
    {pioneer_interfaces__srv__Getpoints__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PointStamped__EXPECTED_HASH, geometry_msgs__msg__PointStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PointStamped__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = pioneer_interfaces__srv__Getpoints_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = pioneer_interfaces__srv__Getpoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = pioneer_interfaces__srv__Getpoints_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pioneer_interfaces__srv__Getpoints_Request__FIELD_NAME__points[] = "points";

static rosidl_runtime_c__type_description__Field pioneer_interfaces__srv__Getpoints_Request__FIELDS[] = {
  {
    {pioneer_interfaces__srv__Getpoints_Request__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__PointStamped__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pioneer_interfaces__srv__Getpoints_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PointStamped__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pioneer_interfaces__srv__Getpoints_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pioneer_interfaces__srv__Getpoints_Request__TYPE_NAME, 40, 40},
      {pioneer_interfaces__srv__Getpoints_Request__FIELDS, 1, 1},
    },
    {pioneer_interfaces__srv__Getpoints_Request__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PointStamped__EXPECTED_HASH, geometry_msgs__msg__PointStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PointStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pioneer_interfaces__srv__Getpoints_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field pioneer_interfaces__srv__Getpoints_Response__FIELDS[] = {
  {
    {pioneer_interfaces__srv__Getpoints_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pioneer_interfaces__srv__Getpoints_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pioneer_interfaces__srv__Getpoints_Response__TYPE_NAME, 41, 41},
      {pioneer_interfaces__srv__Getpoints_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pioneer_interfaces__srv__Getpoints_Event__FIELD_NAME__info[] = "info";
static char pioneer_interfaces__srv__Getpoints_Event__FIELD_NAME__request[] = "request";
static char pioneer_interfaces__srv__Getpoints_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field pioneer_interfaces__srv__Getpoints_Event__FIELDS[] = {
  {
    {pioneer_interfaces__srv__Getpoints_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {pioneer_interfaces__srv__Getpoints_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {pioneer_interfaces__srv__Getpoints_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pioneer_interfaces__srv__Getpoints_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PointStamped__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {pioneer_interfaces__srv__Getpoints_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pioneer_interfaces__srv__Getpoints_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pioneer_interfaces__srv__Getpoints_Event__TYPE_NAME, 38, 38},
      {pioneer_interfaces__srv__Getpoints_Event__FIELDS, 3, 3},
    },
    {pioneer_interfaces__srv__Getpoints_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PointStamped__EXPECTED_HASH, geometry_msgs__msg__PointStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PointStamped__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = pioneer_interfaces__srv__Getpoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = pioneer_interfaces__srv__Getpoints_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# Request\n"
  "geometry_msgs/PointStamped[] points\n"
  "---\n"
  "# Response\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pioneer_interfaces__srv__Getpoints__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pioneer_interfaces__srv__Getpoints__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pioneer_interfaces__srv__Getpoints_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pioneer_interfaces__srv__Getpoints_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pioneer_interfaces__srv__Getpoints_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pioneer_interfaces__srv__Getpoints_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pioneer_interfaces__srv__Getpoints_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pioneer_interfaces__srv__Getpoints_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pioneer_interfaces__srv__Getpoints__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pioneer_interfaces__srv__Getpoints__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PointStamped__get_individual_type_description_source(NULL);
    sources[4] = *pioneer_interfaces__srv__Getpoints_Event__get_individual_type_description_source(NULL);
    sources[5] = *pioneer_interfaces__srv__Getpoints_Request__get_individual_type_description_source(NULL);
    sources[6] = *pioneer_interfaces__srv__Getpoints_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pioneer_interfaces__srv__Getpoints_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pioneer_interfaces__srv__Getpoints_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PointStamped__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pioneer_interfaces__srv__Getpoints_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pioneer_interfaces__srv__Getpoints_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pioneer_interfaces__srv__Getpoints_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pioneer_interfaces__srv__Getpoints_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PointStamped__get_individual_type_description_source(NULL);
    sources[4] = *pioneer_interfaces__srv__Getpoints_Request__get_individual_type_description_source(NULL);
    sources[5] = *pioneer_interfaces__srv__Getpoints_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
