// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FACE_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__FACE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/face_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_FaceInfo_y
{
public:
  explicit Init_FaceInfo_y(::interfaces::msg::FaceInfo & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::FaceInfo y(::interfaces::msg::FaceInfo::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::FaceInfo msg_;
};

class Init_FaceInfo_x
{
public:
  explicit Init_FaceInfo_x(::interfaces::msg::FaceInfo & msg)
  : msg_(msg)
  {}
  Init_FaceInfo_y x(::interfaces::msg::FaceInfo::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FaceInfo_y(msg_);
  }

private:
  ::interfaces::msg::FaceInfo msg_;
};

class Init_FaceInfo_height
{
public:
  explicit Init_FaceInfo_height(::interfaces::msg::FaceInfo & msg)
  : msg_(msg)
  {}
  Init_FaceInfo_x height(::interfaces::msg::FaceInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_FaceInfo_x(msg_);
  }

private:
  ::interfaces::msg::FaceInfo msg_;
};

class Init_FaceInfo_width
{
public:
  Init_FaceInfo_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceInfo_height width(::interfaces::msg::FaceInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_FaceInfo_height(msg_);
  }

private:
  ::interfaces::msg::FaceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::FaceInfo>()
{
  return interfaces::msg::builder::Init_FaceInfo_width();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FACE_INFO__BUILDER_HPP_
