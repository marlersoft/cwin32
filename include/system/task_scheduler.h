// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (43)
//--------------------------------------------------------------------------------
#define TASK_SUNDAY (UINT)1
#define TASK_MONDAY (UINT)2
#define TASK_TUESDAY (UINT)4
#define TASK_WEDNESDAY (UINT)8
#define TASK_THURSDAY (UINT)16
#define TASK_FRIDAY (UINT)32
#define TASK_SATURDAY (UINT)64
#define TASK_FIRST_WEEK (UINT)1
#define TASK_SECOND_WEEK (UINT)2
#define TASK_THIRD_WEEK (UINT)3
#define TASK_FOURTH_WEEK (UINT)4
#define TASK_LAST_WEEK (UINT)5
#define TASK_JANUARY (UINT)1
#define TASK_FEBRUARY (UINT)2
#define TASK_MARCH (UINT)4
#define TASK_APRIL (UINT)8
#define TASK_MAY (UINT)16
#define TASK_JUNE (UINT)32
#define TASK_JULY (UINT)64
#define TASK_AUGUST (UINT)128
#define TASK_SEPTEMBER (UINT)256
#define TASK_OCTOBER (UINT)512
#define TASK_NOVEMBER (UINT)1024
#define TASK_DECEMBER (UINT)2048
#define TASK_FLAG_INTERACTIVE (UINT)1
#define TASK_FLAG_DELETE_WHEN_DONE (UINT)2
#define TASK_FLAG_DISABLED (UINT)4
#define TASK_FLAG_START_ONLY_IF_IDLE (UINT)16
#define TASK_FLAG_KILL_ON_IDLE_END (UINT)32
#define TASK_FLAG_DONT_START_IF_ON_BATTERIES (UINT)64
#define TASK_FLAG_KILL_IF_GOING_ON_BATTERIES (UINT)128
#define TASK_FLAG_RUN_ONLY_IF_DOCKED (UINT)256
#define TASK_FLAG_HIDDEN (UINT)512
#define TASK_FLAG_RUN_IF_CONNECTED_TO_INTERNET (UINT)1024
#define TASK_FLAG_RESTART_ON_IDLE_RESUME (UINT)2048
#define TASK_FLAG_SYSTEM_REQUIRED (UINT)4096
#define TASK_FLAG_RUN_ONLY_IF_LOGGED_ON (UINT)8192
#define TASK_TRIGGER_FLAG_HAS_END_DATE (UINT)1
#define TASK_TRIGGER_FLAG_KILL_AT_DURATION_END (UINT)2
#define TASK_TRIGGER_FLAG_DISABLED (UINT)4
#define TASK_MAX_RUN_TIMES (UINT)1440
#define CLSID_CTask GUID { "148bd520-a2ab-11ce-b11f-00aa00530503" }
#define CLSID_CTaskScheduler GUID { "148bd52a-a2ab-11ce-b11f-00aa00530503" }

//--------------------------------------------------------------------------------
// Section: Types (72)
//--------------------------------------------------------------------------------
typedef enum {
    TASK_TIME_TRIGGER_ONCE = 0,
    TASK_TIME_TRIGGER_DAILY = 1,
    TASK_TIME_TRIGGER_WEEKLY = 2,
    TASK_TIME_TRIGGER_MONTHLYDATE = 3,
    TASK_TIME_TRIGGER_MONTHLYDOW = 4,
    TASK_EVENT_TRIGGER_ON_IDLE = 5,
    TASK_EVENT_TRIGGER_AT_SYSTEMSTART = 6,
    TASK_EVENT_TRIGGER_AT_LOGON = 7,
} TASK_TRIGGER_TYPE;

typedef int DAILY;

typedef int WEEKLY;

typedef int MONTHLYDATE;

typedef int MONTHLYDOW;

typedef int TRIGGER_TYPE_UNION;

typedef int TASK_TRIGGER;

// TODO: this type is limited to platform 'windows5.0'
typedef int ITaskTrigger;

// TODO: this type is limited to platform 'windows5.0'
typedef int IScheduledWorkItem;

// TODO: this type is limited to platform 'windows5.0'
typedef int ITask;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEnumWorkItems;

// TODO: this type is limited to platform 'windows5.0'
typedef int ITaskScheduler;

typedef enum {
    TASKPAGE_TASK = 0,
    TASKPAGE_SCHEDULE = 1,
    TASKPAGE_SETTINGS = 2,
} TASKPAGE;

// TODO: this type is limited to platform 'windows5.0'
typedef int IProvideTaskPage;

typedef int TaskScheduler;

typedef int TaskHandlerPS;

typedef int TaskHandlerStatusPS;

typedef enum {
    TASK_RUN_NO_FLAGS = 0,
    TASK_RUN_AS_SELF = 1,
    TASK_RUN_IGNORE_CONSTRAINTS = 2,
    TASK_RUN_USE_SESSION_ID = 4,
    TASK_RUN_USER_SID = 8,
} TASK_RUN_FLAGS;

