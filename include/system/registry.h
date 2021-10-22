// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (19)
//--------------------------------------------------------------------------------
#define HKEY_CLASSES_ROOT (HKEY)(INT)-2147483648
#define HKEY_CURRENT_USER (HKEY)(INT)-2147483647
#define HKEY_LOCAL_MACHINE (HKEY)(INT)-2147483646
#define HKEY_USERS (HKEY)(INT)-2147483645
#define HKEY_PERFORMANCE_DATA (HKEY)(INT)-2147483644
#define HKEY_PERFORMANCE_TEXT (HKEY)(INT)-2147483568
#define HKEY_PERFORMANCE_NLSTEXT (HKEY)(INT)-2147483552
#define HKEY_CURRENT_CONFIG (HKEY)(INT)-2147483643
#define HKEY_DYN_DATA (HKEY)(INT)-2147483642
#define HKEY_CURRENT_USER_LOCAL_SETTINGS (HKEY)(INT)-2147483641
#define RRF_SUBKEY_WOW6464KEY (UINT)65536
#define RRF_SUBKEY_WOW6432KEY (UINT)131072
#define RRF_WOW64_MASK (UINT)196608
#define RRF_NOEXPAND (UINT)268435456
#define RRF_ZEROONFAILURE (UINT)536870912
#define REG_PROCESS_APPKEY (UINT)1
#define PROVIDER_KEEPS_VALUE_LENGTH (UINT)1
#define REG_MUI_STRING_TRUNCATE (UINT)1
#define REG_SECURE_CONNECTION (UINT)1

//--------------------------------------------------------------------------------
// Section: Types (16)
//--------------------------------------------------------------------------------
typedef enum {
    REG_NONE = 0,
    REG_SZ = 1,
    REG_EXPAND_SZ = 2,
    REG_BINARY = 3,
    REG_DWORD = 4,
    REG_DWORD_LITTLE_ENDIAN = 4,
    REG_DWORD_BIG_ENDIAN = 5,
    REG_LINK = 6,
    REG_MULTI_SZ = 7,
    REG_RESOURCE_LIST = 8,
    REG_FULL_RESOURCE_DESCRIPTOR = 9,
    REG_RESOURCE_REQUIREMENTS_LIST = 10,
    REG_QWORD = 11,
    REG_QWORD_LITTLE_ENDIAN = 11,
} REG_VALUE_TYPE;

typedef enum {
    KEY_QUERY_VALUE = 1,
    KEY_SET_VALUE = 2,
    KEY_CREATE_SUB_KEY = 4,
    KEY_ENUMERATE_SUB_KEYS = 8,
    KEY_NOTIFY = 16,
    KEY_CREATE_LINK = 32,
    KEY_WOW64_32KEY = 512,
    KEY_WOW64_64KEY = 256,
    KEY_WOW64_RES = 768,
    KEY_READ = 131097,
    KEY_WRITE = 131078,
    KEY_EXECUTE = 131097,
    KEY_ALL_ACCESS = 983103,
} REG_SAM_FLAGS;

typedef enum {
    REG_OPTION_RESERVED = 0,
    REG_OPTION_NON_VOLATILE = 0,
    REG_OPTION_VOLATILE = 1,
    REG_OPTION_CREATE_LINK = 2,
    REG_OPTION_BACKUP_RESTORE = 4,
    REG_OPTION_OPEN_LINK = 8,
    REG_OPTION_DONT_VIRTUALIZE = 16,
} REG_OPEN_CREATE_OPTIONS;
// TODO: enum 'REG_OPEN_CREATE_OPTIONS' has known issues with its value aliases

typedef enum {
    REG_CREATED_NEW_KEY = 1,
    REG_OPENED_EXISTING_KEY = 2,
} REG_CREATE_KEY_DISPOSITION;

typedef enum {
    REG_STANDARD_FORMAT = 1,
    REG_LATEST_FORMAT = 2,
    REG_NO_COMPRESSION = 4,
} REG_SAVE_FORMAT;

typedef enum {
    REG_FORCE_RESTORE = 8,
    REG_WHOLE_HIVE_VOLATILE = 1,
} REG_RESTORE_KEY_FLAGS;

