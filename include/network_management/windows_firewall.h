// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (4)
//--------------------------------------------------------------------------------
#define NETCON_MAX_NAME_LEN (UINT)256
#define S_OBJECT_NO_LONGER_VALID (HRESULT)(INT)2
#define NETISO_GEID_FOR_WDAG (UINT)1
#define NETISO_GEID_FOR_NEUTRAL_AWARE (UINT)2

//--------------------------------------------------------------------------------
// Section: Types (86)
//--------------------------------------------------------------------------------
typedef int UPnPNAT;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IUPnPNAT;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INATEventManager;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INATExternalIPAddressCallback;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INATNumberOfEntriesCallback;

typedef int IDynamicPortMappingCollection;

typedef int IDynamicPortMapping;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IStaticPortMappingCollection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IStaticPortMapping;

typedef int NetSharingManager;

typedef int IEnumNetConnection;

typedef enum {
    NCCF_NONE = 0,
    NCCF_ALL_USERS = 1,
    NCCF_ALLOW_DUPLICATION = 2,
    NCCF_ALLOW_REMOVAL = 4,
    NCCF_ALLOW_RENAME = 8,
    NCCF_INCOMING_ONLY = 32,
    NCCF_OUTGOING_ONLY = 64,
    NCCF_BRANDED = 128,
    NCCF_SHARED = 256,
    NCCF_BRIDGED = 512,
    NCCF_FIREWALLED = 1024,
    NCCF_DEFAULT = 2048,
    NCCF_HOMENET_CAPABLE = 4096,
    NCCF_SHARED_PRIVATE = 8192,
    NCCF_QUARANTINED = 16384,
    NCCF_RESERVED = 32768,
    NCCF_HOSTED_NETWORK = 65536,
    NCCF_VIRTUAL_STATION = 131072,
    NCCF_WIFI_DIRECT = 262144,
    NCCF_BLUETOOTH_MASK = 983040,
    NCCF_LAN_MASK = 15728640,
} NETCON_CHARACTERISTIC_FLAGS;

typedef enum {
    NCS_DISCONNECTED = 0,
    NCS_CONNECTING = 1,
    NCS_CONNECTED = 2,
    NCS_DISCONNECTING = 3,
    NCS_HARDWARE_NOT_PRESENT = 4,
    NCS_HARDWARE_DISABLED = 5,
    NCS_HARDWARE_MALFUNCTION = 6,
    NCS_MEDIA_DISCONNECTED = 7,
    NCS_AUTHENTICATING = 8,
    NCS_AUTHENTICATION_SUCCEEDED = 9,
    NCS_AUTHENTICATION_FAILED = 10,
    NCS_INVALID_ADDRESS = 11,
    NCS_CREDENTIALS_REQUIRED = 12,
    NCS_ACTION_REQUIRED = 13,
    NCS_ACTION_REQUIRED_RETRY = 14,
    NCS_CONNECT_FAILED = 15,
} NETCON_STATUS;

typedef enum {
    NCT_DIRECT_CONNECT = 0,
    NCT_INBOUND = 1,
    NCT_INTERNET = 2,
    NCT_LAN = 3,
    NCT_PHONE = 4,
    NCT_TUNNEL = 5,
    NCT_BRIDGE = 6,
} NETCON_TYPE;

typedef enum {
    NCM_NONE = 0,
    NCM_DIRECT = 1,
    NCM_ISDN = 2,
    NCM_LAN = 3,
    NCM_PHONE = 4,
    NCM_TUNNEL = 5,
    NCM_PPPOE = 6,
    NCM_BRIDGE = 7,
    NCM_SHAREDACCESSHOST_LAN = 8,
    NCM_SHAREDACCESSHOST_RAS = 9,
} NETCON_MEDIATYPE;

typedef int NETCON_PROPERTIES;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetConnection;

typedef enum {
    NCME_DEFAULT = 0,
    NCME_HIDDEN = 1,
} NETCONMGR_ENUM_FLAGS;

typedef int INetConnectionManager;

typedef enum {
    NCUC_DEFAULT = 0,
    NCUC_NO_UI = 1,
    NCUC_ENABLE_DISABLE = 2,
} NETCONUI_CONNECT_FLAGS;

