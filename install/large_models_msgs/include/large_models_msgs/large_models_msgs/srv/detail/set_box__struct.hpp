// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from large_models_msgs:srv/SetBox.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__STRUCT_HPP_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__large_models_msgs__srv__SetBox_Request __attribute__((deprecated))
#else
# define DEPRECATED__large_models_msgs__srv__SetBox_Request __declspec(deprecated)
#endif

namespace large_models_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBox_Request_
{
  using Type = SetBox_Request_<ContainerAllocator>;

  explicit SetBox_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
    }
  }

  explicit SetBox_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
    }
  }

  // field types and members
  using _box_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _box_type box;
  using _offset_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _offset_type offset;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;

  // setters for named parameter idiom
  Type & set__box(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->box = _arg;
    return *this;
  }
  Type & set__offset(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    large_models_msgs::srv::SetBox_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const large_models_msgs::srv::SetBox_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<large_models_msgs::srv::SetBox_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<large_models_msgs::srv::SetBox_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::srv::SetBox_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::srv::SetBox_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::srv::SetBox_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::srv::SetBox_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<large_models_msgs::srv::SetBox_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<large_models_msgs::srv::SetBox_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__large_models_msgs__srv__SetBox_Request
    std::shared_ptr<large_models_msgs::srv::SetBox_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__large_models_msgs__srv__SetBox_Request
    std::shared_ptr<large_models_msgs::srv::SetBox_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBox_Request_ & other) const
  {
    if (this->box != other.box) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBox_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBox_Request_

// alias to use template instance with default allocator
using SetBox_Request =
  large_models_msgs::srv::SetBox_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace large_models_msgs


#ifndef _WIN32
# define DEPRECATED__large_models_msgs__srv__SetBox_Response __attribute__((deprecated))
#else
# define DEPRECATED__large_models_msgs__srv__SetBox_Response __declspec(deprecated)
#endif

namespace large_models_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBox_Response_
{
  using Type = SetBox_Response_<ContainerAllocator>;

  explicit SetBox_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetBox_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    large_models_msgs::srv::SetBox_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const large_models_msgs::srv::SetBox_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<large_models_msgs::srv::SetBox_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<large_models_msgs::srv::SetBox_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::srv::SetBox_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::srv::SetBox_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::srv::SetBox_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::srv::SetBox_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<large_models_msgs::srv::SetBox_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<large_models_msgs::srv::SetBox_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__large_models_msgs__srv__SetBox_Response
    std::shared_ptr<large_models_msgs::srv::SetBox_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__large_models_msgs__srv__SetBox_Response
    std::shared_ptr<large_models_msgs::srv::SetBox_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBox_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBox_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBox_Response_

// alias to use template instance with default allocator
using SetBox_Response =
  large_models_msgs::srv::SetBox_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace large_models_msgs

namespace large_models_msgs
{

namespace srv
{

struct SetBox
{
  using Request = large_models_msgs::srv::SetBox_Request;
  using Response = large_models_msgs::srv::SetBox_Response;
};

}  // namespace srv

}  // namespace large_models_msgs

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_BOX__STRUCT_HPP_
