// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xf_mic_asr_offline_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#ifndef XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__TRAITS_HPP_
#define XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xf_mic_asr_offline_msgs/srv/detail/set_string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xf_mic_asr_offline_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetString_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetString_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetString_Request & msg, bool use_flow_style = false)
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

}  // namespace xf_mic_asr_offline_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xf_mic_asr_offline_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xf_mic_asr_offline_msgs::srv::SetString_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xf_mic_asr_offline_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xf_mic_asr_offline_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xf_mic_asr_offline_msgs::srv::SetString_Request & msg)
{
  return xf_mic_asr_offline_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xf_mic_asr_offline_msgs::srv::SetString_Request>()
{
  return "xf_mic_asr_offline_msgs::srv::SetString_Request";
}

template<>
inline const char * name<xf_mic_asr_offline_msgs::srv::SetString_Request>()
{
  return "xf_mic_asr_offline_msgs/srv/SetString_Request";
}

template<>
struct has_fixed_size<xf_mic_asr_offline_msgs::srv::SetString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xf_mic_asr_offline_msgs::srv::SetString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xf_mic_asr_offline_msgs::srv::SetString_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xf_mic_asr_offline_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetString_Response & msg,
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
  const SetString_Response & msg,
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

inline std::string to_yaml(const SetString_Response & msg, bool use_flow_style = false)
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

}  // namespace xf_mic_asr_offline_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xf_mic_asr_offline_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xf_mic_asr_offline_msgs::srv::SetString_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xf_mic_asr_offline_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xf_mic_asr_offline_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xf_mic_asr_offline_msgs::srv::SetString_Response & msg)
{
  return xf_mic_asr_offline_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xf_mic_asr_offline_msgs::srv::SetString_Response>()
{
  return "xf_mic_asr_offline_msgs::srv::SetString_Response";
}

template<>
inline const char * name<xf_mic_asr_offline_msgs::srv::SetString_Response>()
{
  return "xf_mic_asr_offline_msgs/srv/SetString_Response";
}

template<>
struct has_fixed_size<xf_mic_asr_offline_msgs::srv::SetString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xf_mic_asr_offline_msgs::srv::SetString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xf_mic_asr_offline_msgs::srv::SetString_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xf_mic_asr_offline_msgs::srv::SetString>()
{
  return "xf_mic_asr_offline_msgs::srv::SetString";
}

template<>
inline const char * name<xf_mic_asr_offline_msgs::srv::SetString>()
{
  return "xf_mic_asr_offline_msgs/srv/SetString";
}

template<>
struct has_fixed_size<xf_mic_asr_offline_msgs::srv::SetString>
  : std::integral_constant<
    bool,
    has_fixed_size<xf_mic_asr_offline_msgs::srv::SetString_Request>::value &&
    has_fixed_size<xf_mic_asr_offline_msgs::srv::SetString_Response>::value
  >
{
};

template<>
struct has_bounded_size<xf_mic_asr_offline_msgs::srv::SetString>
  : std::integral_constant<
    bool,
    has_bounded_size<xf_mic_asr_offline_msgs::srv::SetString_Request>::value &&
    has_bounded_size<xf_mic_asr_offline_msgs::srv::SetString_Response>::value
  >
{
};

template<>
struct is_service<xf_mic_asr_offline_msgs::srv::SetString>
  : std::true_type
{
};

template<>
struct is_service_request<xf_mic_asr_offline_msgs::srv::SetString_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xf_mic_asr_offline_msgs::srv::SetString_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__SET_STRING__TRAITS_HPP_