typedef enum {
    TASK_ENUM_HIDDEN = 1,
} TASK_ENUM_FLAGS;

typedef enum {
    TASK_LOGON_NONE = 0,
    TASK_LOGON_PASSWORD = 1,
    TASK_LOGON_S4U = 2,
    TASK_LOGON_INTERACTIVE_TOKEN = 3,
    TASK_LOGON_GROUP = 4,
    TASK_LOGON_SERVICE_ACCOUNT = 5,
    TASK_LOGON_INTERACTIVE_TOKEN_OR_PASSWORD = 6,
} TASK_LOGON_TYPE;

typedef enum {
    TASK_RUNLEVEL_LUA = 0,
    TASK_RUNLEVEL_HIGHEST = 1,
} TASK_RUNLEVEL_TYPE;

typedef enum {
    TASK_PROCESSTOKENSID_NONE = 0,
    TASK_PROCESSTOKENSID_UNRESTRICTED = 1,
    TASK_PROCESSTOKENSID_DEFAULT = 2,
} TASK_PROCESSTOKENSID_TYPE;

typedef enum {
    TASK_STATE_UNKNOWN = 0,
    TASK_STATE_DISABLED = 1,
    TASK_STATE_QUEUED = 2,
    TASK_STATE_READY = 3,
    TASK_STATE_RUNNING = 4,
} TASK_STATE;

typedef enum {
    TASK_VALIDATE_ONLY = 1,
    TASK_CREATE = 2,
    TASK_UPDATE = 4,
    TASK_CREATE_OR_UPDATE = 6,
    TASK_DISABLE = 8,
    TASK_DONT_ADD_PRINCIPAL_ACE = 16,
    TASK_IGNORE_REGISTRATION_TRIGGERS = 32,
} TASK_CREATION;

typedef enum {
    TASK_TRIGGER_EVENT = 0,
    TASK_TRIGGER_TIME = 1,
    TASK_TRIGGER_DAILY = 2,
    TASK_TRIGGER_WEEKLY = 3,
    TASK_TRIGGER_MONTHLY = 4,
    TASK_TRIGGER_MONTHLYDOW = 5,
    TASK_TRIGGER_IDLE = 6,
    TASK_TRIGGER_REGISTRATION = 7,
    TASK_TRIGGER_BOOT = 8,
    TASK_TRIGGER_LOGON = 9,
    TASK_TRIGGER_SESSION_STATE_CHANGE = 11,
    TASK_TRIGGER_CUSTOM_TRIGGER_01 = 12,
} TASK_TRIGGER_TYPE2;

typedef enum {
    TASK_CONSOLE_CONNECT = 1,
    TASK_CONSOLE_DISCONNECT = 2,
    TASK_REMOTE_CONNECT = 3,
    TASK_REMOTE_DISCONNECT = 4,
    TASK_SESSION_LOCK = 7,
    TASK_SESSION_UNLOCK = 8,
} TASK_SESSION_STATE_CHANGE_TYPE;

typedef enum {
    TASK_ACTION_EXEC = 0,
    TASK_ACTION_COM_HANDLER = 5,
    TASK_ACTION_SEND_EMAIL = 6,
    TASK_ACTION_SHOW_MESSAGE = 7,
} TASK_ACTION_TYPE;

typedef enum {
    TASK_INSTANCES_PARALLEL = 0,
    TASK_INSTANCES_QUEUE = 1,
    TASK_INSTANCES_IGNORE_NEW = 2,
    TASK_INSTANCES_STOP_EXISTING = 3,
} TASK_INSTANCES_POLICY;

typedef enum {
    TASK_COMPATIBILITY_AT = 0,
    TASK_COMPATIBILITY_V1 = 1,
    TASK_COMPATIBILITY_V2 = 2,
    TASK_COMPATIBILITY_V2_1 = 3,
    TASK_COMPATIBILITY_V2_2 = 4,
    TASK_COMPATIBILITY_V2_3 = 5,
    TASK_COMPATIBILITY_V2_4 = 6,
} TASK_COMPATIBILITY;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskFolderCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskService;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskHandler;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskHandlerStatus;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskVariables;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskNamedValuePair;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskNamedValueCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRunningTask;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRunningTaskCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRegisteredTask;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IIdleTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ILogonTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISessionStateChangeTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IEventTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITimeTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDailyTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IWeeklyTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IMonthlyTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IMonthlyDOWTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBootTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRegistrationTrigger;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IAction;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IExecAction;

typedef int IExecAction2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IShowMessageAction;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IComHandlerAction;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IEmailAction;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITriggerCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IActionCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IPrincipal;

// TODO: this type is limited to platform 'windows6.1'
typedef int IPrincipal2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRegistrationInfo;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskDefinition;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskSettings;

// TODO: this type is limited to platform 'windows6.1'
typedef int ITaskSettings2;

typedef int ITaskSettings3;

typedef int IMaintenanceSettings;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRegisteredTaskCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITaskFolder;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IIdleSettings;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetworkSettings;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRepetitionPattern;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
