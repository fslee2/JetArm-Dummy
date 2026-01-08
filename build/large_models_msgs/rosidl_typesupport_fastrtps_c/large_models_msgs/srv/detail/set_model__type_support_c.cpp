// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from large_models_msgs:srv/SetModel.idl
// generated code does not contain a copyright notice
#include "large_models_msgs/srv/detail/set_model__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "large_models_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "large_models_msgs/srv/detail/set_model__struct.h"
#include "large_models_msgs/srv/detail/set_model__functions.h"
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

#include "rosidl_runtime_c/string.h"  // api_key, app_id, app_key, base_url, conversation_id, model, model_type, platform, secret_key, token
#include "rosidl_runtime_c/string_functions.h"  // api_key, app_id, app_key, base_url, conversation_id, model, model_type, platform, secret_key, token

// forward declare type support functions


using _SetModel_Request__ros_msg_type = large_models_msgs__srv__SetModel_Request;

static bool _SetModel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetModel_Request__ros_msg_type * ros_message = static_cast<const _SetModel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: platform
  {
    const rosidl_runtime_c__String * str = &ros_message->platform;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model
  {
    const rosidl_runtime_c__String * str = &ros_message->model;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_type
  {
    const rosidl_runtime_c__String * str = &ros_message->model_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: api_key
  {
    const rosidl_runtime_c__String * str = &ros_message->api_key;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: base_url
  {
    const rosidl_runtime_c__String * str = &ros_message->base_url;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: app_id
  {
    const rosidl_runtime_c__String * str = &ros_message->app_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: conversation_id
  {
    const rosidl_runtime_c__String * str = &ros_message->conversation_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: token
  {
    const rosidl_runtime_c__String * str = &ros_message->token;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: app_key
  {
    const rosidl_runtime_c__String * str = &ros_message->app_key;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: secret_key
  {
    const rosidl_runtime_c__String * str = &ros_message->secret_key;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetModel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetModel_Request__ros_msg_type * ros_message = static_cast<_SetModel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: platform
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->platform.data) {
      rosidl_runtime_c__String__init(&ros_message->platform);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->platform,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'platform'\n");
      return false;
    }
  }

  // Field name: model
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model.data) {
      rosidl_runtime_c__String__init(&ros_message->model);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model'\n");
      return false;
    }
  }

  // Field name: model_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_type.data) {
      rosidl_runtime_c__String__init(&ros_message->model_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_type'\n");
      return false;
    }
  }

  // Field name: api_key
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->api_key.data) {
      rosidl_runtime_c__String__init(&ros_message->api_key);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->api_key,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'api_key'\n");
      return false;
    }
  }

  // Field name: base_url
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->base_url.data) {
      rosidl_runtime_c__String__init(&ros_message->base_url);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->base_url,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'base_url'\n");
      return false;
    }
  }

  // Field name: app_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->app_id.data) {
      rosidl_runtime_c__String__init(&ros_message->app_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->app_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'app_id'\n");
      return false;
    }
  }

  // Field name: conversation_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->conversation_id.data) {
      rosidl_runtime_c__String__init(&ros_message->conversation_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->conversation_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'conversation_id'\n");
      return false;
    }
  }

  // Field name: token
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->token.data) {
      rosidl_runtime_c__String__init(&ros_message->token);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->token,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'token'\n");
      return false;
    }
  }

  // Field name: app_key
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->app_key.data) {
      rosidl_runtime_c__String__init(&ros_message->app_key);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->app_key,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'app_key'\n");
      return false;
    }
  }

  // Field name: secret_key
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->secret_key.data) {
      rosidl_runtime_c__String__init(&ros_message->secret_key);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->secret_key,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'secret_key'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_large_models_msgs
size_t get_serialized_size_large_models_msgs__srv__SetModel_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetModel_Request__ros_msg_type * ros_message = static_cast<const _SetModel_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name platform
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->platform.size + 1);
  // field.name model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model.size + 1);
  // field.name model_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_type.size + 1);
  // field.name api_key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->api_key.size + 1);
  // field.name base_url
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->base_url.size + 1);
  // field.name app_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->app_id.size + 1);
  // field.name conversation_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->conversation_id.size + 1);
  // field.name token
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->token.size + 1);
  // field.name app_key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->app_key.size + 1);
  // field.name secret_key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->secret_key.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetModel_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_large_models_msgs__srv__SetModel_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_large_models_msgs
size_t max_serialized_size_large_models_msgs__srv__SetModel_Request(
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

  // member: platform
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: model
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: model_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: api_key
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: base_url
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: app_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: conversation_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: token
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: app_key
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: secret_key
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = large_models_msgs__srv__SetModel_Request;
    is_plain =
      (
      offsetof(DataType, secret_key) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetModel_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_large_models_msgs__srv__SetModel_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetModel_Request = {
  "large_models_msgs::srv",
  "SetModel_Request",
  _SetModel_Request__cdr_serialize,
  _SetModel_Request__cdr_deserialize,
  _SetModel_Request__get_serialized_size,
  _SetModel_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetModel_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetModel_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, large_models_msgs, srv, SetModel_Request)() {
  return &_SetModel_Request__type_support;
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
// #include "large_models_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "large_models_msgs/srv/detail/set_model__struct.h"
// already included above
// #include "large_models_msgs/srv/detail/set_model__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _SetModel_Response__ros_msg_type = large_models_msgs__srv__SetModel_Response;

static bool _SetModel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetModel_Response__ros_msg_type * ros_message = static_cast<const _SetModel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetModel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetModel_Response__ros_msg_type * ros_message = static_cast<_SetModel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_large_models_msgs
size_t get_serialized_size_large_models_msgs__srv__SetModel_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetModel_Response__ros_msg_type * ros_message = static_cast<const _SetModel_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetModel_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_large_models_msgs__srv__SetModel_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_large_models_msgs
size_t max_serialized_size_large_models_msgs__srv__SetModel_Response(
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
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = large_models_msgs__srv__SetModel_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetModel_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_large_models_msgs__srv__SetModel_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetModel_Response = {
  "large_models_msgs::srv",
  "SetModel_Response",
  _SetModel_Response__cdr_serialize,
  _SetModel_Response__cdr_deserialize,
  _SetModel_Response__get_serialized_size,
  _SetModel_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetModel_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetModel_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, large_models_msgs, srv, SetModel_Response)() {
  return &_SetModel_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "large_models_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "large_models_msgs/srv/set_model.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetModel__callbacks = {
  "large_models_msgs::srv",
  "SetModel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, large_models_msgs, srv, SetModel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, large_models_msgs, srv, SetModel_Response)(),
};

static rosidl_service_type_support_t SetModel__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetModel__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, large_models_msgs, srv, SetModel)() {
  return &SetModel__handle;
}

#if defined(__cplusplus)
}
#endif
