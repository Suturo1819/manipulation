// Generated by gencpp from file giskard_msgs/MotionPhase.msg
// DO NOT EDIT!


#ifndef GISKARD_MSGS_MESSAGE_MOTIONPHASE_H
#define GISKARD_MSGS_MESSAGE_MOTIONPHASE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <giskard_msgs/Constraint.h>

namespace giskard_msgs
{
template <class ContainerAllocator>
struct MotionPhase_
{
  typedef MotionPhase_<ContainerAllocator> Type;

  MotionPhase_()
    : name()
    , constraints()  {
    }
  MotionPhase_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , constraints(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::vector< ::giskard_msgs::Constraint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::giskard_msgs::Constraint_<ContainerAllocator> >::other >  _constraints_type;
  _constraints_type constraints;





  typedef boost::shared_ptr< ::giskard_msgs::MotionPhase_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::giskard_msgs::MotionPhase_<ContainerAllocator> const> ConstPtr;

}; // struct MotionPhase_

typedef ::giskard_msgs::MotionPhase_<std::allocator<void> > MotionPhase;

typedef boost::shared_ptr< ::giskard_msgs::MotionPhase > MotionPhasePtr;
typedef boost::shared_ptr< ::giskard_msgs::MotionPhase const> MotionPhaseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::giskard_msgs::MotionPhase_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::giskard_msgs::MotionPhase_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::giskard_msgs::MotionPhase_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::giskard_msgs::MotionPhase_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::MotionPhase_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::giskard_msgs::MotionPhase_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::MotionPhase_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::giskard_msgs::MotionPhase_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::giskard_msgs::MotionPhase_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a0948cf625fccf5454fdbf95bfb4d2d5";
  }

  static const char* value(const ::giskard_msgs::MotionPhase_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa0948cf625fccf54ULL;
  static const uint64_t static_value2 = 0x54fdbf95bfb4d2d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::giskard_msgs::MotionPhase_<ContainerAllocator> >
{
  static const char* value()
  {
    return "giskard_msgs/MotionPhase";
  }

  static const char* value(const ::giskard_msgs::MotionPhase_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::giskard_msgs::MotionPhase_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# definition of a task-specific motion phase\n\
\n\
# identifier of the motion phase\n\
string name\n\
\n\
# a list of constraints representing the motion goal\n\
giskard_msgs/Constraint[] constraints\n\
\n\
================================================================================\n\
MSG: giskard_msgs/Constraint\n\
# a string identifying the expression behind the constraint\n\
string name\n\
\n\
# desired lower and upper boundaries that shall be enforced\n\
float64 lower\n\
float64 upper\n\
";
  }

  static const char* value(const ::giskard_msgs::MotionPhase_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::giskard_msgs::MotionPhase_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.constraints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotionPhase_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::giskard_msgs::MotionPhase_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::giskard_msgs::MotionPhase_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "constraints[]" << std::endl;
    for (size_t i = 0; i < v.constraints.size(); ++i)
    {
      s << indent << "  constraints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::giskard_msgs::Constraint_<ContainerAllocator> >::stream(s, indent + "    ", v.constraints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GISKARD_MSGS_MESSAGE_MOTIONPHASE_H
