// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (65)
//--------------------------------------------------------------------------------
#define BG_NOTIFY_JOB_TRANSFERRED (UINT)1
#define BG_NOTIFY_JOB_ERROR (UINT)2
#define BG_NOTIFY_DISABLE (UINT)4
#define BG_NOTIFY_JOB_MODIFICATION (UINT)8
#define BG_NOTIFY_FILE_TRANSFERRED (UINT)16
#define BG_NOTIFY_FILE_RANGES_TRANSFERRED (UINT)32
#define BG_JOB_ENUM_ALL_USERS (UINT)1
#define BG_COPY_FILE_OWNER (UINT)1
#define BG_COPY_FILE_GROUP (UINT)2
#define BG_COPY_FILE_DACL (UINT)4
#define BG_COPY_FILE_SACL (UINT)8
#define BG_COPY_FILE_ALL (UINT)15
#define BG_SSL_ENABLE_CRL_CHECK (UINT)1
#define BG_SSL_IGNORE_CERT_CN_INVALID (UINT)2
#define BG_SSL_IGNORE_CERT_DATE_INVALID (UINT)4
#define BG_SSL_IGNORE_UNKNOWN_CA (UINT)8
#define BG_SSL_IGNORE_CERT_WRONG_USAGE (UINT)16
#define BG_HTTP_REDIRECT_POLICY_MASK (UINT)1792
#define BG_HTTP_REDIRECT_POLICY_ALLOW_SILENT (UINT)0
#define BG_HTTP_REDIRECT_POLICY_ALLOW_REPORT (UINT)256
#define BG_HTTP_REDIRECT_POLICY_DISALLOW (UINT)512
#define BG_HTTP_REDIRECT_POLICY_ALLOW_HTTPS_TO_HTTP (UINT)2048
#define BG_ENABLE_PEERCACHING_CLIENT (UINT)1
#define BG_ENABLE_PEERCACHING_SERVER (UINT)2
#define BG_DISABLE_BRANCH_CACHE (UINT)4
#define BG_JOB_ENABLE_PEERCACHING_CLIENT (UINT)1
#define BG_JOB_ENABLE_PEERCACHING_SERVER (UINT)2
#define BG_JOB_DISABLE_BRANCH_CACHE (UINT)4
#define BITS_COST_STATE_UNRESTRICTED (UINT)1
#define BITS_COST_STATE_CAPPED_USAGE_UNKNOWN (UINT)2
#define BITS_COST_STATE_BELOW_CAP (UINT)4
#define BITS_COST_STATE_NEAR_CAP (UINT)8
#define BITS_COST_STATE_OVERCAP_CHARGED (UINT)16
#define BITS_COST_STATE_OVERCAP_THROTTLED (UINT)32
#define BITS_COST_STATE_USAGE_BASED (UINT)64
#define BITS_COST_STATE_ROAMING (UINT)128
#define BITS_COST_OPTION_IGNORE_CONGESTION (UINT)2147483648
#define BITS_COST_STATE_RESERVED (UINT)1073741824
#define QM_NOTIFY_FILE_DONE (UINT)1
#define QM_NOTIFY_JOB_DONE (UINT)2
#define QM_NOTIFY_GROUP_DONE (UINT)4
#define QM_NOTIFY_DISABLE_NOTIFY (UINT)64
#define QM_NOTIFY_USE_PROGRESSEX (UINT)128
#define QM_STATUS_FILE_COMPLETE (UINT)1
#define QM_STATUS_FILE_INCOMPLETE (UINT)2
#define QM_STATUS_JOB_COMPLETE (UINT)4
#define QM_STATUS_JOB_INCOMPLETE (UINT)8
#define QM_STATUS_JOB_ERROR (UINT)16
#define QM_STATUS_JOB_FOREGROUND (UINT)32
#define QM_STATUS_GROUP_COMPLETE (UINT)64
#define QM_STATUS_GROUP_INCOMPLETE (UINT)128
#define QM_STATUS_GROUP_SUSPENDED (UINT)256
#define QM_STATUS_GROUP_ERROR (UINT)512
#define QM_STATUS_GROUP_FOREGROUND (UINT)1024
#define QM_PROTOCOL_HTTP (UINT)1
#define QM_PROTOCOL_FTP (UINT)2
#define QM_PROTOCOL_SMB (UINT)3
#define QM_PROTOCOL_CUSTOM (UINT)4
#define QM_PROGRESS_PERCENT_DONE (UINT)1
#define QM_PROGRESS_TIME_DONE (UINT)2
#define QM_PROGRESS_SIZE_DONE (UINT)3
#define QM_E_INVALID_STATE (UINT)2164264961
#define QM_E_SERVICE_UNAVAILABLE (UINT)2164264962
#define QM_E_DOWNLOADER_UNAVAILABLE (UINT)2164264963
#define QM_E_ITEM_NOT_FOUND (UINT)2164264964

