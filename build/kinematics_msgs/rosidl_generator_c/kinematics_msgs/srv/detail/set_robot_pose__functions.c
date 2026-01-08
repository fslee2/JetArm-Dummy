// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kinematics_msgs:srv/SetRobotPose.idl
// generated code does not contain a copyright notice
#include "kinematics_msgs/srv/detail/set_robot_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `position`
// Member `pitch_range`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kinematics_msgs__srv__SetRobotPose_Request__init(kinematics_msgs__srv__SetRobotPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    kinematics_msgs__srv__SetRobotPose_Request__fini(msg);
    return false;
  }
  // pitch
  // pitch_range
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pitch_range, 0)) {
    kinematics_msgs__srv__SetRobotPose_Request__fini(msg);
    return false;
  }
  // resolution
  // duration
  return true;
}

void
kinematics_msgs__srv__SetRobotPose_Request__fini(kinematics_msgs__srv__SetRobotPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // pitch
  // pitch_range
  rosidl_runtime_c__double__Sequence__fini(&msg->pitch_range);
  // resolution
  // duration
}

bool
kinematics_msgs__srv__SetRobotPose_Request__are_equal(const kinematics_msgs__srv__SetRobotPose_Request * lhs, const kinematics_msgs__srv__SetRobotPose_Request * rhs)
{
  if (!lhs || !rhs) {
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
  // pitch_range
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pitch_range), &(rhs->pitch_range)))
  {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
kinematics_msgs__srv__SetRobotPose_Request__copy(
  const kinematics_msgs__srv__SetRobotPose_Request * input,
  kinematics_msgs__srv__SetRobotPose_Request * output)
{
  if (!input || !output) {
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
  // pitch_range
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pitch_range), &(output->pitch_range)))
  {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  // duration
  output->duration = input->duration;
  return true;
}

