// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (168)
//--------------------------------------------------------------------------------
#define FACILITY_EAP_MESSAGE (UINT)2114
#define EAP_GROUP_MASK (INT)65280
#define EAP_E_EAPHOST_FIRST (INT)-2143158272
#define EAP_E_EAPHOST_LAST (INT)-2143158017
#define EAP_I_EAPHOST_FIRST (INT)-2143158272
#define EAP_I_EAPHOST_LAST (INT)-2143158017
#define EAP_E_CERT_STORE_INACCESSIBLE (UINT)2151809040
#define EAP_E_EAPHOST_METHOD_NOT_INSTALLED (UINT)2151809041
#define EAP_E_EAPHOST_THIRDPARTY_METHOD_HOST_RESET (UINT)2151809042
#define EAP_E_EAPHOST_EAPQEC_INACCESSIBLE (UINT)2151809043
#define EAP_E_EAPHOST_IDENTITY_UNKNOWN (UINT)2151809044
#define EAP_E_AUTHENTICATION_FAILED (UINT)2151809045
#define EAP_I_EAPHOST_EAP_NEGOTIATION_FAILED (UINT)1078067222
#define EAP_E_EAPHOST_METHOD_INVALID_PACKET (UINT)2151809047
#define EAP_E_EAPHOST_REMOTE_INVALID_PACKET (UINT)2151809048
#define EAP_E_EAPHOST_XML_MALFORMED (UINT)2151809049
#define EAP_E_METHOD_CONFIG_DOES_NOT_SUPPORT_SSO (UINT)2151809050
#define EAP_E_EAPHOST_METHOD_OPERATION_NOT_SUPPORTED (UINT)2151809056
#define EAP_E_USER_FIRST (INT)-2143158016
#define EAP_E_USER_LAST (INT)-2143157761
#define EAP_I_USER_FIRST (INT)1078067456
#define EAP_I_USER_LAST (INT)1078067711
#define EAP_E_USER_CERT_NOT_FOUND (UINT)2151809280
#define EAP_E_USER_CERT_INVALID (UINT)2151809281
#define EAP_E_USER_CERT_EXPIRED (UINT)2151809282
#define EAP_E_USER_CERT_REVOKED (UINT)2151809283
#define EAP_E_USER_CERT_OTHER_ERROR (UINT)2151809284
#define EAP_E_USER_CERT_REJECTED (UINT)2151809285
#define EAP_I_USER_ACCOUNT_OTHER_ERROR (UINT)1078067472
#define EAP_E_USER_CREDENTIALS_REJECTED (UINT)2151809297
#define EAP_E_USER_NAME_PASSWORD_REJECTED (UINT)2151809298
#define EAP_E_NO_SMART_CARD_READER (UINT)2151809299
#define EAP_E_SERVER_FIRST (INT)-2143157760
#define EAP_E_SERVER_LAST (INT)-2143157505
#define EAP_E_SERVER_CERT_NOT_FOUND (UINT)2151809536
#define EAP_E_SERVER_CERT_INVALID (UINT)2151809537
#define EAP_E_SERVER_CERT_EXPIRED (UINT)2151809538
#define EAP_E_SERVER_CERT_REVOKED (UINT)2151809539
#define EAP_E_SERVER_CERT_OTHER_ERROR (UINT)2151809540
#define EAP_E_USER_ROOT_CERT_FIRST (INT)-2143157504
#define EAP_E_USER_ROOT_CERT_LAST (INT)-2143157249
#define EAP_E_USER_ROOT_CERT_NOT_FOUND (UINT)2151809792
#define EAP_E_USER_ROOT_CERT_INVALID (UINT)2151809793
#define EAP_E_USER_ROOT_CERT_EXPIRED (UINT)2151809794
#define EAP_E_SERVER_ROOT_CERT_FIRST (INT)-2143157248
#define EAP_E_SERVER_ROOT_CERT_LAST (INT)-2143156993
#define EAP_E_SERVER_ROOT_CERT_NOT_FOUND (UINT)2151810048
#define EAP_E_SERVER_ROOT_CERT_INVALID (UINT)2151810049
#define EAP_E_SERVER_ROOT_CERT_NAME_REQUIRED (UINT)2151810054
#define EAP_E_SIM_NOT_VALID (UINT)2151810304
#define EAP_PEER_FLAG_GUEST_ACCESS (UINT)64
#define EAP_FLAG_Reserved1 (UINT)1
#define EAP_FLAG_NON_INTERACTIVE (UINT)2
#define EAP_FLAG_LOGON (UINT)4
#define EAP_FLAG_PREVIEW (UINT)8
#define EAP_FLAG_Reserved2 (UINT)16
#define EAP_FLAG_MACHINE_AUTH (UINT)32
#define EAP_FLAG_GUEST_ACCESS (UINT)64
#define EAP_FLAG_Reserved3 (UINT)128
#define EAP_FLAG_Reserved4 (UINT)256
#define EAP_FLAG_RESUME_FROM_HIBERNATE (UINT)512
#define EAP_FLAG_Reserved5 (UINT)1024
#define EAP_FLAG_Reserved6 (UINT)2048
#define EAP_FLAG_FULL_AUTH (UINT)4096
#define EAP_FLAG_PREFER_ALT_CREDENTIALS (UINT)8192
#define EAP_FLAG_Reserved7 (UINT)16384
#define EAP_PEER_FLAG_HEALTH_STATE_CHANGE (UINT)32768
#define EAP_FLAG_SUPRESS_UI (UINT)65536
#define EAP_FLAG_PRE_LOGON (UINT)131072
#define EAP_FLAG_USER_AUTH (UINT)262144
#define EAP_FLAG_CONFG_READONLY (UINT)524288
#define EAP_FLAG_Reserved8 (UINT)1048576
#define EAP_FLAG_Reserved9 (UINT)4194304
#define EAP_FLAG_VPN (UINT)8388608
#define EAP_FLAG_ONLY_EAP_TLS (UINT)16777216
#define EAP_CONFIG_INPUT_FIELD_PROPS_DEFAULT (UINT)0
#define EAP_CONFIG_INPUT_FIELD_PROPS_NON_DISPLAYABLE (UINT)1
#define EAP_CONFIG_INPUT_FIELD_PROPS_NON_PERSIST (UINT)2
#define EAP_UI_INPUT_FIELD_PROPS_NON_PERSIST (UINT)2
#define EAP_UI_INPUT_FIELD_PROPS_READ_ONLY (UINT)4
#define EAP_CREDENTIAL_VERSION (UINT)1
#define EAP_INTERACTIVE_UI_DATA_VERSION (UINT)1
#define EAPHOST_PEER_API_VERSION (UINT)1
#define EAPHOST_METHOD_API_VERSION (UINT)1
#define MAX_EAP_CONFIG_INPUT_FIELD_LENGTH (UINT)256
#define MAX_EAP_CONFIG_INPUT_FIELD_VALUE_LENGTH (UINT)1024
#define CERTIFICATE_HASH_LENGTH (UINT)20
#define EAP_METHOD_AUTHENTICATOR_CONFIG_IS_IDENTITY_PRIVACY (UINT)1
#define RAS_EAP_ROLE_AUTHENTICATOR (UINT)1
#define RAS_EAP_ROLE_AUTHENTICATEE (UINT)2
#define RAS_EAP_ROLE_EXCLUDE_IN_EAP (UINT)4
#define RAS_EAP_ROLE_EXCLUDE_IN_PEAP (UINT)8
#define RAS_EAP_ROLE_EXCLUDE_IN_VPN (UINT)16
#define EAPCODE_Request (UINT)1
#define EAPCODE_Response (UINT)2
#define EAPCODE_Success (UINT)3
#define EAPCODE_Failure (UINT)4
#define MAXEAPCODE (UINT)4
#define RAS_EAP_FLAG_ROUTER (UINT)1
#define RAS_EAP_FLAG_NON_INTERACTIVE (UINT)2
#define RAS_EAP_FLAG_LOGON (UINT)4
#define RAS_EAP_FLAG_PREVIEW (UINT)8
#define RAS_EAP_FLAG_FIRST_LINK (UINT)16
#define RAS_EAP_FLAG_MACHINE_AUTH (UINT)32
#define RAS_EAP_FLAG_GUEST_ACCESS (UINT)64
#define RAS_EAP_FLAG_8021X_AUTH (UINT)128
#define RAS_EAP_FLAG_HOSTED_IN_PEAP (UINT)256
#define RAS_EAP_FLAG_RESUME_FROM_HIBERNATE (UINT)512
#define RAS_EAP_FLAG_PEAP_UPFRONT (UINT)1024
#define RAS_EAP_FLAG_ALTERNATIVE_USER_DB (UINT)2048
#define RAS_EAP_FLAG_PEAP_FORCE_FULL_AUTH (UINT)4096
#define RAS_EAP_FLAG_PRE_LOGON (UINT)131072
#define RAS_EAP_FLAG_CONFG_READONLY (UINT)524288
#define RAS_EAP_FLAG_RESERVED (UINT)1048576
#define RAS_EAP_FLAG_SAVE_CREDMAN (UINT)2097152
#define GUID_EapHost_Cause_MethodDLLNotFound GUID { "9612fc67-6150-4209-a85e-a8d800000001" }
#define GUID_EapHost_Repair_ContactSysadmin GUID { "9612fc67-6150-4209-a85e-a8d800000002" }
#define GUID_EapHost_Cause_CertStoreInaccessible GUID { "9612fc67-6150-4209-a85e-a8d800000004" }
#define GUID_EapHost_Cause_Generic_AuthFailure GUID { "9612fc67-6150-4209-a85e-a8d800000104" }
#define GUID_EapHost_Cause_IdentityUnknown GUID { "9612fc67-6150-4209-a85e-a8d800000204" }
#define GUID_EapHost_Cause_SimNotValid GUID { "9612fc67-6150-4209-a85e-a8d800000304" }
#define GUID_EapHost_Cause_Server_CertExpired GUID { "9612fc67-6150-4209-a85e-a8d800000005" }
#define GUID_EapHost_Cause_Server_CertInvalid GUID { "9612fc67-6150-4209-a85e-a8d800000006" }
#define GUID_EapHost_Cause_Server_CertNotFound GUID { "9612fc67-6150-4209-a85e-a8d800000007" }
#define GUID_EapHost_Cause_Server_CertRevoked GUID { "9612fc67-6150-4209-a85e-a8d800000008" }
#define GUID_EapHost_Cause_Server_CertOtherError GUID { "9612fc67-6150-4209-a85e-a8d800000108" }
#define GUID_EapHost_Cause_User_CertExpired GUID { "9612fc67-6150-4209-a85e-a8d800000009" }
#define GUID_EapHost_Cause_User_CertInvalid GUID { "9612fc67-6150-4209-a85e-a8d80000000a" }
#define GUID_EapHost_Cause_User_CertNotFound GUID { "9612fc67-6150-4209-a85e-a8d80000000b" }
#define GUID_EapHost_Cause_User_CertOtherError GUID { "9612fc67-6150-4209-a85e-a8d80000000c" }
#define GUID_EapHost_Cause_User_CertRejected GUID { "9612fc67-6150-4209-a85e-a8d80000000d" }
#define GUID_EapHost_Cause_User_CertRevoked GUID { "9612fc67-6150-4209-a85e-a8d80000000e" }
#define GUID_EapHost_Cause_User_Account_OtherProblem GUID { "9612fc67-6150-4209-a85e-a8d80000010e" }
#define GUID_EapHost_Cause_User_CredsRejected GUID { "9612fc67-6150-4209-a85e-a8d80000020e" }
#define GUID_EapHost_Cause_User_Root_CertExpired GUID { "9612fc67-6150-4209-a85e-a8d80000000f" }
#define GUID_EapHost_Cause_User_Root_CertInvalid GUID { "9612fc67-6150-4209-a85e-a8d800000010" }
#define GUID_EapHost_Cause_User_Root_CertNotFound GUID { "9612fc67-6150-4209-a85e-a8d800000011" }
#define GUID_EapHost_Cause_Server_Root_CertNameRequired GUID { "9612fc67-6150-4209-a85e-a8d800000012" }
#define GUID_EapHost_Cause_Server_Root_CertNotFound GUID { "9612fc67-6150-4209-a85e-a8d800000112" }
#define GUID_EapHost_Cause_ThirdPartyMethod_Host_Reset GUID { "9612fc67-6150-4209-a85e-a8d800000212" }
#define GUID_EapHost_Cause_EapQecInaccessible GUID { "9612fc67-6150-4209-a85e-a8d800000312" }
#define GUID_EapHost_Repair_Server_ClientSelectServerCert GUID { "9612fc67-6150-4209-a85e-a8d800000018" }
#define GUID_EapHost_Repair_User_AuthFailure GUID { "9612fc67-6150-4209-a85e-a8d800000019" }
#define GUID_EapHost_Repair_User_GetNewCert GUID { "9612fc67-6150-4209-a85e-a8d80000001a" }
#define GUID_EapHost_Repair_User_SelectValidCert GUID { "9612fc67-6150-4209-a85e-a8d80000001b" }
#define GUID_EapHost_Repair_Retry_Authentication GUID { "9612fc67-6150-4209-a85e-a8d80000011b" }
#define GUID_EapHost_Cause_EapNegotiationFailed GUID { "9612fc67-6150-4209-a85e-a8d80000001c" }
#define GUID_EapHost_Cause_XmlMalformed GUID { "9612fc67-6150-4209-a85e-a8d80000001d" }
#define GUID_EapHost_Cause_MethodDoesNotSupportOperation GUID { "9612fc67-6150-4209-a85e-a8d80000001e" }
#define GUID_EapHost_Repair_ContactAdmin_AuthFailure GUID { "9612fc67-6150-4209-a85e-a8d80000001f" }
#define GUID_EapHost_Repair_ContactAdmin_IdentityUnknown GUID { "9612fc67-6150-4209-a85e-a8d800000020" }
#define GUID_EapHost_Repair_ContactAdmin_NegotiationFailed GUID { "9612fc67-6150-4209-a85e-a8d800000021" }
#define GUID_EapHost_Repair_ContactAdmin_MethodNotFound GUID { "9612fc67-6150-4209-a85e-a8d800000022" }
#define GUID_EapHost_Repair_RestartNap GUID { "9612fc67-6150-4209-a85e-a8d800000023" }
#define GUID_EapHost_Repair_ContactAdmin_CertStoreInaccessible GUID { "9612fc67-6150-4209-a85e-a8d800000024" }
#define GUID_EapHost_Repair_ContactAdmin_InvalidUserAccount GUID { "9612fc67-6150-4209-a85e-a8d800000025" }
#define GUID_EapHost_Repair_ContactAdmin_RootCertInvalid GUID { "9612fc67-6150-4209-a85e-a8d800000026" }
#define GUID_EapHost_Repair_ContactAdmin_RootCertNotFound GUID { "9612fc67-6150-4209-a85e-a8d800000027" }
#define GUID_EapHost_Repair_ContactAdmin_RootExpired GUID { "9612fc67-6150-4209-a85e-a8d800000028" }
#define GUID_EapHost_Repair_ContactAdmin_CertNameAbsent GUID { "9612fc67-6150-4209-a85e-a8d800000029" }
#define GUID_EapHost_Repair_ContactAdmin_NoSmartCardReader GUID { "9612fc67-6150-4209-a85e-a8d80000002a" }
#define GUID_EapHost_Cause_No_SmartCardReader_Found GUID { "9612fc67-6150-4209-a85e-a8d80000002b" }
#define GUID_EapHost_Repair_ContactAdmin_InvalidUserCert GUID { "9612fc67-6150-4209-a85e-a8d80000002c" }
#define GUID_EapHost_Repair_Method_Not_Support_Sso GUID { "9612fc67-6150-4209-a85e-a8d80000002d" }
#define GUID_EapHost_Repair_No_ValidSim_Found GUID { "9612fc67-6150-4209-a85e-a8d80000002e" }
#define GUID_EapHost_Help_ObtainingCerts GUID { "f535eea3-1bdd-46ca-a2fc-a6655939b7e8" }
#define GUID_EapHost_Help_Troubleshooting GUID { "33307acf-0698-41ba-b014-ea0a2eb8d0a8" }
#define GUID_EapHost_Cause_Method_Config_Does_Not_Support_Sso GUID { "da18bd32-004f-41fa-ae08-0bc85e5845ac" }