//--------------------------------------------------------------------------------
// Section: Types (74)
//--------------------------------------------------------------------------------
typedef enum {
    BG_TOKEN_LOCAL_FILE = 1,
    BG_TOKEN_NETWORK = 2,
} BG_TOKEN;

typedef int BackgroundCopyManager;

typedef int BG_FILE_PROGRESS;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyFile;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IEnumBackgroundCopyFiles;

typedef enum {
    BG_ERROR_CONTEXT_NONE = 0,
    BG_ERROR_CONTEXT_UNKNOWN = 1,
    BG_ERROR_CONTEXT_GENERAL_QUEUE_MANAGER = 2,
    BG_ERROR_CONTEXT_QUEUE_MANAGER_NOTIFICATION = 3,
    BG_ERROR_CONTEXT_LOCAL_FILE = 4,
    BG_ERROR_CONTEXT_REMOTE_FILE = 5,
    BG_ERROR_CONTEXT_GENERAL_TRANSPORT = 6,
    BG_ERROR_CONTEXT_REMOTE_APPLICATION = 7,
    BG_ERROR_CONTEXT_SERVER_CERTIFICATE_CALLBACK = 8,
} BG_ERROR_CONTEXT;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyError;

typedef int BG_FILE_INFO;

typedef int BG_JOB_PROGRESS;

typedef int BG_JOB_TIMES;

typedef enum {
    BG_JOB_PRIORITY_FOREGROUND = 0,
    BG_JOB_PRIORITY_HIGH = 1,
    BG_JOB_PRIORITY_NORMAL = 2,
    BG_JOB_PRIORITY_LOW = 3,
} BG_JOB_PRIORITY;

typedef enum {
    BG_JOB_STATE_QUEUED = 0,
    BG_JOB_STATE_CONNECTING = 1,
    BG_JOB_STATE_TRANSFERRING = 2,
    BG_JOB_STATE_SUSPENDED = 3,
    BG_JOB_STATE_ERROR = 4,
    BG_JOB_STATE_TRANSIENT_ERROR = 5,
    BG_JOB_STATE_TRANSFERRED = 6,
    BG_JOB_STATE_ACKNOWLEDGED = 7,
    BG_JOB_STATE_CANCELLED = 8,
} BG_JOB_STATE;

typedef enum {
    BG_JOB_TYPE_DOWNLOAD = 0,
    BG_JOB_TYPE_UPLOAD = 1,
    BG_JOB_TYPE_UPLOAD_REPLY = 2,
} BG_JOB_TYPE;

typedef enum {
    BG_JOB_PROXY_USAGE_PRECONFIG = 0,
    BG_JOB_PROXY_USAGE_NO_PROXY = 1,
    BG_JOB_PROXY_USAGE_OVERRIDE = 2,
    BG_JOB_PROXY_USAGE_AUTODETECT = 3,
} BG_JOB_PROXY_USAGE;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyJob;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IEnumBackgroundCopyJobs;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyCallback;

typedef int AsyncIBackgroundCopyCallback;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyManager;

typedef int BackgroundCopyManager1_5;

typedef int BG_JOB_REPLY_PROGRESS;

typedef enum {
    BG_AUTH_TARGET_SERVER = 1,
    BG_AUTH_TARGET_PROXY = 2,
} BG_AUTH_TARGET;

typedef enum {
    BG_AUTH_SCHEME_BASIC = 1,
    BG_AUTH_SCHEME_DIGEST = 2,
    BG_AUTH_SCHEME_NTLM = 3,
    BG_AUTH_SCHEME_NEGOTIATE = 4,
    BG_AUTH_SCHEME_PASSPORT = 5,
} BG_AUTH_SCHEME;

typedef int BG_BASIC_CREDENTIALS;

typedef int BG_AUTH_CREDENTIALS_UNION;

typedef int BG_AUTH_CREDENTIALS;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBackgroundCopyJob2;

typedef int BackgroundCopyManager2_0;

typedef int BG_FILE_RANGE;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBackgroundCopyJob3;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBackgroundCopyFile2;

typedef int BackgroundCopyManager2_5;

