// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (345)
//--------------------------------------------------------------------------------
#define WNODE_FLAG_ALL_DATA (UINT)1
#define WNODE_FLAG_SINGLE_INSTANCE (UINT)2
#define WNODE_FLAG_SINGLE_ITEM (UINT)4
#define WNODE_FLAG_EVENT_ITEM (UINT)8
#define WNODE_FLAG_FIXED_INSTANCE_SIZE (UINT)16
#define WNODE_FLAG_TOO_SMALL (UINT)32
#define WNODE_FLAG_INSTANCES_SAME (UINT)64
#define WNODE_FLAG_STATIC_INSTANCE_NAMES (UINT)128
#define WNODE_FLAG_INTERNAL (UINT)256
#define WNODE_FLAG_USE_TIMESTAMP (UINT)512
#define WNODE_FLAG_PERSIST_EVENT (UINT)1024
#define WNODE_FLAG_EVENT_REFERENCE (UINT)8192
#define WNODE_FLAG_ANSI_INSTANCENAMES (UINT)16384
#define WNODE_FLAG_METHOD_ITEM (UINT)32768
#define WNODE_FLAG_PDO_INSTANCE_NAMES (UINT)65536
#define WNODE_FLAG_TRACED_GUID (UINT)131072
#define WNODE_FLAG_LOG_WNODE (UINT)262144
#define WNODE_FLAG_USE_GUID_PTR (UINT)524288
#define WNODE_FLAG_USE_MOF_PTR (UINT)1048576
#define WNODE_FLAG_NO_HEADER (UINT)2097152
#define WNODE_FLAG_SEND_DATA_BLOCK (UINT)4194304
#define WNODE_FLAG_VERSIONED_PROPERTIES (UINT)8388608
#define WNODE_FLAG_SEVERITY_MASK (UINT)4278190080
#define WMIREG_FLAG_EXPENSIVE (UINT)1
#define WMIREG_FLAG_INSTANCE_LIST (UINT)4
#define WMIREG_FLAG_INSTANCE_BASENAME (UINT)8
#define WMIREG_FLAG_INSTANCE_PDO (UINT)32
#define WMIREG_FLAG_REMOVE_GUID (UINT)65536
#define WMIREG_FLAG_RESERVED1 (UINT)131072
#define WMIREG_FLAG_RESERVED2 (UINT)262144
#define WMIREG_FLAG_TRACED_GUID (UINT)524288
#define WMIREG_FLAG_TRACE_CONTROL_GUID (UINT)4096
#define WMIREG_FLAG_EVENT_ONLY_GUID (UINT)64
#define WMI_GUIDTYPE_TRACECONTROL (UINT)0
#define WMI_GUIDTYPE_TRACE (UINT)1
#define WMI_GUIDTYPE_DATA (UINT)2
#define WMI_GUIDTYPE_EVENT (UINT)3
#define WMIGUID_QUERY (UINT)1
#define WMIGUID_SET (UINT)2
#define WMIGUID_NOTIFICATION (UINT)4
#define WMIGUID_READ_DESCRIPTION (UINT)8
#define WMIGUID_EXECUTE (UINT)16
#define TRACELOG_CREATE_REALTIME (UINT)32
#define TRACELOG_CREATE_ONDISK (UINT)64
#define TRACELOG_GUID_ENABLE (UINT)128
#define TRACELOG_ACCESS_KERNEL_LOGGER (UINT)256
#define TRACELOG_LOG_EVENT (UINT)512
#define TRACELOG_CREATE_INPROC (UINT)512
#define TRACELOG_ACCESS_REALTIME (UINT)1024
#define TRACELOG_REGISTER_GUIDS (UINT)2048
#define TRACELOG_JOIN_GROUP (UINT)4096
#define WMI_GLOBAL_LOGGER_ID (UINT)1
#define MAX_PAYLOAD_PREDICATES (UINT)8
#define EventTraceGuid GUID { "68fdd900-4a3e-11d1-84f4-0000f80464e3" }
#define SystemTraceControlGuid GUID { "9e814aad-3204-11d2-9a82-006008a86939" }
#define EventTraceConfigGuid GUID { "01853a65-418f-4f36-aefc-dc0f1d2fd235" }
#define DefaultTraceSecurityGuid GUID { "0811c1af-7a07-4a06-82ed-869455cdf713" }
#define PrivateLoggerNotificationGuid GUID { "3595ab5c-042a-4c8e-b942-2d059bfeb1b1" }
#define MAX_MOF_FIELDS (UINT)16
#define SYSTEM_EVENT_TYPE (UINT)1
#define EVENT_TRACE_TYPE_INFO (UINT)0
#define EVENT_TRACE_TYPE_START (UINT)1
#define EVENT_TRACE_TYPE_END (UINT)2
#define EVENT_TRACE_TYPE_STOP (UINT)2
#define EVENT_TRACE_TYPE_DC_START (UINT)3
#define EVENT_TRACE_TYPE_DC_END (UINT)4
#define EVENT_TRACE_TYPE_EXTENSION (UINT)5
#define EVENT_TRACE_TYPE_REPLY (UINT)6
#define EVENT_TRACE_TYPE_DEQUEUE (UINT)7
#define EVENT_TRACE_TYPE_RESUME (UINT)7
#define EVENT_TRACE_TYPE_CHECKPOINT (UINT)8
#define EVENT_TRACE_TYPE_SUSPEND (UINT)8
#define EVENT_TRACE_TYPE_WINEVT_SEND (UINT)9
#define EVENT_TRACE_TYPE_WINEVT_RECEIVE (UINT)240
#define TRACE_LEVEL_NONE (UINT)0
#define TRACE_LEVEL_CRITICAL (UINT)1
#define TRACE_LEVEL_FATAL (UINT)1
#define TRACE_LEVEL_ERROR (UINT)2
#define TRACE_LEVEL_WARNING (UINT)3
#define TRACE_LEVEL_INFORMATION (UINT)4
#define TRACE_LEVEL_VERBOSE (UINT)5
#define TRACE_LEVEL_RESERVED6 (UINT)6
#define TRACE_LEVEL_RESERVED7 (UINT)7
#define TRACE_LEVEL_RESERVED8 (UINT)8
#define TRACE_LEVEL_RESERVED9 (UINT)9
#define EVENT_TRACE_TYPE_LOAD (UINT)10
#define EVENT_TRACE_TYPE_TERMINATE (UINT)11
#define EVENT_TRACE_TYPE_IO_READ (UINT)10
#define EVENT_TRACE_TYPE_IO_WRITE (UINT)11
#define EVENT_TRACE_TYPE_IO_READ_INIT (UINT)12
#define EVENT_TRACE_TYPE_IO_WRITE_INIT (UINT)13
#define EVENT_TRACE_TYPE_IO_FLUSH (UINT)14
#define EVENT_TRACE_TYPE_IO_FLUSH_INIT (UINT)15
#define EVENT_TRACE_TYPE_IO_REDIRECTED_INIT (UINT)16
#define EVENT_TRACE_TYPE_MM_TF (UINT)10
#define EVENT_TRACE_TYPE_MM_DZF (UINT)11
#define EVENT_TRACE_TYPE_MM_COW (UINT)12
#define EVENT_TRACE_TYPE_MM_GPF (UINT)13
#define EVENT_TRACE_TYPE_MM_HPF (UINT)14
#define EVENT_TRACE_TYPE_MM_AV (UINT)15
#define EVENT_TRACE_TYPE_SEND (UINT)10
#define EVENT_TRACE_TYPE_RECEIVE (UINT)11
#define EVENT_TRACE_TYPE_CONNECT (UINT)12
#define EVENT_TRACE_TYPE_DISCONNECT (UINT)13
#define EVENT_TRACE_TYPE_RETRANSMIT (UINT)14
#define EVENT_TRACE_TYPE_ACCEPT (UINT)15
#define EVENT_TRACE_TYPE_RECONNECT (UINT)16
#define EVENT_TRACE_TYPE_CONNFAIL (UINT)17
#define EVENT_TRACE_TYPE_COPY_TCP (UINT)18
#define EVENT_TRACE_TYPE_COPY_ARP (UINT)19
#define EVENT_TRACE_TYPE_ACKFULL (UINT)20
#define EVENT_TRACE_TYPE_ACKPART (UINT)21
#define EVENT_TRACE_TYPE_ACKDUP (UINT)22
#define EVENT_TRACE_TYPE_GUIDMAP (UINT)10
#define EVENT_TRACE_TYPE_CONFIG (UINT)11
#define EVENT_TRACE_TYPE_SIDINFO (UINT)12
#define EVENT_TRACE_TYPE_SECURITY (UINT)13
#define EVENT_TRACE_TYPE_DBGID_RSDS (UINT)64
#define EVENT_TRACE_TYPE_REGCREATE (UINT)10
#define EVENT_TRACE_TYPE_REGOPEN (UINT)11
#define EVENT_TRACE_TYPE_REGDELETE (UINT)12
#define EVENT_TRACE_TYPE_REGQUERY (UINT)13
#define EVENT_TRACE_TYPE_REGSETVALUE (UINT)14
#define EVENT_TRACE_TYPE_REGDELETEVALUE (UINT)15
#define EVENT_TRACE_TYPE_REGQUERYVALUE (UINT)16
#define EVENT_TRACE_TYPE_REGENUMERATEKEY (UINT)17
#define EVENT_TRACE_TYPE_REGENUMERATEVALUEKEY (UINT)18
#define EVENT_TRACE_TYPE_REGQUERYMULTIPLEVALUE (UINT)19
#define EVENT_TRACE_TYPE_REGSETINFORMATION (UINT)20
#define EVENT_TRACE_TYPE_REGFLUSH (UINT)21
#define EVENT_TRACE_TYPE_REGKCBCREATE (UINT)22
#define EVENT_TRACE_TYPE_REGKCBDELETE (UINT)23
#define EVENT_TRACE_TYPE_REGKCBRUNDOWNBEGIN (UINT)24
#define EVENT_TRACE_TYPE_REGKCBRUNDOWNEND (UINT)25
#define EVENT_TRACE_TYPE_REGVIRTUALIZE (UINT)26
#define EVENT_TRACE_TYPE_REGCLOSE (UINT)27
#define EVENT_TRACE_TYPE_REGSETSECURITY (UINT)28
#define EVENT_TRACE_TYPE_REGQUERYSECURITY (UINT)29
#define EVENT_TRACE_TYPE_REGCOMMIT (UINT)30
#define EVENT_TRACE_TYPE_REGPREPARE (UINT)31
#define EVENT_TRACE_TYPE_REGROLLBACK (UINT)32
#define EVENT_TRACE_TYPE_REGMOUNTHIVE (UINT)33
#define EVENT_TRACE_TYPE_CONFIG_CPU (UINT)10
#define EVENT_TRACE_TYPE_CONFIG_PHYSICALDISK (UINT)11
#define EVENT_TRACE_TYPE_CONFIG_LOGICALDISK (UINT)12
#define EVENT_TRACE_TYPE_CONFIG_NIC (UINT)13
#define EVENT_TRACE_TYPE_CONFIG_VIDEO (UINT)14
#define EVENT_TRACE_TYPE_CONFIG_SERVICES (UINT)15
#define EVENT_TRACE_TYPE_CONFIG_POWER (UINT)16
#define EVENT_TRACE_TYPE_CONFIG_NETINFO (UINT)17
#define EVENT_TRACE_TYPE_CONFIG_OPTICALMEDIA (UINT)18
#define EVENT_TRACE_TYPE_CONFIG_IRQ (UINT)21
#define EVENT_TRACE_TYPE_CONFIG_PNP (UINT)22
#define EVENT_TRACE_TYPE_CONFIG_IDECHANNEL (UINT)23
#define EVENT_TRACE_TYPE_CONFIG_NUMANODE (UINT)24
#define EVENT_TRACE_TYPE_CONFIG_PLATFORM (UINT)25
#define EVENT_TRACE_TYPE_CONFIG_PROCESSORGROUP (UINT)26
#define EVENT_TRACE_TYPE_CONFIG_PROCESSORNUMBER (UINT)27
#define EVENT_TRACE_TYPE_CONFIG_DPI (UINT)28
#define EVENT_TRACE_TYPE_CONFIG_CI_INFO (UINT)29
#define EVENT_TRACE_TYPE_CONFIG_MACHINEID (UINT)30
#define EVENT_TRACE_TYPE_CONFIG_DEFRAG (UINT)31
#define EVENT_TRACE_TYPE_CONFIG_MOBILEPLATFORM (UINT)32
#define EVENT_TRACE_TYPE_CONFIG_DEVICEFAMILY (UINT)33
#define EVENT_TRACE_TYPE_CONFIG_FLIGHTID (UINT)34
#define EVENT_TRACE_TYPE_CONFIG_PROCESSOR (UINT)35
#define EVENT_TRACE_TYPE_CONFIG_VIRTUALIZATION (UINT)36
#define EVENT_TRACE_TYPE_CONFIG_BOOT (UINT)37
#define EVENT_TRACE_TYPE_OPTICAL_IO_READ (UINT)55
#define EVENT_TRACE_TYPE_OPTICAL_IO_WRITE (UINT)56
#define EVENT_TRACE_TYPE_OPTICAL_IO_FLUSH (UINT)57
#define EVENT_TRACE_TYPE_OPTICAL_IO_READ_INIT (UINT)58
#define EVENT_TRACE_TYPE_OPTICAL_IO_WRITE_INIT (UINT)59
#define EVENT_TRACE_TYPE_OPTICAL_IO_FLUSH_INIT (UINT)60
#define EVENT_TRACE_TYPE_FLT_PREOP_INIT (UINT)96
#define EVENT_TRACE_TYPE_FLT_POSTOP_INIT (UINT)97
#define EVENT_TRACE_TYPE_FLT_PREOP_COMPLETION (UINT)98
#define EVENT_TRACE_TYPE_FLT_POSTOP_COMPLETION (UINT)99
#define EVENT_TRACE_TYPE_FLT_PREOP_FAILURE (UINT)100
#define EVENT_TRACE_TYPE_FLT_POSTOP_FAILURE (UINT)101
#define EVENT_TRACE_FLAG_DEBUG_EVENTS (UINT)4194304
#define EVENT_TRACE_FLAG_EXTENSION (UINT)2147483648
#define EVENT_TRACE_FLAG_FORWARD_WMI (UINT)1073741824
#define EVENT_TRACE_FLAG_ENABLE_RESERVE (UINT)536870912
#define EVENT_TRACE_FILE_MODE_NONE (UINT)0
#define EVENT_TRACE_FILE_MODE_SEQUENTIAL (UINT)1
#define EVENT_TRACE_FILE_MODE_CIRCULAR (UINT)2
#define EVENT_TRACE_FILE_MODE_APPEND (UINT)4
#define EVENT_TRACE_REAL_TIME_MODE (UINT)256
#define EVENT_TRACE_DELAY_OPEN_FILE_MODE (UINT)512
#define EVENT_TRACE_BUFFERING_MODE (UINT)1024
#define EVENT_TRACE_PRIVATE_LOGGER_MODE (UINT)2048
#define EVENT_TRACE_ADD_HEADER_MODE (UINT)4096
#define EVENT_TRACE_USE_GLOBAL_SEQUENCE (UINT)16384
#define EVENT_TRACE_USE_LOCAL_SEQUENCE (UINT)32768
#define EVENT_TRACE_RELOG_MODE (UINT)65536
#define EVENT_TRACE_USE_PAGED_MEMORY (UINT)16777216
#define EVENT_TRACE_FILE_MODE_NEWFILE (UINT)8
#define EVENT_TRACE_FILE_MODE_PREALLOCATE (UINT)32
#define EVENT_TRACE_NONSTOPPABLE_MODE (UINT)64
#define EVENT_TRACE_SECURE_MODE (UINT)128
#define EVENT_TRACE_USE_KBYTES_FOR_SIZE (UINT)8192
#define EVENT_TRACE_PRIVATE_IN_PROC (UINT)131072
#define EVENT_TRACE_MODE_RESERVED (UINT)1048576
#define EVENT_TRACE_NO_PER_PROCESSOR_BUFFERING (UINT)268435456
#define EVENT_TRACE_SYSTEM_LOGGER_MODE (UINT)33554432
#define EVENT_TRACE_ADDTO_TRIAGE_DUMP (UINT)2147483648
#define EVENT_TRACE_STOP_ON_HYBRID_SHUTDOWN (UINT)4194304
#define EVENT_TRACE_PERSIST_ON_HYBRID_SHUTDOWN (UINT)8388608
#define EVENT_TRACE_INDEPENDENT_SESSION_MODE (UINT)134217728
#define EVENT_TRACE_COMPRESSED_MODE (UINT)67108864
#define EVENT_TRACE_CONTROL_INCREMENT_FILE (UINT)4
#define TRACE_MESSAGE_PERFORMANCE_TIMESTAMP (UINT)16
#define TRACE_MESSAGE_POINTER32 (UINT)64
#define TRACE_MESSAGE_POINTER64 (UINT)128
#define TRACE_MESSAGE_FLAG_MASK (UINT)65535
#define EVENT_TRACE_USE_PROCTIME (UINT)1
#define EVENT_TRACE_USE_NOCPUTIME (UINT)2
#define TRACE_HEADER_FLAG_USE_TIMESTAMP (UINT)512
#define TRACE_HEADER_FLAG_TRACED_GUID (UINT)131072
#define TRACE_HEADER_FLAG_LOG_WNODE (UINT)262144
#define TRACE_HEADER_FLAG_USE_GUID_PTR (UINT)524288
#define TRACE_HEADER_FLAG_USE_MOF_PTR (UINT)1048576
#define ETW_NULL_TYPE_VALUE (UINT)0
#define ETW_OBJECT_TYPE_VALUE (UINT)1
#define ETW_STRING_TYPE_VALUE (UINT)2
#define ETW_SBYTE_TYPE_VALUE (UINT)3
#define ETW_BYTE_TYPE_VALUE (UINT)4
#define ETW_INT16_TYPE_VALUE (UINT)5
#define ETW_UINT16_TYPE_VALUE (UINT)6
#define ETW_INT32_TYPE_VALUE (UINT)7
#define ETW_UINT32_TYPE_VALUE (UINT)8
#define ETW_INT64_TYPE_VALUE (UINT)9
#define ETW_UINT64_TYPE_VALUE (UINT)10
#define ETW_CHAR_TYPE_VALUE (UINT)11
#define ETW_SINGLE_TYPE_VALUE (UINT)12
#define ETW_DOUBLE_TYPE_VALUE (UINT)13
#define ETW_BOOLEAN_TYPE_VALUE (UINT)14
#define ETW_DECIMAL_TYPE_VALUE (UINT)15
#define ETW_GUID_TYPE_VALUE (UINT)101
#define ETW_ASCIICHAR_TYPE_VALUE (UINT)102
#define ETW_ASCIISTRING_TYPE_VALUE (UINT)103
#define ETW_COUNTED_STRING_TYPE_VALUE (UINT)104
#define ETW_POINTER_TYPE_VALUE (UINT)105
#define ETW_SIZET_TYPE_VALUE (UINT)106
#define ETW_HIDDEN_TYPE_VALUE (UINT)107
#define ETW_BOOL_TYPE_VALUE (UINT)108
#define ETW_COUNTED_ANSISTRING_TYPE_VALUE (UINT)109
#define ETW_REVERSED_COUNTED_STRING_TYPE_VALUE (UINT)110
#define ETW_REVERSED_COUNTED_ANSISTRING_TYPE_VALUE (UINT)111
#define ETW_NON_NULL_TERMINATED_STRING_TYPE_VALUE (UINT)112
#define ETW_REDUCED_ANSISTRING_TYPE_VALUE (UINT)113
#define ETW_REDUCED_STRING_TYPE_VALUE (UINT)114
#define ETW_SID_TYPE_VALUE (UINT)115
#define ETW_VARIANT_TYPE_VALUE (UINT)116
#define ETW_PTVECTOR_TYPE_VALUE (UINT)117
#define ETW_WMITIME_TYPE_VALUE (UINT)118
#define ETW_DATETIME_TYPE_VALUE (UINT)119
#define ETW_REFRENCE_TYPE_VALUE (UINT)120
#define TRACE_PROVIDER_FLAG_LEGACY (UINT)1
#define TRACE_PROVIDER_FLAG_PRE_ENABLE (UINT)2
#define ENABLE_TRACE_PARAMETERS_VERSION (UINT)1
#define ENABLE_TRACE_PARAMETERS_VERSION_2 (UINT)2
#define EVENT_MIN_LEVEL (UINT)0
#define EVENT_MAX_LEVEL (UINT)255
#define EVENT_ACTIVITY_CTRL_GET_ID (UINT)1
#define EVENT_ACTIVITY_CTRL_SET_ID (UINT)2
#define EVENT_ACTIVITY_CTRL_CREATE_ID (UINT)3
#define EVENT_ACTIVITY_CTRL_GET_SET_ID (UINT)4
#define EVENT_ACTIVITY_CTRL_CREATE_SET_ID (UINT)5
#define MAX_EVENT_DATA_DESCRIPTORS (UINT)128
#define MAX_EVENT_FILTER_DATA_SIZE (UINT)1024
#define MAX_EVENT_FILTER_PAYLOAD_SIZE (UINT)4096
#define MAX_EVENT_FILTER_EVENT_NAME_SIZE (UINT)4096
#define MAX_EVENT_FILTERS_COUNT (UINT)13
#define MAX_EVENT_FILTER_PID_COUNT (UINT)8
#define MAX_EVENT_FILTER_EVENT_ID_COUNT (UINT)64
#define EVENT_FILTER_TYPE_NONE (UINT)0
#define EVENT_FILTER_TYPE_SCHEMATIZED (UINT)2147483648
#define EVENT_FILTER_TYPE_SYSTEM_FLAGS (UINT)2147483649
#define EVENT_FILTER_TYPE_TRACEHANDLE (UINT)2147483650
#define EVENT_FILTER_TYPE_PID (UINT)2147483652
#define EVENT_FILTER_TYPE_EXECUTABLE_NAME (UINT)2147483656
#define EVENT_FILTER_TYPE_PACKAGE_ID (UINT)2147483664
#define EVENT_FILTER_TYPE_PACKAGE_APP_ID (UINT)2147483680
#define EVENT_FILTER_TYPE_PAYLOAD (UINT)2147483904
#define EVENT_FILTER_TYPE_EVENT_ID (UINT)2147484160
#define EVENT_FILTER_TYPE_EVENT_NAME (UINT)2147484672
#define EVENT_FILTER_TYPE_STACKWALK (UINT)2147487744
#define EVENT_FILTER_TYPE_STACKWALK_NAME (UINT)2147491840
#define EVENT_FILTER_TYPE_STACKWALK_LEVEL_KW (UINT)2147500032
#define EVENT_FILTER_TYPE_CONTAINER (UINT)2147516416
#define EVENT_DATA_DESCRIPTOR_TYPE_NONE (UINT)0
#define EVENT_DATA_DESCRIPTOR_TYPE_EVENT_METADATA (UINT)1
#define EVENT_DATA_DESCRIPTOR_TYPE_PROVIDER_METADATA (UINT)2
#define EVENT_DATA_DESCRIPTOR_TYPE_TIMESTAMP_OVERRIDE (UINT)3
#define EVENT_WRITE_FLAG_NO_FAULTING (UINT)1
#define EVENT_WRITE_FLAG_INPRIVATE (UINT)2
#define EVENT_HEADER_EXT_TYPE_RELATED_ACTIVITYID (UINT)1
#define EVENT_HEADER_EXT_TYPE_SID (UINT)2
#define EVENT_HEADER_EXT_TYPE_TS_ID (UINT)3
#define EVENT_HEADER_EXT_TYPE_INSTANCE_INFO (UINT)4
#define EVENT_HEADER_EXT_TYPE_STACK_TRACE32 (UINT)5
#define EVENT_HEADER_EXT_TYPE_STACK_TRACE64 (UINT)6
#define EVENT_HEADER_EXT_TYPE_PEBS_INDEX (UINT)7
#define EVENT_HEADER_EXT_TYPE_PMC_COUNTERS (UINT)8
#define EVENT_HEADER_EXT_TYPE_PSM_KEY (UINT)9
#define EVENT_HEADER_EXT_TYPE_EVENT_KEY (UINT)10
#define EVENT_HEADER_EXT_TYPE_EVENT_SCHEMA_TL (UINT)11
#define EVENT_HEADER_EXT_TYPE_PROV_TRAITS (UINT)12
#define EVENT_HEADER_EXT_TYPE_PROCESS_START_KEY (UINT)13
#define EVENT_HEADER_EXT_TYPE_CONTROL_GUID (UINT)14
#define EVENT_HEADER_EXT_TYPE_QPC_DELTA (UINT)15
#define EVENT_HEADER_EXT_TYPE_CONTAINER_ID (UINT)16
#define EVENT_HEADER_EXT_TYPE_MAX (UINT)17
#define EVENT_HEADER_PROPERTY_XML (UINT)1
#define EVENT_HEADER_PROPERTY_FORWARDED_XML (UINT)2
#define EVENT_HEADER_PROPERTY_LEGACY_EVENTLOG (UINT)4
#define EVENT_HEADER_PROPERTY_RELOGGABLE (UINT)8
#define EVENT_HEADER_FLAG_EXTENDED_INFO (UINT)1
#define EVENT_HEADER_FLAG_PRIVATE_SESSION (UINT)2
#define EVENT_HEADER_FLAG_STRING_ONLY (UINT)4
#define EVENT_HEADER_FLAG_TRACE_MESSAGE (UINT)8
#define EVENT_HEADER_FLAG_NO_CPUTIME (UINT)16
#define EVENT_HEADER_FLAG_32_BIT_HEADER (UINT)32
#define EVENT_HEADER_FLAG_64_BIT_HEADER (UINT)64
#define EVENT_HEADER_FLAG_DECODE_GUID (UINT)128
#define EVENT_HEADER_FLAG_CLASSIC_HEADER (UINT)256
#define EVENT_HEADER_FLAG_PROCESSOR_INDEX (UINT)512
#define EVENT_ENABLE_PROPERTY_SID (UINT)1
#define EVENT_ENABLE_PROPERTY_TS_ID (UINT)2
#define EVENT_ENABLE_PROPERTY_STACK_TRACE (UINT)4
#define EVENT_ENABLE_PROPERTY_PSM_KEY (UINT)8
#define EVENT_ENABLE_PROPERTY_IGNORE_KEYWORD_0 (UINT)16
#define EVENT_ENABLE_PROPERTY_PROVIDER_GROUP (UINT)32
#define EVENT_ENABLE_PROPERTY_ENABLE_KEYWORD_0 (UINT)64
#define EVENT_ENABLE_PROPERTY_PROCESS_START_KEY (UINT)128
#define EVENT_ENABLE_PROPERTY_EVENT_KEY (UINT)256
#define EVENT_ENABLE_PROPERTY_EXCLUDE_INPRIVATE (UINT)512
#define EVENT_ENABLE_PROPERTY_ENABLE_SILOS (UINT)1024
#define EVENT_ENABLE_PROPERTY_SOURCE_CONTAINER_TRACKING (UINT)2048
#define PROCESS_TRACE_MODE_REAL_TIME (UINT)256
#define PROCESS_TRACE_MODE_RAW_TIMESTAMP (UINT)4096
#define PROCESS_TRACE_MODE_EVENT_RECORD (UINT)268435456
#define CLSID_TraceRelogger GUID { "7b40792d-05ff-44c4-9058-f440c71f17d4" }