//--------------------------------------------------------------------------------
// Section: Types (68)
//--------------------------------------------------------------------------------
typedef enum {
    raatMinimum = 0,
    raatUserName = 1,
    raatUserPassword = 2,
    raatMD5CHAPPassword = 3,
    raatNASIPAddress = 4,
    raatNASPort = 5,
    raatServiceType = 6,
    raatFramedProtocol = 7,
    raatFramedIPAddress = 8,
    raatFramedIPNetmask = 9,
    raatFramedRouting = 10,
    raatFilterId = 11,
    raatFramedMTU = 12,
    raatFramedCompression = 13,
    raatLoginIPHost = 14,
    raatLoginService = 15,
    raatLoginTCPPort = 16,
    raatUnassigned17 = 17,
    raatReplyMessage = 18,
    raatCallbackNumber = 19,
    raatCallbackId = 20,
    raatUnassigned21 = 21,
    raatFramedRoute = 22,
    raatFramedIPXNetwork = 23,
    raatState = 24,
    raatClass = 25,
    raatVendorSpecific = 26,
    raatSessionTimeout = 27,
    raatIdleTimeout = 28,
    raatTerminationAction = 29,
    raatCalledStationId = 30,
    raatCallingStationId = 31,
    raatNASIdentifier = 32,
    raatProxyState = 33,
    raatLoginLATService = 34,
    raatLoginLATNode = 35,
    raatLoginLATGroup = 36,
    raatFramedAppleTalkLink = 37,
    raatFramedAppleTalkNetwork = 38,
    raatFramedAppleTalkZone = 39,
    raatAcctStatusType = 40,
    raatAcctDelayTime = 41,
    raatAcctInputOctets = 42,
    raatAcctOutputOctets = 43,
    raatAcctSessionId = 44,
    raatAcctAuthentic = 45,
    raatAcctSessionTime = 46,
    raatAcctInputPackets = 47,
    raatAcctOutputPackets = 48,
    raatAcctTerminateCause = 49,
    raatAcctMultiSessionId = 50,
    raatAcctLinkCount = 51,
    raatAcctEventTimeStamp = 55,
    raatMD5CHAPChallenge = 60,
    raatNASPortType = 61,
    raatPortLimit = 62,
    raatLoginLATPort = 63,
    raatTunnelType = 64,
    raatTunnelMediumType = 65,
    raatTunnelClientEndpoint = 66,
    raatTunnelServerEndpoint = 67,
    raatARAPPassword = 70,
    raatARAPFeatures = 71,
    raatARAPZoneAccess = 72,
    raatARAPSecurity = 73,
    raatARAPSecurityData = 74,
    raatPasswordRetry = 75,
    raatPrompt = 76,
    raatConnectInfo = 77,
    raatConfigurationToken = 78,
    raatEAPMessage = 79,
    raatSignature = 80,
    raatARAPChallengeResponse = 84,
    raatAcctInterimInterval = 85,
    raatNASIPv6Address = 95,
    raatFramedInterfaceId = 96,
    raatFramedIPv6Prefix = 97,
    raatLoginIPv6Host = 98,
    raatFramedIPv6Route = 99,
    raatFramedIPv6Pool = 100,
    raatARAPGuestLogon = 8096,
    raatCertificateOID = 8097,
    raatEAPConfiguration = 8098,
    raatPEAPEmbeddedEAPTypeId = 8099,
    raatInnerEAPTypeId = 8099,
    raatPEAPFastRoamedSession = 8100,
    raatFastRoamedSession = 8100,
    raatEAPTLV = 8102,
    raatCredentialsChanged = 8103,
    raatCertificateThumbprint = 8250,
    raatPeerId = 9000,
    raatServerId = 9001,
    raatMethodId = 9002,
    raatEMSK = 9003,
    raatSessionId = 9004,
    raatReserved = -1,
} RAS_AUTH_ATTRIBUTE_TYPE;

