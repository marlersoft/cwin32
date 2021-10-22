// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (4)
//--------------------------------------------------------------------------------
#define DML_TENSOR_DIMENSION_COUNT_MAX (UINT)5
#define DML_TEMPORARY_BUFFER_ALIGNMENT (UINT)256
#define DML_PERSISTENT_BUFFER_ALIGNMENT (UINT)256
#define DML_MINIMUM_BUFFER_TENSOR_ALIGNMENT (UINT)16

//--------------------------------------------------------------------------------
// Section: Types (137)
//--------------------------------------------------------------------------------
typedef enum {
    DML_TENSOR_DATA_TYPE_UNKNOWN = 0,
    DML_TENSOR_DATA_TYPE_FLOAT32 = 1,
    DML_TENSOR_DATA_TYPE_FLOAT16 = 2,
    DML_TENSOR_DATA_TYPE_UINT32 = 3,
    DML_TENSOR_DATA_TYPE_UINT16 = 4,
    DML_TENSOR_DATA_TYPE_UINT8 = 5,
    DML_TENSOR_DATA_TYPE_INT32 = 6,
    DML_TENSOR_DATA_TYPE_INT16 = 7,
    DML_TENSOR_DATA_TYPE_INT8 = 8,
} DML_TENSOR_DATA_TYPE;

typedef enum {
    DML_TENSOR_TYPE_INVALID = 0,
    DML_TENSOR_TYPE_BUFFER = 1,
} DML_TENSOR_TYPE;

typedef enum {
    DML_TENSOR_FLAG_NONE = 0,
    DML_TENSOR_FLAG_OWNED_BY_DML = 1,
} DML_TENSOR_FLAGS;

typedef int DML_BUFFER_TENSOR_DESC;

typedef int DML_TENSOR_DESC;

