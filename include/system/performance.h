// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (85)
//--------------------------------------------------------------------------------
#define MAX_COUNTER_PATH (UINT)256
#define PDH_MAX_COUNTER_NAME (UINT)1024
#define PDH_MAX_INSTANCE_NAME (UINT)1024
#define PDH_MAX_COUNTER_PATH (UINT)2048
#define PDH_MAX_DATASOURCE_PATH (UINT)1024
#define PDH_MAX_SCALE (INT)7
#define PDH_MIN_SCALE (INT)-7
#define PDH_NOEXPANDCOUNTERS (UINT)1
#define PDH_NOEXPANDINSTANCES (UINT)2
#define PDH_REFRESHCOUNTERS (UINT)4
#define PDH_LOG_TYPE_RETIRED_BIN (UINT)3
#define PDH_LOG_TYPE_TRACE_KERNEL (UINT)4
#define PDH_LOG_TYPE_TRACE_GENERIC (UINT)5
#define PERF_PROVIDER_USER_MODE (UINT)0
#define PERF_PROVIDER_KERNEL_MODE (UINT)1
#define PERF_PROVIDER_DRIVER (UINT)2
#define PERF_COUNTERSET_FLAG_MULTIPLE (UINT)2
#define PERF_COUNTERSET_FLAG_AGGREGATE (UINT)4
#define PERF_COUNTERSET_FLAG_HISTORY (UINT)8
#define PERF_COUNTERSET_FLAG_INSTANCE (UINT)16
#define PERF_COUNTERSET_SINGLE_INSTANCE (UINT)0
#define PERF_AGGREGATE_MAX (UINT)4
#define PERF_ATTRIB_BY_REFERENCE (UINT64)1
#define PERF_ATTRIB_NO_DISPLAYABLE (UINT64)2
#define PERF_ATTRIB_NO_GROUP_SEPARATOR (UINT64)4
#define PERF_ATTRIB_DISPLAY_AS_REAL (UINT64)8
#define PERF_ATTRIB_DISPLAY_AS_HEX (UINT64)16
#define PERF_WILDCARD_COUNTER (UINT)4294967295
#define PERF_MAX_INSTANCE_NAME (UINT)1024
#define PERF_ADD_COUNTER (UINT)1
#define PERF_REMOVE_COUNTER (UINT)2
#define PERF_ENUM_INSTANCES (UINT)3
#define PERF_COLLECT_START (UINT)5
#define PERF_COLLECT_END (UINT)6
#define PERF_FILTER (UINT)9
#define PERF_DATA_VERSION (UINT)1
#define PERF_DATA_REVISION (UINT)1
#define PERF_NO_INSTANCES (INT)-1
#define PERF_SIZE_DWORD (UINT)0
#define PERF_SIZE_LARGE (UINT)256
#define PERF_SIZE_ZERO (UINT)512
#define PERF_SIZE_VARIABLE_LEN (UINT)768
#define PERF_TYPE_NUMBER (UINT)0
#define PERF_TYPE_COUNTER (UINT)1024
#define PERF_TYPE_TEXT (UINT)2048
#define PERF_TYPE_ZERO (UINT)3072
#define PERF_NUMBER_HEX (UINT)0
#define PERF_NUMBER_DECIMAL (UINT)65536
#define PERF_NUMBER_DEC_1000 (UINT)131072
#define PERF_COUNTER_VALUE (UINT)0
#define PERF_COUNTER_RATE (UINT)65536
#define PERF_COUNTER_FRACTION (UINT)131072
#define PERF_COUNTER_BASE (UINT)196608
#define PERF_COUNTER_ELAPSED (UINT)262144
#define PERF_COUNTER_QUEUELEN (UINT)327680
#define PERF_COUNTER_HISTOGRAM (UINT)393216
#define PERF_COUNTER_PRECISION (UINT)458752
#define PERF_TEXT_UNICODE (UINT)0
#define PERF_TEXT_ASCII (UINT)65536
#define PERF_TIMER_TICK (UINT)0
#define PERF_TIMER_100NS (UINT)1048576
#define PERF_OBJECT_TIMER (UINT)2097152
#define PERF_DELTA_COUNTER (UINT)4194304
#define PERF_DELTA_BASE (UINT)8388608
#define PERF_INVERSE_COUNTER (UINT)16777216
#define PERF_MULTI_COUNTER (UINT)33554432
#define PERF_DISPLAY_NO_SUFFIX (UINT)0
#define PERF_DISPLAY_PER_SEC (UINT)268435456
#define PERF_DISPLAY_PERCENT (UINT)536870912
#define PERF_DISPLAY_SECONDS (UINT)805306368
#define PERF_DISPLAY_NOSHOW (UINT)1073741824
#define PERF_COUNTER_HISTOGRAM_TYPE (UINT)2147483648
#define PERF_NO_UNIQUE_ID (INT)-1
#define MAX_PERF_OBJECTS_IN_QUERY_FUNCTION (INT)64
#define WINPERF_LOG_NONE (UINT)0
#define WINPERF_LOG_USER (UINT)1
#define WINPERF_LOG_DEBUG (UINT)2
#define WINPERF_LOG_VERBOSE (UINT)3
#define PLA_CAPABILITY_LOCAL (UINT)268435456
#define PLA_CAPABILITY_V1_SVC (UINT)1
#define PLA_CAPABILITY_V1_SESSION (UINT)2
#define PLA_CAPABILITY_V1_SYSTEM (UINT)4
#define PLA_CAPABILITY_LEGACY_SESSION (UINT)8
#define PLA_CAPABILITY_LEGACY_SVC (UINT)16
#define PLA_CAPABILITY_AUTOLOGGER (UINT)32