typedef int NgcTicketContext;

typedef int RAS_AUTH_ATTRIBUTE;

typedef int PPP_EAP_PACKET;

typedef int PPP_EAP_INPUT;

typedef enum {
    EAPACTION_NoAction = 0,
    EAPACTION_Authenticate = 1,
    EAPACTION_Done = 2,
    EAPACTION_SendAndDone = 3,
    EAPACTION_Send = 4,
    EAPACTION_SendWithTimeout = 5,
    EAPACTION_SendWithTimeoutInteractive = 6,
    EAPACTION_IndicateTLV = 7,
    EAPACTION_IndicateIdentity = 8,
} PPP_EAP_ACTION;

typedef int PPP_EAP_OUTPUT;

typedef int PPP_EAP_INFO;

typedef int LEGACY_IDENTITY_UI_PARAMS;

typedef int LEGACY_INTERACTIVE_UI_PARAMS;

typedef int IRouterProtocolConfig;

typedef int IAuthenticationProviderConfig;

typedef int IAccountingProviderConfig;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEAPProviderConfig;

typedef int IEAPProviderConfig2;

typedef int IEAPProviderConfig3;

typedef int EAP_TYPE;

typedef int EAP_METHOD_TYPE;

typedef int EAP_METHOD_INFO;

typedef int EAP_METHOD_INFO_EX;

