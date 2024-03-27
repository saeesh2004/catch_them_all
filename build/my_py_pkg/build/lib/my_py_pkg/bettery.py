#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from my_robot_interfaces.srv import SetLed
from functools import partial

class BatteryNode(Node):
    def __init__(self):
        super().__init__("Battery_status")
        self.battery_status_ = "full"
        self.last_time_changed_battery_status = self.get_current_time()
        self.timer = self.create_timer(0.1, self.check_battery_status )


    def get_current_time(self):
        secs , nsecs = self.get_clock().now().seconds_nanoseconds()
        return secs + nsecs/100000000.0
    
    def check_battery_status(self):
        time_now = self.get_current_time()
        if self.battery_status_ == "full":
            if time_now - self.last_time_changed_battery_status >= 4:
                self.battery_status_ = "empty"
                self.get_logger().info("battery is empty ! charging battery ........")
                self.last_time_changed_battery_status = time_now 
                self.call_set_led_server(3, 1)

        else :
            if time_now - self.last_time_changed_battery_status >= 6:
                self.battery_status_ = "full"
                self.get_logger().info("battery is full.....")
                self.last_time_changed_battery_status = time_now
                self.call_set_led_server(3, 0)

    def call_set_led_server(self, led_number, state):
        client = self.create_client(SetLed, "set_led")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("the service has not started yet.......")

            request = SetLed.Request()
            request.led_number = led_number
            request.state = state

            future = client.call_async(request)
            future.add_done_callback(partial(self.callback_call_set_led_server, led_number = led_number, state = state))

    def callback_call_set_led_server(self, future, led_number, state):
        try:
            response = future.result()
            self.get_logger().info(str(response.success))

        except Exception as e:
            self.get_logger().error("the service call has failed %r" % (e, ))     
            

def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main() 
      