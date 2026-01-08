// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from large_models_msgs:msg/AgentResult.idl
// generated code does not contain a copyright notice
#include "large_models_msgs/msg/detail/agent_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action`
// Member `response`
#include "rosidl_runtime_c/string_functions.h"

bool
large_models_msgs__msg__AgentResult__init(large_models_msgs__msg__AgentResult * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__Sequence__init(&msg->action, 0)) {
    large_models_msgs__msg__AgentResult__fini(msg);
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    large_models_msgs__msg__AgentResult__fini(msg);
    return false;
  }
  return true;
}

void
large_models_msgs__msg__AgentResult__fini(large_models_msgs__msg__AgentResult * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__Sequence__fini(&msg->action);
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
large_models_msgs__msg__AgentResult__are_equal(const large_models_msgs__msg__AgentResult * lhs, const large_models_msgs__msg__AgentResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
large_models_msgs__msg__AgentResult__copy(
  const large_models_msgs__msg__AgentResult * input,
  large_models_msgs__msg__AgentResult * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

large_models_msgs__msg__AgentResult *
large_models_msgs__msg__AgentResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__msg__AgentResult * msg = (large_models_msgs__msg__AgentResult *)allocator.allocate(sizeof(large_models_msgs__msg__AgentResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(large_models_msgs__msg__AgentResult));
  bool success = large_models_msgs__msg__AgentResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
large_models_msgs__msg__AgentResult__destroy(large_models_msgs__msg__AgentResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    large_models_msgs__msg__AgentResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
large_models_msgs__msg__AgentResult__Sequence__init(large_models_msgs__msg__AgentResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__msg__AgentResult * data = NULL;

  if (size) {
    data = (large_models_msgs__msg__AgentResult *)allocator.zero_allocate(size, sizeof(large_models_msgs__msg__AgentResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = large_models_msgs__msg__AgentResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        large_models_msgs__msg__AgentResult__fini(&data[i - 1]);
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
large_models_msgs__msg__AgentResult__Sequence__fini(large_models_msgs__msg__AgentResult__Sequence * array)
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
      large_models_msgs__msg__AgentResult__fini(&array->data[i]);
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

large_models_msgs__msg__AgentResult__Sequence *
large_models_msgs__msg__AgentResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__msg__AgentResult__Sequence * array = (large_models_msgs__msg__AgentResult__Sequence *)allocator.allocate(sizeof(large_models_msgs__msg__AgentResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = large_models_msgs__msg__AgentResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
large_models_msgs__msg__AgentResult__Sequence__destroy(large_models_msgs__msg__AgentResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    large_models_msgs__msg__AgentResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
large_models_msgs__msg__AgentResult__Sequence__are_equal(const large_models_msgs__msg__AgentResult__Sequence * lhs, const large_models_msgs__msg__AgentResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!large_models_msgs__msg__AgentResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
large_models_msgs__msg__AgentResult__Sequence__copy(
  const large_models_msgs__msg__AgentResult__Sequence * input,
  large_models_msgs__msg__AgentResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(large_models_msgs__msg__AgentResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    large_models_msgs__msg__AgentResult * data =
      (large_models_msgs__msg__AgentResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!large_models_msgs__msg__AgentResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          large_models_msgs__msg__AgentResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!large_models_msgs__msg__AgentResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