typedef int EAP_METHOD_INFO_ARRAY;

typedef int EAP_METHOD_INFO_ARRAY_EX;

typedef int EAP_ERROR;

typedef enum {
    eatMinimum = 0,
    eatUserName = 1,
    eatUserPassword = 2,
    eatMD5CHAPPassword = 3,
    eatNASIPAddress = 4,
    eatNASPort = 5,
    eatServiceType = 6,
    eatFramedProtocol = 7,
    eatFramedIPAddress = 8,
    eatFramedIPNetmask = 9,
    eatFramedRouting = 10,
    eatFilterId = 11,
    eatFramedMTU = 12,
    eatFramedCompression = 13,
    eatLoginIPHost = 14,
    eatLoginService = 15,
    eatLoginTCPPort = 16,
    eatUnassigned17 = 17,
    eatReplyMessage = 18,
    eatCallbackNumber = 19,
    eatCallbackId = 20,
    eatUnassigned21 = 21,
    eatFramedRoute = 22,
    eatFramedIPXNetwork = 23,
    eatState = 24,
    eatClass = 25,
    eatVendorSpecific = 26,
    eatSessionTimeout = 27,
    eatIdleTimeout = 28,
    eatTerminationAction = 29,
    eatCalledStationId = 30,
    eatCallingStationId = 31,
    eatNASIdentifier = 32,
    eatProxyState = 33,
    eatLoginLATService = 34,
    eatLoginLATNode = 35,
    eatLoginLATGroup = 36,
    eatFramedAppleTalkLink = 37,
    eatFramedAppleTalkNetwork = 38,
    eatFramedAppleTalkZone = 39,
    eatAcctStatusType = 40,
    eatAcctDelayTime = 41,
    eatAcctInputOctets = 42,
    eatAcctOutputOctets = 43,
    eatAcctSessionId = 44,
    eatAcctAuthentic = 45,
    eatAcctSessionTime = 46,
    eatAcctInputPackets = 47,
    eatAcctOutputPackets = 48,
    eatAcctTerminateCause = 49,
    eatAcctMultiSessionId = 50,
    eatAcctLinkCount = 51,
    eatAcctEventTimeStamp = 55,
    eatMD5CHAPChallenge = 60,
    eatNASPortType = 61,
    eatPortLimit = 62,
    eatLoginLATPort = 63,
    eatTunnelType = 64,
    eatTunnelMediumType = 65,
    eatTunnelClientEndpoint = 66,
    eatTunnelServerEndpoint = 67,
    eatARAPPassword = 70,
    eatARAPFeatures = 71,
    eatARAPZoneAccess = 72,
    eatARAPSecurity = 73,
    eatARAPSecurityData = 74,
    eatPasswordRetry = 75,
    eatPrompt = 76,
    eatConnectInfo = 77,
    eatConfigurationToken = 78,
    eatEAPMessage = 79,
    eatSignature = 80,
    eatARAPChallengeResponse = 84,
    eatAcctInterimInterval = 85,
    eatNASIPv6Address = 95,
    eatFramedInterfaceId = 96,
    eatFramedIPv6Prefix = 97,
    eatLoginIPv6Host = 98,
    eatFramedIPv6Route = 99,
    eatFramedIPv6Pool = 100,
    eatARAPGuestLogon = 8096,
    eatCertificateOID = 8097,
    eatEAPConfiguration = 8098,
    eatPEAPEmbeddedEAPTypeId = 8099,
    eatPEAPFastRoamedSession = 8100,
    eatFastRoamedSession = 8100,
    eatEAPTLV = 8102,
    eatCredentialsChanged = 8103,
    eatInnerEapMethodType = 8104,
    eatClearTextPassword = 8107,
    eatQuarantineSoH = 8150,
    eatCertificateThumbprint = 8250,
    eatPeerId = 9000,
    eatServerId = 9001,
    eatMethodId = 9002,
    eatEMSK = 9003,
    eatSessionId = 9004,
    eatReserved = -1,
} EAP_ATTRIBUTE_TYPE;

