// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from servo_controller_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__FUNCTIONS_H_
#define SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "servo_controller_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "servo_controller_msgs/msg/detail/grasp__struct.h"

/// Initialize msg/Grasp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * servo_controller_msgs__msg__Grasp
 * )) before or use
 * servo_controller_msgs__msg__Grasp__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
bool
servo_controller_msgs__msg__Grasp__init(servo_controller_msgs__msg__Grasp * msg);

/// Finalize msg/Grasp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
void
servo_controller_msgs__msg__Grasp__fini(servo_controller_msgs__msg__Grasp * msg);

/// Create msg/Grasp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * servo_controller_msgs__msg__Grasp__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
servo_controller_msgs__msg__Grasp *
servo_controller_msgs__msg__Grasp__create();

/// Destroy msg/Grasp message.
/**
 * It calls
 * servo_controller_msgs__msg__Grasp__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
void
servo_controller_msgs__msg__Grasp__destroy(servo_controller_msgs__msg__Grasp * msg);

/// Check for msg/Grasp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
bool
servo_controller_msgs__msg__Grasp__are_equal(const servo_controller_msgs__msg__Grasp * lhs, const servo_controller_msgs__msg__Grasp * rhs);

/// Copy a msg/Grasp message.
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
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
bool
servo_controller_msgs__msg__Grasp__copy(
  const servo_controller_msgs__msg__Grasp * input,
  servo_controller_msgs__msg__Grasp * output);

/// Initialize array of msg/Grasp messages.
/**
 * It allocates the memory for the number of elements and calls
 * servo_controller_msgs__msg__Grasp__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
bool
servo_controller_msgs__msg__Grasp__Sequence__init(servo_controller_msgs__msg__Grasp__Sequence * array, size_t size);

/// Finalize array of msg/Grasp messages.
/**
 * It calls
 * servo_controller_msgs__msg__Grasp__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
void
servo_controller_msgs__msg__Grasp__Sequence__fini(servo_controller_msgs__msg__Grasp__Sequence * array);

/// Create array of msg/Grasp messages.
/**
 * It allocates the memory for the array and calls
 * servo_controller_msgs__msg__Grasp__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
servo_controller_msgs__msg__Grasp__Sequence *
servo_controller_msgs__msg__Grasp__Sequence__create(size_t size);

/// Destroy array of msg/Grasp messages.
/**
 * It calls
 * servo_controller_msgs__msg__Grasp__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
void
servo_controller_msgs__msg__Grasp__Sequence__destroy(servo_controller_msgs__msg__Grasp__Sequence * array);

/// Check for msg/Grasp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
bool
servo_controller_msgs__msg__Grasp__Sequence__are_equal(const servo_controller_msgs__msg__Grasp__Sequence * lhs, const servo_controller_msgs__msg__Grasp__Sequence * rhs);

/// Copy an array of msg/Grasp messages.
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
ROSIDL_GENERATOR_C_PUBLIC_servo_controller_msgs
bool
servo_controller_msgs__msg__Grasp__Sequence__copy(
  const servo_controller_msgs__msg__Grasp__Sequence * input,
  servo_controller_msgs__msg__Grasp__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SERVO_CONTROLLER_MSGS__MSG__DETAIL__GRASP__FUNCTIONS_H_
