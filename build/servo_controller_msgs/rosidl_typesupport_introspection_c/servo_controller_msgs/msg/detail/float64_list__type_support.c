// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from servo_controller_msgs:msg/Float64List.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "servo_controller_msgs/msg/detail/float64_list__rosidl_typesupport_introspection_c.h"
#include "servo_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "servo_controller_msgs/msg/detail/float64_list__functions.h"
#include "servo_controller_msgs/msg/detail/float64_list__struct.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  servo_controller_msgs__msg__Float64List__init(message_memory);
}

void servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_fini_function(void * message_memory)
{
  servo_controller_msgs__msg__Float64List__fini(message_memory);
}

size_t servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__size_function__Float64List__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__get_const_function__Float64List__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__get_function__Float64List__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__fetch_function__Float64List__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__get_const_function__Float64List__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__assign_function__Float64List__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__get_function__Float64List__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__resize_function__Float64List__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_message_member_array[1] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_controller_msgs__msg__Float64List, positions),  // bytes offset in struct
    NULL,  // default value
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__size_function__Float64List__positions,  // size() function pointer
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__get_const_function__Float64List__positions,  // get_const(index) function pointer
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__get_function__Float64List__positions,  // get(index) function pointer
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__fetch_function__Float64List__positions,  // fetch(index, &value) function pointer
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__assign_function__Float64List__positions,  // assign(index, value) function pointer
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__resize_function__Float64List__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_message_members = {
  "servo_controller_msgs__msg",  // message namespace
  "Float64List",  // message name
  1,  // number of fields
  sizeof(servo_controller_msgs__msg__Float64List),
  servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_message_member_array,  // message members
  servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_init_function,  // function to initialize message memory (memory has to be allocated)
  servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_message_type_support_handle = {
  0,
  &servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_controller_msgs, msg, Float64List)() {
  if (!servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_message_type_support_handle.typesupport_identifier) {
    servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &servo_controller_msgs__msg__Float64List__rosidl_typesupport_introspection_c__Float64List_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
