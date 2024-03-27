#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from my_robot_interfaces.msg import HardwareStatus

class hw_statusNode(Node):
    def __init__(self):
        super().__init__(self)
        self.hardware_status_publisher_=self.create_publisher(HardwareStatus, "hardware_status", 10)
        self.timer = self.create_timer(10, self.publish_hardware_status)

    def publish_hardware_status(self):
        msg = HardwareStatus()
        msg.temperature = 7
        msg.are_motors_running = True
        msg.debug_message = "nothing special"

        self.hardware_status_publisher_.publish(msg)

def main(args = None):
    rclpy.init(args=args)
    node = hw_statusNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()