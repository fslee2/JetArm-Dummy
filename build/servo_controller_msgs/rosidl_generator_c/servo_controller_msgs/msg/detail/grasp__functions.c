// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from servo_controller_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice
#include "servo_controller_msgs/msg/detail/grasp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
servo_controller_msgs__msg__Grasp__init(servo_controller_msgs__msg__Grasp * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    servo_controller_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    servo_controller_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // pitch
  // angle
  // gripper
  // grasp_posture
  // pre_grasp_posture
  return true;
}

void
servo_controller_msgs__msg__Grasp__fini(servo_controller_msgs__msg__Grasp * msg)
{
  if (!msg) {
    return;
  }
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // pitch
  // angle
  // gripper
  // grasp_posture
  // pre_grasp_posture
}

bool
servo_controller_msgs__msg__Grasp__are_equal(const servo_controller_msgs__msg__Grasp * lhs, const servo_controller_msgs__msg__Grasp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // gripper
  if (lhs->gripper != rhs->gripper) {
    return false;
  }
  // grasp_posture
  if (lhs->grasp_posture != rhs->grasp_posture) {
    return false;
  }
  // pre_grasp_posture
  if (lhs->pre_grasp_posture != rhs->pre_grasp_posture) {
    return false;
  }
  return true;
}

bool
servo_controller_msgs__msg__Grasp__copy(
  const servo_controller_msgs__msg__Grasp * input,
  servo_controller_msgs__msg__Grasp * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // pitch
  output->pitch = input->pitch;
  // angle
  output->angle = input->angle;
  // gripper
  output->gripper = input->gripper;
  // grasp_posture
  output->grasp_posture = input->grasp_posture;
  // pre_grasp_posture
  output->pre_grasp_posture = input->pre_grasp_posture;
  return true;
}

servo_controller_msgs__msg__Grasp *
servo_controller_msgs__msg__Grasp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__Grasp * msg = (servo_controller_msgs__msg__Grasp *)allocator.allocate(sizeof(servo_controller_msgs__msg__Grasp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_controller_msgs__msg__Grasp));
  bool success = servo_controller_msgs__msg__Grasp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_controller_msgs__msg__Grasp__destroy(servo_controller_msgs__msg__Grasp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_controller_msgs__msg__Grasp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_controller_msgs__msg__Grasp__Sequence__init(servo_controller_msgs__msg__Grasp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__Grasp * data = NULL;

  if (size) {
    data = (servo_controller_msgs__msg__Grasp *)allocator.zero_allocate(size, sizeof(servo_controller_msgs__msg__Grasp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_controller_msgs__msg__Grasp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_controller_msgs__msg__Grasp__fini(&data[i - 1]);
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
servo_controller_msgs__msg__Grasp__Sequence__fini(servo_controller_msgs__msg__Grasp__Sequence * array)
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
      servo_controller_msgs__msg__Grasp__fini(&array->data[i]);
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

servo_controller_msgs__msg__Grasp__Sequence *
servo_controller_msgs__msg__Grasp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_controller_msgs__msg__Grasp__Sequence * array = (servo_controller_msgs__msg__Grasp__Sequence *)allocator.allocate(sizeof(servo_controller_msgs__msg__Grasp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_controller_msgs__msg__Grasp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_controller_msgs__msg__Grasp__Sequence__destroy(servo_controller_msgs__msg__Grasp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_controller_msgs__msg__Grasp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_controller_msgs__msg__Grasp__Sequence__are_equal(const servo_controller_msgs__msg__Grasp__Sequence * lhs, const servo_controller_msgs__msg__Grasp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_controller_msgs__msg__Grasp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_controller_msgs__msg__Grasp__Sequence__copy(
  const servo_controller_msgs__msg__Grasp__Sequence * input,
  servo_controller_msgs__msg__Grasp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_controller_msgs__msg__Grasp);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_controller_msgs__msg__Grasp * data =
      (servo_controller_msgs__msg__Grasp *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_controller_msgs__msg__Grasp__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_controller_msgs__msg__Grasp__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_controller_msgs__msg__Grasp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
