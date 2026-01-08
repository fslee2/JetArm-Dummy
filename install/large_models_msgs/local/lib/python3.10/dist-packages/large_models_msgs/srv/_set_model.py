# generated from rosidl_generator_py/resource/_idl.py.em
# with input from large_models_msgs:srv/SetModel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetModel_Request(type):
    """Metaclass of message 'SetModel_Request'."""

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
            module = import_type_support('large_models_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'large_models_msgs.srv.SetModel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_model__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_model__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_model__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_model__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_model__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetModel_Request(metaclass=Metaclass_SetModel_Request):
    """Message class 'SetModel_Request'."""

    __slots__ = [
        '_platform',
        '_model',
        '_model_type',
        '_api_key',
        '_base_url',
        '_app_id',
        '_conversation_id',
        '_token',
        '_app_key',
        '_secret_key',
    ]

    _fields_and_field_types = {
        'platform': 'string',
        'model': 'string',
        'model_type': 'string',
        'api_key': 'string',
        'base_url': 'string',
        'app_id': 'string',
        'conversation_id': 'string',
        'token': 'string',
        'app_key': 'string',
        'secret_key': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.platform = kwargs.get('platform', str())
        self.model = kwargs.get('model', str())
        self.model_type = kwargs.get('model_type', str())
        self.api_key = kwargs.get('api_key', str())
        self.base_url = kwargs.get('base_url', str())
        self.app_id = kwargs.get('app_id', str())
        self.conversation_id = kwargs.get('conversation_id', str())
        self.token = kwargs.get('token', str())
        self.app_key = kwargs.get('app_key', str())
        self.secret_key = kwargs.get('secret_key', str())

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
        if self.platform != other.platform:
            return False
        if self.model != other.model:
            return False
        if self.model_type != other.model_type:
            return False
        if self.api_key != other.api_key:
            return False
        if self.base_url != other.base_url:
            return False
        if self.app_id != other.app_id:
            return False
        if self.conversation_id != other.conversation_id:
            return False
        if self.token != other.token:
            return False
        if self.app_key != other.app_key:
            return False
        if self.secret_key != other.secret_key:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def platform(self):
        """Message field 'platform'."""
        return self._platform

    @platform.setter
    def platform(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'platform' field must be of type 'str'"
        self._platform = value

    @builtins.property
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model' field must be of type 'str'"
        self._model = value

    @builtins.property
    def model_type(self):
        """Message field 'model_type'."""
        return self._model_type

    @model_type.setter
    def model_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model_type' field must be of type 'str'"
        self._model_type = value

    @builtins.property
    def api_key(self):
        """Message field 'api_key'."""
        return self._api_key

    @api_key.setter
    def api_key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'api_key' field must be of type 'str'"
        self._api_key = value

    @builtins.property
    def base_url(self):
        """Message field 'base_url'."""
        return self._base_url

    @base_url.setter
    def base_url(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'base_url' field must be of type 'str'"
        self._base_url = value

    @builtins.property
    def app_id(self):
        """Message field 'app_id'."""
        return self._app_id

    @app_id.setter
    def app_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'app_id' field must be of type 'str'"
        self._app_id = value

    @builtins.property
    def conversation_id(self):
        """Message field 'conversation_id'."""
        return self._conversation_id

    @conversation_id.setter
    def conversation_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'conversation_id' field must be of type 'str'"
        self._conversation_id = value

    @builtins.property
    def token(self):
        """Message field 'token'."""
        return self._token

    @token.setter
    def token(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'token' field must be of type 'str'"
        self._token = value

    @builtins.property
    def app_key(self):
        """Message field 'app_key'."""
        return self._app_key

    @app_key.setter
    def app_key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'app_key' field must be of type 'str'"
        self._app_key = value

    @builtins.property
    def secret_key(self):
        """Message field 'secret_key'."""
        return self._secret_key

    @secret_key.setter
    def secret_key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'secret_key' field must be of type 'str'"
        self._secret_key = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetModel_Response(type):
    """Metaclass of message 'SetModel_Response'."""

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
            module = import_type_support('large_models_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'large_models_msgs.srv.SetModel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_model__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_model__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_model__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_model__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_model__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetModel_Response(metaclass=Metaclass_SetModel_Response):
    """Message class 'SetModel_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
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
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetModel(type):
    """Metaclass of service 'SetModel'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('large_models_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'large_models_msgs.srv.SetModel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_model

            from large_models_msgs.srv import _set_model
            if _set_model.Metaclass_SetModel_Request._TYPE_SUPPORT is None:
                _set_model.Metaclass_SetModel_Request.__import_type_support__()
            if _set_model.Metaclass_SetModel_Response._TYPE_SUPPORT is None:
                _set_model.Metaclass_SetModel_Response.__import_type_support__()


class SetModel(metaclass=Metaclass_SetModel):
    from large_models_msgs.srv._set_model import SetModel_Request as Request
    from large_models_msgs.srv._set_model import SetModel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
