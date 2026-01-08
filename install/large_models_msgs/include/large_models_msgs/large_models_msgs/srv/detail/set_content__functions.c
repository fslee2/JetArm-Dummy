// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from large_models_msgs:srv/SetContent.idl
// generated code does not contain a copyright notice
#include "large_models_msgs/srv/detail/set_content__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `platform`
// Member `model`
// Member `api_key`
// Member `base_url`
// Member `app_id`
// Member `conversation_id`
// Member `token`
// Member `app_key`
// Member `secret_key`
// Member `prompt`
// Member `query`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
large_models_msgs__srv__SetContent_Request__init(large_models_msgs__srv__SetContent_Request * msg)
{
  if (!msg) {
    return false;
  }
  // platform
  if (!rosidl_runtime_c__String__init(&msg->platform)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // api_key
  if (!rosidl_runtime_c__String__init(&msg->api_key)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // base_url
  if (!rosidl_runtime_c__String__init(&msg->base_url)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // app_id
  if (!rosidl_runtime_c__String__init(&msg->app_id)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // conversation_id
  if (!rosidl_runtime_c__String__init(&msg->conversation_id)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // token
  if (!rosidl_runtime_c__String__init(&msg->token)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // app_key
  if (!rosidl_runtime_c__String__init(&msg->app_key)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // secret_key
  if (!rosidl_runtime_c__String__init(&msg->secret_key)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__init(&msg->prompt)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__init(&msg->query)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
    return false;
  }
  return true;
}

void
large_models_msgs__srv__SetContent_Request__fini(large_models_msgs__srv__SetContent_Request * msg)
{
  if (!msg) {
    return;
  }
  // platform
  rosidl_runtime_c__String__fini(&msg->platform);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // api_key
  rosidl_runtime_c__String__fini(&msg->api_key);
  // base_url
  rosidl_runtime_c__String__fini(&msg->base_url);
  // app_id
  rosidl_runtime_c__String__fini(&msg->app_id);
  // conversation_id
  rosidl_runtime_c__String__fini(&msg->conversation_id);
  // token
  rosidl_runtime_c__String__fini(&msg->token);
  // app_key
  rosidl_runtime_c__String__fini(&msg->app_key);
  // secret_key
  rosidl_runtime_c__String__fini(&msg->secret_key);
  // prompt
  rosidl_runtime_c__String__fini(&msg->prompt);
  // query
  rosidl_runtime_c__String__fini(&msg->query);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
large_models_msgs__srv__SetContent_Request__are_equal(const large_models_msgs__srv__SetContent_Request * lhs, const large_models_msgs__srv__SetContent_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // platform
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->platform), &(rhs->platform)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // api_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->api_key), &(rhs->api_key)))
  {
    return false;
  }
  // base_url
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->base_url), &(rhs->base_url)))
  {
    return false;
  }
  // app_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->app_id), &(rhs->app_id)))
  {
    return false;
  }
  // conversation_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->conversation_id), &(rhs->conversation_id)))
  {
    return false;
  }
  // token
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->token), &(rhs->token)))
  {
    return false;
  }
  // app_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->app_key), &(rhs->app_key)))
  {
    return false;
  }
  // secret_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->secret_key), &(rhs->secret_key)))
  {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prompt), &(rhs->prompt)))
  {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->query), &(rhs->query)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
