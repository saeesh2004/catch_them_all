#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


class AddTwoNumbersNode(Node):

    def __init__(self):
        super().__init__("add_two_numbers")
        self.service_=self.create_service(AddTwoInts, "add_two_numbers", self.callback_add_two_numbers )
        self.get_logger().info("the server has started")


    def callback_add_two_numbers(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(str(request.a) + "+" + str(request.b) +  "=" + str(response.sum) )
        return response


def main(args=None):
    rclpy.init(args=args)
    node = AddTwoNumbersNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main()