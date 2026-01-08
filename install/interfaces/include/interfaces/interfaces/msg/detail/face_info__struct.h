// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FACE_INFO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__FACE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FaceInfo in the package interfaces.
typedef struct interfaces__msg__FaceInfo
{
  int32_t width;
  int32_t height;
  int32_t x;
  int32_t y;
} interfaces__msg__FaceInfo;

// Struct for a sequence of interfaces__msg__FaceInfo.
typedef struct interfaces__msg__FaceInfo__Sequence
{
  interfaces__msg__FaceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__FaceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__FACE_INFO__STRUCT_H_