typedef enum {
    DML_OPERATOR_INVALID = 0,
    DML_OPERATOR_ELEMENT_WISE_IDENTITY = 1,
    DML_OPERATOR_ELEMENT_WISE_ABS = 2,
    DML_OPERATOR_ELEMENT_WISE_ACOS = 3,
    DML_OPERATOR_ELEMENT_WISE_ADD = 4,
    DML_OPERATOR_ELEMENT_WISE_ASIN = 5,
    DML_OPERATOR_ELEMENT_WISE_ATAN = 6,
    DML_OPERATOR_ELEMENT_WISE_CEIL = 7,
    DML_OPERATOR_ELEMENT_WISE_CLIP = 8,
    DML_OPERATOR_ELEMENT_WISE_COS = 9,
    DML_OPERATOR_ELEMENT_WISE_DIVIDE = 10,
    DML_OPERATOR_ELEMENT_WISE_EXP = 11,
    DML_OPERATOR_ELEMENT_WISE_FLOOR = 12,
    DML_OPERATOR_ELEMENT_WISE_LOG = 13,
    DML_OPERATOR_ELEMENT_WISE_LOGICAL_AND = 14,
    DML_OPERATOR_ELEMENT_WISE_LOGICAL_EQUALS = 15,
    DML_OPERATOR_ELEMENT_WISE_LOGICAL_GREATER_THAN = 16,
    DML_OPERATOR_ELEMENT_WISE_LOGICAL_LESS_THAN = 17,
    DML_OPERATOR_ELEMENT_WISE_LOGICAL_NOT = 18,
    DML_OPERATOR_ELEMENT_WISE_LOGICAL_OR = 19,
    DML_OPERATOR_ELEMENT_WISE_LOGICAL_XOR = 20,
    DML_OPERATOR_ELEMENT_WISE_MAX = 21,
    DML_OPERATOR_ELEMENT_WISE_MEAN = 22,
    DML_OPERATOR_ELEMENT_WISE_MIN = 23,
    DML_OPERATOR_ELEMENT_WISE_MULTIPLY = 24,
    DML_OPERATOR_ELEMENT_WISE_POW = 25,
    DML_OPERATOR_ELEMENT_WISE_CONSTANT_POW = 26,
    DML_OPERATOR_ELEMENT_WISE_RECIP = 27,
    DML_OPERATOR_ELEMENT_WISE_SIN = 28,
    DML_OPERATOR_ELEMENT_WISE_SQRT = 29,
    DML_OPERATOR_ELEMENT_WISE_SUBTRACT = 30,
    DML_OPERATOR_ELEMENT_WISE_TAN = 31,
    DML_OPERATOR_ELEMENT_WISE_THRESHOLD = 32,
    DML_OPERATOR_ELEMENT_WISE_QUANTIZE_LINEAR = 33,
    DML_OPERATOR_ELEMENT_WISE_DEQUANTIZE_LINEAR = 34,
    DML_OPERATOR_ACTIVATION_ELU = 35,
    DML_OPERATOR_ACTIVATION_HARDMAX = 36,
    DML_OPERATOR_ACTIVATION_HARD_SIGMOID = 37,
    DML_OPERATOR_ACTIVATION_IDENTITY = 38,
    DML_OPERATOR_ACTIVATION_LEAKY_RELU = 39,
    DML_OPERATOR_ACTIVATION_LINEAR = 40,
    DML_OPERATOR_ACTIVATION_LOG_SOFTMAX = 41,
    DML_OPERATOR_ACTIVATION_PARAMETERIZED_RELU = 42,
    DML_OPERATOR_ACTIVATION_PARAMETRIC_SOFTPLUS = 43,
    DML_OPERATOR_ACTIVATION_RELU = 44,
    DML_OPERATOR_ACTIVATION_SCALED_ELU = 45,
    DML_OPERATOR_ACTIVATION_SCALED_TANH = 46,
    DML_OPERATOR_ACTIVATION_SIGMOID = 47,
    DML_OPERATOR_ACTIVATION_SOFTMAX = 48,
    DML_OPERATOR_ACTIVATION_SOFTPLUS = 49,
    DML_OPERATOR_ACTIVATION_SOFTSIGN = 50,
    DML_OPERATOR_ACTIVATION_TANH = 51,
    DML_OPERATOR_ACTIVATION_THRESHOLDED_RELU = 52,
    DML_OPERATOR_CONVOLUTION = 53,
    DML_OPERATOR_GEMM = 54,
    DML_OPERATOR_REDUCE = 55,
    DML_OPERATOR_AVERAGE_POOLING = 56,
    DML_OPERATOR_LP_POOLING = 57,
    DML_OPERATOR_MAX_POOLING = 58,
    DML_OPERATOR_ROI_POOLING = 59,
    DML_OPERATOR_SLICE = 60,
    DML_OPERATOR_CAST = 61,
    DML_OPERATOR_SPLIT = 62,
    DML_OPERATOR_JOIN = 63,
    DML_OPERATOR_PADDING = 64,
    DML_OPERATOR_VALUE_SCALE_2D = 65,
    DML_OPERATOR_UPSAMPLE_2D = 66,
    DML_OPERATOR_GATHER = 67,
    DML_OPERATOR_SPACE_TO_DEPTH = 68,
    DML_OPERATOR_DEPTH_TO_SPACE = 69,
    DML_OPERATOR_TILE = 70,
    DML_OPERATOR_TOP_K = 71,
    DML_OPERATOR_BATCH_NORMALIZATION = 72,
    DML_OPERATOR_MEAN_VARIANCE_NORMALIZATION = 73,
    DML_OPERATOR_LOCAL_RESPONSE_NORMALIZATION = 74,
    DML_OPERATOR_LP_NORMALIZATION = 75,
    DML_OPERATOR_RNN = 76,
    DML_OPERATOR_LSTM = 77,
    DML_OPERATOR_GRU = 78,
    DML_OPERATOR_ELEMENT_WISE_SIGN = 79,
    DML_OPERATOR_ELEMENT_WISE_IS_NAN = 80,
    DML_OPERATOR_ELEMENT_WISE_ERF = 81,
    DML_OPERATOR_ELEMENT_WISE_SINH = 82,
    DML_OPERATOR_ELEMENT_WISE_COSH = 83,
    DML_OPERATOR_ELEMENT_WISE_TANH = 84,
    DML_OPERATOR_ELEMENT_WISE_ASINH = 85,
    DML_OPERATOR_ELEMENT_WISE_ACOSH = 86,
    DML_OPERATOR_ELEMENT_WISE_ATANH = 87,
    DML_OPERATOR_ELEMENT_WISE_IF = 88,
    DML_OPERATOR_ELEMENT_WISE_ADD1 = 89,
    DML_OPERATOR_ACTIVATION_SHRINK = 90,
    DML_OPERATOR_MAX_POOLING1 = 91,
    DML_OPERATOR_MAX_UNPOOLING = 92,
    DML_OPERATOR_DIAGONAL_MATRIX = 93,
    DML_OPERATOR_SCATTER = 94,
    DML_OPERATOR_ONE_HOT = 95,
    DML_OPERATOR_RESAMPLE = 96,
} DML_OPERATOR_TYPE;

typedef enum {
    DML_REDUCE_FUNCTION_ARGMAX = 0,
    DML_REDUCE_FUNCTION_ARGMIN = 1,
    DML_REDUCE_FUNCTION_AVERAGE = 2,
    DML_REDUCE_FUNCTION_L1 = 3,
    DML_REDUCE_FUNCTION_L2 = 4,
    DML_REDUCE_FUNCTION_LOG_SUM = 5,
    DML_REDUCE_FUNCTION_LOG_SUM_EXP = 6,
    DML_REDUCE_FUNCTION_MAX = 7,
    DML_REDUCE_FUNCTION_MIN = 8,
    DML_REDUCE_FUNCTION_MULTIPLY = 9,
    DML_REDUCE_FUNCTION_SUM = 10,
    DML_REDUCE_FUNCTION_SUM_SQUARE = 11,
} DML_REDUCE_FUNCTION;

