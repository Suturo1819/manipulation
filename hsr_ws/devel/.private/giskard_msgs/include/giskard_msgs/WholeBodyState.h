// Generated by gencpp from file giskard_msgs/WholeBodyState.msg
// DO NOT EDIT!


#ifndef GISKARD_MSGS_MESSAGE_WHOLEBODYSTATE_H
#define GISKARD_MSGS_MESSAGE_WHOLEBODYSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <giskard_msgs/SemanticFloat64.h>
#include <giskard_msgs/SemanticBool.h>

namespace giskard_msgs
{
template <class ContainerAllocator>
struct WholeBodyState_
{
  typedef WholeBodyState_<ContainerAllocator> Type;

  WholeBodyState_()
    : header()
    , running_time()
    , left_arm_max_vel(0.0)
    , right_arm_max_vel(0.0)
    , torso_vel(0.0)
    , convergence_values()
    , motion_started(false)
    , motion_old(false)
    , torso_moving(false)
    , left_arm_moving(false)
    , right_arm_moving(false)
    , convergence_flags()  {
    }
  WholeBodyState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , running_time()
    , left_arm_max_vel(0.0)
    , right_arm_max_vel(0.0)
    , torso_vel(0.0)
    , convergence_values(_alloc)
    , motion_started(false)
    , motion_old(false)
    , torso_moving(false)
    , left_arm_moving(false)
    , right_arm_moving(false)
    , convergence_flags(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Duration _running_time_type;
  _running_time_type running_time;

   typedef double _left_arm_max_vel_type;
  _left_arm_max_vel_type left_arm_max_vel;

   typedef double _right_arm_max_vel_type;
  _right_arm_max_vel_type right_arm_max_vel;

   typedef double _torso_vel_type;
  _torso_vel_type torso_vel;

   typedef std::vector< ::giskard_msgs::SemanticFloat64_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::giskard_msgs::SemanticFloat64_<ContainerAllocator> >::other >  _convergence_values_type;
  _convergence_values_type convergence_values;

   typedef uint8_t _motion_started_type;
  _motion_started_type motion_started;

   typedef uint8_t _motion_old_type;
  _motion_old_type motion_old;

   typedef uint8_t _torso_moving_type;
  _torso_moving_type torso_moving;

   typedef uint8_t _left_arm_moving_type;
  _left_arm_moving_type left_arm_moving;

   typedef uint8_t _right_arm_moving_type;
  _right_arm_moving_type right_arm_moving;

   typedef std::vector< ::giskard_msgs::SemanticBool_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::giskard_msgs::SemanticBool_<ContainerAllocator> >::other >  _convergence_flags_type;
  _convergence_flags_type convergence_flags;





  typedef boost::shared_ptr< ::giskard_msgs::WholeBodyState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::giskard_msgs::WholeBodyState_<ContainerAllocator> const> ConstPtr;

}; // struct WholeBodyState_

typedef ::giskard_msgs::WholeBodyState_<std::allocator<void> > WholeBodyState;

typedef boost::shared_ptr< ::giskard_msgs::WholeBodyState > WholeBodyStatePtr;
typedef boost::shared_ptr< ::giskard_msgs::WholeBodyState const> WholeBodyStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::giskard_msgs::WholeBodyState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::WholeBodyState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::WholeBodyState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::WholeBodyState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b441f43466bb7375e7ea0632d6d9b0f3";
  }

  static const char* value(const ::giskard_msgs::WholeBodyState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb441f43466bb7375ULL;
  static const uint64_t static_value2 = 0xe7ea0632d6d9b0f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "giskard_msgs/WholeBodyState";
  }

  static const char* value(const ::giskard_msgs::WholeBodyState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# only using timestamp for the moment\n\
std_msgs/Header header\n\
\n\
# feature values used to make decisions about succeeded actions\n\
duration running_time\n\
float64 left_arm_max_vel\n\
float64 right_arm_max_vel\n\
float64 torso_vel\n\
giskard_msgs/SemanticFloat64[] convergence_values # internal values used to decide convergence\n\
\n\
# classification results used to decide whether action succeeded\n\
bool motion_started # true, as soon low-level controller has started execution the command\n\
bool motion_old # true, if time passed since start of motion is above threshold\n\
bool torso_moving # true, if torso velocity is above threshold\n\
bool left_arm_moving # true, if velocity of any joint of left arm is above threshold\n\
bool right_arm_moving # true, if velocity of any joint of right arm is above threshold\n\
giskard_msgs/SemanticBool[] convergence_flags # true, if the corresponding feature values are below a threshold\n\
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
MSG: giskard_msgs/SemanticFloat64\n\
# A floating-point with semantics hint attached.\n\
# Note: I know this is not much but better than just the number. ;)\n\
\n\
# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.\n\
string semantics\n\
# The actual value communicated.\n\
float64 value\n\
\n\
================================================================================\n\
MSG: giskard_msgs/SemanticBool\n\
# A bool with semantics hint attached.\n\
# Note: I know this is not much but better than just the bool. ;)\n\
\n\
# Hint about the semantics of this number. Examples: frame_id, joint-name, or task dimension.\n\
string semantics\n\
# The actual value communicated.\n\
bool value\n\
";
  }

  static const char* value(const ::giskard_msgs::WholeBodyState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.running_time);
      stream.next(m.left_arm_max_vel);
      stream.next(m.right_arm_max_vel);
      stream.next(m.torso_vel);
      stream.next(m.convergence_values);
      stream.next(m.motion_started);
      stream.next(m.motion_old);
      stream.next(m.torso_moving);
      stream.next(m.left_arm_moving);
      stream.next(m.right_arm_moving);
      stream.next(m.convergence_flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WholeBodyState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::giskard_msgs::WholeBodyState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::giskard_msgs::WholeBodyState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "running_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.running_time);
    s << indent << "left_arm_max_vel: ";
    Printer<double>::stream(s, indent + "  ", v.left_arm_max_vel);
    s << indent << "right_arm_max_vel: ";
    Printer<double>::stream(s, indent + "  ", v.right_arm_max_vel);
    s << indent << "torso_vel: ";
    Printer<double>::stream(s, indent + "  ", v.torso_vel);
    s << indent << "convergence_values[]" << std::endl;
    for (size_t i = 0; i < v.convergence_values.size(); ++i)
    {
      s << indent << "  convergence_values[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::giskard_msgs::SemanticFloat64_<ContainerAllocator> >::stream(s, indent + "    ", v.convergence_values[i]);
    }
    s << indent << "motion_started: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motion_started);
    s << indent << "motion_old: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motion_old);
    s << indent << "torso_moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.torso_moving);
    s << indent << "left_arm_moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left_arm_moving);
    s << indent << "right_arm_moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.right_arm_moving);
    s << indent << "convergence_flags[]" << std::endl;
    for (size_t i = 0; i < v.convergence_flags.size(); ++i)
    {
      s << indent << "  convergence_flags[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::giskard_msgs::SemanticBool_<ContainerAllocator> >::stream(s, indent + "    ", v.convergence_flags[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GISKARD_MSGS_MESSAGE_WHOLEBODYSTATE_H
