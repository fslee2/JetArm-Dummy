// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/SetStringBool.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_STRING_BOOL__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__SET_STRING_BOOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__SetStringBool_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__SetStringBool_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStringBool_Request_
{
  using Type = SetStringBool_Request_<ContainerAllocator>;

  explicit SetStringBool_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_str = "";
      this->data_bool = false;
    }
  }

  explicit SetStringBool_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data_str(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_str = "";
      this->data_bool = false;
    }
  }

  // field types and members
  using _data_str_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_str_type data_str;
  using _data_bool_type =
    bool;
  _data_bool_type data_bool;

  // setters for named parameter idiom
  Type & set__data_str(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data_str = _arg;
    return *this;
  }
  Type & set__data_bool(
    const bool & _arg)
  {
    this->data_bool = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::SetStringBool_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::SetStringBool_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::SetStringBool_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::SetStringBool_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetStringBool_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetStringBool_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetStringBool_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetStringBool_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::SetStringBool_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::SetStringBool_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__SetStringBool_Request
    std::shared_ptr<interfaces::srv::SetStringBool_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__SetStringBool_Request
    std::shared_ptr<interfaces::srv::SetStringBool_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStringBool_Request_ & other) const
  {
    if (this->data_str != other.data_str) {
      return false;
    }
    if (this->data_bool != other.data_bool) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStringBool_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStringBool_Request_

// alias to use template instance with default allocator
using SetStringBool_Request =
  interfaces::srv::SetStringBool_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__SetStringBool_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__SetStringBool_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStringBool_Response_
{
  using Type = SetStringBool_Response_<ContainerAllocator>;

  explicit SetStringBool_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetStringBool_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::SetStringBool_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::SetStringBool_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::SetStringBool_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::SetStringBool_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetStringBool_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetStringBool_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetStringBool_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetStringBool_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::SetStringBool_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::SetStringBool_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__SetStringBool_Response
    std::shared_ptr<interfaces::srv::SetStringBool_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__SetStringBool_Response
    std::shared_ptr<interfaces::srv::SetStringBool_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStringBool_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStringBool_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStringBool_Response_

// alias to use template instance with default allocator
using SetStringBool_Response =
  interfaces::srv::SetStringBool_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct SetStringBool
{
  using Request = interfaces::srv::SetStringBool_Request;
  using Response = interfaces::srv::SetStringBool_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_STRING_BOOL__STRUCT_HPP_
