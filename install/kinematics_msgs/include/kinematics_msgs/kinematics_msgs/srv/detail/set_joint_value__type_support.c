// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kinematics_msgs:srv/SetJointValue.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kinematics_msgs/srv/detail/set_joint_value__rosidl_typesupport_introspection_c.h"
#include "kinematics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kinematics_msgs/srv/detail/set_joint_value__functions.h"
#include "kinematics_msgs/srv/detail/set_joint_value__struct.h"


// Include directives for member types
// Member `joint_value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kinematics_msgs__srv__SetJointValue_Request__init(message_memory);
}

void kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_fini_function(void * message_memory)
{
  kinematics_msgs__srv__SetJointValue_Request__fini(message_memory);
}

size_t kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__size_function__SetJointValue_Request__joint_value(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointValue_Request__joint_value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__get_function__SetJointValue_Request__joint_value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointValue_Request__joint_value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointValue_Request__joint_value(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__assign_function__SetJointValue_Request__joint_value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__get_function__SetJointValue_Request__joint_value(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__resize_function__SetJointValue_Request__joint_value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_message_member_array[1] = {
  {
    "joint_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__srv__SetJointValue_Request, joint_value),  // bytes offset in struct
    NULL,  // default value
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__size_function__SetJointValue_Request__joint_value,  // size() function pointer
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointValue_Request__joint_value,  // get_const(index) function pointer
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__get_function__SetJointValue_Request__joint_value,  // get(index) function pointer
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointValue_Request__joint_value,  // fetch(index, &value) function pointer
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__assign_function__SetJointValue_Request__joint_value,  // assign(index, value) function pointer
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__resize_function__SetJointValue_Request__joint_value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_message_members = {
  "kinematics_msgs__srv",  // message namespace
  "SetJointValue_Request",  // message name
  1,  // number of fields
  sizeof(kinematics_msgs__srv__SetJointValue_Request),
  kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_message_member_array,  // message members
  kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_message_type_support_handle = {
  0,
  &kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kinematics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinematics_msgs, srv, SetJointValue_Request)() {
  if (!kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_message_type_support_handle.typesupport_identifier) {
    kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kinematics_msgs__srv__SetJointValue_Request__rosidl_typesupport_introspection_c__SetJointValue_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kinematics_msgs/srv/detail/set_joint_value__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kinematics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kinematics_msgs/srv/detail/set_joint_value__functions.h"
// already included above
// #include "kinematics_msgs/srv/detail/set_joint_value__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kinematics_msgs__srv__SetJointValue_Response__init(message_memory);
}

void kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_fini_function(void * message_memory)
{
  kinematics_msgs__srv__SetJointValue_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__srv__SetJointValue_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__srv__SetJointValue_Response, solution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinematics_msgs__srv__SetJointValue_Response, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_members = {
  "kinematics_msgs__srv",  // message namespace
  "SetJointValue_Response",  // message name
  3,  // number of fields
  sizeof(kinematics_msgs__srv__SetJointValue_Response),
  kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_member_array,  // message members
  kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_type_support_handle = {
  0,
  &kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kinematics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinematics_msgs, srv, SetJointValue_Response)() {
  kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_type_support_handle.typesupport_identifier) {
    kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kinematics_msgs__srv__SetJointValue_Response__rosidl_typesupport_introspection_c__SetJointValue_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kinematics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "kinematics_msgs/srv/detail/set_joint_value__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_service_members = {
  "kinematics_msgs__srv",  // service namespace
  "SetJointValue",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_Request_message_type_support_handle,
  NULL  // response message
  // kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_Response_message_type_support_handle
};

static rosidl_service_type_support_t kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_service_type_support_handle = {
  0,
  &kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinematics_msgs, srv, SetJointValue_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinematics_msgs, srv, SetJointValue_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kinematics_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinematics_msgs, srv, SetJointValue)() {
  if (!kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_service_type_support_handle.typesupport_identifier) {
    kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinematics_msgs, srv, SetJointValue_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinematics_msgs, srv, SetJointValue_Response)()->data;
  }

  return &kinematics_msgs__srv__detail__set_joint_value__rosidl_typesupport_introspection_c__SetJointValue_service_type_support_handle;
}
