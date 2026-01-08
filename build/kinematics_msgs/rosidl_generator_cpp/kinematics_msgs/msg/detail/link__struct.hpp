// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kinematics_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef KINEMATICS_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_
#define KINEMATICS_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kinematics_msgs__msg__Link __attribute__((deprecated))
#else
# define DEPRECATED__kinematics_msgs__msg__Link __declspec(deprecated)
#endif

namespace kinematics_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Link_
{
  using Type = Link_<ContainerAllocator>;

  explicit Link_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_link = 0.0;
      this->link1 = 0.0;
      this->link2 = 0.0;
      this->link3 = 0.0;
      this->end_effector_link = 0.0;
    }
  }

  explicit Link_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_link = 0.0;
      this->link1 = 0.0;
      this->link2 = 0.0;
      this->link3 = 0.0;
      this->end_effector_link = 0.0;
    }
  }

  // field types and members
  using _base_link_type =
    double;
  _base_link_type base_link;
  using _link1_type =
    double;
  _link1_type link1;
  using _link2_type =
    double;
  _link2_type link2;
  using _link3_type =
    double;
  _link3_type link3;
  using _end_effector_link_type =
    double;
  _end_effector_link_type end_effector_link;

  // setters for named parameter idiom
  Type & set__base_link(
    const double & _arg)
  {
    this->base_link = _arg;
    return *this;
  }
  Type & set__link1(
    const double & _arg)
  {
    this->link1 = _arg;
    return *this;
  }
  Type & set__link2(
    const double & _arg)
  {
    this->link2 = _arg;
    return *this;
  }
  Type & set__link3(
    const double & _arg)
  {
    this->link3 = _arg;
    return *this;
  }
  Type & set__end_effector_link(
    const double & _arg)
  {
    this->end_effector_link = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kinematics_msgs::msg::Link_<ContainerAllocator> *;
  using ConstRawPtr =
    const kinematics_msgs::msg::Link_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kinematics_msgs::msg::Link_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kinematics_msgs::msg::Link_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::msg::Link_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::msg::Link_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kinematics_msgs::msg::Link_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kinematics_msgs::msg::Link_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kinematics_msgs::msg::Link_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kinematics_msgs::msg::Link_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kinematics_msgs__msg__Link
    std::shared_ptr<kinematics_msgs::msg::Link_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kinematics_msgs__msg__Link
    std::shared_ptr<kinematics_msgs::msg::Link_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Link_ & other) const
  {
    if (this->base_link != other.base_link) {
      return false;
    }
    if (this->link1 != other.link1) {
      return false;
    }
    if (this->link2 != other.link2) {
      return false;
    }
    if (this->link3 != other.link3) {
      return false;
    }
    if (this->end_effector_link != other.end_effector_link) {
      return false;
    }
    return true;
  }
  bool operator!=(const Link_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Link_

// alias to use template instance with default allocator
using Link =
  kinematics_msgs::msg::Link_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kinematics_msgs

#endif  // KINEMATICS_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_