typedef int INetConnectionConnectUi;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IEnumNetSharingPortMapping;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetSharingPortMappingProps;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetSharingPortMapping;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IEnumNetSharingEveryConnection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IEnumNetSharingPublicConnection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IEnumNetSharingPrivateConnection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetSharingPortMappingCollection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetConnectionProps;

typedef enum {
    ICSSHARINGTYPE_PUBLIC = 0,
    ICSSHARINGTYPE_PRIVATE = 1,
} SHARINGCONNECTIONTYPE;

typedef enum {
    ICSSC_DEFAULT = 0,
    ICSSC_ENABLED = 1,
} SHARINGCONNECTION_ENUM_FLAGS;

typedef enum {
    ICSTT_NAME = 0,
    ICSTT_IPADDRESS = 1,
} ICS_TARGETTYPE;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetSharingConfiguration;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetSharingEveryConnectionCollection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetSharingPublicConnectionCollection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetSharingPrivateConnectionCollection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int INetSharingManager;

typedef int NetFwRule;

typedef int NetFwOpenPort;

typedef int NetFwAuthorizedApplication;

typedef int NetFwPolicy2;

typedef int NetFwProduct;

typedef int NetFwProducts;

typedef int NetFwMgr;

typedef enum {
    NET_FW_POLICY_GROUP = 0,
    NET_FW_POLICY_LOCAL = 1,
    NET_FW_POLICY_EFFECTIVE = 2,
    NET_FW_POLICY_TYPE_MAX = 3,
} NET_FW_POLICY_TYPE;

typedef enum {
    NET_FW_PROFILE_DOMAIN = 0,
    NET_FW_PROFILE_STANDARD = 1,
    NET_FW_PROFILE_CURRENT = 2,
    NET_FW_PROFILE_TYPE_MAX = 3,
} NET_FW_PROFILE_TYPE;

typedef enum {
    NET_FW_PROFILE2_DOMAIN = 1,
    NET_FW_PROFILE2_PRIVATE = 2,
    NET_FW_PROFILE2_PUBLIC = 4,
    NET_FW_PROFILE2_ALL = 2147483647,
} NET_FW_PROFILE_TYPE2;

typedef enum {
    NET_FW_IP_VERSION_V4 = 0,
    NET_FW_IP_VERSION_V6 = 1,
    NET_FW_IP_VERSION_ANY = 2,
    NET_FW_IP_VERSION_MAX = 3,
} NET_FW_IP_VERSION;

typedef enum {
    NET_FW_SCOPE_ALL = 0,
    NET_FW_SCOPE_LOCAL_SUBNET = 1,
    NET_FW_SCOPE_CUSTOM = 2,
    NET_FW_SCOPE_MAX = 3,
} NET_FW_SCOPE;

typedef enum {
    NET_FW_IP_PROTOCOL_TCP = 6,
    NET_FW_IP_PROTOCOL_UDP = 17,
    NET_FW_IP_PROTOCOL_ANY = 256,
} NET_FW_IP_PROTOCOL;

typedef enum {
    NET_FW_SERVICE_FILE_AND_PRINT = 0,
    NET_FW_SERVICE_UPNP = 1,
    NET_FW_SERVICE_REMOTE_DESKTOP = 2,
    NET_FW_SERVICE_NONE = 3,
    NET_FW_SERVICE_TYPE_MAX = 4,
} NET_FW_SERVICE_TYPE;

typedef enum {
    NET_FW_RULE_DIR_IN = 1,
    NET_FW_RULE_DIR_OUT = 2,
    NET_FW_RULE_DIR_MAX = 3,
} NET_FW_RULE_DIRECTION;

typedef enum {
    NET_FW_ACTION_BLOCK = 0,
    NET_FW_ACTION_ALLOW = 1,
    NET_FW_ACTION_MAX = 2,
} NET_FW_ACTION;

typedef enum {
    NET_FW_MODIFY_STATE_OK = 0,
    NET_FW_MODIFY_STATE_GP_OVERRIDE = 1,
    NET_FW_MODIFY_STATE_INBOUND_BLOCKED = 2,
} NET_FW_MODIFY_STATE;