typedef int EAP_ATTRIBUTE;

typedef int EAP_ATTRIBUTES;

typedef enum {
    EapConfigInputUsername = 0,
    EapConfigInputPassword = 1,
    EapConfigInputNetworkUsername = 2,
    EapConfigInputNetworkPassword = 3,
    EapConfigInputPin = 4,
    EapConfigInputPSK = 5,
    EapConfigInputEdit = 6,
    EapConfigSmartCardUsername = 7,
    EapConfigSmartCardError = 8,
} EAP_CONFIG_INPUT_FIELD_TYPE;

typedef int EAP_CONFIG_INPUT_FIELD_DATA;

typedef int EAP_CONFIG_INPUT_FIELD_ARRAY;

typedef enum {
    EapCredReq = 0,
    EapCredResp = 1,
    EapCredExpiryReq = 2,
    EapCredExpiryResp = 3,
    EapCredLogonReq = 4,
    EapCredLogonResp = 5,
} EAP_INTERACTIVE_UI_DATA_TYPE;

typedef int EAP_CRED_EXPIRY_REQ;

typedef int EAP_UI_DATA_FORMAT;

typedef int EAP_INTERACTIVE_UI_DATA;

typedef enum {
    emptPropCipherSuiteNegotiation = 0,
    emptPropMutualAuth = 1,
    emptPropIntegrity = 2,
    emptPropReplayProtection = 3,
    emptPropConfidentiality = 4,
    emptPropKeyDerivation = 5,
    emptPropKeyStrength64 = 6,
    emptPropKeyStrength128 = 7,
    emptPropKeyStrength256 = 8,
    emptPropKeyStrength512 = 9,
    emptPropKeyStrength1024 = 10,
    emptPropDictionaryAttackResistance = 11,
    emptPropFastReconnect = 12,
    emptPropCryptoBinding = 13,
    emptPropSessionIndependence = 14,
    emptPropFragmentation = 15,
    emptPropChannelBinding = 16,
    emptPropNap = 17,
    emptPropStandalone = 18,
    emptPropMppeEncryption = 19,
    emptPropTunnelMethod = 20,
    emptPropSupportsConfig = 21,
    emptPropCertifiedMethod = 22,
    emptPropHiddenMethod = 23,
    emptPropMachineAuth = 24,
    emptPropUserAuth = 25,
    emptPropIdentityPrivacy = 26,
    emptPropMethodChaining = 27,
    emptPropSharedStateEquivalence = 28,
    emptLegacyMethodPropertyFlag = 31,
    emptPropVendorSpecific = 255,
} EAP_METHOD_PROPERTY_TYPE;

