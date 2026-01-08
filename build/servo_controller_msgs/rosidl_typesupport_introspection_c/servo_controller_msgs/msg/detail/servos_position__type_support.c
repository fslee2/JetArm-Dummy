// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from servo_controller_msgs:msg/ServosPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "servo_controller_msgs/msg/detail/servos_position__rosidl_typesupport_introspection_c.h"
#include "servo_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "servo_controller_msgs/msg/detail/servos_position__functions.h"
#include "servo_controller_msgs/msg/detail/servos_position__struct.h"


// Include directives for member types
// Member `position_unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "servo_controller_msgs/msg/servo_position.h"
// Member `position`
#include "servo_controller_msgs/msg/detail/servo_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  servo_controller_msgs__msg__ServosPosition__init(message_memory);
}

void servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_fini_function(void * message_memory)
{
  servo_controller_msgs__msg__ServosPosition__fini(message_memory);
}

size_t servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__size_function__ServosPosition__position(
  const void * untyped_member)
{
  const servo_controller_msgs__msg__ServoPosition__Sequence * member =
    (const servo_controller_msgs__msg__ServoPosition__Sequence *)(untyped_member);
  return member->size;
}

const void * servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__get_const_function__ServosPosition__position(
  const void * untyped_member, size_t index)
{
  const servo_controller_msgs__msg__ServoPosition__Sequence * member =
    (const servo_controller_msgs__msg__ServoPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__get_function__ServosPosition__position(
  void * untyped_member, size_t index)
{
  servo_controller_msgs__msg__ServoPosition__Sequence * member =
    (servo_controller_msgs__msg__ServoPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__fetch_function__ServosPosition__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const servo_controller_msgs__msg__ServoPosition * item =
    ((const servo_controller_msgs__msg__ServoPosition *)
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__get_const_function__ServosPosition__position(untyped_member, index));
  servo_controller_msgs__msg__ServoPosition * value =
    (servo_controller_msgs__msg__ServoPosition *)(untyped_value);
  *value = *item;
}

void servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__assign_function__ServosPosition__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  servo_controller_msgs__msg__ServoPosition * item =
    ((servo_controller_msgs__msg__ServoPosition *)
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__get_function__ServosPosition__position(untyped_member, index));
  const servo_controller_msgs__msg__ServoPosition * value =
    (const servo_controller_msgs__msg__ServoPosition *)(untyped_value);
  *item = *value;
}

bool servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__resize_function__ServosPosition__position(
  void * untyped_member, size_t size)
{
  servo_controller_msgs__msg__ServoPosition__Sequence * member =
    (servo_controller_msgs__msg__ServoPosition__Sequence *)(untyped_member);
  servo_controller_msgs__msg__ServoPosition__Sequence__fini(member);
  return servo_controller_msgs__msg__ServoPosition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_member_array[3] = {
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_controller_msgs__msg__ServosPosition, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_controller_msgs__msg__ServosPosition, position_unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_controller_msgs__msg__ServosPosition, position),  // bytes offset in struct
    NULL,  // default value
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__size_function__ServosPosition__position,  // size() function pointer
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__get_const_function__ServosPosition__position,  // get_const(index) function pointer
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__get_function__ServosPosition__position,  // get(index) function pointer
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__fetch_function__ServosPosition__position,  // fetch(index, &value) function pointer
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__assign_function__ServosPosition__position,  // assign(index, value) function pointer
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__resize_function__ServosPosition__position  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_members = {
  "servo_controller_msgs__msg",  // message namespace
  "ServosPosition",  // message name
  3,  // number of fields
  sizeof(servo_controller_msgs__msg__ServosPosition),
  servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_member_array,  // message members
  servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_type_support_handle = {
  0,
  &servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_controller_msgs, msg, ServosPosition)() {
  servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_controller_msgs, msg, ServoPosition)();
  if (!servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_type_support_handle.typesupport_identifier) {
    servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &servo_controller_msgs__msg__ServosPosition__rosidl_typesupport_introspection_c__ServosPosition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