kinematics_msgs__srv__SetRobotPose_Request *
kinematics_msgs__srv__SetRobotPose_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__SetRobotPose_Request * msg = (kinematics_msgs__srv__SetRobotPose_Request *)allocator.allocate(sizeof(kinematics_msgs__srv__SetRobotPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinematics_msgs__srv__SetRobotPose_Request));
  bool success = kinematics_msgs__srv__SetRobotPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinematics_msgs__srv__SetRobotPose_Request__destroy(kinematics_msgs__srv__SetRobotPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinematics_msgs__srv__SetRobotPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinematics_msgs__srv__SetRobotPose_Request__Sequence__init(kinematics_msgs__srv__SetRobotPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__SetRobotPose_Request * data = NULL;

  if (size) {
    data = (kinematics_msgs__srv__SetRobotPose_Request *)allocator.zero_allocate(size, sizeof(kinematics_msgs__srv__SetRobotPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinematics_msgs__srv__SetRobotPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinematics_msgs__srv__SetRobotPose_Request__fini(&data[i - 1]);
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
kinematics_msgs__srv__SetRobotPose_Request__Sequence__fini(kinematics_msgs__srv__SetRobotPose_Request__Sequence * array)
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
      kinematics_msgs__srv__SetRobotPose_Request__fini(&array->data[i]);
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

kinematics_msgs__srv__SetRobotPose_Request__Sequence *
kinematics_msgs__srv__SetRobotPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__SetRobotPose_Request__Sequence * array = (kinematics_msgs__srv__SetRobotPose_Request__Sequence *)allocator.allocate(sizeof(kinematics_msgs__srv__SetRobotPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinematics_msgs__srv__SetRobotPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinematics_msgs__srv__SetRobotPose_Request__Sequence__destroy(kinematics_msgs__srv__SetRobotPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinematics_msgs__srv__SetRobotPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinematics_msgs__srv__SetRobotPose_Request__Sequence__are_equal(const kinematics_msgs__srv__SetRobotPose_Request__Sequence * lhs, const kinematics_msgs__srv__SetRobotPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinematics_msgs__srv__SetRobotPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinematics_msgs__srv__SetRobotPose_Request__Sequence__copy(
  const kinematics_msgs__srv__SetRobotPose_Request__Sequence * input,
  kinematics_msgs__srv__SetRobotPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinematics_msgs__srv__SetRobotPose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinematics_msgs__srv__SetRobotPose_Request * data =
      (kinematics_msgs__srv__SetRobotPose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinematics_msgs__srv__SetRobotPose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinematics_msgs__srv__SetRobotPose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinematics_msgs__srv__SetRobotPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pulse`
// Member `current_pulse`
// Member `rpy`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kinematics_msgs__srv__SetRobotPose_Response__init(kinematics_msgs__srv__SetRobotPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // pulse
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->pulse, 0)) {
    kinematics_msgs__srv__SetRobotPose_Response__fini(msg);
    return false;
  }
  // current_pulse
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->current_pulse, 0)) {
    kinematics_msgs__srv__SetRobotPose_Response__fini(msg);
    return false;
  }
  // rpy
  if (!rosidl_runtime_c__double__Sequence__init(&msg->rpy, 0)) {
    kinematics_msgs__srv__SetRobotPose_Response__fini(msg);
    return false;
  }
  // min_variation
  return true;
}

void
kinematics_msgs__srv__SetRobotPose_Response__fini(kinematics_msgs__srv__SetRobotPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // pulse
  rosidl_runtime_c__uint16__Sequence__fini(&msg->pulse);
  // current_pulse
  rosidl_runtime_c__uint16__Sequence__fini(&msg->current_pulse);
  // rpy
  rosidl_runtime_c__double__Sequence__fini(&msg->rpy);
  // min_variation
}

bool
kinematics_msgs__srv__SetRobotPose_Response__are_equal(const kinematics_msgs__srv__SetRobotPose_Response * lhs, const kinematics_msgs__srv__SetRobotPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // pulse
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->pulse), &(rhs->pulse)))
  {
    return false;
  }
  // current_pulse
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->current_pulse), &(rhs->current_pulse)))
  {
    return false;
  }
  // rpy
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->rpy), &(rhs->rpy)))
  {
    return false;
  }
  // min_variation
  if (lhs->min_variation != rhs->min_variation) {
    return false;
  }
  return true;
}

bool
kinematics_msgs__srv__SetRobotPose_Response__copy(
  const kinematics_msgs__srv__SetRobotPose_Response * input,
  kinematics_msgs__srv__SetRobotPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // pulse
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->pulse), &(output->pulse)))
  {
    return false;
  }
  // current_pulse
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->current_pulse), &(output->current_pulse)))
  {
    return false;
  }
  // rpy
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->rpy), &(output->rpy)))
  {
    return false;
  }
  // min_variation
  output->min_variation = input->min_variation;
  return true;
}

kinematics_msgs__srv__SetRobotPose_Response *
kinematics_msgs__srv__SetRobotPose_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__SetRobotPose_Response * msg = (kinematics_msgs__srv__SetRobotPose_Response *)allocator.allocate(sizeof(kinematics_msgs__srv__SetRobotPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinematics_msgs__srv__SetRobotPose_Response));
  bool success = kinematics_msgs__srv__SetRobotPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinematics_msgs__srv__SetRobotPose_Response__destroy(kinematics_msgs__srv__SetRobotPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinematics_msgs__srv__SetRobotPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinematics_msgs__srv__SetRobotPose_Response__Sequence__init(kinematics_msgs__srv__SetRobotPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__SetRobotPose_Response * data = NULL;

  if (size) {
    data = (kinematics_msgs__srv__SetRobotPose_Response *)allocator.zero_allocate(size, sizeof(kinematics_msgs__srv__SetRobotPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinematics_msgs__srv__SetRobotPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinematics_msgs__srv__SetRobotPose_Response__fini(&data[i - 1]);
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
kinematics_msgs__srv__SetRobotPose_Response__Sequence__fini(kinematics_msgs__srv__SetRobotPose_Response__Sequence * array)
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
      kinematics_msgs__srv__SetRobotPose_Response__fini(&array->data[i]);
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

kinematics_msgs__srv__SetRobotPose_Response__Sequence *
kinematics_msgs__srv__SetRobotPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__SetRobotPose_Response__Sequence * array = (kinematics_msgs__srv__SetRobotPose_Response__Sequence *)allocator.allocate(sizeof(kinematics_msgs__srv__SetRobotPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinematics_msgs__srv__SetRobotPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinematics_msgs__srv__SetRobotPose_Response__Sequence__destroy(kinematics_msgs__srv__SetRobotPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinematics_msgs__srv__SetRobotPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinematics_msgs__srv__SetRobotPose_Response__Sequence__are_equal(const kinematics_msgs__srv__SetRobotPose_Response__Sequence * lhs, const kinematics_msgs__srv__SetRobotPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinematics_msgs__srv__SetRobotPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinematics_msgs__srv__SetRobotPose_Response__Sequence__copy(
  const kinematics_msgs__srv__SetRobotPose_Response__Sequence * input,
  kinematics_msgs__srv__SetRobotPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinematics_msgs__srv__SetRobotPose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinematics_msgs__srv__SetRobotPose_Response * data =
      (kinematics_msgs__srv__SetRobotPose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinematics_msgs__srv__SetRobotPose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinematics_msgs__srv__SetRobotPose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinematics_msgs__srv__SetRobotPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