typedef enum {
    empvtBool = 0,
    empvtDword = 1,
    empvtString = 2,
} EAP_METHOD_PROPERTY_VALUE_TYPE;

typedef int EAP_METHOD_PROPERTY_VALUE_BOOL;

typedef int EAP_METHOD_PROPERTY_VALUE_DWORD;

typedef int EAP_METHOD_PROPERTY_VALUE_STRING;

typedef int EAP_METHOD_PROPERTY_VALUE;

typedef int EAP_METHOD_PROPERTY;

typedef int EAP_METHOD_PROPERTY_ARRAY;

typedef int EAPHOST_IDENTITY_UI_PARAMS;

typedef int EAPHOST_INTERACTIVE_UI_PARAMS;

typedef enum {
    EAP_EMPTY_CREDENTIAL = 0,
    EAP_USERNAME_PASSWORD_CREDENTIAL = 1,
    EAP_WINLOGON_CREDENTIAL = 2,
    EAP_CERTIFICATE_CREDENTIAL = 3,
    EAP_SIM_CREDENTIAL = 4,
} EapCredentialType;

typedef int EapUsernamePasswordCredential;

typedef int EapCertificateCredential;

typedef int EapSimCredential;

typedef int EapCredentialTypeData;

typedef int EapCredential;

typedef enum {
    EapHostPeerMethodResultAltSuccessReceived = 1,
    EapHostPeerMethodResultTimeout = 2,
    EapHostPeerMethodResultFromMethod = 3,
} EapHostPeerMethodResultReason;

