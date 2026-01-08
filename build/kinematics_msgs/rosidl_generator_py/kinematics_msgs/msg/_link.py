# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kinematics_msgs:msg/Link.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Link(type):
    """Metaclass of message 'Link'."""

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
                'kinematics_msgs.msg.Link')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__link
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__link
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__link
            cls._TYPE_SUPPORT = module.type_support_msg__msg__link
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__link

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Link(metaclass=Metaclass_Link):
    """Message class 'Link'."""

    __slots__ = [
        '_base_link',
        '_link1',
        '_link2',
        '_link3',
        '_end_effector_link',
    ]

    _fields_and_field_types = {
        'base_link': 'double',
        'link1': 'double',
        'link2': 'double',
        'link3': 'double',
        'end_effector_link': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.base_link = kwargs.get('base_link', float())
        self.link1 = kwargs.get('link1', float())
        self.link2 = kwargs.get('link2', float())
        self.link3 = kwargs.get('link3', float())
        self.end_effector_link = kwargs.get('end_effector_link', float())

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
        if self.base_link != other.base_link:
            return False
        if self.link1 != other.link1:
            return False
        if self.link2 != other.link2:
            return False
        if self.link3 != other.link3:
            return False
        if self.end_effector_link != other.end_effector_link:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base_link(self):
        """Message field 'base_link'."""
        return self._base_link

    @base_link.setter
    def base_link(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_link' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'base_link' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._base_link = value

    @builtins.property
    def link1(self):
        """Message field 'link1'."""
        return self._link1

    @link1.setter
    def link1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'link1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'link1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._link1 = value

    @builtins.property
    def link2(self):
        """Message field 'link2'."""
        return self._link2

    @link2.setter
    def link2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'link2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'link2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._link2 = value

    @builtins.property
    def link3(self):
        """Message field 'link3'."""
        return self._link3

    @link3.setter
    def link3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'link3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'link3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._link3 = value

    @builtins.property
    def end_effector_link(self):
        """Message field 'end_effector_link'."""
        return self._end_effector_link

    @end_effector_link.setter
    def end_effector_link(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_effector_link' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'end_effector_link' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._end_effector_link = value
