// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chassis_msgs:msg/Mecanum.idl
// generated code does not contain a copyright notice
#include "chassis_msgs/msg/detail/mecanum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
chassis_msgs__msg__Mecanum__init(chassis_msgs__msg__Mecanum * msg)
{
  if (!msg) {
    return false;
  }
  // velocity
  // direction
  // angular_rate
  return true;
}

void
chassis_msgs__msg__Mecanum__fini(chassis_msgs__msg__Mecanum * msg)
{
  if (!msg) {
    return;
  }
  // velocity
  // direction
  // angular_rate
}

bool
chassis_msgs__msg__Mecanum__are_equal(const chassis_msgs__msg__Mecanum * lhs, const chassis_msgs__msg__Mecanum * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // angular_rate
  if (lhs->angular_rate != rhs->angular_rate) {
    return false;
  }
  return true;
}

bool
chassis_msgs__msg__Mecanum__copy(
  const chassis_msgs__msg__Mecanum * input,
  chassis_msgs__msg__Mecanum * output)
{
  if (!input || !output) {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // direction
  output->direction = input->direction;
  // angular_rate
  output->angular_rate = input->angular_rate;
  return true;
}

chassis_msgs__msg__Mecanum *
chassis_msgs__msg__Mecanum__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_msgs__msg__Mecanum * msg = (chassis_msgs__msg__Mecanum *)allocator.allocate(sizeof(chassis_msgs__msg__Mecanum), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_msgs__msg__Mecanum));
  bool success = chassis_msgs__msg__Mecanum__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chassis_msgs__msg__Mecanum__destroy(chassis_msgs__msg__Mecanum * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chassis_msgs__msg__Mecanum__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chassis_msgs__msg__Mecanum__Sequence__init(chassis_msgs__msg__Mecanum__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_msgs__msg__Mecanum * data = NULL;

  if (size) {
    data = (chassis_msgs__msg__Mecanum *)allocator.zero_allocate(size, sizeof(chassis_msgs__msg__Mecanum), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_msgs__msg__Mecanum__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_msgs__msg__Mecanum__fini(&data[i - 1]);
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
chassis_msgs__msg__Mecanum__Sequence__fini(chassis_msgs__msg__Mecanum__Sequence * array)
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
      chassis_msgs__msg__Mecanum__fini(&array->data[i]);
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

chassis_msgs__msg__Mecanum__Sequence *
chassis_msgs__msg__Mecanum__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_msgs__msg__Mecanum__Sequence * array = (chassis_msgs__msg__Mecanum__Sequence *)allocator.allocate(sizeof(chassis_msgs__msg__Mecanum__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chassis_msgs__msg__Mecanum__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chassis_msgs__msg__Mecanum__Sequence__destroy(chassis_msgs__msg__Mecanum__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chassis_msgs__msg__Mecanum__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chassis_msgs__msg__Mecanum__Sequence__are_equal(const chassis_msgs__msg__Mecanum__Sequence * lhs, const chassis_msgs__msg__Mecanum__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chassis_msgs__msg__Mecanum__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chassis_msgs__msg__Mecanum__Sequence__copy(
  const chassis_msgs__msg__Mecanum__Sequence * input,
  chassis_msgs__msg__Mecanum__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chassis_msgs__msg__Mecanum);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chassis_msgs__msg__Mecanum * data =
      (chassis_msgs__msg__Mecanum *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chassis_msgs__msg__Mecanum__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chassis_msgs__msg__Mecanum__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chassis_msgs__msg__Mecanum__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
