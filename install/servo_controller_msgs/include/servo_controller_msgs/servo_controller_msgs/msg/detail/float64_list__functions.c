// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from servo_controller_msgs:msg/Float64List.idl
// generated code does not contain a copyright notice
#include "servo_controller_msgs/msg/detail/float64_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
servo_controller_msgs__msg__Float64List__init(servo_controller_msgs__msg__Float64List * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->positions, 0)) {
    servo_controller_msgs__msg__Float64List__fini(msg);
    return false;
  }
  return true;
}

void
servo_controller_msgs__msg__Float64List__fini(servo_controller_msgs__msg__Float64List * msg)
{
  if (!msg) {
    return;
  }
  // positions
  rosidl_runtime_c__double__Sequence__fini(&msg->positions);
}

bool
servo_controller_msgs__msg__Float64List__are_equal(const servo_controller_msgs__msg__Float64List * lhs, const servo_controller_msgs__msg__Float64List * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  return true;
}

bool
servo_controller_msgs__msg__Float64List__copy(
  const servo_controller_msgs__msg__Float64List * input,
  servo_controller_msgs__msg__Float64List * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  return true;
}

servo_controller_msgs__msg__Float64List *
servo_controller_msgs__msg__Float64List__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__Float64List * msg = (servo_controller_msgs__msg__Float64List *)allocator.allocate(sizeof(servo_controller_msgs__msg__Float64List), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_controller_msgs__msg__Float64List));
  bool success = servo_controller_msgs__msg__Float64List__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_controller_msgs__msg__Float64List__destroy(servo_controller_msgs__msg__Float64List * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_controller_msgs__msg__Float64List__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_controller_msgs__msg__Float64List__Sequence__init(servo_controller_msgs__msg__Float64List__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__Float64List * data = NULL;

  if (size) {
    data = (servo_controller_msgs__msg__Float64List *)allocator.zero_allocate(size, sizeof(servo_controller_msgs__msg__Float64List), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_controller_msgs__msg__Float64List__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_controller_msgs__msg__Float64List__fini(&data[i - 1]);
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
servo_controller_msgs__msg__Float64List__Sequence__fini(servo_controller_msgs__msg__Float64List__Sequence * array)
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
      servo_controller_msgs__msg__Float64List__fini(&array->data[i]);
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

servo_controller_msgs__msg__Float64List__Sequence *
servo_controller_msgs__msg__Float64List__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__Float64List__Sequence * array = (servo_controller_msgs__msg__Float64List__Sequence *)allocator.allocate(sizeof(servo_controller_msgs__msg__Float64List__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_controller_msgs__msg__Float64List__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_controller_msgs__msg__Float64List__Sequence__destroy(servo_controller_msgs__msg__Float64List__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_controller_msgs__msg__Float64List__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_controller_msgs__msg__Float64List__Sequence__are_equal(const servo_controller_msgs__msg__Float64List__Sequence * lhs, const servo_controller_msgs__msg__Float64List__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_controller_msgs__msg__Float64List__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_controller_msgs__msg__Float64List__Sequence__copy(
  const servo_controller_msgs__msg__Float64List__Sequence * input,
  servo_controller_msgs__msg__Float64List__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_controller_msgs__msg__Float64List);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_controller_msgs__msg__Float64List * data =
      (servo_controller_msgs__msg__Float64List *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_controller_msgs__msg__Float64List__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_controller_msgs__msg__Float64List__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_controller_msgs__msg__Float64List__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