typedef enum {
    REG_NOTIFY_CHANGE_NAME = 1,
    REG_NOTIFY_CHANGE_ATTRIBUTES = 2,
    REG_NOTIFY_CHANGE_LAST_SET = 4,
    REG_NOTIFY_CHANGE_SECURITY = 8,
    REG_NOTIFY_THREAD_AGNOSTIC = 268435456,
} REG_NOTIFY_FILTER;

typedef enum {
    RRF_RT_ANY = 65535,
    RRF_RT_DWORD = 24,
    RRF_RT_QWORD = 72,
    RRF_RT_REG_BINARY = 8,
    RRF_RT_REG_DWORD = 16,
    RRF_RT_REG_EXPAND_SZ = 4,
    RRF_RT_REG_MULTI_SZ = 32,
    RRF_RT_REG_NONE = 1,
    RRF_RT_REG_QWORD = 64,
    RRF_RT_REG_SZ = 2,
} RRF_RT;

typedef int HKEY;

typedef int val_context;

typedef int pvalueA;

typedef int pvalueW;

typedef int PQUERYHANDLER;

typedef int provider_info;

typedef int VALENTA;

typedef int VALENTW;


//--------------------------------------------------------------------------------
// Section: Functions (83)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegCloseKey();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegOverridePredefKey();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegOpenUserClassesRoot();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegOpenCurrentUser();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegDisablePredefinedCache();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDisablePredefinedCacheEx();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegConnectRegistryA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegConnectRegistryW();

/*LSTATUS*/void RegConnectRegistryExA();

/*LSTATUS*/void RegConnectRegistryExW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegCreateKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegCreateKeyW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegCreateKeyExA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegCreateKeyExW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegCreateKeyTransactedA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegCreateKeyTransactedW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegDeleteKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegDeleteKeyW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDeleteKeyExA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDeleteKeyExW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDeleteKeyTransactedA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDeleteKeyTransactedW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*i32*/void RegDisableReflectionKey();

// TODO: this type is limited to platform 'windows6.0.6000'
/*i32*/void RegEnableReflectionKey();

// TODO: this type is limited to platform 'windows6.0.6000'
/*i32*/void RegQueryReflectionKey();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegDeleteValueA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegDeleteValueW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegEnumKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegEnumKeyW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegEnumKeyExA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegEnumKeyExW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegEnumValueA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegEnumValueW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegFlushKey();

// TODO: this type is limited to platform 'windows5.1.2600'
/*LSTATUS*/void RegGetKeySecurity();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegLoadKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegLoadKeyW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegNotifyChangeKeyValue();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegOpenKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegOpenKeyW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegOpenKeyExA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegOpenKeyExW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegOpenKeyTransactedA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegOpenKeyTransactedW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegQueryInfoKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegQueryInfoKeyW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegQueryValueA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegQueryValueW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegQueryMultipleValuesA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegQueryMultipleValuesW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegQueryValueExA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegQueryValueExW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegReplaceKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegReplaceKeyW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegRestoreKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegRestoreKeyW();

/*LSTATUS*/void RegRenameKey();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegSaveKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegSaveKeyW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*LSTATUS*/void RegSetKeySecurity();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegSetValueA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegSetValueW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegSetValueExA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegSetValueExW();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegUnLoadKeyA();

// TODO: this type is limited to platform 'windows5.0'
/*LSTATUS*/void RegUnLoadKeyW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDeleteKeyValueA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDeleteKeyValueW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegSetKeyValueA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegSetKeyValueW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDeleteTreeA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegDeleteTreeW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegCopyTreeA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegGetValueA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegGetValueW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegCopyTreeW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegLoadMUIStringA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegLoadMUIStringW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegLoadAppKeyA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*LSTATUS*/void RegLoadAppKeyW();

// TODO: this type is limited to platform 'windows5.1.2600'
/*LSTATUS*/void RegSaveKeyExA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*LSTATUS*/void RegSaveKeyExW();

/*LSTATUS*/void GetRegistryValueWithFallbackW();