typedef enum {
    EapHostPeerResponseDiscard = 0,
    EapHostPeerResponseSend = 1,
    EapHostPeerResponseResult = 2,
    EapHostPeerResponseInvokeUi = 3,
    EapHostPeerResponseRespond = 4,
    EapHostPeerResponseStartAuthentication = 5,
    EapHostPeerResponseNone = 6,
} EapHostPeerResponseAction;

typedef enum {
    EapHostPeerAuthStatus = 1,
    EapHostPeerIdentity = 2,
    EapHostPeerIdentityExtendedInfo = 3,
    EapHostNapInfo = 4,
} EapHostPeerAuthParams;

typedef enum {
    EapHostInvalidSession = 0,
    EapHostAuthNotStarted = 1,
    EapHostAuthIdentityExchange = 2,
    EapHostAuthNegotiatingType = 3,
    EapHostAuthInProgress = 4,
    EapHostAuthSucceeded = 5,
    EapHostAuthFailed = 6,
} EAPHOST_AUTH_STATUS;

typedef int EAPHOST_AUTH_INFO;

typedef enum {
    ISOLATION_STATE_UNKNOWN = 0,
    ISOLATION_STATE_NOT_RESTRICTED = 1,
    ISOLATION_STATE_IN_PROBATION = 2,
    ISOLATION_STATE_RESTRICTED_ACCESS = 3,
} ISOLATION_STATE;