typedef enum {
    DML_MATRIX_TRANSFORM_NONE = 0,
    DML_MATRIX_TRANSFORM_TRANSPOSE = 1,
} DML_MATRIX_TRANSFORM;

typedef enum {
    DML_CONVOLUTION_MODE_CONVOLUTION = 0,
    DML_CONVOLUTION_MODE_CROSS_CORRELATION = 1,
} DML_CONVOLUTION_MODE;

typedef enum {
    DML_CONVOLUTION_DIRECTION_FORWARD = 0,
    DML_CONVOLUTION_DIRECTION_BACKWARD = 1,
} DML_CONVOLUTION_DIRECTION;

typedef enum {
    DML_PADDING_MODE_CONSTANT = 0,
    DML_PADDING_MODE_EDGE = 1,
    DML_PADDING_MODE_REFLECTION = 2,
} DML_PADDING_MODE;

typedef enum {
    DML_INTERPOLATION_MODE_NEAREST_NEIGHBOR = 0,
    DML_INTERPOLATION_MODE_LINEAR = 1,
} DML_INTERPOLATION_MODE;

typedef int DML_SCALE_BIAS;

typedef int DML_SIZE_2D;

typedef enum {
    DML_RECURRENT_NETWORK_DIRECTION_FORWARD = 0,
    DML_RECURRENT_NETWORK_DIRECTION_BACKWARD = 1,
    DML_RECURRENT_NETWORK_DIRECTION_BIDIRECTIONAL = 2,
} DML_RECURRENT_NETWORK_DIRECTION;

typedef int DML_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_IDENTITY_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ABS_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ACOS_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ADD_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ADD1_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ASIN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ATAN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_CEIL_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_CLIP_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_COS_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_DIVIDE_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_EXP_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_FLOOR_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_LOG_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_LOGICAL_AND_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_LOGICAL_EQUALS_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_LOGICAL_GREATER_THAN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_LOGICAL_LESS_THAN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_LOGICAL_NOT_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_LOGICAL_OR_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_LOGICAL_XOR_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_MAX_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_MEAN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_MIN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_MULTIPLY_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_POW_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_CONSTANT_POW_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_RECIP_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_SIN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_SQRT_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_SUBTRACT_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_TAN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_THRESHOLD_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_QUANTIZE_LINEAR_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_DEQUANTIZE_LINEAR_OPERATOR_DESC;

typedef int DML_ACTIVATION_ELU_OPERATOR_DESC;

typedef int DML_ACTIVATION_HARDMAX_OPERATOR_DESC;

typedef int DML_ACTIVATION_HARD_SIGMOID_OPERATOR_DESC;

typedef int DML_ACTIVATION_IDENTITY_OPERATOR_DESC;

typedef int DML_ACTIVATION_LEAKY_RELU_OPERATOR_DESC;

typedef int DML_ACTIVATION_LINEAR_OPERATOR_DESC;

typedef int DML_ACTIVATION_LOG_SOFTMAX_OPERATOR_DESC;

typedef int DML_ACTIVATION_PARAMETERIZED_RELU_OPERATOR_DESC;

typedef int DML_ACTIVATION_PARAMETRIC_SOFTPLUS_OPERATOR_DESC;

typedef int DML_ACTIVATION_RELU_OPERATOR_DESC;

typedef int DML_ACTIVATION_SCALED_ELU_OPERATOR_DESC;

typedef int DML_ACTIVATION_SCALED_TANH_OPERATOR_DESC;

typedef int DML_ACTIVATION_SIGMOID_OPERATOR_DESC;

typedef int DML_ACTIVATION_SOFTMAX_OPERATOR_DESC;

typedef int DML_ACTIVATION_SOFTPLUS_OPERATOR_DESC;

typedef int DML_ACTIVATION_SOFTSIGN_OPERATOR_DESC;

typedef int DML_ACTIVATION_TANH_OPERATOR_DESC;

typedef int DML_ACTIVATION_THRESHOLDED_RELU_OPERATOR_DESC;

typedef int DML_CONVOLUTION_OPERATOR_DESC;

typedef int DML_GEMM_OPERATOR_DESC;

typedef int DML_REDUCE_OPERATOR_DESC;

typedef int DML_AVERAGE_POOLING_OPERATOR_DESC;

typedef int DML_LP_POOLING_OPERATOR_DESC;