//--------------------------------------------------------------------------------
// Section: Types (112)
//--------------------------------------------------------------------------------
typedef enum {
    PERF_DETAIL_NOVICE = 100,
    PERF_DETAIL_ADVANCED = 200,
    PERF_DETAIL_EXPERT = 300,
    PERF_DETAIL_WIZARD = 400,
} PERF_DETAIL;

typedef enum {
    DATA_SOURCE_REGISTRY = 1,
    DATA_SOURCE_WBEM = 4,
} REAL_TIME_DATA_SOURCE_ID_FLAGS;

typedef enum {
    PDH_PATH_WBEM_RESULT = 1,
    PDH_PATH_WBEM_INPUT = 2,
    PDH_PATH_WBEM_NONE = 0,
} PDH_PATH_FLAGS;

typedef enum {
    PDH_FMT_DOUBLE = 512,
    PDH_FMT_LARGE = 1024,
    PDH_FMT_LONG = 256,
} PDH_FMT;

typedef enum {
    PDH_LOG_TYPE_UNDEFINED = 0,
    PDH_LOG_TYPE_CSV = 1,
    PDH_LOG_TYPE_SQL = 7,
    PDH_LOG_TYPE_TSV = 2,
    PDH_LOG_TYPE_BINARY = 8,
    PDH_LOG_TYPE_PERFMON = 6,
} PDH_LOG_TYPE;

typedef enum {
    PDH_LOG_READ_ACCESS = 65536,
    PDH_LOG_WRITE_ACCESS = 131072,
    PDH_LOG_UPDATE_ACCESS = 262144,
} PDH_LOG;

typedef enum {
    PDH_FLAGS_FILE_BROWSER_ONLY = 1,
    PDH_FLAGS_NONE = 0,
} PDH_SELECT_DATA_SOURCE_FLAGS;

typedef enum {
    PDH_CVERSION_WIN50 = 1280,
    PDH_VERSION = 1283,
} PDH_DLL_VERSION;

typedef enum {
    PERF_AGGREGATE_UNDEFINED = 0,
    PERF_AGGREGATE_TOTAL = 1,
    PERF_AGGREGATE_AVG = 2,
    PERF_AGGREGATE_MIN = 3,
} PERF_COUNTER_AGGREGATE_FUNC;

typedef int PERF_OBJECT_TYPE;

typedef int PERF_COUNTER_DEFINITION;

typedef int PerfProviderHandle;

typedef int PerfQueryHandle;

typedef int PERF_COUNTERSET_INFO;

