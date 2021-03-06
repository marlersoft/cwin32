// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (5)
//--------------------------------------------------------------------------------
#define CCH_RM_SESSION_KEY (UINT)32
#define CCH_RM_MAX_APP_NAME (UINT)255
#define CCH_RM_MAX_SVC_NAME (UINT)63
#define RM_INVALID_TS_SESSION (INT)-1
#define RM_INVALID_PROCESS (INT)-1

//--------------------------------------------------------------------------------
// Section: Types (10)
//--------------------------------------------------------------------------------
typedef enum {
    RmUnknownApp = 0,
    RmMainWindow = 1,
    RmOtherWindow = 2,
    RmService = 3,
    RmExplorer = 4,
    RmConsole = 5,
    RmCritical = 1000,
} RM_APP_TYPE;

typedef enum {
    RmForceShutdown = 1,
    RmShutdownOnlyRegistered = 16,
} RM_SHUTDOWN_TYPE;

typedef enum {
    RmStatusUnknown = 0,
    RmStatusRunning = 1,
    RmStatusStopped = 2,
    RmStatusStoppedOther = 4,
    RmStatusRestarted = 8,
    RmStatusErrorOnStop = 16,
    RmStatusErrorOnRestart = 32,
    RmStatusShutdownMasked = 64,
    RmStatusRestartMasked = 128,
} RM_APP_STATUS;

typedef enum {
    RmRebootReasonNone = 0,
    RmRebootReasonPermissionDenied = 1,
    RmRebootReasonSessionMismatch = 2,
    RmRebootReasonCriticalProcess = 4,
    RmRebootReasonCriticalService = 8,
    RmRebootReasonDetectedSelf = 16,
} RM_REBOOT_REASON;

typedef int RM_UNIQUE_PROCESS;

typedef int RM_PROCESS_INFO;

typedef enum {
    RmFilterTriggerInvalid = 0,
    RmFilterTriggerFile = 1,
    RmFilterTriggerProcess = 2,
    RmFilterTriggerService = 3,
} RM_FILTER_TRIGGER;

typedef enum {
    RmInvalidFilterAction = 0,
    RmNoRestart = 1,
    RmNoShutdown = 2,
} RM_FILTER_ACTION;

typedef int RM_FILTER_INFO;

typedef int RM_WRITE_STATUS_CALLBACK;


//--------------------------------------------------------------------------------
// Section: Functions (11)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmStartSession();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmJoinSession();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmEndSession();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmRegisterResources();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmGetList();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmShutdown();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmRestart();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmCancelCurrentTask();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmAddFilter();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmRemoveFilter();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void RmGetFilterList();

