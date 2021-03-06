// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (2)
//--------------------------------------------------------------------------------
#define WSB_MAX_OB_STATUS_VALUE_TYPE_PAIR (UINT)5
#define WSB_MAX_OB_STATUS_ENTRY (UINT)5

//--------------------------------------------------------------------------------
// Section: Types (8)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windowsServer2008'
typedef int IWsbApplicationBackupSupport;

// TODO: this type is limited to platform 'windowsServer2008'
typedef int IWsbApplicationRestoreSupport;

// TODO: this type is limited to platform 'windowsServer2008'
typedef int IWsbApplicationAsync;

typedef enum {
    WSB_OB_ET_UNDEFINED = 0,
    WSB_OB_ET_STRING = 1,
    WSB_OB_ET_NUMBER = 2,
    WSB_OB_ET_DATETIME = 3,
    WSB_OB_ET_TIME = 4,
    WSB_OB_ET_SIZE = 5,
    WSB_OB_ET_MAX = 6,
} WSB_OB_STATUS_ENTRY_PAIR_TYPE;

typedef int WSB_OB_STATUS_ENTRY_VALUE_TYPE_PAIR;

typedef int WSB_OB_STATUS_ENTRY;

typedef int WSB_OB_STATUS_INFO;

typedef int WSB_OB_REGISTRATION_INFO;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
