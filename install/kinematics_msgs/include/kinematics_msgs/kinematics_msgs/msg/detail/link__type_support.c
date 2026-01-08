// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kinematics_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kinematics_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
#include "kinematics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kinematics_msgs/msg/detail/link__functions.h"
#include "kinematics_msgs/msg/detail/link__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kinematics_msgs__msg__Link__init(message_memory);
}

void kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function(void * message_memory)
{
  kinematics_msgs__msg__Link__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[5] = {
  {
    "base_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__msg__Link, base_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__msg__Link, link1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__msg__Link, link2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__msg__Link, link3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_effector_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__msg__Link, end_effector_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_members = {
  "kinematics_msgs__msg",  // message namespace
  "Link",  // message name
  5,  // number of fields
  sizeof(kinematics_msgs__msg__Link),
  kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array,  // message members
  kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_init_function,  // function to initialize message memory (memory has to be allocated)
  kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle = {
  0,
  &kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kinematics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinematics_msgs, msg, Link)() {
  if (!kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier) {
    kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kinematics_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
