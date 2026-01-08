// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from large_models_msgs:srv/SetBox.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__TRAITS_HPP_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "large_models_msgs/srv/detail/set_box__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace large_models_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBox_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: box
  {
    if (msg.box.size() == 0) {
      out << "box: []";
    } else {
      out << "box: [";
      size_t pending_items = msg.box.size();
      for (auto item : msg.box) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: offset
  {
    if (msg.offset.size() == 0) {
      out << "offset: []";
    } else {
      out << "offset: [";
      size_t pending_items = msg.offset.size();
      for (auto item : msg.offset) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBox_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.box.size() == 0) {
      out << "box: []\n";
    } else {
      out << "box:\n";
      for (auto item : msg.box) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.offset.size() == 0) {
      out << "offset: []\n";
    } else {
      out << "offset:\n";
      for (auto item : msg.offset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBox_Request & msg, bool use_flow_style = false)
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
  const large_models_msgs::srv::SetBox_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  large_models_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use large_models_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const large_models_msgs::srv::SetBox_Request & msg)
{
  return large_models_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<large_models_msgs::srv::SetBox_Request>()
{
  return "large_models_msgs::srv::SetBox_Request";
}

template<>
inline const char * name<large_models_msgs::srv::SetBox_Request>()
{
  return "large_models_msgs/srv/SetBox_Request";
}

template<>
struct has_fixed_size<large_models_msgs::srv::SetBox_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<large_models_msgs::srv::SetBox_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<large_models_msgs::srv::SetBox_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace large_models_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBox_Response & msg,
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
  const SetBox_Response & msg,
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

inline std::string to_yaml(const SetBox_Response & msg, bool use_flow_style = false)
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
  const large_models_msgs::srv::SetBox_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  large_models_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use large_models_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const large_models_msgs::srv::SetBox_Response & msg)
{
  return large_models_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<large_models_msgs::srv::SetBox_Response>()
{
  return "large_models_msgs::srv::SetBox_Response";
}

template<>
inline const char * name<large_models_msgs::srv::SetBox_Response>()
{
  return "large_models_msgs/srv/SetBox_Response";
}

template<>
struct has_fixed_size<large_models_msgs::srv::SetBox_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<large_models_msgs::srv::SetBox_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<large_models_msgs::srv::SetBox_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<large_models_msgs::srv::SetBox>()
{
  return "large_models_msgs::srv::SetBox";
}

template<>
inline const char * name<large_models_msgs::srv::SetBox>()
{
  return "large_models_msgs/srv/SetBox";
}

template<>
struct has_fixed_size<large_models_msgs::srv::SetBox>
  : std::integral_constant<
    bool,
    has_fixed_size<large_models_msgs::srv::SetBox_Request>::value &&
    has_fixed_size<large_models_msgs::srv::SetBox_Response>::value
  >
{
};

template<>
struct has_bounded_size<large_models_msgs::srv::SetBox>
  : std::integral_constant<
    bool,
    has_bounded_size<large_models_msgs::srv::SetBox_Request>::value &&
    has_bounded_size<large_models_msgs::srv::SetBox_Response>::value
  >
{
};

template<>
struct is_service<large_models_msgs::srv::SetBox>
  : std::true_type
{
};

template<>
struct is_service_request<large_models_msgs::srv::SetBox_Request>
  : std::true_type
{
};

template<>
struct is_service_response<large_models_msgs::srv::SetBox_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__TRAITS_HPP_