typedef int PERF_COUNTER_INFO;

typedef int PERF_COUNTERSET_INSTANCE;

typedef int PERF_COUNTER_IDENTITY;

typedef int PERFLIBREQUEST;

typedef int PERF_MEM_ALLOC;

typedef int PERF_MEM_FREE;

typedef int PERF_PROVIDER_CONTEXT;

typedef int PERF_INSTANCE_HEADER;

typedef enum {
    PERF_REG_COUNTERSET_STRUCT = 1,
    PERF_REG_COUNTER_STRUCT = 2,
    PERF_REG_COUNTERSET_NAME_STRING = 3,
    PERF_REG_COUNTERSET_HELP_STRING = 4,
    PERF_REG_COUNTER_NAME_STRINGS = 5,
    PERF_REG_COUNTER_HELP_STRINGS = 6,
    PERF_REG_PROVIDER_NAME = 7,
    PERF_REG_PROVIDER_GUID = 8,
    PERF_REG_COUNTERSET_ENGLISH_NAME = 9,
    PERF_REG_COUNTER_ENGLISH_NAMES = 10,
} PerfRegInfoType;

typedef int PERF_COUNTERSET_REG_INFO;

typedef int PERF_COUNTER_REG_INFO;

typedef int PERF_STRING_BUFFER_HEADER;

typedef int PERF_STRING_COUNTER_HEADER;

typedef int PERF_COUNTER_IDENTIFIER;

typedef int PERF_DATA_HEADER;

typedef enum {
    PERF_ERROR_RETURN = 0,
    PERF_SINGLE_COUNTER = 1,
    PERF_MULTIPLE_COUNTERS = 2,
    PERF_MULTIPLE_INSTANCES = 4,
    PERF_COUNTERSET = 6,
} PerfCounterDataType;

typedef int PERF_COUNTER_HEADER;

typedef int PERF_MULTI_INSTANCES;

typedef int PERF_MULTI_COUNTERS;

typedef int PERF_COUNTER_DATA;

typedef int PERF_DATA_BLOCK;

typedef int PERF_INSTANCE_DEFINITION;

typedef int PERF_COUNTER_BLOCK;

typedef int PM_OPEN_PROC;

typedef int PM_COLLECT_PROC;

typedef int PM_CLOSE_PROC;

typedef int PM_QUERY_PROC;

typedef int PDH_RAW_COUNTER;

typedef int PDH_RAW_COUNTER_ITEM_A;

typedef int PDH_RAW_COUNTER_ITEM_W;

typedef int PDH_FMT_COUNTERVALUE;

typedef int PDH_FMT_COUNTERVALUE_ITEM_A;

typedef int PDH_FMT_COUNTERVALUE_ITEM_W;

typedef int PDH_STATISTICS;

typedef int PDH_COUNTER_PATH_ELEMENTS_A;

typedef int PDH_COUNTER_PATH_ELEMENTS_W;

typedef int PDH_DATA_ITEM_PATH_ELEMENTS_A;

typedef int PDH_DATA_ITEM_PATH_ELEMENTS_W;

typedef int PDH_COUNTER_INFO_A;

typedef int PDH_COUNTER_INFO_W;

typedef int PDH_TIME_INFO;

typedef int PDH_RAW_LOG_RECORD;

typedef int PDH_LOG_SERVICE_QUERY_INFO_A;

typedef int PDH_LOG_SERVICE_QUERY_INFO_W;

typedef int CounterPathCallBack;

typedef int PDH_BROWSE_DLG_CONFIG_HW;

typedef int PDH_BROWSE_DLG_CONFIG_HA;

typedef int PDH_BROWSE_DLG_CONFIG_W;

typedef int PDH_BROWSE_DLG_CONFIG_A;

typedef int DataCollectorSet;

typedef int TraceSession;

typedef int TraceSessionCollection;

typedef int TraceDataProvider;

typedef int TraceDataProviderCollection;

typedef int DataCollectorSetCollection;

typedef int LegacyDataCollectorSet;

typedef int LegacyDataCollectorSetCollection;

typedef int LegacyTraceSession;

typedef int LegacyTraceSessionCollection;

