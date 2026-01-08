// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from large_models_msgs:msg/AgentResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "large_models_msgs/msg/detail/agent_result__rosidl_typesupport_introspection_c.h"
#include "large_models_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "large_models_msgs/msg/detail/agent_result__functions.h"
#include "large_models_msgs/msg/detail/agent_result__struct.h"


// Include directives for member types
// Member `action`
// Member `response`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  large_models_msgs__msg__AgentResult__init(message_memory);
}

void large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_fini_function(void * message_memory)
{
  large_models_msgs__msg__AgentResult__fini(message_memory);
}

size_t large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__size_function__AgentResult__action(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__get_const_function__AgentResult__action(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__get_function__AgentResult__action(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__fetch_function__AgentResult__action(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__get_const_function__AgentResult__action(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__assign_function__AgentResult__action(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__get_function__AgentResult__action(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__resize_function__AgentResult__action(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_message_member_array[2] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(large_models_msgs__msg__AgentResult, action),  // bytes offset in struct
    NULL,  // default value
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__size_function__AgentResult__action,  // size() function pointer
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__get_const_function__AgentResult__action,  // get_const(index) function pointer
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__get_function__AgentResult__action,  // get(index) function pointer
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__fetch_function__AgentResult__action,  // fetch(index, &value) function pointer
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__assign_function__AgentResult__action,  // assign(index, value) function pointer
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__resize_function__AgentResult__action  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(large_models_msgs__msg__AgentResult, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_message_members = {
  "large_models_msgs__msg",  // message namespace
  "AgentResult",  // message name
  2,  // number of fields
  sizeof(large_models_msgs__msg__AgentResult),
  large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_message_member_array,  // message members
  large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_init_function,  // function to initialize message memory (memory has to be allocated)
  large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_message_type_support_handle = {
  0,
  &large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_large_models_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, large_models_msgs, msg, AgentResult)() {
  if (!large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_message_type_support_handle.typesupport_identifier) {
    large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &large_models_msgs__msg__AgentResult__rosidl_typesupport_introspection_c__AgentResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
