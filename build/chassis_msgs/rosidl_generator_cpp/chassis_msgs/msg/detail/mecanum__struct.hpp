// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chassis_msgs:msg/Mecanum.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_MSGS__MSG__DETAIL__MECANUM__STRUCT_HPP_
#define CHASSIS_MSGS__MSG__DETAIL__MECANUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chassis_msgs__msg__Mecanum __attribute__((deprecated))
#else
# define DEPRECATED__chassis_msgs__msg__Mecanum __declspec(deprecated)
#endif

namespace chassis_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mecanum_
{
  using Type = Mecanum_<ContainerAllocator>;

  explicit Mecanum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
      this->direction = 0.0f;
      this->angular_rate = 0.0f;
    }
  }

  explicit Mecanum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
      this->direction = 0.0f;
      this->angular_rate = 0.0f;
    }
  }

  // field types and members
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _direction_type =
    float;
  _direction_type direction;
  using _angular_rate_type =
    float;
  _angular_rate_type angular_rate;

  // setters for named parameter idiom
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__direction(
    const float & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__angular_rate(
    const float & _arg)
  {
    this->angular_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chassis_msgs::msg::Mecanum_<ContainerAllocator> *;
  using ConstRawPtr =
    const chassis_msgs::msg::Mecanum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chassis_msgs::msg::Mecanum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chassis_msgs::msg::Mecanum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chassis_msgs::msg::Mecanum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chassis_msgs::msg::Mecanum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chassis_msgs::msg::Mecanum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chassis_msgs::msg::Mecanum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chassis_msgs::msg::Mecanum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chassis_msgs::msg::Mecanum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chassis_msgs__msg__Mecanum
    std::shared_ptr<chassis_msgs::msg::Mecanum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chassis_msgs__msg__Mecanum
    std::shared_ptr<chassis_msgs::msg::Mecanum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mecanum_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->angular_rate != other.angular_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mecanum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mecanum_

// alias to use template instance with default allocator
using Mecanum =
  chassis_msgs::msg::Mecanum_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chassis_msgs

#endif  // CHASSIS_MSGS__MSG__DETAIL__MECANUM__STRUCT_HPP_
