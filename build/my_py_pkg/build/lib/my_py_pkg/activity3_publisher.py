#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool

class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__("number")
        self.number= 2
        self.publisher_=self.create_publisher(Int64, "number publisher", 10)
        self.timer = self.create_timer(0.5, self.number_publisher)
        self.get_logger().info("this node has started")

    def number_publisher(self):
        msg = Int64
        msg.data = self.number
        self.publisher_.publish(msg)
        

def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()