//--------------------------------------------------------------------------------
// Section: Types (102)
//--------------------------------------------------------------------------------
typedef enum {
    TRACE_MESSAGE_COMPONENTID = 4,
    TRACE_MESSAGE_GUID = 2,
    TRACE_MESSAGE_SEQUENCE = 1,
    TRACE_MESSAGE_SYSTEMINFO = 32,
    TRACE_MESSAGE_TIMESTAMP = 8,
} TRACE_MESSAGE_FLAGS;

typedef enum {
    EVENT_CONTROL_CODE_DISABLE_PROVIDER = 0,
    EVENT_CONTROL_CODE_ENABLE_PROVIDER = 1,
    EVENT_CONTROL_CODE_CAPTURE_STATE = 2,
} ENABLECALLBACK_ENABLED_STATE;

typedef enum {
    EVENT_TRACE_CONTROL_FLUSH = 3,
    EVENT_TRACE_CONTROL_QUERY = 0,
    EVENT_TRACE_CONTROL_STOP = 1,
    EVENT_TRACE_CONTROL_UPDATE = 2,
} EVENT_TRACE_CONTROL;

typedef enum {
    EVENT_TRACE_FLAG_ALPC = 1048576,
    EVENT_TRACE_FLAG_CSWITCH = 16,
    EVENT_TRACE_FLAG_DBGPRINT = 262144,
    EVENT_TRACE_FLAG_DISK_FILE_IO = 512,
    EVENT_TRACE_FLAG_DISK_IO = 256,
    EVENT_TRACE_FLAG_DISK_IO_INIT = 1024,
    EVENT_TRACE_FLAG_DISPATCHER = 2048,
    EVENT_TRACE_FLAG_DPC = 32,
    EVENT_TRACE_FLAG_DRIVER = 8388608,
    EVENT_TRACE_FLAG_FILE_IO = 33554432,
    EVENT_TRACE_FLAG_FILE_IO_INIT = 67108864,
    EVENT_TRACE_FLAG_IMAGE_LOAD = 4,
    EVENT_TRACE_FLAG_INTERRUPT = 64,
    EVENT_TRACE_FLAG_JOB = 524288,
    EVENT_TRACE_FLAG_MEMORY_HARD_FAULTS = 8192,
    EVENT_TRACE_FLAG_MEMORY_PAGE_FAULTS = 4096,
    EVENT_TRACE_FLAG_NETWORK_TCPIP = 65536,
    EVENT_TRACE_FLAG_NO_SYSCONFIG = 268435456,
    EVENT_TRACE_FLAG_PROCESS = 1,
    EVENT_TRACE_FLAG_PROCESS_COUNTERS = 8,
    EVENT_TRACE_FLAG_PROFILE = 16777216,
    EVENT_TRACE_FLAG_REGISTRY = 131072,
    EVENT_TRACE_FLAG_SPLIT_IO = 2097152,
    EVENT_TRACE_FLAG_SYSTEMCALL = 128,
    EVENT_TRACE_FLAG_THREAD = 2,
    EVENT_TRACE_FLAG_VAMAP = 32768,
    EVENT_TRACE_FLAG_VIRTUAL_ALLOC = 16384,
} EVENT_TRACE_FLAG;

