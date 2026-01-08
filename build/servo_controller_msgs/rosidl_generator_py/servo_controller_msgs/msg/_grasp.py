# generated from rosidl_generator_py/resource/_idl.py.em
# with input from servo_controller_msgs:msg/Grasp.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'position'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Grasp(type):
    """Metaclass of message 'Grasp'."""

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
            module = import_type_support('servo_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'servo_controller_msgs.msg.Grasp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__grasp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__grasp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__grasp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__grasp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__grasp

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Grasp(metaclass=Metaclass_Grasp):
    """Message class 'Grasp'."""

    __slots__ = [
        '_mode',
        '_position',
        '_pitch',
        '_angle',
        '_gripper',
        '_grasp_posture',
        '_pre_grasp_posture',
    ]

    _fields_and_field_types = {
        'mode': 'string',
        'position': 'sequence<double>',
        'pitch': 'uint16',
        'angle': 'double',
        'gripper': 'uint16',
        'grasp_posture': 'uint16',
        'pre_grasp_posture': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', str())
        self.position = array.array('d', kwargs.get('position', []))
        self.pitch = kwargs.get('pitch', int())
        self.angle = kwargs.get('angle', float())
        self.gripper = kwargs.get('gripper', int())
        self.grasp_posture = kwargs.get('grasp_posture', int())
        self.pre_grasp_posture = kwargs.get('pre_grasp_posture', int())

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
        if self.mode != other.mode:
            return False
        if self.position != other.position:
            return False
        if self.pitch != other.pitch:
            return False
        if self.angle != other.angle:
            return False
        if self.gripper != other.gripper:
            return False
        if self.grasp_posture != other.grasp_posture:
            return False
        if self.pre_grasp_posture != other.pre_grasp_posture:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

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
                isinstance(value, int), \
                "The 'pitch' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pitch' field must be an unsigned integer in [0, 65535]"
        self._pitch = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle = value

    @builtins.property
    def gripper(self):
        """Message field 'gripper'."""
        return self._gripper

    @gripper.setter
    def gripper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gripper' field must be an unsigned integer in [0, 65535]"
        self._gripper = value

    @builtins.property
    def grasp_posture(self):
        """Message field 'grasp_posture'."""
        return self._grasp_posture

    @grasp_posture.setter
    def grasp_posture(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grasp_posture' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'grasp_posture' field must be an unsigned integer in [0, 65535]"
        self._grasp_posture = value

    @builtins.property
    def pre_grasp_posture(self):
        """Message field 'pre_grasp_posture'."""
        return self._pre_grasp_posture

    @pre_grasp_posture.setter
    def pre_grasp_posture(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pre_grasp_posture' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'pre_grasp_posture' field must be an unsigned integer in [0, 65535]"
        self._pre_grasp_posture = value
