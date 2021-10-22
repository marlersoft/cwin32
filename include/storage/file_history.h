// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (0)
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// Section: Types (14)
//--------------------------------------------------------------------------------
typedef int FhConfigMgr;

typedef int FhReassociation;

typedef enum {
    FH_TARGET_NAME = 0,
    FH_TARGET_URL = 1,
    FH_TARGET_DRIVE_TYPE = 2,
    MAX_TARGET_PROPERTY = 3,
} FH_TARGET_PROPERTY_TYPE;

typedef enum {
    FH_DRIVE_UNKNOWN = 0,
    FH_DRIVE_REMOVABLE = 2,
    FH_DRIVE_FIXED = 3,
    FH_DRIVE_REMOTE = 4,
} FH_TARGET_DRIVE_TYPES;

// TODO: this type is limited to platform 'windows8.0'
typedef int IFhTarget;

// TODO: this type is limited to platform 'windows8.0'
typedef int IFhScopeIterator;

typedef enum {
    FH_FOLDER = 0,
    FH_LIBRARY = 1,
    MAX_PROTECTED_ITEM_CATEGORY = 2,
} FH_PROTECTED_ITEM_CATEGORY;

typedef enum {
    FH_FREQUENCY = 0,
    FH_RETENTION_TYPE = 1,
    FH_RETENTION_AGE = 2,
    MAX_LOCAL_POLICY = 3,
} FH_LOCAL_POLICY_TYPE;

typedef enum {
    FH_RETENTION_DISABLED = 0,
    FH_RETENTION_UNLIMITED = 1,
    FH_RETENTION_AGE_BASED = 2,
    MAX_RETENTION_TYPE = 3,
} FH_RETENTION_TYPES;

typedef enum {
    FH_STATUS_DISABLED = 0,
    FH_STATUS_DISABLED_BY_GP = 1,
    FH_STATUS_ENABLED = 2,
    FH_STATUS_REHYDRATING = 3,
    MAX_BACKUP_STATUS = 4,
} FH_BACKUP_STATUS;

typedef enum {
    FH_ACCESS_DENIED = 0,
    FH_INVALID_DRIVE_TYPE = 1,
    FH_READ_ONLY_PERMISSION = 2,
    FH_CURRENT_DEFAULT = 3,
    FH_NAMESPACE_EXISTS = 4,
    FH_TARGET_PART_OF_LIBRARY = 5,
    FH_VALID_TARGET = 6,
    MAX_VALIDATION_RESULT = 7,
} FH_DEVICE_VALIDATION_RESULT;

// TODO: this type is limited to platform 'windows8.0'
typedef int IFhConfigMgr;

// TODO: this type is limited to platform 'windows8.0'
typedef int IFhReassociation;

typedef enum {
    BackupInvalidStopReason = 0,
    BackupLimitUserBusyMachineOnAC = 1,
    BackupLimitUserIdleMachineOnDC = 2,
    BackupLimitUserBusyMachineOnDC = 3,
    BackupCancelled = 4,
} FhBackupStopReason;


//--------------------------------------------------------------------------------
// Section: Functions (7)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void FhServiceOpenPipe();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void FhServiceClosePipe();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void FhServiceStartBackup();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void FhServiceStopBackup();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void FhServiceReloadConfiguration();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void FhServiceBlockBackup();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void FhServiceUnblockBackup();

