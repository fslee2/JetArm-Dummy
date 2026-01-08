// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/FacesInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FACES_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__FACES_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/faces_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_FacesInfo_data
{
public:
  Init_FacesInfo_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::FacesInfo data(::interfaces::msg::FacesInfo::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::FacesInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::FacesInfo>()
{
  return interfaces::msg::builder::Init_FacesInfo_data();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FACES_INFO__BUILDER_HPP_
