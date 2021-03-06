// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (108)
//--------------------------------------------------------------------------------
#define PROCESSOR_NUMBER_PKEY PROPERTYKEY { GUID { 5724c81d-d5af-4c1f-a103-a06e28f204c6 },  1 };
#define GUID_DEVICE_BATTERY GUID { "72631e54-78a4-11d0-bcf7-00aa00b7b32a" }
#define GUID_DEVICE_APPLICATIONLAUNCH_BUTTON GUID { "629758ee-986e-4d9e-8e47-de27f8ab054d" }
#define GUID_DEVICE_SYS_BUTTON GUID { "4afa3d53-74a7-11d0-be5e-00a0c9062857" }
#define GUID_DEVICE_LID GUID { "4afa3d52-74a7-11d0-be5e-00a0c9062857" }
#define GUID_DEVICE_THERMAL_ZONE GUID { "4afa3d51-74a7-11d0-be5e-00a0c9062857" }
#define GUID_DEVICE_FAN GUID { "05ecd13d-81da-4a2a-8a4c-524f23dd4dc9" }
#define GUID_DEVICE_PROCESSOR GUID { "97fadb10-4e33-40ae-359c-8bef029dbdd0" }
#define GUID_DEVICE_MEMORY GUID { "3fd0f03d-92e0-45fb-b75c-5ed8ffb01021" }
#define GUID_DEVICE_ACPI_TIME GUID { "97f99bf6-4497-4f18-bb22-4b9fb2fbef9c" }
#define GUID_DEVICE_MESSAGE_INDICATOR GUID { "cd48a365-fa94-4ce2-a232-a1b764e5d8b4" }
#define GUID_CLASS_INPUT GUID { "4d1e55b2-f16f-11cf-88cb-001111000030" }
#define GUID_DEVINTERFACE_THERMAL_COOLING GUID { "dbe4373d-3c81-40cb-ace4-e0e5d05f0c9f" }
#define BATTERY_UNKNOWN_CAPACITY (UINT)4294967295
#define BATTERY_SYSTEM_BATTERY (UINT)2147483648
#define BATTERY_CAPACITY_RELATIVE (UINT)1073741824
#define BATTERY_IS_SHORT_TERM (UINT)536870912
#define BATTERY_SEALED (UINT)268435456
#define BATTERY_SET_CHARGE_SUPPORTED (UINT)1
#define BATTERY_SET_DISCHARGE_SUPPORTED (UINT)2
#define BATTERY_SET_CHARGINGSOURCE_SUPPORTED (UINT)4
#define BATTERY_SET_CHARGER_ID_SUPPORTED (UINT)8
#define BATTERY_UNKNOWN_TIME (UINT)4294967295
#define BATTERY_UNKNOWN_CURRENT (UINT)4294967295
#define BATTERY_USB_CHARGER_STATUS_FN_DEFAULT_USB (UINT)1
#define BATTERY_USB_CHARGER_STATUS_UCM_PD (UINT)2
#define BATTERY_UNKNOWN_VOLTAGE (UINT)4294967295
#define BATTERY_UNKNOWN_RATE (UINT)2147483648
#define BATTERY_POWER_ON_LINE (UINT)1
#define BATTERY_DISCHARGING (UINT)2
#define BATTERY_CHARGING (UINT)4
#define BATTERY_CRITICAL (UINT)8
#define MAX_BATTERY_STRING_SIZE (UINT)128
#define IOCTL_BATTERY_QUERY_TAG (UINT)2703424
#define IOCTL_BATTERY_QUERY_INFORMATION (UINT)2703428
#define IOCTL_BATTERY_SET_INFORMATION (UINT)2719816
#define IOCTL_BATTERY_QUERY_STATUS (UINT)2703436
#define IOCTL_BATTERY_CHARGING_SOURCE_CHANGE (UINT)2703440
#define BATTERY_TAG_INVALID (UINT)0
#define MAX_ACTIVE_COOLING_LEVELS (UINT)10
#define ACTIVE_COOLING (UINT)0
#define PASSIVE_COOLING (UINT)1
#define TZ_ACTIVATION_REASON_THERMAL (UINT)1
#define TZ_ACTIVATION_REASON_CURRENT (UINT)2
#define THERMAL_POLICY_VERSION_1 (UINT)1
#define THERMAL_POLICY_VERSION_2 (UINT)2
#define IOCTL_THERMAL_QUERY_INFORMATION (UINT)2703488
#define IOCTL_THERMAL_SET_COOLING_POLICY (UINT)2719876
#define IOCTL_RUN_ACTIVE_COOLING_METHOD (UINT)2719880
#define IOCTL_THERMAL_SET_PASSIVE_LIMIT (UINT)2719884
#define IOCTL_THERMAL_READ_TEMPERATURE (UINT)2703504
#define IOCTL_THERMAL_READ_POLICY (UINT)2703508
#define IOCTL_QUERY_LID (UINT)2703552
#define IOCTL_NOTIFY_SWITCH_EVENT (UINT)2703616
#define IOCTL_GET_SYS_BUTTON_CAPS (UINT)2703680
#define IOCTL_GET_SYS_BUTTON_EVENT (UINT)2703684
#define SYS_BUTTON_POWER (UINT)1
#define SYS_BUTTON_SLEEP (UINT)2
#define SYS_BUTTON_LID (UINT)4
#define SYS_BUTTON_WAKE (UINT)2147483648
#define SYS_BUTTON_LID_STATE_MASK (UINT)196608
#define SYS_BUTTON_LID_OPEN (UINT)65536
#define SYS_BUTTON_LID_CLOSED (UINT)131072
#define SYS_BUTTON_LID_INITIAL (UINT)262144
#define SYS_BUTTON_LID_CHANGED (UINT)524288
#define IOCTL_GET_PROCESSOR_OBJ_INFO (UINT)2703744
#define THERMAL_COOLING_INTERFACE_VERSION (UINT)1
#define THERMAL_DEVICE_INTERFACE_VERSION (UINT)1
#define IOCTL_SET_SYS_MESSAGE_INDICATOR (UINT)2720192
#define IOCTL_SET_WAKE_ALARM_VALUE (UINT)2720256
#define IOCTL_SET_WAKE_ALARM_POLICY (UINT)2720260
#define IOCTL_GET_WAKE_ALARM_VALUE (UINT)2736648
#define IOCTL_GET_WAKE_ALARM_POLICY (UINT)2736652
#define ACPI_TIME_ADJUST_DAYLIGHT (UINT)1
#define ACPI_TIME_IN_DAYLIGHT (UINT)2
#define ACPI_TIME_ZONE_UNKNOWN (UINT)2047
#define IOCTL_ACPI_GET_REAL_TIME (UINT)2703888
#define IOCTL_ACPI_SET_REAL_TIME (UINT)2720276
#define IOCTL_GET_WAKE_ALARM_SYSTEM_POWERSTATE (UINT)2703896
#define EFFECTIVE_POWER_MODE_V1 (UINT)1
#define EFFECTIVE_POWER_MODE_V2 (UINT)2
#define EnableSysTrayBatteryMeter (UINT)1
#define EnableMultiBatteryDisplay (UINT)2
#define EnablePasswordLogon (UINT)4
#define EnableWakeOnRing (UINT)8
#define EnableVideoDimDisplay (UINT)16
#define POWER_ATTRIBUTE_HIDE (UINT)1
#define POWER_ATTRIBUTE_SHOW_AOAC (UINT)2
#define DEVICEPOWER_HARDWAREID (UINT)2147483648
#define DEVICEPOWER_AND_OPERATION (UINT)1073741824
#define DEVICEPOWER_FILTER_DEVICES_PRESENT (UINT)536870912
#define DEVICEPOWER_FILTER_HARDWARE (UINT)268435456
#define DEVICEPOWER_FILTER_WAKEENABLED (UINT)134217728
#define DEVICEPOWER_FILTER_WAKEPROGRAMMABLE (UINT)67108864
#define DEVICEPOWER_FILTER_ON_NAME (UINT)33554432
#define DEVICEPOWER_SET_WAKEENABLED (UINT)1
#define DEVICEPOWER_CLEAR_WAKEENABLED (UINT)2
#define PDCAP_S0_SUPPORTED (UINT)65536
#define PDCAP_S1_SUPPORTED (UINT)131072
#define PDCAP_S2_SUPPORTED (UINT)262144
#define PDCAP_S3_SUPPORTED (UINT)524288
#define PDCAP_WAKE_FROM_S0_SUPPORTED (UINT)1048576
#define PDCAP_WAKE_FROM_S1_SUPPORTED (UINT)2097152
#define PDCAP_WAKE_FROM_S2_SUPPORTED (UINT)4194304
#define PDCAP_WAKE_FROM_S3_SUPPORTED (UINT)8388608
#define PDCAP_S4_SUPPORTED (UINT)16777216
#define PDCAP_S5_SUPPORTED (UINT)33554432
#define THERMAL_EVENT_VERSION (UINT)1

