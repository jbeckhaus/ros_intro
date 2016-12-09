#include <ros/ros.h>
#include "std_msgs/String.h"




void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char**argv)
{
  ros::init(argc,argv, "test_reciver");
  ROS_INFO("random shit reciver");

  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe("/test_str", 10, chatterCallback);

  ros::spin();

  return 0;
}