typedef int ServerDataCollectorSet;

typedef int ServerDataCollectorSetCollection;

typedef int SystemDataCollectorSet;

typedef int SystemDataCollectorSetCollection;

typedef int BootTraceSession;

typedef int BootTraceSessionCollection;

typedef enum {
    plaPerformanceCounter = 0,
    plaTrace = 1,
    plaConfiguration = 2,
    plaAlert = 3,
    plaApiTrace = 4,
} DataCollectorType;

typedef enum {
    plaCommaSeparated = 0,
    plaTabSeparated = 1,
    plaSql = 2,
    plaBinary = 3,
} FileFormat;

typedef enum {
    plaNone = 0,
    plaPattern = 1,
    plaComputer = 2,
    plaMonthDayHour = 256,
    plaSerialNumber = 512,
    plaYearDayOfYear = 1024,
    plaYearMonth = 2048,
    plaYearMonthDay = 4096,
    plaYearMonthDayHour = 8192,
    plaMonthDayHourMinute = 16384,
} AutoPathFormat;

typedef enum {
    plaStopped = 0,
    plaRunning = 1,
    plaCompiling = 2,
    plaPending = 3,
    plaUndefined = 4,
} DataCollectorSetStatus;

typedef enum {
    plaTimeStamp = 0,
    plaPerformance = 1,
    plaSystem = 2,
    plaCycle = 3,
} ClockType;

typedef enum {
    plaFile = 1,
    plaRealTime = 2,
    plaBoth = 3,
    plaBuffering = 4,
} StreamMode;

typedef enum {
    plaCreateNew = 1,
    plaModify = 2,
    plaCreateOrModify = 3,
    plaUpdateRunningInstance = 16,
    plaFlushTrace = 32,
    plaValidateOnly = 4096,
} CommitMode;

typedef enum {
    plaIndex = 1,
    plaFlag = 2,
    plaFlagArray = 3,
    plaValidation = 4,
} ValueMapType;

typedef enum {
    plaRunOnce = 0,
    plaSunday = 1,
    plaMonday = 2,
    plaTuesday = 4,
    plaWednesday = 8,
    plaThursday = 16,
    plaFriday = 32,
    plaSaturday = 64,
    plaEveryday = 127,
} WeekDays;

typedef enum {
    plaDeleteLargest = 0,
    plaDeleteOldest = 1,
} ResourcePolicy;

typedef enum {
    plaCreateReport = 1,
    plaRunRules = 2,
    plaCreateHtml = 4,
    plaFolderActions = 8,
    plaResourceFreeing = 16,
} DataManagerSteps;

typedef enum {
    plaCreateCab = 1,
    plaDeleteData = 2,
    plaSendCab = 4,
    plaDeleteCab = 8,
    plaDeleteReport = 16,
} FolderActionSteps;

typedef int PLA_CABEXTRACT_CALLBACK;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDataCollectorSet;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDataManager;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFolderAction;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFolderActionCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDataCollector;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IPerformanceCounterDataCollector;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITraceDataCollector;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IConfigurationDataCollector;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IAlertDataCollector;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IApiTracingDataCollector;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDataCollectorCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDataCollectorSetCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITraceDataProvider;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITraceDataProviderCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISchedule;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IScheduleCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IValueMapItem;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IValueMap;

typedef int PERF_OBJECT_TYPE;

typedef int PERF_COUNTER_DEFINITION;


//--------------------------------------------------------------------------------
// Section: Functions (135)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void QueryPerformanceCounter();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void QueryPerformanceFrequency();

/*u32*/void InstallPerfDllW();

/*u32*/void InstallPerfDllA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void LoadPerfCounterTextStringsA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void LoadPerfCounterTextStringsW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void UnloadPerfCounterTextStringsW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void UnloadPerfCounterTextStringsA();

/*u32*/void UpdatePerfNameFilesA();

/*u32*/void UpdatePerfNameFilesW();

/*u32*/void SetServiceAsTrustedA();

/*u32*/void SetServiceAsTrustedW();

/*u32*/void BackupPerfRegistryToFileW();

