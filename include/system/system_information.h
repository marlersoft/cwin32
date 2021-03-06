// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (1)
//--------------------------------------------------------------------------------
#define SCEX2_ALT_NETBIOS_NAME (UINT)1

//--------------------------------------------------------------------------------
// Section: Types (21)
//--------------------------------------------------------------------------------
typedef enum {
    VER_MINORVERSION = 1,
    VER_MAJORVERSION = 2,
    VER_BUILDNUMBER = 4,
    VER_PLATFORMID = 8,
    VER_SERVICEPACKMINOR = 16,
    VER_SERVICEPACKMAJOR = 32,
    VER_SUITENAME = 64,
    VER_PRODUCT_TYPE = 128,
} VER_FLAGS;

typedef enum {
    ACPI = 1094930505,
    FIRM = 1179210317,
    RSMB = 1381190978,
} FIRMWARE_TABLE_PROVIDER;

typedef enum {
    USER_CET_ENVIRONMENT_WIN32_PROCESS = 0,
    USER_CET_ENVIRONMENT_SGX2_ENCLAVE = 2,
    USER_CET_ENVIRONMENT_VBS_BASIC_ENCLAVE = 17,
} USER_CET_ENVIRONMENT;

typedef enum {
    PRODUCT_BUSINESS = 6,
    PRODUCT_BUSINESS_N = 16,
    PRODUCT_CLUSTER_SERVER = 18,
    PRODUCT_CLUSTER_SERVER_V = 64,
    PRODUCT_CORE = 101,
    PRODUCT_CORE_COUNTRYSPECIFIC = 99,
    PRODUCT_CORE_N = 98,
    PRODUCT_CORE_SINGLELANGUAGE = 100,
    PRODUCT_DATACENTER_EVALUATION_SERVER = 80,
    PRODUCT_DATACENTER_A_SERVER_CORE = 145,
    PRODUCT_STANDARD_A_SERVER_CORE = 146,
    PRODUCT_DATACENTER_SERVER = 8,
    PRODUCT_DATACENTER_SERVER_CORE = 12,
    PRODUCT_DATACENTER_SERVER_CORE_V = 39,
    PRODUCT_DATACENTER_SERVER_V = 37,
    PRODUCT_EDUCATION = 121,
    PRODUCT_EDUCATION_N = 122,
    PRODUCT_ENTERPRISE = 4,
    PRODUCT_ENTERPRISE_E = 70,
    PRODUCT_ENTERPRISE_EVALUATION = 72,
    PRODUCT_ENTERPRISE_N = 27,
    PRODUCT_ENTERPRISE_N_EVALUATION = 84,
    PRODUCT_ENTERPRISE_S = 125,
    PRODUCT_ENTERPRISE_S_EVALUATION = 129,
    PRODUCT_ENTERPRISE_S_N = 126,
    PRODUCT_ENTERPRISE_S_N_EVALUATION = 130,
    PRODUCT_ENTERPRISE_SERVER = 10,
    PRODUCT_ENTERPRISE_SERVER_CORE = 14,
    PRODUCT_ENTERPRISE_SERVER_CORE_V = 41,
    PRODUCT_ENTERPRISE_SERVER_IA64 = 15,
    PRODUCT_ENTERPRISE_SERVER_V = 38,
    PRODUCT_ESSENTIALBUSINESS_SERVER_ADDL = 60,
    PRODUCT_ESSENTIALBUSINESS_SERVER_ADDLSVC = 62,
    PRODUCT_ESSENTIALBUSINESS_SERVER_MGMT = 59,
    PRODUCT_ESSENTIALBUSINESS_SERVER_MGMTSVC = 61,
    PRODUCT_HOME_BASIC = 2,
    PRODUCT_HOME_BASIC_E = 67,
    PRODUCT_HOME_BASIC_N = 5,
    PRODUCT_HOME_PREMIUM = 3,
    PRODUCT_HOME_PREMIUM_E = 68,
    PRODUCT_HOME_PREMIUM_N = 26,
    PRODUCT_HOME_PREMIUM_SERVER = 34,
    PRODUCT_HOME_SERVER = 19,
    PRODUCT_HYPERV = 42,
    PRODUCT_IOTUAP = 123,
    PRODUCT_IOTUAPCOMMERCIAL = 131,
    PRODUCT_MEDIUMBUSINESS_SERVER_MANAGEMENT = 30,
    PRODUCT_MEDIUMBUSINESS_SERVER_MESSAGING = 32,
    PRODUCT_MEDIUMBUSINESS_SERVER_SECURITY = 31,
    PRODUCT_MOBILE_CORE = 104,
    PRODUCT_MOBILE_ENTERPRISE = 133,
    PRODUCT_MULTIPOINT_PREMIUM_SERVER = 77,
    PRODUCT_MULTIPOINT_STANDARD_SERVER = 76,
    PRODUCT_PRO_WORKSTATION = 161,
    PRODUCT_PRO_WORKSTATION_N = 162,
    PRODUCT_PROFESSIONAL = 48,
    PRODUCT_PROFESSIONAL_E = 69,
    PRODUCT_PROFESSIONAL_N = 49,
    PRODUCT_PROFESSIONAL_WMC = 103,
    PRODUCT_SB_SOLUTION_SERVER = 50,
    PRODUCT_SB_SOLUTION_SERVER_EM = 54,
    PRODUCT_SERVER_FOR_SB_SOLUTIONS = 51,
    PRODUCT_SERVER_FOR_SB_SOLUTIONS_EM = 55,
    PRODUCT_SERVER_FOR_SMALLBUSINESS = 24,
    PRODUCT_SERVER_FOR_SMALLBUSINESS_V = 35,
    PRODUCT_SERVER_FOUNDATION = 33,
    PRODUCT_SMALLBUSINESS_SERVER = 9,
    PRODUCT_SMALLBUSINESS_SERVER_PREMIUM = 25,
    PRODUCT_SMALLBUSINESS_SERVER_PREMIUM_CORE = 63,
    PRODUCT_SOLUTION_EMBEDDEDSERVER = 56,
    PRODUCT_STANDARD_EVALUATION_SERVER = 79,
    PRODUCT_STANDARD_SERVER = 7,
    PRODUCT_STANDARD_SERVER_CORE_ = 13,
    PRODUCT_STANDARD_SERVER_CORE_V = 40,
    PRODUCT_STANDARD_SERVER_V = 36,
    PRODUCT_STANDARD_SERVER_SOLUTIONS = 52,
    PRODUCT_STANDARD_SERVER_SOLUTIONS_CORE = 53,
    PRODUCT_STARTER = 11,
    PRODUCT_STARTER_E = 66,
    PRODUCT_STARTER_N = 47,
    PRODUCT_STORAGE_ENTERPRISE_SERVER = 23,
    PRODUCT_STORAGE_ENTERPRISE_SERVER_CORE = 46,
    PRODUCT_STORAGE_EXPRESS_SERVER = 20,
    PRODUCT_STORAGE_EXPRESS_SERVER_CORE = 43,
    PRODUCT_STORAGE_STANDARD_EVALUATION_SERVER = 96,
    PRODUCT_STORAGE_STANDARD_SERVER = 21,
    PRODUCT_STORAGE_STANDARD_SERVER_CORE = 44,
    PRODUCT_STORAGE_WORKGROUP_EVALUATION_SERVER = 95,
    PRODUCT_STORAGE_WORKGROUP_SERVER = 22,
    PRODUCT_STORAGE_WORKGROUP_SERVER_CORE = 45,
    PRODUCT_ULTIMATE = 1,
    PRODUCT_ULTIMATE_E = 71,
    PRODUCT_ULTIMATE_N = 28,
    PRODUCT_UNDEFINED = 0,
    PRODUCT_WEB_SERVER = 17,
    PRODUCT_WEB_SERVER_CORE = 29,
} OS_PRODUCT_TYPE;

