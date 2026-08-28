// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multi_agent_search_interfaces:srv/SetMap.idl
// generated code does not contain a copyright notice
#include "multi_agent_search_interfaces/srv/detail/set_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `map`
#include "nav_msgs/msg/detail/occupancy_grid__functions.h"

bool
multi_agent_search_interfaces__srv__SetMap_Request__init(multi_agent_search_interfaces__srv__SetMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__init(&msg->map)) {
    multi_agent_search_interfaces__srv__SetMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
multi_agent_search_interfaces__srv__SetMap_Request__fini(multi_agent_search_interfaces__srv__SetMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // map
  nav_msgs__msg__OccupancyGrid__fini(&msg->map);
}

bool
multi_agent_search_interfaces__srv__SetMap_Request__are_equal(const multi_agent_search_interfaces__srv__SetMap_Request * lhs, const multi_agent_search_interfaces__srv__SetMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  return true;
}

bool
multi_agent_search_interfaces__srv__SetMap_Request__copy(
  const multi_agent_search_interfaces__srv__SetMap_Request * input,
  multi_agent_search_interfaces__srv__SetMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // map
  if (!nav_msgs__msg__OccupancyGrid__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  return true;
}

multi_agent_search_interfaces__srv__SetMap_Request *
multi_agent_search_interfaces__srv__SetMap_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Request * msg = (multi_agent_search_interfaces__srv__SetMap_Request *)allocator.allocate(sizeof(multi_agent_search_interfaces__srv__SetMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_agent_search_interfaces__srv__SetMap_Request));
  bool success = multi_agent_search_interfaces__srv__SetMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_agent_search_interfaces__srv__SetMap_Request__destroy(multi_agent_search_interfaces__srv__SetMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_agent_search_interfaces__srv__SetMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_agent_search_interfaces__srv__SetMap_Request__Sequence__init(multi_agent_search_interfaces__srv__SetMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Request * data = NULL;

  if (size) {
    data = (multi_agent_search_interfaces__srv__SetMap_Request *)allocator.zero_allocate(size, sizeof(multi_agent_search_interfaces__srv__SetMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_agent_search_interfaces__srv__SetMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_agent_search_interfaces__srv__SetMap_Request__fini(&data[i - 1]);
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
multi_agent_search_interfaces__srv__SetMap_Request__Sequence__fini(multi_agent_search_interfaces__srv__SetMap_Request__Sequence * array)
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
      multi_agent_search_interfaces__srv__SetMap_Request__fini(&array->data[i]);
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

multi_agent_search_interfaces__srv__SetMap_Request__Sequence *
multi_agent_search_interfaces__srv__SetMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Request__Sequence * array = (multi_agent_search_interfaces__srv__SetMap_Request__Sequence *)allocator.allocate(sizeof(multi_agent_search_interfaces__srv__SetMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_agent_search_interfaces__srv__SetMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_agent_search_interfaces__srv__SetMap_Request__Sequence__destroy(multi_agent_search_interfaces__srv__SetMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_agent_search_interfaces__srv__SetMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_agent_search_interfaces__srv__SetMap_Request__Sequence__are_equal(const multi_agent_search_interfaces__srv__SetMap_Request__Sequence * lhs, const multi_agent_search_interfaces__srv__SetMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_agent_search_interfaces__srv__SetMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_agent_search_interfaces__srv__SetMap_Request__Sequence__copy(
  const multi_agent_search_interfaces__srv__SetMap_Request__Sequence * input,
  multi_agent_search_interfaces__srv__SetMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_agent_search_interfaces__srv__SetMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_agent_search_interfaces__srv__SetMap_Request * data =
      (multi_agent_search_interfaces__srv__SetMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_agent_search_interfaces__srv__SetMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_agent_search_interfaces__srv__SetMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_agent_search_interfaces__srv__SetMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
multi_agent_search_interfaces__srv__SetMap_Response__init(multi_agent_search_interfaces__srv__SetMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
multi_agent_search_interfaces__srv__SetMap_Response__fini(multi_agent_search_interfaces__srv__SetMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
multi_agent_search_interfaces__srv__SetMap_Response__are_equal(const multi_agent_search_interfaces__srv__SetMap_Response * lhs, const multi_agent_search_interfaces__srv__SetMap_Response * rhs)
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
multi_agent_search_interfaces__srv__SetMap_Response__copy(
  const multi_agent_search_interfaces__srv__SetMap_Response * input,
  multi_agent_search_interfaces__srv__SetMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

multi_agent_search_interfaces__srv__SetMap_Response *
multi_agent_search_interfaces__srv__SetMap_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Response * msg = (multi_agent_search_interfaces__srv__SetMap_Response *)allocator.allocate(sizeof(multi_agent_search_interfaces__srv__SetMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_agent_search_interfaces__srv__SetMap_Response));
  bool success = multi_agent_search_interfaces__srv__SetMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_agent_search_interfaces__srv__SetMap_Response__destroy(multi_agent_search_interfaces__srv__SetMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_agent_search_interfaces__srv__SetMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_agent_search_interfaces__srv__SetMap_Response__Sequence__init(multi_agent_search_interfaces__srv__SetMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Response * data = NULL;

  if (size) {
    data = (multi_agent_search_interfaces__srv__SetMap_Response *)allocator.zero_allocate(size, sizeof(multi_agent_search_interfaces__srv__SetMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_agent_search_interfaces__srv__SetMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_agent_search_interfaces__srv__SetMap_Response__fini(&data[i - 1]);
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
multi_agent_search_interfaces__srv__SetMap_Response__Sequence__fini(multi_agent_search_interfaces__srv__SetMap_Response__Sequence * array)
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
      multi_agent_search_interfaces__srv__SetMap_Response__fini(&array->data[i]);
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

multi_agent_search_interfaces__srv__SetMap_Response__Sequence *
multi_agent_search_interfaces__srv__SetMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Response__Sequence * array = (multi_agent_search_interfaces__srv__SetMap_Response__Sequence *)allocator.allocate(sizeof(multi_agent_search_interfaces__srv__SetMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_agent_search_interfaces__srv__SetMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_agent_search_interfaces__srv__SetMap_Response__Sequence__destroy(multi_agent_search_interfaces__srv__SetMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_agent_search_interfaces__srv__SetMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_agent_search_interfaces__srv__SetMap_Response__Sequence__are_equal(const multi_agent_search_interfaces__srv__SetMap_Response__Sequence * lhs, const multi_agent_search_interfaces__srv__SetMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_agent_search_interfaces__srv__SetMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_agent_search_interfaces__srv__SetMap_Response__Sequence__copy(
  const multi_agent_search_interfaces__srv__SetMap_Response__Sequence * input,
  multi_agent_search_interfaces__srv__SetMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_agent_search_interfaces__srv__SetMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_agent_search_interfaces__srv__SetMap_Response * data =
      (multi_agent_search_interfaces__srv__SetMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_agent_search_interfaces__srv__SetMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_agent_search_interfaces__srv__SetMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_agent_search_interfaces__srv__SetMap_Response__copy(
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
// #include "multi_agent_search_interfaces/srv/detail/set_map__functions.h"

bool
multi_agent_search_interfaces__srv__SetMap_Event__init(multi_agent_search_interfaces__srv__SetMap_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    multi_agent_search_interfaces__srv__SetMap_Event__fini(msg);
    return false;
  }
  // request
  if (!multi_agent_search_interfaces__srv__SetMap_Request__Sequence__init(&msg->request, 0)) {
    multi_agent_search_interfaces__srv__SetMap_Event__fini(msg);
    return false;
  }
  // response
  if (!multi_agent_search_interfaces__srv__SetMap_Response__Sequence__init(&msg->response, 0)) {
    multi_agent_search_interfaces__srv__SetMap_Event__fini(msg);
    return false;
  }
  return true;
}

void
multi_agent_search_interfaces__srv__SetMap_Event__fini(multi_agent_search_interfaces__srv__SetMap_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  multi_agent_search_interfaces__srv__SetMap_Request__Sequence__fini(&msg->request);
  // response
  multi_agent_search_interfaces__srv__SetMap_Response__Sequence__fini(&msg->response);
}

bool
multi_agent_search_interfaces__srv__SetMap_Event__are_equal(const multi_agent_search_interfaces__srv__SetMap_Event * lhs, const multi_agent_search_interfaces__srv__SetMap_Event * rhs)
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
  if (!multi_agent_search_interfaces__srv__SetMap_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!multi_agent_search_interfaces__srv__SetMap_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
multi_agent_search_interfaces__srv__SetMap_Event__copy(
  const multi_agent_search_interfaces__srv__SetMap_Event * input,
  multi_agent_search_interfaces__srv__SetMap_Event * output)
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
  if (!multi_agent_search_interfaces__srv__SetMap_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!multi_agent_search_interfaces__srv__SetMap_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

multi_agent_search_interfaces__srv__SetMap_Event *
multi_agent_search_interfaces__srv__SetMap_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Event * msg = (multi_agent_search_interfaces__srv__SetMap_Event *)allocator.allocate(sizeof(multi_agent_search_interfaces__srv__SetMap_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_agent_search_interfaces__srv__SetMap_Event));
  bool success = multi_agent_search_interfaces__srv__SetMap_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_agent_search_interfaces__srv__SetMap_Event__destroy(multi_agent_search_interfaces__srv__SetMap_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_agent_search_interfaces__srv__SetMap_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_agent_search_interfaces__srv__SetMap_Event__Sequence__init(multi_agent_search_interfaces__srv__SetMap_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Event * data = NULL;

  if (size) {
    data = (multi_agent_search_interfaces__srv__SetMap_Event *)allocator.zero_allocate(size, sizeof(multi_agent_search_interfaces__srv__SetMap_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_agent_search_interfaces__srv__SetMap_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_agent_search_interfaces__srv__SetMap_Event__fini(&data[i - 1]);
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
multi_agent_search_interfaces__srv__SetMap_Event__Sequence__fini(multi_agent_search_interfaces__srv__SetMap_Event__Sequence * array)
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
      multi_agent_search_interfaces__srv__SetMap_Event__fini(&array->data[i]);
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

multi_agent_search_interfaces__srv__SetMap_Event__Sequence *
multi_agent_search_interfaces__srv__SetMap_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_agent_search_interfaces__srv__SetMap_Event__Sequence * array = (multi_agent_search_interfaces__srv__SetMap_Event__Sequence *)allocator.allocate(sizeof(multi_agent_search_interfaces__srv__SetMap_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_agent_search_interfaces__srv__SetMap_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_agent_search_interfaces__srv__SetMap_Event__Sequence__destroy(multi_agent_search_interfaces__srv__SetMap_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_agent_search_interfaces__srv__SetMap_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_agent_search_interfaces__srv__SetMap_Event__Sequence__are_equal(const multi_agent_search_interfaces__srv__SetMap_Event__Sequence * lhs, const multi_agent_search_interfaces__srv__SetMap_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_agent_search_interfaces__srv__SetMap_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_agent_search_interfaces__srv__SetMap_Event__Sequence__copy(
  const multi_agent_search_interfaces__srv__SetMap_Event__Sequence * input,
  multi_agent_search_interfaces__srv__SetMap_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_agent_search_interfaces__srv__SetMap_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_agent_search_interfaces__srv__SetMap_Event * data =
      (multi_agent_search_interfaces__srv__SetMap_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_agent_search_interfaces__srv__SetMap_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_agent_search_interfaces__srv__SetMap_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_agent_search_interfaces__srv__SetMap_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
