// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interface:srv/Catchturtle.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACE__SRV__DETAIL__CATCHTURTLE__STRUCT_H_
#define MY_ROBOT_INTERFACE__SRV__DETAIL__CATCHTURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Catchturtle in the package my_robot_interface.
typedef struct my_robot_interface__srv__Catchturtle_Request
{
  rosidl_runtime_c__String name;
} my_robot_interface__srv__Catchturtle_Request;

// Struct for a sequence of my_robot_interface__srv__Catchturtle_Request.
typedef struct my_robot_interface__srv__Catchturtle_Request__Sequence
{
  my_robot_interface__srv__Catchturtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interface__srv__Catchturtle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Catchturtle in the package my_robot_interface.
typedef struct my_robot_interface__srv__Catchturtle_Response
{
  bool success;
} my_robot_interface__srv__Catchturtle_Response;

// Struct for a sequence of my_robot_interface__srv__Catchturtle_Response.
typedef struct my_robot_interface__srv__Catchturtle_Response__Sequence
{
  my_robot_interface__srv__Catchturtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interface__srv__Catchturtle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACE__SRV__DETAIL__CATCHTURTLE__STRUCT_H_
