// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from large_models_msgs:srv/SetModel.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__TRAITS_HPP_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "large_models_msgs/srv/detail/set_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace large_models_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetModel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: platform
  {
    out << "platform: ";
    rosidl_generator_traits::value_to_yaml(msg.platform, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: model_type
  {
    out << "model_type: ";
    rosidl_generator_traits::value_to_yaml(msg.model_type, out);
    out << ", ";
  }

  // member: api_key
  {
    out << "api_key: ";
    rosidl_generator_traits::value_to_yaml(msg.api_key, out);
    out << ", ";
  }

  // member: base_url
  {
    out << "base_url: ";
    rosidl_generator_traits::value_to_yaml(msg.base_url, out);
    out << ", ";
  }

  // member: app_id
  {
    out << "app_id: ";
    rosidl_generator_traits::value_to_yaml(msg.app_id, out);
    out << ", ";
  }

  // member: conversation_id
  {
    out << "conversation_id: ";
    rosidl_generator_traits::value_to_yaml(msg.conversation_id, out);
    out << ", ";
  }

  // member: token
  {
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
    out << ", ";
  }

  // member: app_key
  {
    out << "app_key: ";
    rosidl_generator_traits::value_to_yaml(msg.app_key, out);
    out << ", ";
  }

  // member: secret_key
  {
    out << "secret_key: ";
    rosidl_generator_traits::value_to_yaml(msg.secret_key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetModel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: platform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "platform: ";
    rosidl_generator_traits::value_to_yaml(msg.platform, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: model_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_type: ";
    rosidl_generator_traits::value_to_yaml(msg.model_type, out);
    out << "\n";
  }

  // member: api_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "api_key: ";
    rosidl_generator_traits::value_to_yaml(msg.api_key, out);
    out << "\n";
  }

  // member: base_url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_url: ";
    rosidl_generator_traits::value_to_yaml(msg.base_url, out);
    out << "\n";
  }

  // member: app_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_id: ";
    rosidl_generator_traits::value_to_yaml(msg.app_id, out);
    out << "\n";
  }

  // member: conversation_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conversation_id: ";
    rosidl_generator_traits::value_to_yaml(msg.conversation_id, out);
    out << "\n";
  }

  // member: token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "token: ";
    rosidl_generator_traits::value_to_yaml(msg.token, out);
    out << "\n";
  }

  // member: app_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_key: ";
    rosidl_generator_traits::value_to_yaml(msg.app_key, out);
    out << "\n";
  }

  // member: secret_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secret_key: ";
    rosidl_generator_traits::value_to_yaml(msg.secret_key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetModel_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace large_models_msgs

namespace rosidl_generator_traits
{

[[deprecated("use large_models_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const large_models_msgs::srv::SetModel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  large_models_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use large_models_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const large_models_msgs::srv::SetModel_Request & msg)
{
  return large_models_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<large_models_msgs::srv::SetModel_Request>()
{
  return "large_models_msgs::srv::SetModel_Request";
}

template<>
inline const char * name<large_models_msgs::srv::SetModel_Request>()
{
  return "large_models_msgs/srv/SetModel_Request";
}

template<>
struct has_fixed_size<large_models_msgs::srv::SetModel_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<large_models_msgs::srv::SetModel_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<large_models_msgs::srv::SetModel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace large_models_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetModel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetModel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetModel_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace large_models_msgs

namespace rosidl_generator_traits
{

[[deprecated("use large_models_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const large_models_msgs::srv::SetModel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  large_models_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use large_models_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const large_models_msgs::srv::SetModel_Response & msg)
{
  return large_models_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<large_models_msgs::srv::SetModel_Response>()
{
  return "large_models_msgs::srv::SetModel_Response";
}

template<>
inline const char * name<large_models_msgs::srv::SetModel_Response>()
{
  return "large_models_msgs/srv/SetModel_Response";
}

template<>
struct has_fixed_size<large_models_msgs::srv::SetModel_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<large_models_msgs::srv::SetModel_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<large_models_msgs::srv::SetModel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<large_models_msgs::srv::SetModel>()
{
  return "large_models_msgs::srv::SetModel";
}

template<>
inline const char * name<large_models_msgs::srv::SetModel>()
{
  return "large_models_msgs/srv/SetModel";
}

template<>
struct has_fixed_size<large_models_msgs::srv::SetModel>
  : std::integral_constant<
    bool,
    has_fixed_size<large_models_msgs::srv::SetModel_Request>::value &&
    has_fixed_size<large_models_msgs::srv::SetModel_Response>::value
  >
{
};

template<>
struct has_bounded_size<large_models_msgs::srv::SetModel>
  : std::integral_constant<
    bool,
    has_bounded_size<large_models_msgs::srv::SetModel_Request>::value &&
    has_bounded_size<large_models_msgs::srv::SetModel_Response>::value
  >
{
};

template<>
struct is_service<large_models_msgs::srv::SetModel>
  : std::true_type
{
};

template<>
struct is_service_request<large_models_msgs::srv::SetModel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<large_models_msgs::srv::SetModel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__TRAITS_HPP_