typedef int TDH_HANDLE;

typedef int WNODE_HEADER;

typedef int OFFSETINSTANCEDATAANDLENGTH;

typedef int WNODE_ALL_DATA;

typedef int WNODE_SINGLE_INSTANCE;

typedef int WNODE_SINGLE_ITEM;

typedef int WNODE_METHOD_ITEM;

typedef int WNODE_EVENT_ITEM;

typedef int WNODE_EVENT_REFERENCE;

typedef int WNODE_TOO_SMALL;

typedef int WMIREGGUIDW;

typedef int WMIREGINFOW;

typedef enum {
    WMI_GET_ALL_DATA = 0,
    WMI_GET_SINGLE_INSTANCE = 1,
    WMI_SET_SINGLE_INSTANCE = 2,
    WMI_SET_SINGLE_ITEM = 3,
    WMI_ENABLE_EVENTS = 4,
    WMI_DISABLE_EVENTS = 5,
    WMI_ENABLE_COLLECTION = 6,
    WMI_DISABLE_COLLECTION = 7,
    WMI_REGINFO = 8,
    WMI_EXECUTE_METHOD = 9,
    WMI_CAPTURE_STATE = 10,
} WMIDPREQUESTCODE;

typedef enum {
    EtwCompressionModeRestart = 0,
    EtwCompressionModeNoDisable = 1,
    EtwCompressionModeNoRestart = 2,
} ETW_COMPRESSION_RESUMPTION_MODE;

