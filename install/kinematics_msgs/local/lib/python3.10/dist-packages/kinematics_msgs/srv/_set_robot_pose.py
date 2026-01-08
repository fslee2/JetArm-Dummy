# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kinematics_msgs:srv/SetRobotPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'position'
# Member 'pitch_range'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetRobotPose_Request(type):
    """Metaclass of message 'SetRobotPose_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kinematics_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kinematics_msgs.srv.SetRobotPose_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_robot_pose__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_robot_pose__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_robot_pose__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_robot_pose__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_robot_pose__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetRobotPose_Request(metaclass=Metaclass_SetRobotPose_Request):
    """Message class 'SetRobotPose_Request'."""

    __slots__ = [
        '_position',
        '_pitch',
        '_pitch_range',
        '_resolution',
        '_duration',
    ]

    _fields_and_field_types = {
        'position': 'sequence<double>',
        'pitch': 'double',
        'pitch_range': 'sequence<double>',
        'resolution': 'double',
        'duration': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.position = array.array('d', kwargs.get('position', []))
        self.pitch = kwargs.get('pitch', float())
        self.pitch_range = array.array('d', kwargs.get('pitch_range', []))
        self.resolution = kwargs.get('resolution', float())
        self.duration = kwargs.get('duration', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.position != other.position:
            return False
        if self.pitch != other.pitch:
            return False
        if self.pitch_range != other.pitch_range:
            return False
        if self.resolution != other.resolution:
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'position' array.array() must have the type code of 'd'"
            self._position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position = array.array('d', value)

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def pitch_range(self):
        """Message field 'pitch_range'."""
        return self._pitch_range

    @pitch_range.setter
    def pitch_range(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'pitch_range' array.array() must have the type code of 'd'"
            self._pitch_range = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'pitch_range' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pitch_range = array.array('d', value)

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._resolution = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration = value


# Import statements for member types

# Member 'pulse'
# Member 'current_pulse'
# Member 'rpy'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SetRobotPose_Response(type):
    """Metaclass of message 'SetRobotPose_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kinematics_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kinematics_msgs.srv.SetRobotPose_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_robot_pose__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_robot_pose__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_robot_pose__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_robot_pose__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_robot_pose__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetRobotPose_Response(metaclass=Metaclass_SetRobotPose_Response):
    """Message class 'SetRobotPose_Response'."""

    __slots__ = [
        '_success',
        '_pulse',
        '_current_pulse',
        '_rpy',
        '_min_variation',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'pulse': 'sequence<uint16>',
        'current_pulse': 'sequence<uint16>',
        'rpy': 'sequence<double>',
        'min_variation': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.pulse = array.array('H', kwargs.get('pulse', []))
        self.current_pulse = array.array('H', kwargs.get('current_pulse', []))
        self.rpy = array.array('d', kwargs.get('rpy', []))
        self.min_variation = kwargs.get('min_variation', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.pulse != other.pulse:
            return False
        if self.current_pulse != other.current_pulse:
            return False
        if self.rpy != other.rpy:
            return False
        if self.min_variation != other.min_variation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def pulse(self):
        """Message field 'pulse'."""
        return self._pulse

    @pulse.setter
    def pulse(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'pulse' array.array() must have the type code of 'H'"
            self._pulse = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'pulse' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._pulse = array.array('H', value)

    @builtins.property
    def current_pulse(self):
        """Message field 'current_pulse'."""
        return self._current_pulse

    @current_pulse.setter
    def current_pulse(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'current_pulse' array.array() must have the type code of 'H'"
            self._current_pulse = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'current_pulse' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._current_pulse = array.array('H', value)

    @builtins.property
    def rpy(self):
        """Message field 'rpy'."""
        return self._rpy

    @rpy.setter
    def rpy(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'rpy' array.array() must have the type code of 'd'"
            self._rpy = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rpy' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rpy = array.array('d', value)

    @builtins.property
    def min_variation(self):
        """Message field 'min_variation'."""
        return self._min_variation

    @min_variation.setter
    def min_variation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_variation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_variation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_variation = value


class Metaclass_SetRobotPose(type):
    """Metaclass of service 'SetRobotPose'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kinematics_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kinematics_msgs.srv.SetRobotPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_robot_pose

            from kinematics_msgs.srv import _set_robot_pose
            if _set_robot_pose.Metaclass_SetRobotPose_Request._TYPE_SUPPORT is None:
                _set_robot_pose.Metaclass_SetRobotPose_Request.__import_type_support__()
            if _set_robot_pose.Metaclass_SetRobotPose_Response._TYPE_SUPPORT is None:
                _set_robot_pose.Metaclass_SetRobotPose_Response.__import_type_support__()


class SetRobotPose(metaclass=Metaclass_SetRobotPose):
    from kinematics_msgs.srv._set_robot_pose import SetRobotPose_Request as Request
    from kinematics_msgs.srv._set_robot_pose import SetRobotPose_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
