// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinematics_msgs:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__TRAITS_HPP_
#define KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinematics_msgs/srv/detail/set_robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kinematics_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRobotPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: pitch_range
  {
    if (msg.pitch_range.size() == 0) {
      out << "pitch_range: []";
    } else {
      out << "pitch_range: [";
      size_t pending_items = msg.pitch_range.size();
      for (auto item : msg.pitch_range) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetRobotPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: pitch_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pitch_range.size() == 0) {
      out << "pitch_range: []\n";
    } else {
      out << "pitch_range:\n";
      for (auto item : msg.pitch_range) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetRobotPose_Request & msg, bool use_flow_style = false)
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
  const kinematics_msgs::srv::SetRobotPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinematics_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinematics_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinematics_msgs::srv::SetRobotPose_Request & msg)
{
  return kinematics_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinematics_msgs::srv::SetRobotPose_Request>()
{
  return "kinematics_msgs::srv::SetRobotPose_Request";
}

template<>
inline const char * name<kinematics_msgs::srv::SetRobotPose_Request>()
{
  return "kinematics_msgs/srv/SetRobotPose_Request";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::SetRobotPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kinematics_msgs::srv::SetRobotPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kinematics_msgs::srv::SetRobotPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kinematics_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRobotPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: pulse
  {
    if (msg.pulse.size() == 0) {
      out << "pulse: []";
    } else {
      out << "pulse: [";
      size_t pending_items = msg.pulse.size();
      for (auto item : msg.pulse) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_pulse
  {
    if (msg.current_pulse.size() == 0) {
      out << "current_pulse: []";
    } else {
      out << "current_pulse: [";
      size_t pending_items = msg.current_pulse.size();
      for (auto item : msg.current_pulse) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rpy
  {
    if (msg.rpy.size() == 0) {
      out << "rpy: []";
    } else {
      out << "rpy: [";
      size_t pending_items = msg.rpy.size();
      for (auto item : msg.rpy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: min_variation
  {
    out << "min_variation: ";
    rosidl_generator_traits::value_to_yaml(msg.min_variation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetRobotPose_Response & msg,
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

  // member: pulse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pulse.size() == 0) {
      out << "pulse: []\n";
    } else {
      out << "pulse:\n";
      for (auto item : msg.pulse) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_pulse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_pulse.size() == 0) {
      out << "current_pulse: []\n";
    } else {
      out << "current_pulse:\n";
      for (auto item : msg.current_pulse) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpy.size() == 0) {
      out << "rpy: []\n";
    } else {
      out << "rpy:\n";
      for (auto item : msg.rpy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: min_variation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_variation: ";
    rosidl_generator_traits::value_to_yaml(msg.min_variation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetRobotPose_Response & msg, bool use_flow_style = false)
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
  const kinematics_msgs::srv::SetRobotPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinematics_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinematics_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinematics_msgs::srv::SetRobotPose_Response & msg)
{
  return kinematics_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinematics_msgs::srv::SetRobotPose_Response>()
{
  return "kinematics_msgs::srv::SetRobotPose_Response";
}

template<>
inline const char * name<kinematics_msgs::srv::SetRobotPose_Response>()
{
  return "kinematics_msgs/srv/SetRobotPose_Response";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::SetRobotPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kinematics_msgs::srv::SetRobotPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kinematics_msgs::srv::SetRobotPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinematics_msgs::srv::SetRobotPose>()
{
  return "kinematics_msgs::srv::SetRobotPose";
}

template<>
inline const char * name<kinematics_msgs::srv::SetRobotPose>()
{
  return "kinematics_msgs/srv/SetRobotPose";
}

template<>
struct has_fixed_size<kinematics_msgs::srv::SetRobotPose>
  : std::integral_constant<
    bool,
    has_fixed_size<kinematics_msgs::srv::SetRobotPose_Request>::value &&
    has_fixed_size<kinematics_msgs::srv::SetRobotPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinematics_msgs::srv::SetRobotPose>
  : std::integral_constant<
    bool,
    has_bounded_size<kinematics_msgs::srv::SetRobotPose_Request>::value &&
    has_bounded_size<kinematics_msgs::srv::SetRobotPose_Response>::value
  >
{
};

template<>
struct is_service<kinematics_msgs::srv::SetRobotPose>
  : std::true_type
{
};

template<>
struct is_service_request<kinematics_msgs::srv::SetRobotPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinematics_msgs::srv::SetRobotPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KINEMATICS_MSGS__SRV__DETAIL__SET_ROBOT_POSE__TRAITS_HPP_
