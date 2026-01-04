import rclpy
from robocon_interfaces.srv import ImageAnalysis
from rclpy.node import Node
import random

class Image_Serv(Node):
    def __init__(self):
        super().__init__('image_serv')
        self.srv = self.create_service(ImageAnalysis, 'Image_Server', self.image_serv_callback)
        self.get_logger().info("The Image Server has started...")
    
    def image_serv_callback(self, request, response):
        response.avg_brightness = random.uniform(0.0,255.0)
        response.motion_detected = random.choice([True, False])
        result_msg = []
        if response.avg_brightness > 127:
            result_msg.append("Bright") # Them bright vao neu brightness > 127
        else:
            result_msg.append("Dark")

        if response.motion_detected:
            result_msg.append("Motion Detected")
        else:
            result_msg.append("No Moving")
        
        response.analysis_result = f"Analysis Completed: {', '.join(result_msg)}"

        return response
    
def main(args=None):
    rclpy.init(args=args)
    img_ser = Image_Serv()
    rclpy.spin(img_ser)
    img_ser.destroy_node()
    rclpy.shutdown()