typedef int EapHostPeerMethodResult;

typedef int EapPacket;

typedef enum {
    EapCodeMinimum = 1,
    EapCodeRequest = 1,
    EapCodeResponse = 2,
    EapCodeSuccess = 3,
    EapCodeFailure = 4,
    EapCodeMaximum = 4,
} EapCode;

typedef int NotificationHandler;

typedef enum {
    EAP_METHOD_AUTHENTICATOR_RESPONSE_DISCARD = 0,
    EAP_METHOD_AUTHENTICATOR_RESPONSE_SEND = 1,
    EAP_METHOD_AUTHENTICATOR_RESPONSE_RESULT = 2,
    EAP_METHOD_AUTHENTICATOR_RESPONSE_RESPOND = 3,
    EAP_METHOD_AUTHENTICATOR_RESPONSE_AUTHENTICATE = 4,
    EAP_METHOD_AUTHENTICATOR_RESPONSE_HANDLE_IDENTITY = 5,
} EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION;

typedef int EAP_METHOD_AUTHENTICATOR_RESULT;

typedef enum {
    EapPeerMethodResponseActionDiscard = 0,
    EapPeerMethodResponseActionSend = 1,
    EapPeerMethodResponseActionResult = 2,
    EapPeerMethodResponseActionInvokeUI = 3,
    EapPeerMethodResponseActionRespond = 4,
    EapPeerMethodResponseActionNone = 5,
} EapPeerMethodResponseAction;

typedef int EapPeerMethodOutput;

typedef enum {
    EapPeerMethodResultUnknown = 1,
    EapPeerMethodResultSuccess = 2,
    EapPeerMethodResultFailure = 3,
} EapPeerMethodResultReason;

typedef int EapPeerMethodResult;

typedef int EAP_PEER_METHOD_ROUTINES;

typedef enum {
    EAP_AUTHENTICATOR_SEND_TIMEOUT_NONE = 0,
    EAP_AUTHENTICATOR_SEND_TIMEOUT_BASIC = 1,
    EAP_AUTHENTICATOR_SEND_TIMEOUT_INTERACTIVE = 2,
} EAP_AUTHENTICATOR_SEND_TIMEOUT;

typedef int EAP_AUTHENTICATOR_METHOD_ROUTINES;


//--------------------------------------------------------------------------------
// Section: Functions (32)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerGetMethods();

// TODO: this type is limited to platform 'windows6.1'
/*u32*/void EapHostPeerGetMethodProperties();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerInvokeConfigUI();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerQueryCredentialInputFields();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerQueryUserBlobFromCredentialInputFields();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerInvokeIdentityUI();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerInvokeInteractiveUI();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerQueryInteractiveUIInputFields();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerQueryUIBlobFromInteractiveUIInputFields();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerConfigXml2Blob();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerCredentialsXml2Blob();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerConfigBlob2Xml();

// TODO: this type is limited to platform 'windows6.0.6000'
/*void*/void EapHostPeerFreeMemory();

// TODO: this type is limited to platform 'windows6.0.6000'
/*void*/void EapHostPeerFreeErrorMemory();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerInitialize();

// TODO: this type is limited to platform 'windows6.0.6000'
/*void*/void EapHostPeerUninitialize();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerBeginSession();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerProcessReceivedPacket();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerGetSendPacket();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerGetResult();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerGetUIContext();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerSetUIContext();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerGetResponseAttributes();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerSetResponseAttributes();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerGetAuthStatus();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerEndSession();

// TODO: this type is limited to platform 'windows10.0.10240'
/*u32*/void EapHostPeerGetDataToUnplumbCredentials();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerClearConnection();

// TODO: this type is limited to platform 'windows6.0.6000'
/*void*/void EapHostPeerFreeEapError();

// TODO: this type is limited to platform 'windows6.0.6000'
/*u32*/void EapHostPeerGetIdentity();

/*u32*/void EapHostPeerGetEncryptedPassword();

// TODO: this type is limited to platform 'windows6.0.6000'
/*void*/void EapHostPeerFreeRuntimeMemory();

