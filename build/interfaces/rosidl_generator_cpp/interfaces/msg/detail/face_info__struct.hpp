// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FACE_INFO__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__FACE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__FaceInfo __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__FaceInfo __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceInfo_
{
  using Type = FaceInfo_<ContainerAllocator>;

  explicit FaceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->x = 0l;
      this->y = 0l;
    }
  }

  explicit FaceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->x = 0l;
      this->y = 0l;
    }
  }

  // field types and members
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::FaceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::FaceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::FaceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::FaceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FaceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FaceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FaceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FaceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::FaceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::FaceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__FaceInfo
    std::shared_ptr<interfaces::msg::FaceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__FaceInfo
    std::shared_ptr<interfaces::msg::FaceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceInfo_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceInfo_

// alias to use template instance with default allocator
using FaceInfo =
  interfaces::msg::FaceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FACE_INFO__STRUCT_HPP_
