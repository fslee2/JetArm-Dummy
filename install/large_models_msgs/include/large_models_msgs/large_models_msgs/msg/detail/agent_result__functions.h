// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from large_models_msgs:msg/AgentResult.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__FUNCTIONS_H_
#define LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "large_models_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "large_models_msgs/msg/detail/agent_result__struct.h"

/// Initialize msg/AgentResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * large_models_msgs__msg__AgentResult
 * )) before or use
 * large_models_msgs__msg__AgentResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__AgentResult__init(large_models_msgs__msg__AgentResult * msg);

/// Finalize msg/AgentResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
void
large_models_msgs__msg__AgentResult__fini(large_models_msgs__msg__AgentResult * msg);

/// Create msg/AgentResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * large_models_msgs__msg__AgentResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
large_models_msgs__msg__AgentResult *
large_models_msgs__msg__AgentResult__create();

/// Destroy msg/AgentResult message.
/**
 * It calls
 * large_models_msgs__msg__AgentResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
void
large_models_msgs__msg__AgentResult__destroy(large_models_msgs__msg__AgentResult * msg);

/// Check for msg/AgentResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__AgentResult__are_equal(const large_models_msgs__msg__AgentResult * lhs, const large_models_msgs__msg__AgentResult * rhs);

/// Copy a msg/AgentResult message.
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
large_models_msgs__msg__AgentResult__copy(
  const large_models_msgs__msg__AgentResult * input,
  large_models_msgs__msg__AgentResult * output);

/// Initialize array of msg/AgentResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * large_models_msgs__msg__AgentResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__AgentResult__Sequence__init(large_models_msgs__msg__AgentResult__Sequence * array, size_t size);

/// Finalize array of msg/AgentResult messages.
/**
 * It calls
 * large_models_msgs__msg__AgentResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
void
large_models_msgs__msg__AgentResult__Sequence__fini(large_models_msgs__msg__AgentResult__Sequence * array);

/// Create array of msg/AgentResult messages.
/**
 * It allocates the memory for the array and calls
 * large_models_msgs__msg__AgentResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
large_models_msgs__msg__AgentResult__Sequence *
large_models_msgs__msg__AgentResult__Sequence__create(size_t size);

/// Destroy array of msg/AgentResult messages.
/**
 * It calls
 * large_models_msgs__msg__AgentResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
void
large_models_msgs__msg__AgentResult__Sequence__destroy(large_models_msgs__msg__AgentResult__Sequence * array);

/// Check for msg/AgentResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_large_models_msgs
bool
large_models_msgs__msg__AgentResult__Sequence__are_equal(const large_models_msgs__msg__AgentResult__Sequence * lhs, const large_models_msgs__msg__AgentResult__Sequence * rhs);

/// Copy an array of msg/AgentResult messages.
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
large_models_msgs__msg__AgentResult__Sequence__copy(
  const large_models_msgs__msg__AgentResult__Sequence * input,
  large_models_msgs__msg__AgentResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LARGE_MODELS_MSGS__MSG__DETAIL__AGENT_RESULT__FUNCTIONS_H_
