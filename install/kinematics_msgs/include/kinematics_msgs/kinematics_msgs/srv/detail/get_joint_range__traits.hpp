// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinematics_msgs:srv/GetJointRange.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__TRAITS_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinematics_msgs/srv/detail/get_joint_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kinematics_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointRange_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointRange_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointRange_Request & msg, bool use_flow_style = false)
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

}  // namespace kinematics_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kinematics_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinematics_msgs::srv::GetJointRange_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinematics_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinematics_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinematics_msgs::srv::GetJointRange_Request & msg)
{
  return kinematics_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinematics_msgs::srv::GetJointRange_Request>()
{
  return "kinematics_msgs::srv::GetJointRange_Request";
}

template<>
inline const char * name<kinematics_msgs::srv::GetJointRange_Request>()
{
  return "kinematics_msgs/srv/GetJointRange_Request";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::GetJointRange_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinematics_msgs::srv::GetJointRange_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinematics_msgs::srv::GetJointRange_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "kinematics_msgs/msg/detail/joints_range__traits.hpp"

namespace kinematics_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointRange_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointRange_Response & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointRange_Response & msg, bool use_flow_style = false)
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

}  // namespace kinematics_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kinematics_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinematics_msgs::srv::GetJointRange_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinematics_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinematics_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinematics_msgs::srv::GetJointRange_Response & msg)
{
  return kinematics_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinematics_msgs::srv::GetJointRange_Response>()
{
  return "kinematics_msgs::srv::GetJointRange_Response";
}

template<>
inline const char * name<kinematics_msgs::srv::GetJointRange_Response>()
{
  return "kinematics_msgs/srv/GetJointRange_Response";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::GetJointRange_Response>
  : std::integral_constant<bool, has_fixed_size<kinematics_msgs::msg::JointsRange>::value> {};

template<>
struct has_bounded_size<kinematics_msgs::srv::GetJointRange_Response>
  : std::integral_constant<bool, has_bounded_size<kinematics_msgs::msg::JointsRange>::value> {};

template<>
struct is_message<kinematics_msgs::srv::GetJointRange_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinematics_msgs::srv::GetJointRange>()
{
  return "kinematics_msgs::srv::GetJointRange";
}

template<>
inline const char * name<kinematics_msgs::srv::GetJointRange>()
{
  return "kinematics_msgs/srv/GetJointRange";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::GetJointRange>
  : std::integral_constant<
    bool,
    has_fixed_size<kinematics_msgs::srv::GetJointRange_Request>::value &&
    has_fixed_size<kinematics_msgs::srv::GetJointRange_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinematics_msgs::srv::GetJointRange>
  : std::integral_constant<
    bool,
    has_bounded_size<kinematics_msgs::srv::GetJointRange_Request>::value &&
    has_bounded_size<kinematics_msgs::srv::GetJointRange_Response>::value
  >
{
};

template<>
struct is_service<kinematics_msgs::srv::GetJointRange>
  : std::true_type
{
};

template<>
struct is_service_request<kinematics_msgs::srv::GetJointRange_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinematics_msgs::srv::GetJointRange_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KINEMATICS_MSGS__SRV__DETAIL__GET_JOINT_RANGE__TRAITS_HPP_
