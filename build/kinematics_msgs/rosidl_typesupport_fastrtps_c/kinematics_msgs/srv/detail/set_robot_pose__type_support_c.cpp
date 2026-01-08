// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kinematics_msgs:srv/SetRobotPose.idl
// generated code does not contain a copyright notice
#include "kinematics_msgs/srv/detail/set_robot_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kinematics_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kinematics_msgs/srv/detail/set_robot_pose__struct.h"
#include "kinematics_msgs/srv/detail/set_robot_pose__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // pitch_range, position
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // pitch_range, position

// forward declare type support functions


using _SetRobotPose_Request__ros_msg_type = kinematics_msgs__srv__SetRobotPose_Request;

static bool _SetRobotPose_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetRobotPose_Request__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    size_t size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: pitch_range
  {
    size_t size = ros_message->pitch_range.size;
    auto array_ptr = ros_message->pitch_range.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: resolution
  {
    cdr << ros_message->resolution;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _SetRobotPose_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetRobotPose_Request__ros_msg_type * ros_message = static_cast<_SetRobotPose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->position.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->position);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->position, size)) {
      fprintf(stderr, "failed to create array for field 'position'");
      return false;
    }
    auto array_ptr = ros_message->position.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: pitch_range
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->pitch_range.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pitch_range);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pitch_range, size)) {
      fprintf(stderr, "failed to create array for field 'pitch_range'");
      return false;
    }
    auto array_ptr = ros_message->pitch_range.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: resolution
  {
    cdr >> ros_message->resolution;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinematics_msgs
size_t get_serialized_size_kinematics_msgs__srv__SetRobotPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetRobotPose_Request__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name position
  {
    size_t array_size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_range
  {
    size_t array_size = ros_message->pitch_range.size;
    auto array_ptr = ros_message->pitch_range.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name resolution
  {
    size_t item_size = sizeof(ros_message->resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetRobotPose_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kinematics_msgs__srv__SetRobotPose_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinematics_msgs
size_t max_serialized_size_kinematics_msgs__srv__SetRobotPose_Request(
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

  // member: position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pitch_range
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kinematics_msgs__srv__SetRobotPose_Request;
    is_plain =
      (
      offsetof(DataType, duration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetRobotPose_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kinematics_msgs__srv__SetRobotPose_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetRobotPose_Request = {
  "kinematics_msgs::srv",
  "SetRobotPose_Request",
  _SetRobotPose_Request__cdr_serialize,
  _SetRobotPose_Request__cdr_deserialize,
  _SetRobotPose_Request__get_serialized_size,
  _SetRobotPose_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetRobotPose_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetRobotPose_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kinematics_msgs, srv, SetRobotPose_Request)() {
  return &_SetRobotPose_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "kinematics_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "kinematics_msgs/srv/detail/set_robot_pose__struct.h"
// already included above
// #include "kinematics_msgs/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // current_pulse, pulse, rpy
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // current_pulse, pulse, rpy

// forward declare type support functions


using _SetRobotPose_Response__ros_msg_type = kinematics_msgs__srv__SetRobotPose_Response;

static bool _SetRobotPose_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetRobotPose_Response__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: pulse
  {
    size_t size = ros_message->pulse.size;
    auto array_ptr = ros_message->pulse.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: current_pulse
  {
    size_t size = ros_message->current_pulse.size;
    auto array_ptr = ros_message->current_pulse.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = ros_message->rpy.size;
    auto array_ptr = ros_message->rpy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: min_variation
  {
    cdr << ros_message->min_variation;
  }

  return true;
}

static bool _SetRobotPose_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetRobotPose_Response__ros_msg_type * ros_message = static_cast<_SetRobotPose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: pulse
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->pulse.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->pulse);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->pulse, size)) {
      fprintf(stderr, "failed to create array for field 'pulse'");
      return false;
    }
    auto array_ptr = ros_message->pulse.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: current_pulse
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->current_pulse.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->current_pulse);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->current_pulse, size)) {
      fprintf(stderr, "failed to create array for field 'current_pulse'");
      return false;
    }
    auto array_ptr = ros_message->current_pulse.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rpy
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->rpy.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->rpy);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->rpy, size)) {
      fprintf(stderr, "failed to create array for field 'rpy'");
      return false;
    }
    auto array_ptr = ros_message->rpy.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: min_variation
  {
    cdr >> ros_message->min_variation;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinematics_msgs
size_t get_serialized_size_kinematics_msgs__srv__SetRobotPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetRobotPose_Response__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pulse
  {
    size_t array_size = ros_message->pulse.size;
    auto array_ptr = ros_message->pulse.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_pulse
  {
    size_t array_size = ros_message->current_pulse.size;
    auto array_ptr = ros_message->current_pulse.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpy
  {
    size_t array_size = ros_message->rpy.size;
    auto array_ptr = ros_message->rpy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_variation
  {
    size_t item_size = sizeof(ros_message->min_variation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetRobotPose_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kinematics_msgs__srv__SetRobotPose_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinematics_msgs
size_t max_serialized_size_kinematics_msgs__srv__SetRobotPose_Response(
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

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pulse
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: current_pulse
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rpy
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min_variation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kinematics_msgs__srv__SetRobotPose_Response;
    is_plain =
      (
      offsetof(DataType, min_variation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetRobotPose_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kinematics_msgs__srv__SetRobotPose_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetRobotPose_Response = {
  "kinematics_msgs::srv",
  "SetRobotPose_Response",
  _SetRobotPose_Response__cdr_serialize,
  _SetRobotPose_Response__cdr_deserialize,
  _SetRobotPose_Response__get_serialized_size,
  _SetRobotPose_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetRobotPose_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetRobotPose_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kinematics_msgs, srv, SetRobotPose_Response)() {
  return &_SetRobotPose_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "kinematics_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kinematics_msgs/srv/set_robot_pose.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetRobotPose__callbacks = {
  "kinematics_msgs::srv",
  "SetRobotPose",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kinematics_msgs, srv, SetRobotPose_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kinematics_msgs, srv, SetRobotPose_Response)(),
};

static rosidl_service_type_support_t SetRobotPose__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetRobotPose__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kinematics_msgs, srv, SetRobotPose)() {
  return &SetRobotPose__handle;
}

#if defined(__cplusplus)
}
#endif