large_models_msgs__srv__SetContent_Request__copy(
  const large_models_msgs__srv__SetContent_Request * input,
  large_models_msgs__srv__SetContent_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // platform
  if (!rosidl_runtime_c__String__copy(
      &(input->platform), &(output->platform)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // api_key
  if (!rosidl_runtime_c__String__copy(
      &(input->api_key), &(output->api_key)))
  {
    return false;
  }
  // base_url
  if (!rosidl_runtime_c__String__copy(
      &(input->base_url), &(output->base_url)))
  {
    return false;
  }
  // app_id
  if (!rosidl_runtime_c__String__copy(
      &(input->app_id), &(output->app_id)))
  {
    return false;
  }
  // conversation_id
  if (!rosidl_runtime_c__String__copy(
      &(input->conversation_id), &(output->conversation_id)))
  {
    return false;
  }
  // token
  if (!rosidl_runtime_c__String__copy(
      &(input->token), &(output->token)))
  {
    return false;
  }
  // app_key
  if (!rosidl_runtime_c__String__copy(
      &(input->app_key), &(output->app_key)))
  {
    return false;
  }
  // secret_key
  if (!rosidl_runtime_c__String__copy(
      &(input->secret_key), &(output->secret_key)))
  {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__copy(
      &(input->prompt), &(output->prompt)))
  {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__copy(
      &(input->query), &(output->query)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

large_models_msgs__srv__SetContent_Request *
large_models_msgs__srv__SetContent_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__srv__SetContent_Request * msg = (large_models_msgs__srv__SetContent_Request *)allocator.allocate(sizeof(large_models_msgs__srv__SetContent_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(large_models_msgs__srv__SetContent_Request));
  bool success = large_models_msgs__srv__SetContent_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
large_models_msgs__srv__SetContent_Request__destroy(large_models_msgs__srv__SetContent_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    large_models_msgs__srv__SetContent_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
large_models_msgs__srv__SetContent_Request__Sequence__init(large_models_msgs__srv__SetContent_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__srv__SetContent_Request * data = NULL;

  if (size) {
    data = (large_models_msgs__srv__SetContent_Request *)allocator.zero_allocate(size, sizeof(large_models_msgs__srv__SetContent_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = large_models_msgs__srv__SetContent_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        large_models_msgs__srv__SetContent_Request__fini(&data[i - 1]);
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
large_models_msgs__srv__SetContent_Request__Sequence__fini(large_models_msgs__srv__SetContent_Request__Sequence * array)
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
      large_models_msgs__srv__SetContent_Request__fini(&array->data[i]);
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

large_models_msgs__srv__SetContent_Request__Sequence *
large_models_msgs__srv__SetContent_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__srv__SetContent_Request__Sequence * array = (large_models_msgs__srv__SetContent_Request__Sequence *)allocator.allocate(sizeof(large_models_msgs__srv__SetContent_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = large_models_msgs__srv__SetContent_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
large_models_msgs__srv__SetContent_Request__Sequence__destroy(large_models_msgs__srv__SetContent_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    large_models_msgs__srv__SetContent_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
large_models_msgs__srv__SetContent_Request__Sequence__are_equal(const large_models_msgs__srv__SetContent_Request__Sequence * lhs, const large_models_msgs__srv__SetContent_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!large_models_msgs__srv__SetContent_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
large_models_msgs__srv__SetContent_Request__Sequence__copy(
  const large_models_msgs__srv__SetContent_Request__Sequence * input,
  large_models_msgs__srv__SetContent_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(large_models_msgs__srv__SetContent_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    large_models_msgs__srv__SetContent_Request * data =
      (large_models_msgs__srv__SetContent_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!large_models_msgs__srv__SetContent_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          large_models_msgs__srv__SetContent_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!large_models_msgs__srv__SetContent_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
large_models_msgs__srv__SetContent_Response__init(large_models_msgs__srv__SetContent_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    large_models_msgs__srv__SetContent_Response__fini(msg);
    return false;
  }
  return true;
}

void
large_models_msgs__srv__SetContent_Response__fini(large_models_msgs__srv__SetContent_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
large_models_msgs__srv__SetContent_Response__are_equal(const large_models_msgs__srv__SetContent_Response * lhs, const large_models_msgs__srv__SetContent_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
large_models_msgs__srv__SetContent_Response__copy(
  const large_models_msgs__srv__SetContent_Response * input,
  large_models_msgs__srv__SetContent_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

large_models_msgs__srv__SetContent_Response *
large_models_msgs__srv__SetContent_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__srv__SetContent_Response * msg = (large_models_msgs__srv__SetContent_Response *)allocator.allocate(sizeof(large_models_msgs__srv__SetContent_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(large_models_msgs__srv__SetContent_Response));
  bool success = large_models_msgs__srv__SetContent_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
large_models_msgs__srv__SetContent_Response__destroy(large_models_msgs__srv__SetContent_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    large_models_msgs__srv__SetContent_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
large_models_msgs__srv__SetContent_Response__Sequence__init(large_models_msgs__srv__SetContent_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__srv__SetContent_Response * data = NULL;

  if (size) {
    data = (large_models_msgs__srv__SetContent_Response *)allocator.zero_allocate(size, sizeof(large_models_msgs__srv__SetContent_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = large_models_msgs__srv__SetContent_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        large_models_msgs__srv__SetContent_Response__fini(&data[i - 1]);
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
large_models_msgs__srv__SetContent_Response__Sequence__fini(large_models_msgs__srv__SetContent_Response__Sequence * array)
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
      large_models_msgs__srv__SetContent_Response__fini(&array->data[i]);
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

large_models_msgs__srv__SetContent_Response__Sequence *
large_models_msgs__srv__SetContent_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  large_models_msgs__srv__SetContent_Response__Sequence * array = (large_models_msgs__srv__SetContent_Response__Sequence *)allocator.allocate(sizeof(large_models_msgs__srv__SetContent_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = large_models_msgs__srv__SetContent_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
large_models_msgs__srv__SetContent_Response__Sequence__destroy(large_models_msgs__srv__SetContent_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    large_models_msgs__srv__SetContent_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
large_models_msgs__srv__SetContent_Response__Sequence__are_equal(const large_models_msgs__srv__SetContent_Response__Sequence * lhs, const large_models_msgs__srv__SetContent_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!large_models_msgs__srv__SetContent_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
large_models_msgs__srv__SetContent_Response__Sequence__copy(
  const large_models_msgs__srv__SetContent_Response__Sequence * input,
  large_models_msgs__srv__SetContent_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(large_models_msgs__srv__SetContent_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    large_models_msgs__srv__SetContent_Response * data =
      (large_models_msgs__srv__SetContent_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!large_models_msgs__srv__SetContent_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          large_models_msgs__srv__SetContent_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!large_models_msgs__srv__SetContent_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
