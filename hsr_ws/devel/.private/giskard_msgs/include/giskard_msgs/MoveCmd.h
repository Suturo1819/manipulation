// Generated by gencpp from file giskard_msgs/MoveCmd.msg
// DO NOT EDIT!


#ifndef GISKARD_MSGS_MESSAGE_MOVECMD_H
#define GISKARD_MSGS_MESSAGE_MOVECMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <giskard_msgs/Controller.h>
#include <giskard_msgs/CollisionEntry.h>

namespace giskard_msgs
{
template <class ContainerAllocator>
struct MoveCmd_
{
  typedef MoveCmd_<ContainerAllocator> Type;

  MoveCmd_()
    : controllers()
    , collisions()  {
    }
  MoveCmd_(const ContainerAllocator& _alloc)
    : controllers(_alloc)
    , collisions(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::giskard_msgs::Controller_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::giskard_msgs::Controller_<ContainerAllocator> >::other >  _controllers_type;
  _controllers_type controllers;

   typedef std::vector< ::giskard_msgs::CollisionEntry_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::giskard_msgs::CollisionEntry_<ContainerAllocator> >::other >  _collisions_type;
  _collisions_type collisions;





  typedef boost::shared_ptr< ::giskard_msgs::MoveCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::giskard_msgs::MoveCmd_<ContainerAllocator> const> ConstPtr;

}; // struct MoveCmd_

typedef ::giskard_msgs::MoveCmd_<std::allocator<void> > MoveCmd;

typedef boost::shared_ptr< ::giskard_msgs::MoveCmd > MoveCmdPtr;
typedef boost::shared_ptr< ::giskard_msgs::MoveCmd const> MoveCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::giskard_msgs::MoveCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::giskard_msgs::MoveCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace giskard_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'giskard_msgs': ['/home/michel/Desktop/suturo/motion/simulation/hsr_ws/src/giskard_msgs/msg', '/home/michel/Desktop/suturo/motion/simulation/hsr_ws/devel/.private/giskard_msgs/share/giskard_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::MoveCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::MoveCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::MoveCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::MoveCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::MoveCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::MoveCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::giskard_msgs::MoveCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "60b77fd43284c921383c3d2e3bc7bf84";
  }

  static const char* value(const ::giskard_msgs::MoveCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x60b77fd43284c921ULL;
  static const uint64_t static_value2 = 0x383c3d2e3bc7bf84ULL;
};

template<class ContainerAllocator>
struct DataType< ::giskard_msgs::MoveCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "giskard_msgs/MoveCmd";
  }

  static const char* value(const ::giskard_msgs::MoveCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::giskard_msgs::MoveCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Set of controllers that need to converge for this command to finish\n\
giskard_msgs/Controller[] controllers\n\
\n\
# Set of special collision states that shall hold during the movement\n\
giskard_msgs/CollisionEntry[] collisions\n\
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
\n\
================================================================================\n\
MSG: giskard_msgs/CollisionEntry\n\
# definitions of possible collision types to use for value\n\
uint8 AVOID_COLLISION=0\n\
uint8 ALLOW_COLLISION=1\n\
uint8 AVOID_ALL_COLLISIONS=2\n\
uint8 ALLOW_ALL_COLLISIONS=3\n\
\n\
# use one of the above constants as collision type\n\
uint8 type\n\
\n\
# enforced minimum distance between the closest points on both surfaces\n\
float64 min_dist\n\
\n\
# link of the controlled robot, if left empty all links will be selected\n\
string[] robot_links\n\
\n\
# name of body B, i.e. the second body in the described collision, can also be the controlled robot\n\
string body_b\n\
# optional: link of the particular link on body B\n\
## note: only works if body B is a multibody with a link with that name\n\
# note: if left empty, the entire body B is selected\n\
string[] link_bs\n\
\n\
";
  }

  static const char* value(const ::giskard_msgs::MoveCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::giskard_msgs::MoveCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.controllers);
      stream.next(m.collisions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::giskard_msgs::MoveCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::giskard_msgs::MoveCmd_<ContainerAllocator>& v)
  {
    s << indent << "controllers[]" << std::endl;
    for (size_t i = 0; i < v.controllers.size(); ++i)
    {
      s << indent << "  controllers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::giskard_msgs::Controller_<ContainerAllocator> >::stream(s, indent + "    ", v.controllers[i]);
    }
    s << indent << "collisions[]" << std::endl;
    for (size_t i = 0; i < v.collisions.size(); ++i)
    {
      s << indent << "  collisions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::giskard_msgs::CollisionEntry_<ContainerAllocator> >::stream(s, indent + "    ", v.collisions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GISKARD_MSGS_MESSAGE_MOVECMD_H
