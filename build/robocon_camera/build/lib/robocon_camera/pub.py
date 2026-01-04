import rclpy
from rclpy.node import Node
import cv2 as cv
from cv_bridge import CvBridge
from sensor_msgs.msg import Image

class ImagePub(Node):
    def __init__(self):
        super().__init__('video_capture')
        self.publisher_ = self.create_publisher(Image, 'topic', 10)
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.cap = cv.VideoCapture(0)
        self.br = CvBridge() # bridge tu anh opencv ve imagemsg
        self.get_logger().info("Node and webcam has started")
    
    def timer_callback(self):
        ret, frame = self.cap.read()
        if ret:
            ros_image_message = self.br.cv2_to_imgmsg(frame, encoding="bgr8")
            self.publisher_.publish(ros_image_message)
            self.get_logger().info("Publishing...")

def main(args=None):
    rclpy.init(args=args)
    image_pub = ImagePub()
    rclpy.spin(image_pub)
    ImagePub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()