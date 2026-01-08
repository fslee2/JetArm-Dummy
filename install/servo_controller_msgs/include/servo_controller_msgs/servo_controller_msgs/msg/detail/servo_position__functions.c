// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from servo_controller_msgs:msg/ServoPosition.idl
// generated code does not contain a copyright notice
#include "servo_controller_msgs/msg/detail/servo_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
servo_controller_msgs__msg__ServoPosition__init(servo_controller_msgs__msg__ServoPosition * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // position
  return true;
}

void
servo_controller_msgs__msg__ServoPosition__fini(servo_controller_msgs__msg__ServoPosition * msg)
{
  if (!msg) {
    return;
  }
  // id
  // position
}

bool
servo_controller_msgs__msg__ServoPosition__are_equal(const servo_controller_msgs__msg__ServoPosition * lhs, const servo_controller_msgs__msg__ServoPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
servo_controller_msgs__msg__ServoPosition__copy(
  const servo_controller_msgs__msg__ServoPosition * input,
  servo_controller_msgs__msg__ServoPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // position
  output->position = input->position;
  return true;
}

servo_controller_msgs__msg__ServoPosition *
servo_controller_msgs__msg__ServoPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServoPosition * msg = (servo_controller_msgs__msg__ServoPosition *)allocator.allocate(sizeof(servo_controller_msgs__msg__ServoPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_controller_msgs__msg__ServoPosition));
  bool success = servo_controller_msgs__msg__ServoPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_controller_msgs__msg__ServoPosition__destroy(servo_controller_msgs__msg__ServoPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_controller_msgs__msg__ServoPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_controller_msgs__msg__ServoPosition__Sequence__init(servo_controller_msgs__msg__ServoPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServoPosition * data = NULL;

  if (size) {
    data = (servo_controller_msgs__msg__ServoPosition *)allocator.zero_allocate(size, sizeof(servo_controller_msgs__msg__ServoPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_controller_msgs__msg__ServoPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_controller_msgs__msg__ServoPosition__fini(&data[i - 1]);
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
servo_controller_msgs__msg__ServoPosition__Sequence__fini(servo_controller_msgs__msg__ServoPosition__Sequence * array)
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
      servo_controller_msgs__msg__ServoPosition__fini(&array->data[i]);
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

servo_controller_msgs__msg__ServoPosition__Sequence *
servo_controller_msgs__msg__ServoPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServoPosition__Sequence * array = (servo_controller_msgs__msg__ServoPosition__Sequence *)allocator.allocate(sizeof(servo_controller_msgs__msg__ServoPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_controller_msgs__msg__ServoPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_controller_msgs__msg__ServoPosition__Sequence__destroy(servo_controller_msgs__msg__ServoPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_controller_msgs__msg__ServoPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_controller_msgs__msg__ServoPosition__Sequence__are_equal(const servo_controller_msgs__msg__ServoPosition__Sequence * lhs, const servo_controller_msgs__msg__ServoPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_controller_msgs__msg__ServoPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_controller_msgs__msg__ServoPosition__Sequence__copy(
  const servo_controller_msgs__msg__ServoPosition__Sequence * input,
  servo_controller_msgs__msg__ServoPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_controller_msgs__msg__ServoPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_controller_msgs__msg__ServoPosition * data =
      (servo_controller_msgs__msg__ServoPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_controller_msgs__msg__ServoPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_controller_msgs__msg__ServoPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_controller_msgs__msg__ServoPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