typedef int EVENT_TRACE_HEADER;

typedef int EVENT_INSTANCE_HEADER;

typedef int MOF_FIELD;

typedef int TRACE_LOGFILE_HEADER;

typedef int TRACE_LOGFILE_HEADER32;

typedef int TRACE_LOGFILE_HEADER64;

typedef int EVENT_INSTANCE_INFO;

typedef int EVENT_TRACE_PROPERTIES;

typedef int EVENT_TRACE_PROPERTIES_V2;

typedef int TRACE_GUID_REGISTRATION;

typedef int TRACE_GUID_PROPERTIES;

typedef int ETW_BUFFER_CONTEXT;

typedef int TRACE_ENABLE_INFO;

typedef int TRACE_PROVIDER_INSTANCE_INFO;

typedef int TRACE_GUID_INFO;

typedef int PROFILE_SOURCE_INFO;

typedef int EVENT_TRACE;

typedef int PEVENT_TRACE_BUFFER_CALLBACKW;

typedef int PEVENT_TRACE_BUFFER_CALLBACKA;

typedef int PEVENT_CALLBACK;

typedef int PEVENT_RECORD_CALLBACK;

typedef int WMIDPREQUEST;

typedef int EVENT_TRACE_LOGFILEW;

typedef int EVENT_TRACE_LOGFILEA;