typedef int FIRMWARE_TABLE_ID;

typedef int WOW64_ARCHITECTURE_INFORMATION;

typedef enum {
    FirmwareTypeUnknown = 0,
    FirmwareTypeBios = 1,
    FirmwareTypeUefi = 2,
    FirmwareTypeMax = 3,
} FIRMWARE_TYPE;

typedef enum {
    RelationProcessorCore = 0,
    RelationNumaNode = 1,
    RelationCache = 2,
    RelationProcessorPackage = 3,
    RelationGroup = 4,
    RelationAll = 65535,
} LOGICAL_PROCESSOR_RELATIONSHIP;

typedef int SYSTEM_LOGICAL_PROCESSOR_INFORMATION;

typedef int SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION;

typedef int OSVERSIONINFOA;

typedef int OSVERSIONINFOW;

typedef int OSVERSIONINFOEXA;

typedef int OSVERSIONINFOEXW;

typedef int SYSTEM_INFO;

typedef int MEMORYSTATUSEX;

typedef enum {
    ComputerNameNetBIOS = 0,
    ComputerNameDnsHostname = 1,
    ComputerNameDnsDomain = 2,
    ComputerNameDnsFullyQualified = 3,
    ComputerNamePhysicalNetBIOS = 4,
    ComputerNamePhysicalDnsHostname = 5,
    ComputerNamePhysicalDnsDomain = 6,
    ComputerNamePhysicalDnsFullyQualified = 7,
    ComputerNameMax = 8,
} COMPUTER_NAME_FORMAT;

