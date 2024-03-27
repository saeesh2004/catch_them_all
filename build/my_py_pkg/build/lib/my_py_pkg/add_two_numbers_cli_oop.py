#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial

class AddTwoNumbersClientNode(Node):
    def __init__(self):
        super().__init__("add_two_numbers_client")
        self.call_add_two_numbers_server(36, 33)
        self.get_logger().info("server has started")


    def call_add_two_numbers_server(self, a, b):
        client = self.create_client(AddTwoInts, "add_two_numbers")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("the service has not started yet.......")

            request = AddTwoInts.Request()
            request.a = a
            request.b = b

            future = client.call_async(request)
            future.add_done_callback(partial(self.callback_call_add_two_numbers, a=a, b=b))

    def callback_call_add_two_numbers(self, future, a, b):
        try:
            response = future.result()
            self.get_logger().info(str(a) + "+" + str(b) + "=" + str(response.sum))

        except Exception as e:
            self.get_logger().error("the service call has failed %r" % (e, ))

def main(args=None):
    rclpy.init(args=args)
    node = AddTwoNumbersClientNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main()