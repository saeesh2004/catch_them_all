#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

def main(args=None):
    rclpy.init(args=args)
    node = Node("add_two_numbers_no_oop")
    client = node.create_client(AddTwoInts, "add_two_numbers")
    while  not client.wait_for_service(1.0):
        node.get_logger().warn("the server is yet to start........")

    request = AddTwoInts.Request()
    request.a = 36
    request.b = 33

    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)

    try:
        response = future.result()
        node.get_logger().info(str(request.a) + "+" + str(request.b) +  "=" + str(response.sum))

    except Exception as e:
        node.get_logger().error("the service call failed %r" % (e,))



if __name__=="__main__":
    main()