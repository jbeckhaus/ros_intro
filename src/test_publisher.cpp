



#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char**argv)
{
  ros::init(argc,argv, "test_publisher");
  ROS_INFO("random shit");

  ros::NodeHandle nh;
  ros::Publisher pub = nh.advertise<std_msgs::String>("/test_str", 10);  // ros:: sagt das die klasse publisher im namespace ros liegt sodass wir pub vom typ publisher anlegen können

  ros::Rate loop_rate(2); //(in Hz)
  int i = 0;
  while (ros::ok())
  {
    std_msgs::String msg;
    msg.data = "Message " + std::to_string(i);
    pub.publish(msg);

    ros::spinOnce();
    loop_rate.sleep();

    i++;
  }


  return 0;
}
