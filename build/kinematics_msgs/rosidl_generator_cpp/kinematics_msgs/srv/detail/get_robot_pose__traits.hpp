// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinematics_msgs:srv/GetRobotPose.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__GET_ROBOT_POSE__TRAITS_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__GET_ROBOT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinematics_msgs/srv/detail/get_robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kinematics_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotPose_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotPose_Request & msg, bool use_flow_style = false)
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
  const kinematics_msgs::srv::GetRobotPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinematics_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinematics_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinematics_msgs::srv::GetRobotPose_Request & msg)
{
  return kinematics_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinematics_msgs::srv::GetRobotPose_Request>()
{
  return "kinematics_msgs::srv::GetRobotPose_Request";
}

template<>
inline const char * name<kinematics_msgs::srv::GetRobotPose_Request>()
{
  return "kinematics_msgs/srv/GetRobotPose_Request";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::GetRobotPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinematics_msgs::srv::GetRobotPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinematics_msgs::srv::GetRobotPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace kinematics_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: solution
  {
    out << "solution: ";
    rosidl_generator_traits::value_to_yaml(msg.solution, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotPose_Response & msg,
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

  // member: solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution: ";
    rosidl_generator_traits::value_to_yaml(msg.solution, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotPose_Response & msg, bool use_flow_style = false)
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
  const kinematics_msgs::srv::GetRobotPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinematics_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinematics_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinematics_msgs::srv::GetRobotPose_Response & msg)
{
  return kinematics_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinematics_msgs::srv::GetRobotPose_Response>()
{
  return "kinematics_msgs::srv::GetRobotPose_Response";
}

template<>
inline const char * name<kinematics_msgs::srv::GetRobotPose_Response>()
{
  return "kinematics_msgs/srv/GetRobotPose_Response";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::GetRobotPose_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<kinematics_msgs::srv::GetRobotPose_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<kinematics_msgs::srv::GetRobotPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinematics_msgs::srv::GetRobotPose>()
{
  return "kinematics_msgs::srv::GetRobotPose";
}

template<>
inline const char * name<kinematics_msgs::srv::GetRobotPose>()
{
  return "kinematics_msgs/srv/GetRobotPose";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::GetRobotPose>
  : std::integral_constant<
    bool,
    has_fixed_size<kinematics_msgs::srv::GetRobotPose_Request>::value &&
    has_fixed_size<kinematics_msgs::srv::GetRobotPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinematics_msgs::srv::GetRobotPose>
  : std::integral_constant<
    bool,
    has_bounded_size<kinematics_msgs::srv::GetRobotPose_Request>::value &&
    has_bounded_size<kinematics_msgs::srv::GetRobotPose_Response>::value
  >
{
};

template<>
struct is_service<kinematics_msgs::srv::GetRobotPose>
  : std::true_type
{
};

template<>
struct is_service_request<kinematics_msgs::srv::GetRobotPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinematics_msgs::srv::GetRobotPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KINEMATICS_MSGS__SRV__DETAIL__GET_ROBOT_POSE__TRAITS_HPP_
