# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multi_agent_search_interfaces:msg/AgentMessage.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'payload'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AgentMessage(type):
    """Metaclass of message 'AgentMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HEARTBEAT': 0,
        'COORDINATION': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('multi_agent_search_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'multi_agent_search_interfaces.msg.AgentMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__agent_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__agent_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__agent_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__agent_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__agent_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HEARTBEAT': cls.__constants['HEARTBEAT'],
            'COORDINATION': cls.__constants['COORDINATION'],
        }

    @property
    def HEARTBEAT(self):
        """Message constant 'HEARTBEAT'."""
        return Metaclass_AgentMessage.__constants['HEARTBEAT']

    @property
    def COORDINATION(self):
        """Message constant 'COORDINATION'."""
        return Metaclass_AgentMessage.__constants['COORDINATION']


class AgentMessage(metaclass=Metaclass_AgentMessage):
    """
    Message class 'AgentMessage'.

    Constants:
      HEARTBEAT
      COORDINATION
    """

    __slots__ = [
        '_msg_type',
        '_sender_id',
        '_recipient_id',
        '_timestamp',
        '_overwrite_targeted',
        '_payload',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'msg_type': 'uint8',
        'sender_id': 'string',
        'recipient_id': 'string',
        'timestamp': 'uint64',
        'overwrite_targeted': 'boolean',
        'payload': 'sequence<uint8>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msg_type = kwargs.get('msg_type', int())
        self.sender_id = kwargs.get('sender_id', str())
        self.recipient_id = kwargs.get('recipient_id', str())
        self.timestamp = kwargs.get('timestamp', int())
        self.overwrite_targeted = kwargs.get('overwrite_targeted', bool())
        self.payload = array.array('B', kwargs.get('payload', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.msg_type != other.msg_type:
            return False
        if self.sender_id != other.sender_id:
            return False
        if self.recipient_id != other.recipient_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.overwrite_targeted != other.overwrite_targeted:
            return False
        if self.payload != other.payload:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def msg_type(self):
        """Message field 'msg_type'."""
        return self._msg_type

    @msg_type.setter
    def msg_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'msg_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_type' field must be an unsigned integer in [0, 255]"
        self._msg_type = value

    @builtins.property
    def sender_id(self):
        """Message field 'sender_id'."""
        return self._sender_id

    @sender_id.setter
    def sender_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sender_id' field must be of type 'str'"
        self._sender_id = value

    @builtins.property
    def recipient_id(self):
        """Message field 'recipient_id'."""
        return self._recipient_id

    @recipient_id.setter
    def recipient_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'recipient_id' field must be of type 'str'"
        self._recipient_id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def overwrite_targeted(self):
        """Message field 'overwrite_targeted'."""
        return self._overwrite_targeted

    @overwrite_targeted.setter
    def overwrite_targeted(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'overwrite_targeted' field must be of type 'bool'"
        self._overwrite_targeted = value

    @builtins.property
    def payload(self):
        """Message field 'payload'."""
        return self._payload

    @payload.setter
    def payload(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'payload' array.array() must have the type code of 'B'"
                self._payload = value
                return
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'payload' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._payload = array.array('B', value)
