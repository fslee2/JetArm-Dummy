// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from servo_controller_msgs:msg/ServosPosition.idl
// generated code does not contain a copyright notice
#include "servo_controller_msgs/msg/detail/servos_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position_unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "servo_controller_msgs/msg/detail/servo_position__functions.h"

bool
servo_controller_msgs__msg__ServosPosition__init(servo_controller_msgs__msg__ServosPosition * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  // position_unit
  if (!rosidl_runtime_c__String__init(&msg->position_unit)) {
    servo_controller_msgs__msg__ServosPosition__fini(msg);
    return false;
  }
  // position
  if (!servo_controller_msgs__msg__ServoPosition__Sequence__init(&msg->position, 0)) {
    servo_controller_msgs__msg__ServosPosition__fini(msg);
    return false;
  }
  return true;
}

void
servo_controller_msgs__msg__ServosPosition__fini(servo_controller_msgs__msg__ServosPosition * msg)
{
  if (!msg) {
    return;
  }
  // duration
  // position_unit
  rosidl_runtime_c__String__fini(&msg->position_unit);
  // position
  servo_controller_msgs__msg__ServoPosition__Sequence__fini(&msg->position);
}

bool
servo_controller_msgs__msg__ServosPosition__are_equal(const servo_controller_msgs__msg__ServosPosition * lhs, const servo_controller_msgs__msg__ServosPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // position_unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->position_unit), &(rhs->position_unit)))
  {
    return false;
  }
  // position
  if (!servo_controller_msgs__msg__ServoPosition__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
servo_controller_msgs__msg__ServosPosition__copy(
  const servo_controller_msgs__msg__ServosPosition * input,
  servo_controller_msgs__msg__ServosPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  output->duration = input->duration;
  // position_unit
  if (!rosidl_runtime_c__String__copy(
      &(input->position_unit), &(output->position_unit)))
  {
    return false;
  }
  // position
  if (!servo_controller_msgs__msg__ServoPosition__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

servo_controller_msgs__msg__ServosPosition *
servo_controller_msgs__msg__ServosPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServosPosition * msg = (servo_controller_msgs__msg__ServosPosition *)allocator.allocate(sizeof(servo_controller_msgs__msg__ServosPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_controller_msgs__msg__ServosPosition));
  bool success = servo_controller_msgs__msg__ServosPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_controller_msgs__msg__ServosPosition__destroy(servo_controller_msgs__msg__ServosPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_controller_msgs__msg__ServosPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_controller_msgs__msg__ServosPosition__Sequence__init(servo_controller_msgs__msg__ServosPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServosPosition * data = NULL;

  if (size) {
    data = (servo_controller_msgs__msg__ServosPosition *)allocator.zero_allocate(size, sizeof(servo_controller_msgs__msg__ServosPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_controller_msgs__msg__ServosPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_controller_msgs__msg__ServosPosition__fini(&data[i - 1]);
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
servo_controller_msgs__msg__ServosPosition__Sequence__fini(servo_controller_msgs__msg__ServosPosition__Sequence * array)
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
      servo_controller_msgs__msg__ServosPosition__fini(&array->data[i]);
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

servo_controller_msgs__msg__ServosPosition__Sequence *
servo_controller_msgs__msg__ServosPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServosPosition__Sequence * array = (servo_controller_msgs__msg__ServosPosition__Sequence *)allocator.allocate(sizeof(servo_controller_msgs__msg__ServosPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_controller_msgs__msg__ServosPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_controller_msgs__msg__ServosPosition__Sequence__destroy(servo_controller_msgs__msg__ServosPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_controller_msgs__msg__ServosPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_controller_msgs__msg__ServosPosition__Sequence__are_equal(const servo_controller_msgs__msg__ServosPosition__Sequence * lhs, const servo_controller_msgs__msg__ServosPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_controller_msgs__msg__ServosPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_controller_msgs__msg__ServosPosition__Sequence__copy(
  const servo_controller_msgs__msg__ServosPosition__Sequence * input,
  servo_controller_msgs__msg__ServosPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_controller_msgs__msg__ServosPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_controller_msgs__msg__ServosPosition * data =
      (servo_controller_msgs__msg__ServosPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_controller_msgs__msg__ServosPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_controller_msgs__msg__ServosPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_controller_msgs__msg__ServosPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
