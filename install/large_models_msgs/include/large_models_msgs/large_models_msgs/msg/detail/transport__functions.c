// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from large_models_msgs:msg/Transport.idl
// generated code does not contain a copyright notice
#include "large_models_msgs/msg/detail/transport__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action`
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
large_models_msgs__msg__Transport__init(large_models_msgs__msg__Transport * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    large_models_msgs__msg__Transport__fini(msg);
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__init(&msg->object_name)) {
    large_models_msgs__msg__Transport__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__float__Sequence__init(&msg->position, 0)) {
    large_models_msgs__msg__Transport__fini(msg);
    return false;
  }
  return true;
}

void
large_models_msgs__msg__Transport__fini(large_models_msgs__msg__Transport * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // object_name
  rosidl_runtime_c__String__fini(&msg->object_name);
  // position
  rosidl_runtime_c__float__Sequence__fini(&msg->position);
}

bool
large_models_msgs__msg__Transport__are_equal(const large_models_msgs__msg__Transport * lhs, const large_models_msgs__msg__Transport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_name), &(rhs->object_name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
large_models_msgs__msg__Transport__copy(
  const large_models_msgs__msg__Transport * input,
  large_models_msgs__msg__Transport * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__copy(
      &(input->object_name), &(output->object_name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

large_models_msgs__msg__Transport *
large_models_msgs__msg__Transport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__msg__Transport * msg = (large_models_msgs__msg__Transport *)allocator.allocate(sizeof(large_models_msgs__msg__Transport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(large_models_msgs__msg__Transport));
  bool success = large_models_msgs__msg__Transport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
large_models_msgs__msg__Transport__destroy(large_models_msgs__msg__Transport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    large_models_msgs__msg__Transport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
large_models_msgs__msg__Transport__Sequence__init(large_models_msgs__msg__Transport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__msg__Transport * data = NULL;

  if (size) {
    data = (large_models_msgs__msg__Transport *)allocator.zero_allocate(size, sizeof(large_models_msgs__msg__Transport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = large_models_msgs__msg__Transport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        large_models_msgs__msg__Transport__fini(&data[i - 1]);
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
large_models_msgs__msg__Transport__Sequence__fini(large_models_msgs__msg__Transport__Sequence * array)
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
      large_models_msgs__msg__Transport__fini(&array->data[i]);
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

large_models_msgs__msg__Transport__Sequence *
large_models_msgs__msg__Transport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__msg__Transport__Sequence * array = (large_models_msgs__msg__Transport__Sequence *)allocator.allocate(sizeof(large_models_msgs__msg__Transport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = large_models_msgs__msg__Transport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
large_models_msgs__msg__Transport__Sequence__destroy(large_models_msgs__msg__Transport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    large_models_msgs__msg__Transport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
large_models_msgs__msg__Transport__Sequence__are_equal(const large_models_msgs__msg__Transport__Sequence * lhs, const large_models_msgs__msg__Transport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!large_models_msgs__msg__Transport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
large_models_msgs__msg__Transport__Sequence__copy(
  const large_models_msgs__msg__Transport__Sequence * input,
  large_models_msgs__msg__Transport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(large_models_msgs__msg__Transport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    large_models_msgs__msg__Transport * data =
      (large_models_msgs__msg__Transport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!large_models_msgs__msg__Transport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          large_models_msgs__msg__Transport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!large_models_msgs__msg__Transport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
