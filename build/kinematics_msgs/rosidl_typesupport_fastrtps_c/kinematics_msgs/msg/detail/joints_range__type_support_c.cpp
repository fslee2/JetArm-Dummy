// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kinematics_msgs:msg/JointsRange.idl
// generated code does not contain a copyright notice
#include "kinematics_msgs/msg/detail/joints_range__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kinematics_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kinematics_msgs/msg/detail/joints_range__struct.h"
#include "kinematics_msgs/msg/detail/joints_range__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "kinematics_msgs/msg/detail/joint_range__functions.h"  // joint1, joint2, joint3, joint4, joint5

// forward declare type support functions
size_t get_serialized_size_kinematics_msgs__msg__JointRange(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_kinematics_msgs__msg__JointRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange)();


using _JointsRange__ros_msg_type = kinematics_msgs__msg__JointsRange;

static bool _JointsRange__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointsRange__ros_msg_type * ros_message = static_cast<const _JointsRange__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joint1, cdr))
    {
      return false;
    }
  }

  // Field name: joint2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joint2, cdr))
    {
      return false;
    }
  }

  // Field name: joint3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joint3, cdr))
    {
      return false;
    }
  }

  // Field name: joint4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joint4, cdr))
    {
      return false;
    }
  }

  // Field name: joint5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joint5, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointsRange__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointsRange__ros_msg_type * ros_message = static_cast<_JointsRange__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joint1))
    {
      return false;
    }
  }

  // Field name: joint2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joint2))
    {
      return false;
    }
  }

  // Field name: joint3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joint3))
    {
      return false;
    }
  }

  // Field name: joint4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joint4))
    {
      return false;
    }
  }

  // Field name: joint5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointRange
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joint5))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinematics_msgs
size_t get_serialized_size_kinematics_msgs__msg__JointsRange(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointsRange__ros_msg_type * ros_message = static_cast<const _JointsRange__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint1

  current_alignment += get_serialized_size_kinematics_msgs__msg__JointRange(
    &(ros_message->joint1), current_alignment);
  // field.name joint2

  current_alignment += get_serialized_size_kinematics_msgs__msg__JointRange(
    &(ros_message->joint2), current_alignment);
  // field.name joint3

  current_alignment += get_serialized_size_kinematics_msgs__msg__JointRange(
    &(ros_message->joint3), current_alignment);
  // field.name joint4

  current_alignment += get_serialized_size_kinematics_msgs__msg__JointRange(
    &(ros_message->joint4), current_alignment);
  // field.name joint5

  current_alignment += get_serialized_size_kinematics_msgs__msg__JointRange(
    &(ros_message->joint5), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointsRange__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kinematics_msgs__msg__JointsRange(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinematics_msgs
size_t max_serialized_size_kinematics_msgs__msg__JointsRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joint1
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kinematics_msgs__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joint2
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kinematics_msgs__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joint3
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kinematics_msgs__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joint4
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kinematics_msgs__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: joint5
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_kinematics_msgs__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kinematics_msgs__msg__JointsRange;
    is_plain =
      (
      offsetof(DataType, joint5) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointsRange__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kinematics_msgs__msg__JointsRange(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointsRange = {
  "kinematics_msgs::msg",
  "JointsRange",
  _JointsRange__cdr_serialize,
  _JointsRange__cdr_deserialize,
  _JointsRange__get_serialized_size,
  _JointsRange__max_serialized_size
};

static rosidl_message_type_support_t _JointsRange__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointsRange,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kinematics_msgs, msg, JointsRange)() {
  return &_JointsRange__type_support;
}

#if defined(__cplusplus)
}
#endif
