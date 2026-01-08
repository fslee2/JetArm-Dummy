// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from large_models_msgs:srv/SetModel.idl
// generated code does not contain a copyright notice

#ifndef LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__STRUCT_HPP_
#define LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__large_models_msgs__srv__SetModel_Request __attribute__((deprecated))
#else
# define DEPRECATED__large_models_msgs__srv__SetModel_Request __declspec(deprecated)
#endif

namespace large_models_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetModel_Request_
{
  using Type = SetModel_Request_<ContainerAllocator>;

  explicit SetModel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform = "";
      this->model = "";
      this->model_type = "";
      this->api_key = "";
      this->base_url = "";
      this->app_id = "";
      this->conversation_id = "";
      this->token = "";
      this->app_key = "";
      this->secret_key = "";
    }
  }

  explicit SetModel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : platform(_alloc),
    model(_alloc),
    model_type(_alloc),
    api_key(_alloc),
    base_url(_alloc),
    app_id(_alloc),
    conversation_id(_alloc),
    token(_alloc),
    app_key(_alloc),
    secret_key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform = "";
      this->model = "";
      this->model_type = "";
      this->api_key = "";
      this->base_url = "";
      this->app_id = "";
      this->conversation_id = "";
      this->token = "";
      this->app_key = "";
      this->secret_key = "";
    }
  }

  // field types and members
  using _platform_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _platform_type platform;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type model;
  using _model_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type_type model_type;
  using _api_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _api_key_type api_key;
  using _base_url_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _base_url_type base_url;
  using _app_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _app_id_type app_id;
  using _conversation_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _conversation_id_type conversation_id;
  using _token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_type token;
  using _app_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _app_key_type app_key;
  using _secret_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _secret_key_type secret_key;

  // setters for named parameter idiom
  Type & set__platform(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->platform = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__model_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_type = _arg;
    return *this;
  }
  Type & set__api_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->api_key = _arg;
    return *this;
  }
  Type & set__base_url(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->base_url = _arg;
    return *this;
  }
  Type & set__app_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->app_id = _arg;
    return *this;
  }
  Type & set__conversation_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->conversation_id = _arg;
    return *this;
  }
  Type & set__token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token = _arg;
    return *this;
  }
  Type & set__app_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->app_key = _arg;
    return *this;
  }
  Type & set__secret_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->secret_key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    large_models_msgs::srv::SetModel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const large_models_msgs::srv::SetModel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<large_models_msgs::srv::SetModel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<large_models_msgs::srv::SetModel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::srv::SetModel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::srv::SetModel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::srv::SetModel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::srv::SetModel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<large_models_msgs::srv::SetModel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<large_models_msgs::srv::SetModel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__large_models_msgs__srv__SetModel_Request
    std::shared_ptr<large_models_msgs::srv::SetModel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__large_models_msgs__srv__SetModel_Request
    std::shared_ptr<large_models_msgs::srv::SetModel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetModel_Request_ & other) const
  {
    if (this->platform != other.platform) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    if (this->model_type != other.model_type) {
      return false;
    }
    if (this->api_key != other.api_key) {
      return false;
    }
    if (this->base_url != other.base_url) {
      return false;
    }
    if (this->app_id != other.app_id) {
      return false;
    }
    if (this->conversation_id != other.conversation_id) {
      return false;
    }
    if (this->token != other.token) {
      return false;
    }
    if (this->app_key != other.app_key) {
      return false;
    }
    if (this->secret_key != other.secret_key) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetModel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetModel_Request_

// alias to use template instance with default allocator
using SetModel_Request =
  large_models_msgs::srv::SetModel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace large_models_msgs


#ifndef _WIN32
# define DEPRECATED__large_models_msgs__srv__SetModel_Response __attribute__((deprecated))
#else
# define DEPRECATED__large_models_msgs__srv__SetModel_Response __declspec(deprecated)
#endif

namespace large_models_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetModel_Response_
{
  using Type = SetModel_Response_<ContainerAllocator>;

  explicit SetModel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetModel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    large_models_msgs::srv::SetModel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const large_models_msgs::srv::SetModel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<large_models_msgs::srv::SetModel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<large_models_msgs::srv::SetModel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::srv::SetModel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::srv::SetModel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      large_models_msgs::srv::SetModel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<large_models_msgs::srv::SetModel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<large_models_msgs::srv::SetModel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<large_models_msgs::srv::SetModel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__large_models_msgs__srv__SetModel_Response
    std::shared_ptr<large_models_msgs::srv::SetModel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__large_models_msgs__srv__SetModel_Response
    std::shared_ptr<large_models_msgs::srv::SetModel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetModel_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetModel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetModel_Response_

// alias to use template instance with default allocator
using SetModel_Response =
  large_models_msgs::srv::SetModel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace large_models_msgs

namespace large_models_msgs
{

namespace srv
{

struct SetModel
{
  using Request = large_models_msgs::srv::SetModel_Request;
  using Response = large_models_msgs::srv::SetModel_Response;
};

}  // namespace srv

}  // namespace large_models_msgs

#endif  // LARGE_MODELS_MSGS__SRV__DETAIL__SET_MODEL__STRUCT_HPP_