typedef int ENABLE_TRACE_PARAMETERS_V1;

typedef int ENABLE_TRACE_PARAMETERS;

typedef enum {
    TraceGuidQueryList = 0,
    TraceGuidQueryInfo = 1,
    TraceGuidQueryProcess = 2,
    TraceStackTracingInfo = 3,
    TraceSystemTraceEnableFlagsInfo = 4,
    TraceSampledProfileIntervalInfo = 5,
    TraceProfileSourceConfigInfo = 6,
    TraceProfileSourceListInfo = 7,
    TracePmcEventListInfo = 8,
    TracePmcCounterListInfo = 9,
    TraceSetDisallowList = 10,
    TraceVersionInfo = 11,
    TraceGroupQueryList = 12,
    TraceGroupQueryInfo = 13,
    TraceDisallowListQuery = 14,
    TraceInfoReserved15 = 15,
    TracePeriodicCaptureStateListInfo = 16,
    TracePeriodicCaptureStateInfo = 17,
    TraceProviderBinaryTracking = 18,
    TraceMaxLoggersQuery = 19,
    TraceLbrConfigurationInfo = 20,
    TraceLbrEventListInfo = 21,
    TraceMaxPmcCounterQuery = 22,
    MaxTraceSetInfoClass = 23,
} TRACE_QUERY_INFO_CLASS;

