// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from large_models_msgs:msg/Transport.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__FUNCTIONS_H_
#define LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "large_models_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "large_models_msgs/msg/detail/transport__struct.h"

/// Initialize msg/Transport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * large_models_msgs__msg__Transport
 * )) before or use
 * large_models_msgs__msg__Transport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__Transport__init(large_models_msgs__msg__Transport * msg);

/// Finalize msg/Transport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
void
large_models_msgs__msg__Transport__fini(large_models_msgs__msg__Transport * msg);

/// Create msg/Transport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * large_models_msgs__msg__Transport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
large_models_msgs__msg__Transport *
large_models_msgs__msg__Transport__create();

/// Destroy msg/Transport message.
/**
 * It calls
 * large_models_msgs__msg__Transport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
void
large_models_msgs__msg__Transport__destroy(large_models_msgs__msg__Transport * msg);

/// Check for msg/Transport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__Transport__are_equal(const large_models_msgs__msg__Transport * lhs, const large_models_msgs__msg__Transport * rhs);

/// Copy a msg/Transport message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__Transport__copy(
  const large_models_msgs__msg__Transport * input,
  large_models_msgs__msg__Transport * output);

/// Initialize array of msg/Transport messages.
/**
 * It allocates the memory for the number of elements and calls
 * large_models_msgs__msg__Transport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__Transport__Sequence__init(large_models_msgs__msg__Transport__Sequence * array, size_t size);

/// Finalize array of msg/Transport messages.
/**
 * It calls
 * large_models_msgs__msg__Transport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
void
large_models_msgs__msg__Transport__Sequence__fini(large_models_msgs__msg__Transport__Sequence * array);

/// Create array of msg/Transport messages.
/**
 * It allocates the memory for the array and calls
 * large_models_msgs__msg__Transport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
large_models_msgs__msg__Transport__Sequence *
large_models_msgs__msg__Transport__Sequence__create(size_t size);

/// Destroy array of msg/Transport messages.
/**
 * It calls
 * large_models_msgs__msg__Transport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
void
large_models_msgs__msg__Transport__Sequence__destroy(large_models_msgs__msg__Transport__Sequence * array);

/// Check for msg/Transport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__Transport__Sequence__are_equal(const large_models_msgs__msg__Transport__Sequence * lhs, const large_models_msgs__msg__Transport__Sequence * rhs);

/// Copy an array of msg/Transport messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__Transport__Sequence__copy(
  const large_models_msgs__msg__Transport__Sequence * input,
  large_models_msgs__msg__Transport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__TRANSPORT__FUNCTIONS_H_
