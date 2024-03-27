// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interface:srv/Catchturtle.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACE__SRV__DETAIL__CATCHTURTLE__STRUCT_HPP_
#define MY_ROBOT_INTERFACE__SRV__DETAIL__CATCHTURTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interface__srv__Catchturtle_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interface__srv__Catchturtle_Request __declspec(deprecated)
#endif

namespace my_robot_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Catchturtle_Request_
{
  using Type = Catchturtle_Request_<ContainerAllocator>;

  explicit Catchturtle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Catchturtle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interface__srv__Catchturtle_Request
    std::shared_ptr<my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interface__srv__Catchturtle_Request
    std::shared_ptr<my_robot_interface::srv::Catchturtle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Catchturtle_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Catchturtle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Catchturtle_Request_

// alias to use template instance with default allocator
using Catchturtle_Request =
  my_robot_interface::srv::Catchturtle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interface


#ifndef _WIN32
# define DEPRECATED__my_robot_interface__srv__Catchturtle_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interface__srv__Catchturtle_Response __declspec(deprecated)
#endif

namespace my_robot_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Catchturtle_Response_
{
  using Type = Catchturtle_Response_<ContainerAllocator>;

  explicit Catchturtle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Catchturtle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interface__srv__Catchturtle_Response
    std::shared_ptr<my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interface__srv__Catchturtle_Response
    std::shared_ptr<my_robot_interface::srv::Catchturtle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Catchturtle_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Catchturtle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Catchturtle_Response_

// alias to use template instance with default allocator
using Catchturtle_Response =
  my_robot_interface::srv::Catchturtle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interface

namespace my_robot_interface
{

namespace srv
{

struct Catchturtle
{
  using Request = my_robot_interface::srv::Catchturtle_Request;
  using Response = my_robot_interface::srv::Catchturtle_Response;
};

}  // namespace srv

}  // namespace my_robot_interface

#endif  // MY_ROBOT_INTERFACE__SRV__DETAIL__CATCHTURTLE__STRUCT_HPP_
