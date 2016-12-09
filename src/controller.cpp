#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/Joy.h>


void callback(const sensor_msgs::Joy::ConstPtr& msg)
{
  ROS_INFO("I heard: [%.3f]", msg->axes[0]);
}


int main(int argc, char**argv)
{
  ros::init(argc,argv, "test_reciver");
  ROS_INFO("random shit reciver");

  ros::NodeHandle nh;

  ros::Subscriber joy_sub_ = nh.subscribe<sensor_msgs::Joy>("joy", 10, callback);


  ros::spin();

  return 0;
}
