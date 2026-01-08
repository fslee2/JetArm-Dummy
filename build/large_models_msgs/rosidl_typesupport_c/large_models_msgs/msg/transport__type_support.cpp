// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from large_models_msgs:msg/Transport.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "large_models_msgs/msg/detail/transport__struct.h"
#include "large_models_msgs/msg/detail/transport__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace large_models_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Transport_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Transport_type_support_ids_t;

static const _Transport_type_support_ids_t _Transport_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Transport_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Transport_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Transport_type_support_symbol_names_t _Transport_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, large_models_msgs, msg, Transport)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, large_models_msgs, msg, Transport)),
  }
};

typedef struct _Transport_type_support_data_t
{
  void * data[2];
} _Transport_type_support_data_t;

static _Transport_type_support_data_t _Transport_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Transport_message_typesupport_map = {
  2,
  "large_models_msgs",
  &_Transport_message_typesupport_ids.typesupport_identifier[0],
  &_Transport_message_typesupport_symbol_names.symbol_name[0],
  &_Transport_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Transport_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Transport_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace large_models_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, large_models_msgs, msg, Transport)() {
  return &::large_models_msgs::msg::rosidl_typesupport_c::Transport_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
