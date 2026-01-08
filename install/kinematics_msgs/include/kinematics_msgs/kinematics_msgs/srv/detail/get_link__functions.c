// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kinematics_msgs:srv/GetLink.idl
// generated code does not contain a copyright notice
#include "kinematics_msgs/srv/detail/get_link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
kinematics_msgs__srv__GetLink_Request__init(kinematics_msgs__srv__GetLink_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
kinematics_msgs__srv__GetLink_Request__fini(kinematics_msgs__srv__GetLink_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
kinematics_msgs__srv__GetLink_Request__are_equal(const kinematics_msgs__srv__GetLink_Request * lhs, const kinematics_msgs__srv__GetLink_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
kinematics_msgs__srv__GetLink_Request__copy(
  const kinematics_msgs__srv__GetLink_Request * input,
  kinematics_msgs__srv__GetLink_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

kinematics_msgs__srv__GetLink_Request *
kinematics_msgs__srv__GetLink_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__GetLink_Request * msg = (kinematics_msgs__srv__GetLink_Request *)allocator.allocate(sizeof(kinematics_msgs__srv__GetLink_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinematics_msgs__srv__GetLink_Request));
  bool success = kinematics_msgs__srv__GetLink_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinematics_msgs__srv__GetLink_Request__destroy(kinematics_msgs__srv__GetLink_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinematics_msgs__srv__GetLink_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinematics_msgs__srv__GetLink_Request__Sequence__init(kinematics_msgs__srv__GetLink_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__GetLink_Request * data = NULL;

  if (size) {
    data = (kinematics_msgs__srv__GetLink_Request *)allocator.zero_allocate(size, sizeof(kinematics_msgs__srv__GetLink_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinematics_msgs__srv__GetLink_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinematics_msgs__srv__GetLink_Request__fini(&data[i - 1]);
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
kinematics_msgs__srv__GetLink_Request__Sequence__fini(kinematics_msgs__srv__GetLink_Request__Sequence * array)
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
      kinematics_msgs__srv__GetLink_Request__fini(&array->data[i]);
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

kinematics_msgs__srv__GetLink_Request__Sequence *
kinematics_msgs__srv__GetLink_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__GetLink_Request__Sequence * array = (kinematics_msgs__srv__GetLink_Request__Sequence *)allocator.allocate(sizeof(kinematics_msgs__srv__GetLink_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinematics_msgs__srv__GetLink_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinematics_msgs__srv__GetLink_Request__Sequence__destroy(kinematics_msgs__srv__GetLink_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinematics_msgs__srv__GetLink_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinematics_msgs__srv__GetLink_Request__Sequence__are_equal(const kinematics_msgs__srv__GetLink_Request__Sequence * lhs, const kinematics_msgs__srv__GetLink_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinematics_msgs__srv__GetLink_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinematics_msgs__srv__GetLink_Request__Sequence__copy(
  const kinematics_msgs__srv__GetLink_Request__Sequence * input,
  kinematics_msgs__srv__GetLink_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinematics_msgs__srv__GetLink_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinematics_msgs__srv__GetLink_Request * data =
      (kinematics_msgs__srv__GetLink_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinematics_msgs__srv__GetLink_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinematics_msgs__srv__GetLink_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinematics_msgs__srv__GetLink_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `data`
#include "kinematics_msgs/msg/detail/link__functions.h"

bool
kinematics_msgs__srv__GetLink_Response__init(kinematics_msgs__srv__GetLink_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // data
  if (!kinematics_msgs__msg__Link__init(&msg->data)) {
    kinematics_msgs__srv__GetLink_Response__fini(msg);
    return false;
  }
  return true;
}

void
kinematics_msgs__srv__GetLink_Response__fini(kinematics_msgs__srv__GetLink_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // data
  kinematics_msgs__msg__Link__fini(&msg->data);
}

bool
kinematics_msgs__srv__GetLink_Response__are_equal(const kinematics_msgs__srv__GetLink_Response * lhs, const kinematics_msgs__srv__GetLink_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // data
  if (!kinematics_msgs__msg__Link__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
kinematics_msgs__srv__GetLink_Response__copy(
  const kinematics_msgs__srv__GetLink_Response * input,
  kinematics_msgs__srv__GetLink_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // data
  if (!kinematics_msgs__msg__Link__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

kinematics_msgs__srv__GetLink_Response *
kinematics_msgs__srv__GetLink_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__GetLink_Response * msg = (kinematics_msgs__srv__GetLink_Response *)allocator.allocate(sizeof(kinematics_msgs__srv__GetLink_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinematics_msgs__srv__GetLink_Response));
  bool success = kinematics_msgs__srv__GetLink_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinematics_msgs__srv__GetLink_Response__destroy(kinematics_msgs__srv__GetLink_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinematics_msgs__srv__GetLink_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinematics_msgs__srv__GetLink_Response__Sequence__init(kinematics_msgs__srv__GetLink_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__GetLink_Response * data = NULL;

  if (size) {
    data = (kinematics_msgs__srv__GetLink_Response *)allocator.zero_allocate(size, sizeof(kinematics_msgs__srv__GetLink_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinematics_msgs__srv__GetLink_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinematics_msgs__srv__GetLink_Response__fini(&data[i - 1]);
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
kinematics_msgs__srv__GetLink_Response__Sequence__fini(kinematics_msgs__srv__GetLink_Response__Sequence * array)
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
      kinematics_msgs__srv__GetLink_Response__fini(&array->data[i]);
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

kinematics_msgs__srv__GetLink_Response__Sequence *
kinematics_msgs__srv__GetLink_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinematics_msgs__srv__GetLink_Response__Sequence * array = (kinematics_msgs__srv__GetLink_Response__Sequence *)allocator.allocate(sizeof(kinematics_msgs__srv__GetLink_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinematics_msgs__srv__GetLink_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinematics_msgs__srv__GetLink_Response__Sequence__destroy(kinematics_msgs__srv__GetLink_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinematics_msgs__srv__GetLink_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinematics_msgs__srv__GetLink_Response__Sequence__are_equal(const kinematics_msgs__srv__GetLink_Response__Sequence * lhs, const kinematics_msgs__srv__GetLink_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinematics_msgs__srv__GetLink_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinematics_msgs__srv__GetLink_Response__Sequence__copy(
  const kinematics_msgs__srv__GetLink_Response__Sequence * input,
  kinematics_msgs__srv__GetLink_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinematics_msgs__srv__GetLink_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinematics_msgs__srv__GetLink_Response * data =
      (kinematics_msgs__srv__GetLink_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinematics_msgs__srv__GetLink_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinematics_msgs__srv__GetLink_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinematics_msgs__srv__GetLink_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