typedef int DML_MAX_POOLING_OPERATOR_DESC;

typedef int DML_MAX_POOLING1_OPERATOR_DESC;

typedef int DML_ROI_POOLING_OPERATOR_DESC;

typedef int DML_SLICE_OPERATOR_DESC;

typedef int DML_CAST_OPERATOR_DESC;

typedef int DML_SPLIT_OPERATOR_DESC;

typedef int DML_JOIN_OPERATOR_DESC;

typedef int DML_PADDING_OPERATOR_DESC;

typedef int DML_VALUE_SCALE_2D_OPERATOR_DESC;

typedef int DML_UPSAMPLE_2D_OPERATOR_DESC;

typedef int DML_GATHER_OPERATOR_DESC;

typedef int DML_SPACE_TO_DEPTH_OPERATOR_DESC;

typedef int DML_DEPTH_TO_SPACE_OPERATOR_DESC;

typedef int DML_TILE_OPERATOR_DESC;

typedef int DML_TOP_K_OPERATOR_DESC;

typedef int DML_BATCH_NORMALIZATION_OPERATOR_DESC;

typedef int DML_MEAN_VARIANCE_NORMALIZATION_OPERATOR_DESC;

typedef int DML_LOCAL_RESPONSE_NORMALIZATION_OPERATOR_DESC;

typedef int DML_LP_NORMALIZATION_OPERATOR_DESC;

typedef int DML_RNN_OPERATOR_DESC;

typedef int DML_LSTM_OPERATOR_DESC;

typedef int DML_GRU_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_SIGN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_IS_NAN_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ERF_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_SINH_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_COSH_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_TANH_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ASINH_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ACOSH_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_ATANH_OPERATOR_DESC;

typedef int DML_ELEMENT_WISE_IF_OPERATOR_DESC;

typedef int DML_ACTIVATION_SHRINK_OPERATOR_DESC;

typedef int DML_MAX_UNPOOLING_OPERATOR_DESC;

typedef int DML_DIAGONAL_MATRIX_OPERATOR_DESC;

typedef int DML_SCATTER_OPERATOR_DESC;

typedef int DML_ONE_HOT_OPERATOR_DESC;

typedef int DML_RESAMPLE_OPERATOR_DESC;

typedef enum {
    DML_FEATURE_LEVEL_1_0 = 4096,
    DML_FEATURE_LEVEL_2_0 = 8192,
} DML_FEATURE_LEVEL;

typedef enum {
    DML_FEATURE_TENSOR_DATA_TYPE_SUPPORT = 0,
    DML_FEATURE_FEATURE_LEVELS = 1,
} DML_FEATURE;

typedef int DML_FEATURE_QUERY_TENSOR_DATA_TYPE_SUPPORT;

typedef int DML_FEATURE_DATA_TENSOR_DATA_TYPE_SUPPORT;

typedef int DML_FEATURE_QUERY_FEATURE_LEVELS;

typedef int DML_FEATURE_DATA_FEATURE_LEVELS;

typedef int DML_BINDING_TABLE_DESC;

typedef enum {
    DML_EXECUTION_FLAG_NONE = 0,
    DML_EXECUTION_FLAG_ALLOW_HALF_PRECISION_COMPUTATION = 1,
    DML_EXECUTION_FLAG_DISABLE_META_COMMANDS = 2,
    DML_EXECUTION_FLAG_DESCRIPTORS_VOLATILE = 4,
} DML_EXECUTION_FLAGS;

typedef enum {
    DML_CREATE_DEVICE_FLAG_NONE = 0,
    DML_CREATE_DEVICE_FLAG_DEBUG = 1,
} DML_CREATE_DEVICE_FLAGS;

typedef int IDMLObject;

typedef int IDMLDevice;

typedef int IDMLDeviceChild;

typedef int IDMLPageable;

typedef int IDMLOperator;

typedef int DML_BINDING_PROPERTIES;

typedef int IDMLDispatchable;

typedef int IDMLCompiledOperator;

typedef int IDMLOperatorInitializer;

typedef enum {
    DML_BINDING_TYPE_NONE = 0,
    DML_BINDING_TYPE_BUFFER = 1,
    DML_BINDING_TYPE_BUFFER_ARRAY = 2,
} DML_BINDING_TYPE;

typedef int DML_BINDING_DESC;

typedef int DML_BUFFER_BINDING;

typedef int DML_BUFFER_ARRAY_BINDING;

typedef int IDMLBindingTable;

typedef int IDMLCommandRecorder;

typedef int IDMLDebugDevice;


//--------------------------------------------------------------------------------
// Section: Functions (2)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows10.0.10240'
/*HRESULT*/void DMLCreateDevice();

/*HRESULT*/void DMLCreateDevice1();

