/*-------------------------------------
    Author: Jonathan Beckhaus 2016
    EMail: jonathan.beckhaus@live.de
    License: MIT License
-------------------------------------*/


#include <ros/ros.h>

int main(int argc, char**argv)
{
  ros::init(argc,argv, "test_node");
  ROS_INFO("random shit");
  return 0;
}
