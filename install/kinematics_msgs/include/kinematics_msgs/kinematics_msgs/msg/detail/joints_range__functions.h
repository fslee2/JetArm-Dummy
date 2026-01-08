// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kinematics_msgs:msg/JointsRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__FUNCTIONS_H_
#define KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kinematics_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "kinematics_msgs/msg/detail/joints_range__struct.h"

/// Initialize msg/JointsRange message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinematics_msgs__msg__JointsRange
 * )) before or use
 * kinematics_msgs__msg__JointsRange__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
bool
kinematics_msgs__msg__JointsRange__init(kinematics_msgs__msg__JointsRange * msg);

/// Finalize msg/JointsRange message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
void
kinematics_msgs__msg__JointsRange__fini(kinematics_msgs__msg__JointsRange * msg);

/// Create msg/JointsRange message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinematics_msgs__msg__JointsRange__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
kinematics_msgs__msg__JointsRange *
kinematics_msgs__msg__JointsRange__create();

/// Destroy msg/JointsRange message.
/**
 * It calls
 * kinematics_msgs__msg__JointsRange__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
void
kinematics_msgs__msg__JointsRange__destroy(kinematics_msgs__msg__JointsRange * msg);

/// Check for msg/JointsRange message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
bool
kinematics_msgs__msg__JointsRange__are_equal(const kinematics_msgs__msg__JointsRange * lhs, const kinematics_msgs__msg__JointsRange * rhs);

/// Copy a msg/JointsRange message.
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
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
bool
kinematics_msgs__msg__JointsRange__copy(
  const kinematics_msgs__msg__JointsRange * input,
  kinematics_msgs__msg__JointsRange * output);

/// Initialize array of msg/JointsRange messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinematics_msgs__msg__JointsRange__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
bool
kinematics_msgs__msg__JointsRange__Sequence__init(kinematics_msgs__msg__JointsRange__Sequence * array, size_t size);

/// Finalize array of msg/JointsRange messages.
/**
 * It calls
 * kinematics_msgs__msg__JointsRange__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
void
kinematics_msgs__msg__JointsRange__Sequence__fini(kinematics_msgs__msg__JointsRange__Sequence * array);

/// Create array of msg/JointsRange messages.
/**
 * It allocates the memory for the array and calls
 * kinematics_msgs__msg__JointsRange__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
kinematics_msgs__msg__JointsRange__Sequence *
kinematics_msgs__msg__JointsRange__Sequence__create(size_t size);

/// Destroy array of msg/JointsRange messages.
/**
 * It calls
 * kinematics_msgs__msg__JointsRange__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
void
kinematics_msgs__msg__JointsRange__Sequence__destroy(kinematics_msgs__msg__JointsRange__Sequence * array);

/// Check for msg/JointsRange message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
bool
kinematics_msgs__msg__JointsRange__Sequence__are_equal(const kinematics_msgs__msg__JointsRange__Sequence * lhs, const kinematics_msgs__msg__JointsRange__Sequence * rhs);

/// Copy an array of msg/JointsRange messages.
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
ROSIDL_GENERATOR_C_PUBLIC_kinematics_msgs
bool
kinematics_msgs__msg__JointsRange__Sequence__copy(
  const kinematics_msgs__msg__JointsRange__Sequence * input,
  kinematics_msgs__msg__JointsRange__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KINEMATICS_MSGS__MSG__DETAIL__JOINTS_RANGE__FUNCTIONS_H_