typedef int CLASSIC_EVENT_ID;

typedef int TRACE_PROFILE_INTERVAL;

typedef int TRACE_VERSION_INFO;

typedef int TRACE_PERIODIC_CAPTURE_STATE_INFO;

typedef enum {
    EtwQueryPartitionInformation = 1,
    EtwQueryPartitionInformationV2 = 2,
    EtwQueryLastDroppedTimes = 3,
    EtwQueryProcessHandleInfoMax = 4,
} ETW_PROCESS_HANDLE_INFO_TYPE;

typedef int ETW_TRACE_PARTITION_INFORMATION;

typedef int ETW_TRACE_PARTITION_INFORMATION_V2;

typedef int EVENT_DATA_DESCRIPTOR;

typedef int EVENT_DESCRIPTOR;

typedef int EVENT_FILTER_DESCRIPTOR;

typedef int EVENT_FILTER_HEADER;

typedef int EVENT_FILTER_EVENT_ID;

typedef int EVENT_FILTER_EVENT_NAME;

typedef int EVENT_FILTER_LEVEL_KW;

typedef enum {
    EventProviderBinaryTrackInfo = 0,
    EventProviderSetReserved1 = 1,
    EventProviderSetTraits = 2,
    EventProviderUseDescriptorType = 3,
    MaxEventInfo = 4,
} EVENT_INFO_CLASS;

typedef int PENABLECALLBACK;

typedef int EVENT_HEADER_EXTENDED_DATA_ITEM;

typedef int EVENT_EXTENDED_ITEM_INSTANCE;

typedef int EVENT_EXTENDED_ITEM_RELATED_ACTIVITYID;

typedef int EVENT_EXTENDED_ITEM_TS_ID;

typedef int EVENT_EXTENDED_ITEM_STACK_TRACE32;

typedef int EVENT_EXTENDED_ITEM_STACK_TRACE64;

typedef int EVENT_EXTENDED_ITEM_PEBS_INDEX;

typedef int EVENT_EXTENDED_ITEM_PMC_COUNTERS;

typedef int EVENT_EXTENDED_ITEM_PROCESS_START_KEY;

typedef int EVENT_EXTENDED_ITEM_EVENT_KEY;

typedef int EVENT_HEADER;

