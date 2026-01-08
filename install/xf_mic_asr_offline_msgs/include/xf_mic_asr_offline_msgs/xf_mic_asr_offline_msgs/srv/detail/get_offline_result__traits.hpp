// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xf_mic_asr_offline_msgs:srv/GetOfflineResult.idl
// generated code does not contain a copyright notice

#ifndef XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__TRAITS_HPP_
#define XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xf_mic_asr_offline_msgs/srv/detail/get_offline_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xf_mic_asr_offline_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetOfflineResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: offline_recognise_start
  {
    out << "offline_recognise_start: ";
    rosidl_generator_traits::value_to_yaml(msg.offline_recognise_start, out);
    out << ", ";
  }

  // member: confidence_threshold
  {
    out << "confidence_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_threshold, out);
    out << ", ";
  }

  // member: time_per_order
  {
    out << "time_per_order: ";
    rosidl_generator_traits::value_to_yaml(msg.time_per_order, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetOfflineResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: offline_recognise_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offline_recognise_start: ";
    rosidl_generator_traits::value_to_yaml(msg.offline_recognise_start, out);
    out << "\n";
  }

  // member: confidence_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_threshold, out);
    out << "\n";
  }

  // member: time_per_order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_per_order: ";
    rosidl_generator_traits::value_to_yaml(msg.time_per_order, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetOfflineResult_Request & msg, bool use_flow_style = false)
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
  const xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xf_mic_asr_offline_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xf_mic_asr_offline_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request & msg)
{
  return xf_mic_asr_offline_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request>()
{
  return "xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request";
}

template<>
inline const char * name<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request>()
{
  return "xf_mic_asr_offline_msgs/srv/GetOfflineResult_Request";
}

template<>
struct has_fixed_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xf_mic_asr_offline_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetOfflineResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: fail_reason
  {
    out << "fail_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_reason, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetOfflineResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: fail_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fail_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fail_reason, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetOfflineResult_Response & msg, bool use_flow_style = false)
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
  const xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xf_mic_asr_offline_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xf_mic_asr_offline_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response & msg)
{
  return xf_mic_asr_offline_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response>()
{
  return "xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response";
}

template<>
inline const char * name<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response>()
{
  return "xf_mic_asr_offline_msgs/srv/GetOfflineResult_Response";
}

template<>
struct has_fixed_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xf_mic_asr_offline_msgs::srv::GetOfflineResult>()
{
  return "xf_mic_asr_offline_msgs::srv::GetOfflineResult";
}

template<>
inline const char * name<xf_mic_asr_offline_msgs::srv::GetOfflineResult>()
{
  return "xf_mic_asr_offline_msgs/srv/GetOfflineResult";
}

template<>
struct has_fixed_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult>
  : std::integral_constant<
    bool,
    has_fixed_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request>::value &&
    has_fixed_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult>
  : std::integral_constant<
    bool,
    has_bounded_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request>::value &&
    has_bounded_size<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response>::value
  >
{
};

template<>
struct is_service<xf_mic_asr_offline_msgs::srv::GetOfflineResult>
  : std::true_type
{
};

template<>
struct is_service_request<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xf_mic_asr_offline_msgs::srv::GetOfflineResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XF_MIC_ASR_OFFLINE_MSGS__SRV__DETAIL__GET_OFFLINE_RESULT__TRAITS_HPP_