typedef enum {
    BG_CERT_STORE_LOCATION_CURRENT_USER = 0,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE = 1,
    BG_CERT_STORE_LOCATION_CURRENT_SERVICE = 2,
    BG_CERT_STORE_LOCATION_SERVICES = 3,
    BG_CERT_STORE_LOCATION_USERS = 4,
    BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY = 5,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY = 6,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE_ENTERPRISE = 7,
} BG_CERT_STORE_LOCATION;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBackgroundCopyJobHttpOptions;

typedef int BackgroundCopyManager3_0;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBitsPeerCacheRecord;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IEnumBitsPeerCacheRecords;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBitsPeer;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IEnumBitsPeers;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBitsPeerCacheAdministration;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBackgroundCopyJob4;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBackgroundCopyFile3;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBackgroundCopyCallback2;

typedef int BackgroundCopyManager4_0;

// TODO: this type is limited to platform 'windows6.1'
typedef int IBitsTokenOptions;

// TODO: this type is limited to platform 'windows6.1'
typedef int IBackgroundCopyFile4;

typedef int BackgroundCopyManager5_0;

typedef enum {
    BITS_JOB_TRANSFER_POLICY_ALWAYS = -2147483393,
    BITS_JOB_TRANSFER_POLICY_NOT_ROAMING = -2147483521,
    BITS_JOB_TRANSFER_POLICY_NO_SURCHARGE = -2147483537,
    BITS_JOB_TRANSFER_POLICY_STANDARD = -2147483545,
    BITS_JOB_TRANSFER_POLICY_UNRESTRICTED = -2147483615,
} BITS_JOB_TRANSFER_POLICY;

typedef enum {
    BITS_JOB_PROPERTY_ID_COST_FLAGS = 1,
    BITS_JOB_PROPERTY_NOTIFICATION_CLSID = 2,
    BITS_JOB_PROPERTY_DYNAMIC_CONTENT = 3,
    BITS_JOB_PROPERTY_HIGH_PERFORMANCE = 4,
    BITS_JOB_PROPERTY_MAX_DOWNLOAD_SIZE = 5,
    BITS_JOB_PROPERTY_USE_STORED_CREDENTIALS = 7,
    BITS_JOB_PROPERTY_MINIMUM_NOTIFICATION_INTERVAL_MS = 9,
    BITS_JOB_PROPERTY_ON_DEMAND_MODE = 10,
} BITS_JOB_PROPERTY_ID;

typedef int BITS_JOB_PROPERTY_VALUE;

typedef enum {
    BITS_FILE_PROPERTY_ID_HTTP_RESPONSE_HEADERS = 1,
} BITS_FILE_PROPERTY_ID;

typedef int BITS_FILE_PROPERTY_VALUE;

// TODO: this type is limited to platform 'windows8.0'
typedef int IBackgroundCopyJob5;

// TODO: this type is limited to platform 'windows8.0'
typedef int IBackgroundCopyFile5;

typedef int BackgroundCopyManager10_1;

// TODO: this type is limited to platform 'windows10.0.15063'
typedef int IBackgroundCopyCallback3;

// TODO: this type is limited to platform 'windows10.0.15063'
typedef int IBackgroundCopyFile6;

typedef int BackgroundCopyManager10_2;

// TODO: this type is limited to platform 'windows10.0.17763'
typedef int IBackgroundCopyJobHttpOptions2;

typedef int BackgroundCopyManager10_3;

typedef int IBackgroundCopyServerCertificateValidationCallback;

typedef int IBackgroundCopyJobHttpOptions3;

typedef int BITSExtensionSetupFactory;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBITSExtensionSetup;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBITSExtensionSetupFactory;

typedef int BackgroundCopyQMgr;

typedef int FILESETINFO;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyJob1;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IEnumBackgroundCopyJobs1;

typedef enum {
    GROUPPROP_PRIORITY = 0,
    GROUPPROP_REMOTEUSERID = 1,
    GROUPPROP_REMOTEUSERPWD = 2,
    GROUPPROP_LOCALUSERID = 3,
    GROUPPROP_LOCALUSERPWD = 4,
    GROUPPROP_PROTOCOLFLAGS = 5,
    GROUPPROP_NOTIFYFLAGS = 6,
    GROUPPROP_NOTIFYCLSID = 7,
    GROUPPROP_PROGRESSSIZE = 8,
    GROUPPROP_PROGRESSPERCENT = 9,
    GROUPPROP_PROGRESSTIME = 10,
    GROUPPROP_DISPLAYNAME = 11,
    GROUPPROP_DESCRIPTION = 12,
} GROUPPROP;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyGroup;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IEnumBackgroundCopyGroups;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyCallback1;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IBackgroundCopyQMgr;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
