# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robocon_interfaces:srv/ImageAnalysis.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImageAnalysis_Request(type):
    """Metaclass of message 'ImageAnalysis_Request'."""

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
            module = import_type_support('robocon_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robocon_interfaces.srv.ImageAnalysis_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__image_analysis__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__image_analysis__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__image_analysis__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__image_analysis__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__image_analysis__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImageAnalysis_Request(metaclass=Metaclass_ImageAnalysis_Request):
    """Message class 'ImageAnalysis_Request'."""

    __slots__ = [
        '_analyze_brightness',
        '_detect_motion',
    ]

    _fields_and_field_types = {
        'analyze_brightness': 'boolean',
        'detect_motion': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.analyze_brightness = kwargs.get('analyze_brightness', bool())
        self.detect_motion = kwargs.get('detect_motion', bool())

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
        if self.analyze_brightness != other.analyze_brightness:
            return False
        if self.detect_motion != other.detect_motion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def analyze_brightness(self):
        """Message field 'analyze_brightness'."""
        return self._analyze_brightness

    @analyze_brightness.setter
    def analyze_brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'analyze_brightness' field must be of type 'bool'"
        self._analyze_brightness = value

    @builtins.property
    def detect_motion(self):
        """Message field 'detect_motion'."""
        return self._detect_motion

    @detect_motion.setter
    def detect_motion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'detect_motion' field must be of type 'bool'"
        self._detect_motion = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ImageAnalysis_Response(type):
    """Metaclass of message 'ImageAnalysis_Response'."""

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
            module = import_type_support('robocon_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robocon_interfaces.srv.ImageAnalysis_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__image_analysis__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__image_analysis__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__image_analysis__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__image_analysis__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__image_analysis__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImageAnalysis_Response(metaclass=Metaclass_ImageAnalysis_Response):
    """Message class 'ImageAnalysis_Response'."""

    __slots__ = [
        '_avg_brightness',
        '_motion_detected',
        '_analysis_result',
    ]

    _fields_and_field_types = {
        'avg_brightness': 'float',
        'motion_detected': 'boolean',
        'analysis_result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.avg_brightness = kwargs.get('avg_brightness', float())
        self.motion_detected = kwargs.get('motion_detected', bool())
        self.analysis_result = kwargs.get('analysis_result', str())

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
        if self.avg_brightness != other.avg_brightness:
            return False
        if self.motion_detected != other.motion_detected:
            return False
        if self.analysis_result != other.analysis_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def avg_brightness(self):
        """Message field 'avg_brightness'."""
        return self._avg_brightness

    @avg_brightness.setter
    def avg_brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'avg_brightness' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'avg_brightness' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._avg_brightness = value

    @builtins.property
    def motion_detected(self):
        """Message field 'motion_detected'."""
        return self._motion_detected

    @motion_detected.setter
    def motion_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motion_detected' field must be of type 'bool'"
        self._motion_detected = value

    @builtins.property
    def analysis_result(self):
        """Message field 'analysis_result'."""
        return self._analysis_result

    @analysis_result.setter
    def analysis_result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'analysis_result' field must be of type 'str'"
        self._analysis_result = value


class Metaclass_ImageAnalysis(type):
    """Metaclass of service 'ImageAnalysis'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robocon_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robocon_interfaces.srv.ImageAnalysis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__image_analysis

            from robocon_interfaces.srv import _image_analysis
            if _image_analysis.Metaclass_ImageAnalysis_Request._TYPE_SUPPORT is None:
                _image_analysis.Metaclass_ImageAnalysis_Request.__import_type_support__()
            if _image_analysis.Metaclass_ImageAnalysis_Response._TYPE_SUPPORT is None:
                _image_analysis.Metaclass_ImageAnalysis_Response.__import_type_support__()


class ImageAnalysis(metaclass=Metaclass_ImageAnalysis):
    from robocon_interfaces.srv._image_analysis import ImageAnalysis_Request as Request
    from robocon_interfaces.srv._image_analysis import ImageAnalysis_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
