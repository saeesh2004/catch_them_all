#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64



class NumberNode(Node):

    def __init__(self):
        super().__init__("number_publisher")
        self.number_=2
        self.number_publisher_=self.create_publisher(Int64, "number", 10)
        self.timer = self.create_timer(0.5, self.publish_number)
        self.get_logger().info("node is started sucessfully")
       
    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.number_publisher_.publish(msg)
    


def main(args=None):
    rclpy.init(args=args)
    node = NumberNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()