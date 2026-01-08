// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from servo_controller_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice
#include "servo_controller_msgs/msg/detail/servo_state_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `servo_state`
#include "servo_controller_msgs/msg/detail/servo_state__functions.h"

bool
servo_controller_msgs__msg__ServoStateList__init(servo_controller_msgs__msg__ServoStateList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    servo_controller_msgs__msg__ServoStateList__fini(msg);
    return false;
  }
  // servo_state
  if (!servo_controller_msgs__msg__ServoState__Sequence__init(&msg->servo_state, 0)) {
    servo_controller_msgs__msg__ServoStateList__fini(msg);
    return false;
  }
  return true;
}

void
servo_controller_msgs__msg__ServoStateList__fini(servo_controller_msgs__msg__ServoStateList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // servo_state
  servo_controller_msgs__msg__ServoState__Sequence__fini(&msg->servo_state);
}

bool
servo_controller_msgs__msg__ServoStateList__are_equal(const servo_controller_msgs__msg__ServoStateList * lhs, const servo_controller_msgs__msg__ServoStateList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // servo_state
  if (!servo_controller_msgs__msg__ServoState__Sequence__are_equal(
      &(lhs->servo_state), &(rhs->servo_state)))
  {
    return false;
  }
  return true;
}

bool
servo_controller_msgs__msg__ServoStateList__copy(
  const servo_controller_msgs__msg__ServoStateList * input,
  servo_controller_msgs__msg__ServoStateList * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // servo_state
  if (!servo_controller_msgs__msg__ServoState__Sequence__copy(
      &(input->servo_state), &(output->servo_state)))
  {
    return false;
  }
  return true;
}

servo_controller_msgs__msg__ServoStateList *
servo_controller_msgs__msg__ServoStateList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServoStateList * msg = (servo_controller_msgs__msg__ServoStateList *)allocator.allocate(sizeof(servo_controller_msgs__msg__ServoStateList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_controller_msgs__msg__ServoStateList));
  bool success = servo_controller_msgs__msg__ServoStateList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_controller_msgs__msg__ServoStateList__destroy(servo_controller_msgs__msg__ServoStateList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_controller_msgs__msg__ServoStateList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_controller_msgs__msg__ServoStateList__Sequence__init(servo_controller_msgs__msg__ServoStateList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServoStateList * data = NULL;

  if (size) {
    data = (servo_controller_msgs__msg__ServoStateList *)allocator.zero_allocate(size, sizeof(servo_controller_msgs__msg__ServoStateList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_controller_msgs__msg__ServoStateList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_controller_msgs__msg__ServoStateList__fini(&data[i - 1]);
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
servo_controller_msgs__msg__ServoStateList__Sequence__fini(servo_controller_msgs__msg__ServoStateList__Sequence * array)
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
      servo_controller_msgs__msg__ServoStateList__fini(&array->data[i]);
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

servo_controller_msgs__msg__ServoStateList__Sequence *
servo_controller_msgs__msg__ServoStateList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__ServoStateList__Sequence * array = (servo_controller_msgs__msg__ServoStateList__Sequence *)allocator.allocate(sizeof(servo_controller_msgs__msg__ServoStateList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_controller_msgs__msg__ServoStateList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_controller_msgs__msg__ServoStateList__Sequence__destroy(servo_controller_msgs__msg__ServoStateList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_controller_msgs__msg__ServoStateList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_controller_msgs__msg__ServoStateList__Sequence__are_equal(const servo_controller_msgs__msg__ServoStateList__Sequence * lhs, const servo_controller_msgs__msg__ServoStateList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_controller_msgs__msg__ServoStateList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_controller_msgs__msg__ServoStateList__Sequence__copy(
  const servo_controller_msgs__msg__ServoStateList__Sequence * input,
  servo_controller_msgs__msg__ServoStateList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_controller_msgs__msg__ServoStateList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_controller_msgs__msg__ServoStateList * data =
      (servo_controller_msgs__msg__ServoStateList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_controller_msgs__msg__ServoStateList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_controller_msgs__msg__ServoStateList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_controller_msgs__msg__ServoStateList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
