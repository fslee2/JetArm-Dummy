// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kinematics_msgs:msg/JointRange.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kinematics_msgs/msg/detail/joint_range__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kinematics_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointRange_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kinematics_msgs::msg::JointRange(_init);
}

void JointRange_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kinematics_msgs::msg::JointRange *>(message_memory);
  typed_message->~JointRange();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointRange_message_member_array[2] = {
  {
    "min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs::msg::JointRange, min),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs::msg::JointRange, max),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointRange_message_members = {
  "kinematics_msgs::msg",  // message namespace
  "JointRange",  // message name
  2,  // number of fields
  sizeof(kinematics_msgs::msg::JointRange),
  JointRange_message_member_array,  // message members
  JointRange_init_function,  // function to initialize message memory (memory has to be allocated)
  JointRange_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointRange_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointRange_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kinematics_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kinematics_msgs::msg::JointRange>()
{
  return &::kinematics_msgs::msg::rosidl_typesupport_introspection_cpp::JointRange_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kinematics_msgs, msg, JointRange)() {
  return &::kinematics_msgs::msg::rosidl_typesupport_introspection_cpp::JointRange_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
