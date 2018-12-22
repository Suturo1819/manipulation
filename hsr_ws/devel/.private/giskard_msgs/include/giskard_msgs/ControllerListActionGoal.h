// Generated by gencpp from file giskard_msgs/ControllerListActionGoal.msg
// DO NOT EDIT!


#ifndef GISKARD_MSGS_MESSAGE_CONTROLLERLISTACTIONGOAL_H
#define GISKARD_MSGS_MESSAGE_CONTROLLERLISTACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <giskard_msgs/ControllerListGoal.h>

namespace giskard_msgs
{
template <class ContainerAllocator>
struct ControllerListActionGoal_
{
  typedef ControllerListActionGoal_<ContainerAllocator> Type;

  ControllerListActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  ControllerListActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::giskard_msgs::ControllerListGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerListActionGoal_

typedef ::giskard_msgs::ControllerListActionGoal_<std::allocator<void> > ControllerListActionGoal;

typedef boost::shared_ptr< ::giskard_msgs::ControllerListActionGoal > ControllerListActionGoalPtr;
typedef boost::shared_ptr< ::giskard_msgs::ControllerListActionGoal const> ControllerListActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace giskard_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'giskard_msgs': ['/home/michel/Desktop/suturo/motion/simulation/hsr_ws/src/giskard_msgs/msg', '/home/michel/Desktop/suturo/motion/simulation/hsr_ws/devel/.private/giskard_msgs/share/giskard_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bf2f98061c59775677f1bd98538e3b84";
  }

  static const char* value(const ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbf2f98061c597756ULL;
  static const uint64_t static_value2 = 0x77f1bd98538e3b84ULL;
};

template<class ContainerAllocator>
struct DataType< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "giskard_msgs/ControllerListActionGoal";
  }

  static const char* value(const ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
ControllerListGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: giskard_msgs/ControllerListGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# goal message\n\
\n\
# definitions of possible values to use as type\n\
uint8 STANDARD_CONTROLLER=0\n\
uint8 YAML_CONTROLLER=1\n\
\n\
# use of the above constants to indicate the type of command\n\
uint8 type\n\
\n\
# list of controller specifications to run\n\
# will only be interpreted if type==STANDARD_CONTROLLER\n\
giskard_msgs/Controller[] controllers\n\
\n\
# YAML description of a controller to run\n\
# will only be interpreted if type==YAML_CONTROLLER\n\
string yaml\n\
\n\
================================================================================\n\
MSG: giskard_msgs/Controller\n\
# definitions of possible values to use as type\n\
uint8 UNDEFINED=0\n\
uint8 JOINT=1\n\
uint8 TRANSLATION_3D=2\n\
uint8 ROTATION_3D=3\n\
\n\
# use of the above constants to indicate the type of controller\n\
uint8 type\n\
\n\
# Name of the link that is at the start of the controlled kinematic chain\n\
string root_link\n\
\n\
# Name of the link that is at the end of the controlled kinematic chain\n\
string tip_link \n\
\n\
# Proportional gain used by the controller\n\
float64 p_gain\n\
\n\
# Weight assigned to the controller within the cost-function solved in each cycle\n\
float64 weight\n\
\n\
# Maximum speed\n\
# m/s if type==TRANSLATION_3D\n\
# rad/s if type==ROTATION_3D\n\
# min(max_speed, joint_velocity_limit_specified_in_urdf) if type==JOINT\n\
float64 max_speed\n\
\n\
# controller goal, interpretation depends on value in type field\n\
# JOINT: ignores this field\n\
# TRANSLATION_3D: desired translation of tip_link relative to root_link\n\
# ROTATION_3D: desired orientation of tip_link relative to root_link\n\
geometry_msgs/PoseStamped goal_pose\n\
\n\
# controller goal, interpretation depends on value in type field\n\
# JOINT: reads the position values for all joints in the kinematic chain between root_link and tip_link\n\
# TRANSLATION_3D: ignores this field\n\
# ROTATION_3D: ignores this field\n\
sensor_msgs/JointState goal_state\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: sensor_msgs/JointState\n\
# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
";
  }

  static const char* value(const ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerListActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::giskard_msgs::ControllerListActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::giskard_msgs::ControllerListGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GISKARD_MSGS_MESSAGE_CONTROLLERLISTACTIONGOAL_H