//--------------------------------------------------------------------------------
// Section: Types (57)
//--------------------------------------------------------------------------------
typedef enum {
    POWER_PLATFORM_ROLE_V1 = 1,
    POWER_PLATFORM_ROLE_V2 = 2,
} POWER_PLATFORM_ROLE_VERSION;
// TODO: enum 'POWER_PLATFORM_ROLE_VERSION' has known issues with its value aliases

typedef enum {
    DEVICE_NOTIFY_SERVICE_HANDLE = 1,
    DEVICE_NOTIFY_CALLBACK = 2,
    DEVICE_NOTIFY_WINDOW_HANDLE = 0,
} POWER_SETTING_REGISTER_NOTIFICATION_FLAGS;

typedef enum {
    ES_AWAYMODE_REQUIRED = 64,
    ES_CONTINUOUS = 2147483648,
    ES_DISPLAY_REQUIRED = 2,
    ES_SYSTEM_REQUIRED = 1,
    ES_USER_PRESENT = 4,
} EXECUTION_STATE;

typedef enum {
    POWER_FORCE_TRIGGER_RESET = 2147483648,
    POWER_LEVEL_USER_NOTIFY_EXEC = 4,
    POWER_LEVEL_USER_NOTIFY_SOUND = 2,
    POWER_LEVEL_USER_NOTIFY_TEXT = 1,
    POWER_USER_NOTIFY_BUTTON = 8,
    POWER_USER_NOTIFY_SHUTDOWN = 16,
} POWER_ACTION_POLICY_EVENT_CODE;