typedef int EVENT_RECORD;

typedef enum {
    EtwProviderTraitTypeGroup = 1,
    EtwProviderTraitDecodeGuid = 2,
    EtwProviderTraitTypeMax = 3,
} ETW_PROVIDER_TRAIT_TYPE;

typedef enum {
    EventSecuritySetDACL = 0,
    EventSecuritySetSACL = 1,
    EventSecurityAddDACL = 2,
    EventSecurityAddSACL = 3,
    EventSecurityMax = 4,
} EVENTSECURITYOPERATION;

typedef int EVENT_MAP_ENTRY;

typedef enum {
    EVENTMAP_INFO_FLAG_MANIFEST_VALUEMAP = 1,
    EVENTMAP_INFO_FLAG_MANIFEST_BITMAP = 2,
    EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP = 4,
    EVENTMAP_INFO_FLAG_WBEM_VALUEMAP = 8,
    EVENTMAP_INFO_FLAG_WBEM_BITMAP = 16,
    EVENTMAP_INFO_FLAG_WBEM_FLAG = 32,
    EVENTMAP_INFO_FLAG_WBEM_NO_MAP = 64,
} MAP_FLAGS;

typedef enum {
    EVENTMAP_ENTRY_VALUETYPE_ULONG = 0,
    EVENTMAP_ENTRY_VALUETYPE_STRING = 1,
} MAP_VALUETYPE;

typedef int EVENT_MAP_INFO;

typedef enum {
    TDH_INTYPE_NULL = 0,
    TDH_INTYPE_UNICODESTRING = 1,
    TDH_INTYPE_ANSISTRING = 2,
    TDH_INTYPE_INT8 = 3,
    TDH_INTYPE_UINT8 = 4,
    TDH_INTYPE_INT16 = 5,
    TDH_INTYPE_UINT16 = 6,
    TDH_INTYPE_INT32 = 7,
    TDH_INTYPE_UINT32 = 8,
    TDH_INTYPE_INT64 = 9,
    TDH_INTYPE_UINT64 = 10,
    TDH_INTYPE_FLOAT = 11,
    TDH_INTYPE_DOUBLE = 12,
    TDH_INTYPE_BOOLEAN = 13,
    TDH_INTYPE_BINARY = 14,
    TDH_INTYPE_GUID = 15,
    TDH_INTYPE_POINTER = 16,
    TDH_INTYPE_FILETIME = 17,
    TDH_INTYPE_SYSTEMTIME = 18,
    TDH_INTYPE_SID = 19,
    TDH_INTYPE_HEXINT32 = 20,
    TDH_INTYPE_HEXINT64 = 21,
    TDH_INTYPE_MANIFEST_COUNTEDSTRING = 22,
    TDH_INTYPE_MANIFEST_COUNTEDANSISTRING = 23,
    TDH_INTYPE_RESERVED24 = 24,
    TDH_INTYPE_MANIFEST_COUNTEDBINARY = 25,
    TDH_INTYPE_COUNTEDSTRING = 300,
    TDH_INTYPE_COUNTEDANSISTRING = 301,
    TDH_INTYPE_REVERSEDCOUNTEDSTRING = 302,
    TDH_INTYPE_REVERSEDCOUNTEDANSISTRING = 303,
    TDH_INTYPE_NONNULLTERMINATEDSTRING = 304,
    TDH_INTYPE_NONNULLTERMINATEDANSISTRING = 305,
    TDH_INTYPE_UNICODECHAR = 306,
    TDH_INTYPE_ANSICHAR = 307,
    TDH_INTYPE_SIZET = 308,
    TDH_INTYPE_HEXDUMP = 309,
    TDH_INTYPE_WBEMSID = 310,
} _TDH_IN_TYPE;

typedef enum {
    TDH_OUTTYPE_NULL = 0,
    TDH_OUTTYPE_STRING = 1,
    TDH_OUTTYPE_DATETIME = 2,
    TDH_OUTTYPE_BYTE = 3,
    TDH_OUTTYPE_UNSIGNEDBYTE = 4,
    TDH_OUTTYPE_SHORT = 5,
    TDH_OUTTYPE_UNSIGNEDSHORT = 6,
    TDH_OUTTYPE_INT = 7,
    TDH_OUTTYPE_UNSIGNEDINT = 8,
    TDH_OUTTYPE_LONG = 9,
    TDH_OUTTYPE_UNSIGNEDLONG = 10,
    TDH_OUTTYPE_FLOAT = 11,
    TDH_OUTTYPE_DOUBLE = 12,
    TDH_OUTTYPE_BOOLEAN = 13,
    TDH_OUTTYPE_GUID = 14,
    TDH_OUTTYPE_HEXBINARY = 15,
    TDH_OUTTYPE_HEXINT8 = 16,
    TDH_OUTTYPE_HEXINT16 = 17,
    TDH_OUTTYPE_HEXINT32 = 18,
    TDH_OUTTYPE_HEXINT64 = 19,
    TDH_OUTTYPE_PID = 20,
    TDH_OUTTYPE_TID = 21,
    TDH_OUTTYPE_PORT = 22,
    TDH_OUTTYPE_IPV4 = 23,
    TDH_OUTTYPE_IPV6 = 24,
    TDH_OUTTYPE_SOCKETADDRESS = 25,
    TDH_OUTTYPE_CIMDATETIME = 26,
    TDH_OUTTYPE_ETWTIME = 27,
    TDH_OUTTYPE_XML = 28,
    TDH_OUTTYPE_ERRORCODE = 29,
    TDH_OUTTYPE_WIN32ERROR = 30,
    TDH_OUTTYPE_NTSTATUS = 31,
    TDH_OUTTYPE_HRESULT = 32,
    TDH_OUTTYPE_CULTURE_INSENSITIVE_DATETIME = 33,
    TDH_OUTTYPE_JSON = 34,
    TDH_OUTTYPE_UTF8 = 35,
    TDH_OUTTYPE_PKCS7_WITH_TYPE_INFO = 36,
    TDH_OUTTYPE_CODE_POINTER = 37,
    TDH_OUTTYPE_DATETIME_UTC = 38,
    TDH_OUTTYPE_REDUCEDSTRING = 300,
    TDH_OUTTYPE_NOPRINT = 301,
} _TDH_OUT_TYPE;