/*u32*/void RestorePerfRegistryFromFileW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfStartProvider();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfStartProviderEx();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfStopProvider();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfSetCounterSetInfo();

// TODO: this type is limited to platform 'windows6.0.6000'
/*?*PERF_COUNTERSET_INSTANCE*/void PerfCreateInstance();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfDeleteInstance();

// TODO: this type is limited to platform 'windows6.0.6000'
/*?*PERF_COUNTERSET_INSTANCE*/void PerfQueryInstance();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfSetCounterRefValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfSetULongCounterValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfSetULongLongCounterValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfIncrementULongCounterValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfIncrementULongLongCounterValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfDecrementULongCounterValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PerfDecrementULongLongCounterValue();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfEnumerateCounterSet();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfEnumerateCounterSetInstances();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfQueryCounterSetRegistrationInfo();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfOpenQueryHandle();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfCloseQueryHandle();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfQueryCounterInfo();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfQueryCounterData();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfAddCounters();

// TODO: this type is limited to platform 'windows10.0.14393'
/*u32*/void PerfDeleteCounters();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDllVersion();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhOpenQueryW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhOpenQueryA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhAddCounterW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhAddCounterA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*i32*/void PdhAddEnglishCounterW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*i32*/void PdhAddEnglishCounterA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*i32*/void PdhCollectQueryDataWithTime();

// TODO: this type is limited to platform 'windows6.0.6000'
/*i32*/void PdhValidatePathExW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*i32*/void PdhValidatePathExA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhRemoveCounter();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhCollectQueryData();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhCloseQuery();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetFormattedCounterValue();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetFormattedCounterArrayA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetFormattedCounterArrayW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetRawCounterValue();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetRawCounterArrayA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetRawCounterArrayW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhCalculateCounterFromRawValue();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhComputeCounterStatistics();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetCounterInfoW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetCounterInfoA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhSetCounterScaleFactor();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhConnectMachineW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhConnectMachineA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumMachinesW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumMachinesA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumObjectsW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumObjectsA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumObjectItemsW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumObjectItemsA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhMakeCounterPathW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhMakeCounterPathA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhParseCounterPathW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhParseCounterPathA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhParseInstanceNameW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhParseInstanceNameA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhValidatePathW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhValidatePathA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDefaultPerfObjectW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDefaultPerfObjectA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDefaultPerfCounterW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDefaultPerfCounterA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhBrowseCountersW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhBrowseCountersA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhExpandCounterPathW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhExpandCounterPathA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhLookupPerfNameByIndexW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhLookupPerfNameByIndexA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhLookupPerfIndexByNameW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhLookupPerfIndexByNameA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhExpandWildCardPathA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhExpandWildCardPathW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhOpenLogW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhOpenLogA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhUpdateLogW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhUpdateLogA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhUpdateLogFileCatalog();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetLogFileSize();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhCloseLog();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhSelectDataSourceW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhSelectDataSourceA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOL*/void PdhIsRealTimeQuery();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhSetQueryTimeRange();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDataSourceTimeRangeW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDataSourceTimeRangeA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhCollectQueryDataEx();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhFormatFromRawValue();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetCounterTimeBase();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhReadRawLogRecord();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhSetDefaultRealTimeDataSource();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhBindInputDataSourceW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhBindInputDataSourceA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhOpenQueryH();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumMachinesHW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumMachinesHA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumObjectsHW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumObjectsHA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumObjectItemsHW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumObjectItemsHA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhExpandWildCardPathHW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhExpandWildCardPathHA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDataSourceTimeRangeH();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDefaultPerfObjectHW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDefaultPerfObjectHA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDefaultPerfCounterHW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhGetDefaultPerfCounterHA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhBrowseCountersHW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhBrowseCountersHA();

/*i32*/void PdhVerifySQLDBW();

/*i32*/void PdhVerifySQLDBA();

/*i32*/void PdhCreateSQLTablesW();

/*i32*/void PdhCreateSQLTablesA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumLogSetNamesW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void PdhEnumLogSetNamesA();

/*i32*/void PdhGetLogSetGUID();

/*i32*/void PdhSetLogSetRunID();