typedef int HPOWERNOTIFY;

typedef enum {
    PowerSystemUnspecified = 0,
    PowerSystemWorking = 1,
    PowerSystemSleeping1 = 2,
    PowerSystemSleeping2 = 3,
    PowerSystemSleeping3 = 4,
    PowerSystemHibernate = 5,
    PowerSystemShutdown = 6,
    PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE;

typedef enum {
    PowerActionNone = 0,
    PowerActionReserved = 1,
    PowerActionSleep = 2,
    PowerActionHibernate = 3,
    PowerActionShutdown = 4,
    PowerActionShutdownReset = 5,
    PowerActionShutdownOff = 6,
    PowerActionWarmEject = 7,
    PowerActionDisplayOff = 8,
} POWER_ACTION;

typedef enum {
    LT_DONT_CARE = 0,
    LT_LOWEST_LATENCY = 1,
} LATENCY_TIME;

typedef enum {
    PoAc = 0,
    PoDc = 1,
    PoHot = 2,
    PoConditionMaximum = 3,
} SYSTEM_POWER_CONDITION;

typedef enum {
    PlatformRoleUnspecified = 0,
    PlatformRoleDesktop = 1,
    PlatformRoleMobile = 2,
    PlatformRoleWorkstation = 3,
    PlatformRoleEnterpriseServer = 4,
    PlatformRoleSOHOServer = 5,
    PlatformRoleAppliancePC = 6,
    PlatformRolePerformanceServer = 7,
    PlatformRoleSlate = 8,
    PlatformRoleMaximum = 9,
} POWER_PLATFORM_ROLE;

typedef int BATTERY_REPORTING_SCALE;

typedef int POWER_ACTION_POLICY;

typedef int SYSTEM_POWER_LEVEL;

typedef int SYSTEM_POWER_POLICY;

typedef int PROCESSOR_POWER_POLICY_INFO;

typedef int PROCESSOR_POWER_POLICY;

typedef int ADMINISTRATOR_POWER_POLICY;

typedef int SYSTEM_POWER_CAPABILITIES;

typedef int SYSTEM_BATTERY_STATE;

typedef int POWERBROADCAST_SETTING;

typedef enum {
    EffectivePowerModeBatterySaver = 0,
    EffectivePowerModeBetterBattery = 1,
    EffectivePowerModeBalanced = 2,
    EffectivePowerModeHighPerformance = 3,
    EffectivePowerModeMaxPerformance = 4,
    EffectivePowerModeGameMode = 5,
    EffectivePowerModeMixedReality = 6,
} EFFECTIVE_POWER_MODE;

// TODO: this type is limited to platform 'windows10.0.17763'
typedef int EFFECTIVE_POWER_MODE_CALLBACK;

typedef int GLOBAL_MACHINE_POWER_POLICY;

typedef int GLOBAL_USER_POWER_POLICY;

typedef int GLOBAL_POWER_POLICY;

typedef int MACHINE_POWER_POLICY;

typedef int MACHINE_PROCESSOR_POWER_POLICY;

typedef int USER_POWER_POLICY;

typedef int POWER_POLICY;

typedef int PWRSCHEMESENUMPROC_V1;

typedef int PWRSCHEMESENUMPROC;

typedef enum {
    ACCESS_AC_POWER_SETTING_INDEX = 0,
    ACCESS_DC_POWER_SETTING_INDEX = 1,
    ACCESS_FRIENDLY_NAME = 2,
    ACCESS_DESCRIPTION = 3,
    ACCESS_POSSIBLE_POWER_SETTING = 4,
    ACCESS_POSSIBLE_POWER_SETTING_FRIENDLY_NAME = 5,
    ACCESS_POSSIBLE_POWER_SETTING_DESCRIPTION = 6,
    ACCESS_DEFAULT_AC_POWER_SETTING = 7,
    ACCESS_DEFAULT_DC_POWER_SETTING = 8,
    ACCESS_POSSIBLE_VALUE_MIN = 9,
    ACCESS_POSSIBLE_VALUE_MAX = 10,
    ACCESS_POSSIBLE_VALUE_INCREMENT = 11,
    ACCESS_POSSIBLE_VALUE_UNITS = 12,
    ACCESS_ICON_RESOURCE = 13,
    ACCESS_DEFAULT_SECURITY_DESCRIPTOR = 14,
    ACCESS_ATTRIBUTES = 15,
    ACCESS_SCHEME = 16,
    ACCESS_SUBGROUP = 17,
    ACCESS_INDIVIDUAL_SETTING = 18,
    ACCESS_ACTIVE_SCHEME = 19,
    ACCESS_CREATE_SCHEME = 20,
    ACCESS_AC_POWER_SETTING_MAX = 21,
    ACCESS_DC_POWER_SETTING_MAX = 22,
    ACCESS_AC_POWER_SETTING_MIN = 23,
    ACCESS_DC_POWER_SETTING_MIN = 24,
    ACCESS_PROFILE = 25,
    ACCESS_OVERLAY_SCHEME = 26,
    ACCESS_ACTIVE_OVERLAY_SCHEME = 27,
} POWER_DATA_ACCESSOR;

typedef int PDEVICE_NOTIFY_CALLBACK_ROUTINE;

typedef int DEVICE_NOTIFY_SUBSCRIBE_PARAMETERS;

typedef int THERMAL_EVENT;

typedef enum {
    BatteryInformation = 0,
    BatteryGranularityInformation = 1,
    BatteryTemperature = 2,
    BatteryEstimatedTime = 3,
    BatteryDeviceName = 4,
    BatteryManufactureDate = 5,
    BatteryManufactureName = 6,
    BatteryUniqueID = 7,
    BatterySerialNumber = 8,
} BATTERY_QUERY_INFORMATION_LEVEL;

typedef int BATTERY_QUERY_INFORMATION;

typedef int BATTERY_INFORMATION;

typedef enum {
    BatteryChargingSourceType_AC = 1,
    BatteryChargingSourceType_USB = 2,
    BatteryChargingSourceType_Wireless = 3,
    BatteryChargingSourceType_Max = 4,
} BATTERY_CHARGING_SOURCE_TYPE;

typedef int BATTERY_CHARGING_SOURCE;

typedef int BATTERY_CHARGING_SOURCE_INFORMATION;

typedef enum {
    UsbChargerPort_Legacy = 0,
    UsbChargerPort_TypeC = 1,
    UsbChargerPort_Max = 2,
} USB_CHARGER_PORT;

typedef enum {
    BatteryCriticalBias = 0,
    BatteryCharge = 1,
    BatteryDischarge = 2,
    BatteryChargingSource = 3,
    BatteryChargerId = 4,
    BatteryChargerStatus = 5,
} BATTERY_SET_INFORMATION_LEVEL;

typedef int BATTERY_SET_INFORMATION;

typedef int BATTERY_CHARGER_STATUS;

typedef int BATTERY_USB_CHARGER_STATUS;

typedef int BATTERY_WAIT_STATUS;

typedef int BATTERY_STATUS;

typedef int BATTERY_MANUFACTURE_DATE;

typedef int THERMAL_INFORMATION;

typedef int THERMAL_WAIT_READ;

typedef int THERMAL_POLICY;

typedef int PROCESSOR_OBJECT_INFO;

typedef int PROCESSOR_OBJECT_INFO_EX;

typedef int WAKE_ALARM_INFORMATION;

typedef int ACPI_REAL_TIME;

typedef int SYSTEM_POWER_STATUS;


//--------------------------------------------------------------------------------
// Section: Functions (97)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows6.0.6000'
/*HPOWERNOTIFY*/void RegisterPowerSettingNotification();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOL*/void UnregisterPowerSettingNotification();

// TODO: this type is limited to platform 'windows8.0'
/*HPOWERNOTIFY*/void RegisterSuspendResumeNotification();

// TODO: this type is limited to platform 'windows8.0'
/*BOOL*/void UnregisterSuspendResumeNotification();

// TODO: this type is limited to platform 'windows5.1.2600'
/*i32*/void CallNtPowerInformation();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void GetPwrCapabilities();

// TODO: this type is limited to platform 'windows8.0'
/*POWER_PLATFORM_ROLE*/void PowerDeterminePlatformRoleEx();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void PowerRegisterSuspendResumeNotification();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void PowerUnregisterSuspendResumeNotification();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadACValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadDCValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteACValueIndex();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteDCValueIndex();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerGetActiveScheme();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerSetActiveScheme();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void PowerSettingRegisterNotification();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void PowerSettingUnregisterNotification();

// TODO: this type is limited to platform 'windows10.0.17763'
/*HRESULT*/void PowerRegisterForEffectivePowerModeNotifications();

// TODO: this type is limited to platform 'windows10.0.17763'
/*HRESULT*/void PowerUnregisterFromEffectivePowerModeNotifications();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void GetPwrDiskSpindownRange();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void EnumPwrSchemes();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void ReadGlobalPwrPolicy();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void ReadPwrScheme();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void WritePwrScheme();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void WriteGlobalPwrPolicy();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void DeletePwrScheme();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void GetActivePwrScheme();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void SetActivePwrScheme();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void IsPwrSuspendAllowed();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void IsPwrHibernateAllowed();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void IsPwrShutdownAllowed();

/*BOOLEAN*/void IsAdminOverrideActive();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void SetSuspendState();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void GetCurrentPowerPolicies();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void CanUserWritePwrScheme();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void ReadProcessorPwrScheme();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOLEAN*/void WriteProcessorPwrScheme();

/*BOOLEAN*/void ValidatePowerPolicies();

// TODO: this type is limited to platform 'windows6.1'
/*BOOLEAN*/void PowerIsSettingRangeDefined();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void PowerSettingAccessCheckEx();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerSettingAccessCheck();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadACValueIndex();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadDCValueIndex();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadFriendlyName();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadDescription();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadPossibleValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadPossibleFriendlyName();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadPossibleDescription();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadValueMin();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadValueMax();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadValueIncrement();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadValueUnitsSpecifier();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadACDefaultIndex();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadDCDefaultIndex();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadIconResourceSpecifier();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReadSettingAttributes();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteFriendlyName();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteDescription();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWritePossibleValue();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWritePossibleFriendlyName();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWritePossibleDescription();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteValueMin();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteValueMax();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteValueIncrement();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteValueUnitsSpecifier();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteACDefaultIndex();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteDCDefaultIndex();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteIconResourceSpecifier();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerWriteSettingAttributes();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerDuplicateScheme();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerImportPowerScheme();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerDeleteScheme();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerRemovePowerSetting();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerCreateSetting();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerCreatePossibleSetting();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerEnumerate();

/*u32*/void PowerOpenUserPowerKey();

/*u32*/void PowerOpenSystemPowerKey();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerCanRestoreIndividualDefaultPowerScheme();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerRestoreIndividualDefaultPowerScheme();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerRestoreDefaultPowerSchemes();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void PowerReplaceDefaultPowerSchemes();

// TODO: this type is limited to platform 'windows6.0.6000'
/*POWER_PLATFORM_ROLE*/void PowerDeterminePlatformRole();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOLEAN*/void DevicePowerEnumDevices();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void DevicePowerSetDeviceState();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOLEAN*/void DevicePowerOpen();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOLEAN*/void DevicePowerClose();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PowerReportThermalEvent();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOL*/void RequestWakeupLatency();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOL*/void IsSystemResumeAutomatic();

// TODO: this type is limited to platform 'windows5.1.2600'
/*EXECUTION_STATE*/void SetThreadExecutionState();

// TODO: this type is limited to platform 'windows6.1'
/*HANDLE*/void PowerCreateRequest();

// TODO: this type is limited to platform 'windows6.1'
/*BOOL*/void PowerSetRequest();

// TODO: this type is limited to platform 'windows6.1'
/*BOOL*/void PowerClearRequest();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOL*/void GetDevicePowerState();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOL*/void SetSystemPowerState();

// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOL*/void GetSystemPowerStatus();

