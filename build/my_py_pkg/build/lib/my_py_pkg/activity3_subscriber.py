#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool

class NumberSubscriberNode(Node):
    def __init__(self):
        super().__init__("number_subscriber")
        self.counter_ = 0
        self.number_count_publisher_=self.create_publisher(Int64, "number_counter", 10)
        self.subscriber_=self.create_subscription(Int64, "number", self.callback_number_publisher, 10)
        self.reset_number_count_service_=self.create_service(SetBool, "reset_numbecount",self.callback_reset_number_count )
        self.get_logger().info("this crap is also up")
    
    def callback_number_publisher(self, msg):
        self.counter_ +=msg.data
        new_msg = Int64()
        new_msg.data = self.counter_
        self.number_count_publisher_.publish(new_msg)
        

    def callback_reset_number_count(self, request, response):
        if request.data:
            self.counter_ = 0
            response.service = True
            response.message = "counter has been reset"

        else:
            response.message = "counter has not been reset"

        return response


def main(args=None):
    rclpy.init(args=args)
    node = NumberSubscriberNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()