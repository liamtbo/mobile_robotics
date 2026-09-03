// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pioneer_interfaces:srv/Getpoints.idl
// generated code does not contain a copyright notice
#include "pioneer_interfaces/srv/detail/getpoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"

bool
pioneer_interfaces__srv__Getpoints_Request__init(pioneer_interfaces__srv__Getpoints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__PointStamped__Sequence__init(&msg->points, 0)) {
    pioneer_interfaces__srv__Getpoints_Request__fini(msg);
    return false;
  }
  return true;
}

void
pioneer_interfaces__srv__Getpoints_Request__fini(pioneer_interfaces__srv__Getpoints_Request * msg)
{
  if (!msg) {
    return;
  }
  // points
  geometry_msgs__msg__PointStamped__Sequence__fini(&msg->points);
}

bool
pioneer_interfaces__srv__Getpoints_Request__are_equal(const pioneer_interfaces__srv__Getpoints_Request * lhs, const pioneer_interfaces__srv__Getpoints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__PointStamped__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
pioneer_interfaces__srv__Getpoints_Request__copy(
  const pioneer_interfaces__srv__Getpoints_Request * input,
  pioneer_interfaces__srv__Getpoints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__PointStamped__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

pioneer_interfaces__srv__Getpoints_Request *
pioneer_interfaces__srv__Getpoints_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Request * msg = (pioneer_interfaces__srv__Getpoints_Request *)allocator.allocate(sizeof(pioneer_interfaces__srv__Getpoints_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pioneer_interfaces__srv__Getpoints_Request));
  bool success = pioneer_interfaces__srv__Getpoints_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pioneer_interfaces__srv__Getpoints_Request__destroy(pioneer_interfaces__srv__Getpoints_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pioneer_interfaces__srv__Getpoints_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pioneer_interfaces__srv__Getpoints_Request__Sequence__init(pioneer_interfaces__srv__Getpoints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Request * data = NULL;

  if (size) {
    data = (pioneer_interfaces__srv__Getpoints_Request *)allocator.zero_allocate(size, sizeof(pioneer_interfaces__srv__Getpoints_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pioneer_interfaces__srv__Getpoints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pioneer_interfaces__srv__Getpoints_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pioneer_interfaces__srv__Getpoints_Request__Sequence__fini(pioneer_interfaces__srv__Getpoints_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pioneer_interfaces__srv__Getpoints_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pioneer_interfaces__srv__Getpoints_Request__Sequence *
pioneer_interfaces__srv__Getpoints_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Request__Sequence * array = (pioneer_interfaces__srv__Getpoints_Request__Sequence *)allocator.allocate(sizeof(pioneer_interfaces__srv__Getpoints_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pioneer_interfaces__srv__Getpoints_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pioneer_interfaces__srv__Getpoints_Request__Sequence__destroy(pioneer_interfaces__srv__Getpoints_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pioneer_interfaces__srv__Getpoints_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pioneer_interfaces__srv__Getpoints_Request__Sequence__are_equal(const pioneer_interfaces__srv__Getpoints_Request__Sequence * lhs, const pioneer_interfaces__srv__Getpoints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pioneer_interfaces__srv__Getpoints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pioneer_interfaces__srv__Getpoints_Request__Sequence__copy(
  const pioneer_interfaces__srv__Getpoints_Request__Sequence * input,
  pioneer_interfaces__srv__Getpoints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pioneer_interfaces__srv__Getpoints_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pioneer_interfaces__srv__Getpoints_Request * data =
      (pioneer_interfaces__srv__Getpoints_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pioneer_interfaces__srv__Getpoints_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pioneer_interfaces__srv__Getpoints_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pioneer_interfaces__srv__Getpoints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pioneer_interfaces__srv__Getpoints_Response__init(pioneer_interfaces__srv__Getpoints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
pioneer_interfaces__srv__Getpoints_Response__fini(pioneer_interfaces__srv__Getpoints_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
pioneer_interfaces__srv__Getpoints_Response__are_equal(const pioneer_interfaces__srv__Getpoints_Response * lhs, const pioneer_interfaces__srv__Getpoints_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
pioneer_interfaces__srv__Getpoints_Response__copy(
  const pioneer_interfaces__srv__Getpoints_Response * input,
  pioneer_interfaces__srv__Getpoints_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

pioneer_interfaces__srv__Getpoints_Response *
pioneer_interfaces__srv__Getpoints_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Response * msg = (pioneer_interfaces__srv__Getpoints_Response *)allocator.allocate(sizeof(pioneer_interfaces__srv__Getpoints_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pioneer_interfaces__srv__Getpoints_Response));
  bool success = pioneer_interfaces__srv__Getpoints_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pioneer_interfaces__srv__Getpoints_Response__destroy(pioneer_interfaces__srv__Getpoints_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pioneer_interfaces__srv__Getpoints_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pioneer_interfaces__srv__Getpoints_Response__Sequence__init(pioneer_interfaces__srv__Getpoints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Response * data = NULL;

  if (size) {
    data = (pioneer_interfaces__srv__Getpoints_Response *)allocator.zero_allocate(size, sizeof(pioneer_interfaces__srv__Getpoints_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pioneer_interfaces__srv__Getpoints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pioneer_interfaces__srv__Getpoints_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pioneer_interfaces__srv__Getpoints_Response__Sequence__fini(pioneer_interfaces__srv__Getpoints_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pioneer_interfaces__srv__Getpoints_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pioneer_interfaces__srv__Getpoints_Response__Sequence *
pioneer_interfaces__srv__Getpoints_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Response__Sequence * array = (pioneer_interfaces__srv__Getpoints_Response__Sequence *)allocator.allocate(sizeof(pioneer_interfaces__srv__Getpoints_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pioneer_interfaces__srv__Getpoints_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pioneer_interfaces__srv__Getpoints_Response__Sequence__destroy(pioneer_interfaces__srv__Getpoints_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pioneer_interfaces__srv__Getpoints_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pioneer_interfaces__srv__Getpoints_Response__Sequence__are_equal(const pioneer_interfaces__srv__Getpoints_Response__Sequence * lhs, const pioneer_interfaces__srv__Getpoints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pioneer_interfaces__srv__Getpoints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pioneer_interfaces__srv__Getpoints_Response__Sequence__copy(
  const pioneer_interfaces__srv__Getpoints_Response__Sequence * input,
  pioneer_interfaces__srv__Getpoints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pioneer_interfaces__srv__Getpoints_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pioneer_interfaces__srv__Getpoints_Response * data =
      (pioneer_interfaces__srv__Getpoints_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pioneer_interfaces__srv__Getpoints_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pioneer_interfaces__srv__Getpoints_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pioneer_interfaces__srv__Getpoints_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pioneer_interfaces/srv/detail/getpoints__functions.h"

bool
pioneer_interfaces__srv__Getpoints_Event__init(pioneer_interfaces__srv__Getpoints_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pioneer_interfaces__srv__Getpoints_Event__fini(msg);
    return false;
  }
  // request
  if (!pioneer_interfaces__srv__Getpoints_Request__Sequence__init(&msg->request, 0)) {
    pioneer_interfaces__srv__Getpoints_Event__fini(msg);
    return false;
  }
  // response
  if (!pioneer_interfaces__srv__Getpoints_Response__Sequence__init(&msg->response, 0)) {
    pioneer_interfaces__srv__Getpoints_Event__fini(msg);
    return false;
  }
  return true;
}

void
pioneer_interfaces__srv__Getpoints_Event__fini(pioneer_interfaces__srv__Getpoints_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pioneer_interfaces__srv__Getpoints_Request__Sequence__fini(&msg->request);
  // response
  pioneer_interfaces__srv__Getpoints_Response__Sequence__fini(&msg->response);
}

bool
pioneer_interfaces__srv__Getpoints_Event__are_equal(const pioneer_interfaces__srv__Getpoints_Event * lhs, const pioneer_interfaces__srv__Getpoints_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pioneer_interfaces__srv__Getpoints_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pioneer_interfaces__srv__Getpoints_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pioneer_interfaces__srv__Getpoints_Event__copy(
  const pioneer_interfaces__srv__Getpoints_Event * input,
  pioneer_interfaces__srv__Getpoints_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pioneer_interfaces__srv__Getpoints_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pioneer_interfaces__srv__Getpoints_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pioneer_interfaces__srv__Getpoints_Event *
pioneer_interfaces__srv__Getpoints_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Event * msg = (pioneer_interfaces__srv__Getpoints_Event *)allocator.allocate(sizeof(pioneer_interfaces__srv__Getpoints_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pioneer_interfaces__srv__Getpoints_Event));
  bool success = pioneer_interfaces__srv__Getpoints_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pioneer_interfaces__srv__Getpoints_Event__destroy(pioneer_interfaces__srv__Getpoints_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pioneer_interfaces__srv__Getpoints_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pioneer_interfaces__srv__Getpoints_Event__Sequence__init(pioneer_interfaces__srv__Getpoints_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Event * data = NULL;

  if (size) {
    data = (pioneer_interfaces__srv__Getpoints_Event *)allocator.zero_allocate(size, sizeof(pioneer_interfaces__srv__Getpoints_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pioneer_interfaces__srv__Getpoints_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pioneer_interfaces__srv__Getpoints_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pioneer_interfaces__srv__Getpoints_Event__Sequence__fini(pioneer_interfaces__srv__Getpoints_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pioneer_interfaces__srv__Getpoints_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pioneer_interfaces__srv__Getpoints_Event__Sequence *
pioneer_interfaces__srv__Getpoints_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pioneer_interfaces__srv__Getpoints_Event__Sequence * array = (pioneer_interfaces__srv__Getpoints_Event__Sequence *)allocator.allocate(sizeof(pioneer_interfaces__srv__Getpoints_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pioneer_interfaces__srv__Getpoints_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pioneer_interfaces__srv__Getpoints_Event__Sequence__destroy(pioneer_interfaces__srv__Getpoints_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pioneer_interfaces__srv__Getpoints_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pioneer_interfaces__srv__Getpoints_Event__Sequence__are_equal(const pioneer_interfaces__srv__Getpoints_Event__Sequence * lhs, const pioneer_interfaces__srv__Getpoints_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pioneer_interfaces__srv__Getpoints_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pioneer_interfaces__srv__Getpoints_Event__Sequence__copy(
  const pioneer_interfaces__srv__Getpoints_Event__Sequence * input,
  pioneer_interfaces__srv__Getpoints_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pioneer_interfaces__srv__Getpoints_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pioneer_interfaces__srv__Getpoints_Event * data =
      (pioneer_interfaces__srv__Getpoints_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pioneer_interfaces__srv__Getpoints_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pioneer_interfaces__srv__Getpoints_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pioneer_interfaces__srv__Getpoints_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