typedef enum {
    PropertyStruct = 1,
    PropertyParamLength = 2,
    PropertyParamCount = 4,
    PropertyWBEMXmlFragment = 8,
    PropertyParamFixedLength = 16,
    PropertyParamFixedCount = 32,
    PropertyHasTags = 64,
    PropertyHasCustomSchema = 128,
} PROPERTY_FLAGS;

typedef int EVENT_PROPERTY_INFO;

typedef enum {
    DecodingSourceXMLFile = 0,
    DecodingSourceWbem = 1,
    DecodingSourceWPP = 2,
    DecodingSourceTlg = 3,
    DecodingSourceMax = 4,
} DECODING_SOURCE;

typedef enum {
    TEMPLATE_EVENT_DATA = 1,
    TEMPLATE_USER_DATA = 2,
    TEMPLATE_CONTROL_GUID = 4,
} TEMPLATE_FLAGS;

typedef int TRACE_EVENT_INFO;

typedef int PROPERTY_DATA_DESCRIPTOR;

typedef enum {
    PAYLOADFIELD_EQ = 0,
    PAYLOADFIELD_NE = 1,
    PAYLOADFIELD_LE = 2,
    PAYLOADFIELD_GT = 3,
    PAYLOADFIELD_LT = 4,
    PAYLOADFIELD_GE = 5,
    PAYLOADFIELD_BETWEEN = 6,
    PAYLOADFIELD_NOTBETWEEN = 7,
    PAYLOADFIELD_MODULO = 8,
    PAYLOADFIELD_CONTAINS = 20,
    PAYLOADFIELD_DOESNTCONTAIN = 21,
    PAYLOADFIELD_IS = 30,
    PAYLOADFIELD_ISNOT = 31,
    PAYLOADFIELD_INVALID = 32,
} PAYLOAD_OPERATOR;

typedef int PAYLOAD_FILTER_PREDICATE;

typedef int PROVIDER_FILTER_INFO;

typedef enum {
    EventKeywordInformation = 0,
    EventLevelInformation = 1,
    EventChannelInformation = 2,
    EventTaskInformation = 3,
    EventOpcodeInformation = 4,
    EventInformationMax = 5,
} EVENT_FIELD_TYPE;

typedef int PROVIDER_FIELD_INFO;

typedef int PROVIDER_FIELD_INFOARRAY;

typedef int TRACE_PROVIDER_INFO;

typedef int PROVIDER_ENUMERATION_INFO;

typedef int PROVIDER_EVENT_INFO;

typedef enum {
    TDH_CONTEXT_WPP_TMFFILE = 0,
    TDH_CONTEXT_WPP_TMFSEARCHPATH = 1,
    TDH_CONTEXT_WPP_GMT = 2,
    TDH_CONTEXT_POINTERSIZE = 3,
    TDH_CONTEXT_PDB_PATH = 4,
    TDH_CONTEXT_MAXIMUM = 5,
} TDH_CONTEXT_TYPE;

typedef int TDH_CONTEXT;

typedef int CTraceRelogger;

// TODO: this type is limited to platform 'windows6.1'
typedef int ITraceEvent;

// TODO: this type is limited to platform 'windows6.1'
typedef int ITraceEventCallback;

// TODO: this type is limited to platform 'windows6.1'
typedef int ITraceRelogger;


//--------------------------------------------------------------------------------
// Section: Functions (79)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
/*u32*/void StartTraceW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void StartTraceA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void StopTraceW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void StopTraceA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void QueryTraceW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void QueryTraceA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void UpdateTraceW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void UpdateTraceA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void FlushTraceW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void FlushTraceA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void ControlTraceW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void ControlTraceA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void QueryAllTracesW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void QueryAllTracesA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void EnableTrace();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EnableTraceEx();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void EnableTraceEx2();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EnumerateTraceGuidsEx();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void TraceSetInformation();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void TraceQueryInformation();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void CreateTraceInstanceId();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void TraceEvent();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void TraceEventInstance();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void RegisterTraceGuidsW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void RegisterTraceGuidsA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void EnumerateTraceGuids();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void UnregisterTraceGuids();

// TODO: this type is limited to platform 'windows5.0'
/*u64*/void GetTraceLoggerHandle();

// TODO: this type is limited to platform 'windows5.0'
/*u8*/void GetTraceEnableLevel();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetTraceEnableFlags();

// TODO: this type is limited to platform 'windows5.0'
/*u64*/void OpenTraceW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void ProcessTrace();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void CloseTrace();

// TODO: this type is limited to platform 'windows10.0.16299'
/*u32*/void QueryTraceProcessingHandle();

// TODO: this type is limited to platform 'windows5.0'
/*u64*/void OpenTraceA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void SetTraceCallback();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void RemoveTraceCallback();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void TraceMessage();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void TraceMessageVa();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventRegister();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventUnregister();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void EventSetInformation();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOLEAN*/void EventEnabled();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOLEAN*/void EventProviderEnabled();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventWrite();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventWriteTransfer();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void EventWriteEx();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventWriteString();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventActivityIdControl();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventAccessControl();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventAccessQuery();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EventAccessRemove();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void TdhCreatePayloadFilter();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void TdhDeletePayloadFilter();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void TdhAggregatePayloadFilters();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void TdhCleanupPayloadEventFilterDescriptor();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void TdhGetEventInformation();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void TdhGetEventMapInformation();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void TdhGetPropertySize();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void TdhGetProperty();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void TdhEnumerateProviders();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void TdhQueryProviderFieldInformation();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void TdhEnumerateProviderFieldInformation();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void TdhEnumerateProviderFilters();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void TdhLoadManifest();

/*u32*/void TdhLoadManifestFromMemory();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void TdhUnloadManifest();

/*u32*/void TdhUnloadManifestFromMemory();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void TdhFormatProperty();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void TdhOpenDecodingHandle();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void TdhSetDecodingParameter();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void TdhGetDecodingParameter();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void TdhGetWppProperty();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void TdhGetWppMessage();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void TdhCloseDecodingHandle();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void TdhLoadManifestFromBinary();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void TdhEnumerateManifestProviderEvents();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void TdhGetManifestEventInformation();

// TODO: this type is limited to platform 'windows10.0.10240'
/*i32*/void CveEventWrite();