typedef enum {
    NET_FW_RULE_CATEGORY_BOOT = 0,
    NET_FW_RULE_CATEGORY_STEALTH = 1,
    NET_FW_RULE_CATEGORY_FIREWALL = 2,
    NET_FW_RULE_CATEGORY_CONSEC = 3,
    NET_FW_RULE_CATEGORY_MAX = 4,
} NET_FW_RULE_CATEGORY;

typedef enum {
    NET_FW_EDGE_TRAVERSAL_TYPE_DENY = 0,
    NET_FW_EDGE_TRAVERSAL_TYPE_ALLOW = 1,
    NET_FW_EDGE_TRAVERSAL_TYPE_DEFER_TO_APP = 2,
    NET_FW_EDGE_TRAVERSAL_TYPE_DEFER_TO_USER = 3,
} NET_FW_EDGE_TRAVERSAL_TYPE;

typedef enum {
    NET_FW_AUTHENTICATE_NONE = 0,
    NET_FW_AUTHENTICATE_NO_ENCAPSULATION = 1,
    NET_FW_AUTHENTICATE_WITH_INTEGRITY = 2,
    NET_FW_AUTHENTICATE_AND_NEGOTIATE_ENCRYPTION = 3,
    NET_FW_AUTHENTICATE_AND_ENCRYPT = 4,
} NET_FW_AUTHENTICATE_TYPE;

typedef enum {
    NETISO_FLAG_FORCE_COMPUTE_BINARIES = 1,
    NETISO_FLAG_MAX = 2,
} NETISO_FLAG;

typedef enum {
    INET_FIREWALL_AC_NONE = 0,
    INET_FIREWALL_AC_PACKAGE_ID_ONLY = 1,
    INET_FIREWALL_AC_BINARY = 2,
    INET_FIREWALL_AC_MAX = 4,
} INET_FIREWALL_AC_CREATION_TYPE;

typedef enum {
    INET_FIREWALL_AC_CHANGE_INVALID = 0,
    INET_FIREWALL_AC_CHANGE_CREATE = 1,
    INET_FIREWALL_AC_CHANGE_DELETE = 2,
    INET_FIREWALL_AC_CHANGE_MAX = 3,
} INET_FIREWALL_AC_CHANGE_TYPE;

typedef int INET_FIREWALL_AC_CAPABILITIES;

typedef int INET_FIREWALL_AC_BINARIES;

typedef int INET_FIREWALL_AC_CHANGE;

typedef int INET_FIREWALL_APP_CONTAINER;

typedef int PAC_CHANGES_CALLBACK_FN;

typedef enum {
    NETISO_ERROR_TYPE_NONE = 0,
    NETISO_ERROR_TYPE_PRIVATE_NETWORK = 1,
    NETISO_ERROR_TYPE_INTERNET_CLIENT = 2,
    NETISO_ERROR_TYPE_INTERNET_CLIENT_SERVER = 3,
    NETISO_ERROR_TYPE_MAX = 4,
} NETISO_ERROR_TYPE;

typedef int PNETISO_EDP_ID_CALLBACK_FN;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwRemoteAdminSettings;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwIcmpSettings;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwOpenPort;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwOpenPorts;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwService;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwServices;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwAuthorizedApplication;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwAuthorizedApplications;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwRule;

// TODO: this type is limited to platform 'windows6.1'
typedef int INetFwRule2;

// TODO: this type is limited to platform 'windows8.0'
typedef int INetFwRule3;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwRules;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwServiceRestriction;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwProfile;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwPolicy;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwPolicy2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int INetFwMgr;

// TODO: this type is limited to platform 'windows6.1'
typedef int INetFwProduct;

// TODO: this type is limited to platform 'windows6.1'
typedef int INetFwProducts;


//--------------------------------------------------------------------------------
// Section: Functions (8)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void NetworkIsolationSetupAppContainerBinaries();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void NetworkIsolationRegisterForAppContainerChanges();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void NetworkIsolationUnregisterForAppContainerChanges();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void NetworkIsolationFreeAppContainers();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void NetworkIsolationEnumAppContainers();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void NetworkIsolationGetAppContainerConfig();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void NetworkIsolationSetAppContainerConfig();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void NetworkIsolationDiagnoseConnectFailureAndGetInfo();