typedef int MEMORYSTATUS;

typedef enum {
    DEPPolicyAlwaysOff = 0,
    DEPPolicyAlwaysOn = 1,
    DEPPolicyOptIn = 2,
    DEPPolicyOptOut = 3,
    DEPTotalPolicyCount = 4,
} DEP_SYSTEM_POLICY_TYPE;

typedef int PGET_SYSTEM_WOW64_DIRECTORY_A;

typedef int PGET_SYSTEM_WOW64_DIRECTORY_W;


//--------------------------------------------------------------------------------
// Section: Functions (55)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.1.2600'
/*BOOL*/void GlobalMemoryStatusEx();

// TODO: this type is limited to platform 'windows5.0'
/*void*/void GetSystemInfo();

// TODO: this type is limited to platform 'windows5.0'
/*void*/void GetSystemTime();

// TODO: this type is limited to platform 'windows5.0'
/*void*/void GetSystemTimeAsFileTime();

// TODO: this type is limited to platform 'windows5.0'
/*void*/void GetLocalTime();

/*BOOL*/void IsUserCetAvailableInEnvironment();

/*BOOL*/void GetSystemLeapSecondInformation();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetVersion();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetLocalTime();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetTickCount();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u64*/void GetTickCount64();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void GetSystemTimeAdjustment();

// TODO: this type is limited to platform 'windows10.0.10240'
/*BOOL*/void GetSystemTimeAdjustmentPrecise();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetSystemDirectoryA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetSystemDirectoryW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetWindowsDirectoryA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetWindowsDirectoryW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetSystemWindowsDirectoryA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetSystemWindowsDirectoryW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void GetComputerNameExA();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void GetComputerNameExW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetComputerNameExW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetSystemTime();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void GetVersionExA();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void GetVersionExW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOL*/void GetLogicalProcessorInformation();

// TODO: this type is limited to platform 'windows6.1'
/*BOOL*/void GetLogicalProcessorInformationEx();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void GetNativeSystemInfo();

// TODO: this type is limited to platform 'windows8.0'
/*void*/void GetSystemTimePreciseAsFileTime();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOL*/void GetProductInfo();

// TODO: this type is limited to platform 'windows5.0'
/*u64*/void VerSetConditionMask();

/*BOOL*/void GetOsSafeBootMode();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EnumSystemFirmwareTables();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void GetSystemFirmwareTable();

/*BOOL*/void DnsHostnameToComputerNameExW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOL*/void GetPhysicallyInstalledSystemMemory();

/*BOOL*/void SetComputerNameEx2W();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetSystemTimeAdjustment();

// TODO: this type is limited to platform 'windows10.0.10240'
/*BOOL*/void SetSystemTimeAdjustmentPrecise();

// TODO: this type is limited to platform 'windows6.1'
/*BOOL*/void GetProcessorSystemCycleTime();

/*BOOL*/void GetOsManufacturingMode();

// TODO: this type is limited to platform 'windows10.0.10240'
/*HRESULT*/void GetIntegratedDisplaySize();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetComputerNameA();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetComputerNameW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetComputerNameExA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void GetSystemWow64DirectoryA();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void GetSystemWow64DirectoryW();

// TODO: this type is limited to platform 'windows10.0.10586'
/*u32*/void GetSystemWow64Directory2A();

// TODO: this type is limited to platform 'windows10.0.10586'
/*u32*/void GetSystemWow64Directory2W();

// TODO: this type is limited to platform 'windows10.0.16299'
/*HRESULT*/void IsWow64GuestMachineSupported();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void GlobalMemoryStatus();

// TODO: this type is limited to platform 'windows6.0.6000'
/*DEP_SYSTEM_POLICY_TYPE*/void GetSystemDEPPolicy();

// TODO: this type is limited to platform 'windows8.0'
/*BOOL*/void GetFirmwareType();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void VerifyVersionInfoA();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void VerifyVersionInfoW();

