// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (9)
//--------------------------------------------------------------------------------
#define GUID_STRING_SIZE (UINT)40
#define DATA_NOT_AVAILABLE (UINT)4294967295
#define MTXDM_E_ENLISTRESOURCEFAILED (UINT)2147803392
#define CRR_NO_REASON_SUPPLIED (UINT)0
#define CRR_LIFETIME_LIMIT (UINT)4294967295
#define CRR_ACTIVATION_LIMIT (UINT)4294967294
#define CRR_CALL_LIMIT (UINT)4294967293
#define CRR_MEMORY_LIMIT (UINT)4294967292
#define CRR_RECYCLED_FROM_UI (UINT)4294967291

//--------------------------------------------------------------------------------
// Section: Types (320)
//--------------------------------------------------------------------------------
typedef int SecurityIdentity;

typedef int SecurityCallers;

typedef int SecurityCallContext;

typedef int GetSecurityCallContextAppObject;

typedef int Dummy30040732;

typedef int TransactionContext;

typedef int TransactionContextEx;

typedef int ByotServerEx;

typedef int CServiceConfig;

typedef int ServicePool;

typedef int ServicePoolConfig;

typedef int SharedProperty;

typedef int SharedPropertyGroup;

typedef int SharedPropertyGroupManager;

typedef int COMEvents;

typedef int CoMTSLocator;

typedef int MtsGrp;

typedef int ComServiceEvents;

typedef int ComSystemAppEventData;

typedef int CRMClerk;

typedef int CRMRecoveryClerk;

typedef int LBEvents;

typedef int MessageMover;

typedef int DispenserManager;

typedef int PoolMgr;

typedef int EventServer;

typedef int TrackerServer;

typedef int AppDomainHelper;

typedef int ClrAssemblyLocator;

typedef int COMAdminCatalog;

typedef int COMAdminCatalogObject;

typedef int COMAdminCatalogCollection;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICOMAdminCatalog;

typedef enum {
    COMAdminNotInUse = 0,
    COMAdminInUseByCatalog = 1,
    COMAdminInUseByRegistryUnknown = 2,
    COMAdminInUseByRegistryProxyStub = 3,
    COMAdminInUseByRegistryTypeLib = 4,
    COMAdminInUseByRegistryClsid = 5,
} COMAdminInUse;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int ICOMAdminCatalog2;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICatalogObject;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICatalogCollection;

typedef enum {
    COMAdmin32BitComponent = 1,
    COMAdmin64BitComponent = 2,
} COMAdminComponentType;

typedef enum {
    COMAdminInstallNoUsers = 0,
    COMAdminInstallUsers = 1,
    COMAdminInstallForceOverwriteOfFiles = 2,
} COMAdminApplicationInstallOptions;

typedef enum {
    COMAdminExportNoUsers = 0,
    COMAdminExportUsers = 1,
    COMAdminExportApplicationProxy = 2,
    COMAdminExportForceOverwriteOfFiles = 4,
    COMAdminExportIn10Format = 16,
} COMAdminApplicationExportOptions;

typedef enum {
    COMAdminThreadingModelApartment = 0,
    COMAdminThreadingModelFree = 1,
    COMAdminThreadingModelMain = 2,
    COMAdminThreadingModelBoth = 3,
    COMAdminThreadingModelNeutral = 4,
    COMAdminThreadingModelNotSpecified = 5,
} COMAdminThreadingModels;

typedef enum {
    COMAdminTransactionIgnored = 0,
    COMAdminTransactionNone = 1,
    COMAdminTransactionSupported = 2,
    COMAdminTransactionRequired = 3,
    COMAdminTransactionRequiresNew = 4,
} COMAdminTransactionOptions;

typedef enum {
    COMAdminTxIsolationLevelAny = 0,
    COMAdminTxIsolationLevelReadUnCommitted = 1,
    COMAdminTxIsolationLevelReadCommitted = 2,
    COMAdminTxIsolationLevelRepeatableRead = 3,
    COMAdminTxIsolationLevelSerializable = 4,
} COMAdminTxIsolationLevelOptions;

typedef enum {
    COMAdminSynchronizationIgnored = 0,
    COMAdminSynchronizationNone = 1,
    COMAdminSynchronizationSupported = 2,
    COMAdminSynchronizationRequired = 3,
    COMAdminSynchronizationRequiresNew = 4,
} COMAdminSynchronizationOptions;

typedef enum {
    COMAdminActivationInproc = 0,
    COMAdminActivationLocal = 1,
} COMAdminActivationOptions;

typedef enum {
    COMAdminAccessChecksApplicationLevel = 0,
    COMAdminAccessChecksApplicationComponentLevel = 1,
} COMAdminAccessChecksLevelOptions;

typedef enum {
    COMAdminAuthenticationDefault = 0,
    COMAdminAuthenticationNone = 1,
    COMAdminAuthenticationConnect = 2,
    COMAdminAuthenticationCall = 3,
    COMAdminAuthenticationPacket = 4,
    COMAdminAuthenticationIntegrity = 5,
    COMAdminAuthenticationPrivacy = 6,
} COMAdminAuthenticationLevelOptions;

typedef enum {
    COMAdminImpersonationAnonymous = 1,
    COMAdminImpersonationIdentify = 2,
    COMAdminImpersonationImpersonate = 3,
    COMAdminImpersonationDelegate = 4,
} COMAdminImpersonationLevelOptions;

typedef enum {
    COMAdminAuthenticationCapabilitiesNone = 0,
    COMAdminAuthenticationCapabilitiesSecureReference = 2,
    COMAdminAuthenticationCapabilitiesStaticCloaking = 32,
    COMAdminAuthenticationCapabilitiesDynamicCloaking = 64,
} COMAdminAuthenticationCapabilitiesOptions;

typedef enum {
    COMAdminOSNotInitialized = 0,
    COMAdminOSWindows3_1 = 1,
    COMAdminOSWindows9x = 2,
    COMAdminOSWindows2000 = 3,
    COMAdminOSWindows2000AdvancedServer = 4,
    COMAdminOSWindows2000Unknown = 5,
    COMAdminOSUnknown = 6,
    COMAdminOSWindowsXPPersonal = 11,
    COMAdminOSWindowsXPProfessional = 12,
    COMAdminOSWindowsNETStandardServer = 13,
    COMAdminOSWindowsNETEnterpriseServer = 14,
    COMAdminOSWindowsNETDatacenterServer = 15,
    COMAdminOSWindowsNETWebServer = 16,
    COMAdminOSWindowsLonghornPersonal = 17,
    COMAdminOSWindowsLonghornProfessional = 18,
    COMAdminOSWindowsLonghornStandardServer = 19,
    COMAdminOSWindowsLonghornEnterpriseServer = 20,
    COMAdminOSWindowsLonghornDatacenterServer = 21,
    COMAdminOSWindowsLonghornWebServer = 22,
    COMAdminOSWindows7Personal = 23,
    COMAdminOSWindows7Professional = 24,
    COMAdminOSWindows7StandardServer = 25,
    COMAdminOSWindows7EnterpriseServer = 26,
    COMAdminOSWindows7DatacenterServer = 27,
    COMAdminOSWindows7WebServer = 28,
    COMAdminOSWindows8Personal = 29,
    COMAdminOSWindows8Professional = 30,
    COMAdminOSWindows8StandardServer = 31,
    COMAdminOSWindows8EnterpriseServer = 32,
    COMAdminOSWindows8DatacenterServer = 33,
    COMAdminOSWindows8WebServer = 34,
    COMAdminOSWindowsBluePersonal = 35,
    COMAdminOSWindowsBlueProfessional = 36,
    COMAdminOSWindowsBlueStandardServer = 37,
    COMAdminOSWindowsBlueEnterpriseServer = 38,
    COMAdminOSWindowsBlueDatacenterServer = 39,
    COMAdminOSWindowsBlueWebServer = 40,
} COMAdminOS;

typedef enum {
    COMAdminServiceLoadBalanceRouter = 1,
} COMAdminServiceOptions;

typedef enum {
    COMAdminServiceStopped = 0,
    COMAdminServiceStartPending = 1,
    COMAdminServiceStopPending = 2,
    COMAdminServiceRunning = 3,
    COMAdminServiceContinuePending = 4,
    COMAdminServicePausePending = 5,
    COMAdminServicePaused = 6,
    COMAdminServiceUnknownState = 7,
} COMAdminServiceStatusOptions;

typedef enum {
    COMAdminQCMessageAuthenticateSecureApps = 0,
    COMAdminQCMessageAuthenticateOff = 1,
    COMAdminQCMessageAuthenticateOn = 2,
} COMAdminQCMessageAuthenticateOptions;

typedef enum {
    COMAdminFileFlagLoadable = 1,
    COMAdminFileFlagCOM = 2,
    COMAdminFileFlagContainsPS = 4,
    COMAdminFileFlagContainsComp = 8,
    COMAdminFileFlagContainsTLB = 16,
    COMAdminFileFlagSelfReg = 32,
    COMAdminFileFlagSelfUnReg = 64,
    COMAdminFileFlagUnloadableDLL = 128,
    COMAdminFileFlagDoesNotExist = 256,
    COMAdminFileFlagAlreadyInstalled = 512,
    COMAdminFileFlagBadTLB = 1024,
    COMAdminFileFlagGetClassObjFailed = 2048,
    COMAdminFileFlagClassNotAvailable = 4096,
    COMAdminFileFlagRegistrar = 8192,
    COMAdminFileFlagNoRegistrar = 16384,
    COMAdminFileFlagDLLRegsvrFailed = 32768,
    COMAdminFileFlagRegTLBFailed = 65536,
    COMAdminFileFlagRegistrarFailed = 131072,
    COMAdminFileFlagError = 262144,
} COMAdminFileFlags;

typedef enum {
    COMAdminCompFlagTypeInfoFound = 1,
    COMAdminCompFlagCOMPlusPropertiesFound = 2,
    COMAdminCompFlagProxyFound = 4,
    COMAdminCompFlagInterfacesFound = 8,
    COMAdminCompFlagAlreadyInstalled = 16,
    COMAdminCompFlagNotInApplication = 32,
} COMAdminComponentFlags;

typedef enum {
    COMAdminErrObjectErrors = -2146368511,
    COMAdminErrObjectInvalid = -2146368510,
    COMAdminErrKeyMissing = -2146368509,
    COMAdminErrAlreadyInstalled = -2146368508,
    COMAdminErrAppFileWriteFail = -2146368505,
    COMAdminErrAppFileReadFail = -2146368504,
    COMAdminErrAppFileVersion = -2146368503,
    COMAdminErrBadPath = -2146368502,
    COMAdminErrApplicationExists = -2146368501,
    COMAdminErrRoleExists = -2146368500,
    COMAdminErrCantCopyFile = -2146368499,
    COMAdminErrNoUser = -2146368497,
    COMAdminErrInvalidUserids = -2146368496,
    COMAdminErrNoRegistryCLSID = -2146368495,
    COMAdminErrBadRegistryProgID = -2146368494,
    COMAdminErrAuthenticationLevel = -2146368493,
    COMAdminErrUserPasswdNotValid = -2146368492,
    COMAdminErrCLSIDOrIIDMismatch = -2146368488,
    COMAdminErrRemoteInterface = -2146368487,
    COMAdminErrDllRegisterServer = -2146368486,
    COMAdminErrNoServerShare = -2146368485,
    COMAdminErrDllLoadFailed = -2146368483,
    COMAdminErrBadRegistryLibID = -2146368482,
    COMAdminErrAppDirNotFound = -2146368481,
    COMAdminErrRegistrarFailed = -2146368477,
    COMAdminErrCompFileDoesNotExist = -2146368476,
    COMAdminErrCompFileLoadDLLFail = -2146368475,
    COMAdminErrCompFileGetClassObj = -2146368474,
    COMAdminErrCompFileClassNotAvail = -2146368473,
    COMAdminErrCompFileBadTLB = -2146368472,
    COMAdminErrCompFileNotInstallable = -2146368471,
    COMAdminErrNotChangeable = -2146368470,
    COMAdminErrNotDeletable = -2146368469,
    COMAdminErrSession = -2146368468,
    COMAdminErrCompMoveLocked = -2146368467,
    COMAdminErrCompMoveBadDest = -2146368466,
    COMAdminErrRegisterTLB = -2146368464,
    COMAdminErrSystemApp = -2146368461,
    COMAdminErrCompFileNoRegistrar = -2146368460,
    COMAdminErrCoReqCompInstalled = -2146368459,
    COMAdminErrServiceNotInstalled = -2146368458,
    COMAdminErrPropertySaveFailed = -2146368457,
    COMAdminErrObjectExists = -2146368456,
    COMAdminErrComponentExists = -2146368455,
    COMAdminErrRegFileCorrupt = -2146368453,
    COMAdminErrPropertyOverflow = -2146368452,
    COMAdminErrNotInRegistry = -2146368450,
    COMAdminErrObjectNotPoolable = -2146368449,
    COMAdminErrApplidMatchesClsid = -2146368442,
    COMAdminErrRoleDoesNotExist = -2146368441,
    COMAdminErrStartAppNeedsComponents = -2146368440,
    COMAdminErrRequiresDifferentPlatform = -2146368439,
    COMAdminErrQueuingServiceNotAvailable = -2146367998,
    COMAdminErrObjectParentMissing = -2146367480,
    COMAdminErrObjectDoesNotExist = -2146367479,
    COMAdminErrCanNotExportAppProxy = -2146368438,
    COMAdminErrCanNotStartApp = -2146368437,
    COMAdminErrCanNotExportSystemApp = -2146368436,
    COMAdminErrCanNotSubscribeToComponent = -2146368435,
    COMAdminErrAppNotRunning = -2146367478,
    COMAdminErrEventClassCannotBeSubscriber = -2146368434,
    COMAdminErrLibAppProxyIncompatible = -2146368433,
    COMAdminErrBasePartitionOnly = -2146368432,
    COMAdminErrDuplicatePartitionName = -2146368425,
    COMAdminErrPartitionInUse = -2146368423,
    COMAdminErrImportedComponentsNotAllowed = -2146368421,
    COMAdminErrRegdbNotInitialized = -2146368398,
    COMAdminErrRegdbNotOpen = -2146368397,
    COMAdminErrRegdbSystemErr = -2146368396,
    COMAdminErrRegdbAlreadyRunning = -2146368395,
    COMAdminErrMigVersionNotSupported = -2146368384,
    COMAdminErrMigSchemaNotFound = -2146368383,
    COMAdminErrCatBitnessMismatch = -2146368382,
    COMAdminErrCatUnacceptableBitness = -2146368381,
    COMAdminErrCatWrongAppBitnessBitness = -2146368380,
    COMAdminErrCatPauseResumeNotSupported = -2146368379,
    COMAdminErrCatServerFault = -2146368378,
    COMAdminErrCantRecycleLibraryApps = -2146367473,
    COMAdminErrCantRecycleServiceApps = -2146367471,
    COMAdminErrProcessAlreadyRecycled = -2146367470,
    COMAdminErrPausedProcessMayNotBeRecycled = -2146367469,
    COMAdminErrInvalidPartition = -2146367477,
    COMAdminErrPartitionMsiOnly = -2146367463,
    COMAdminErrStartAppDisabled = -2146368431,
    COMAdminErrCompMoveSource = -2146367460,
    COMAdminErrCompMoveDest = -2146367459,
    COMAdminErrCompMovePrivate = -2146367458,
    COMAdminErrCannotCopyEventClass = -2146367456,
} COMAdminErrorCodes;

typedef int BOID;

typedef enum {
    MAX_TRAN_DESC = 40,
} TX_MISC_CONSTANTS;

typedef enum {
    ISOLATIONLEVEL_UNSPECIFIED = -1,
    ISOLATIONLEVEL_CHAOS = 16,
    ISOLATIONLEVEL_READUNCOMMITTED = 256,
    ISOLATIONLEVEL_BROWSE = 256,
    ISOLATIONLEVEL_CURSORSTABILITY = 4096,
    ISOLATIONLEVEL_READCOMMITTED = 4096,
    ISOLATIONLEVEL_REPEATABLEREAD = 65536,
    ISOLATIONLEVEL_SERIALIZABLE = 1048576,
    ISOLATIONLEVEL_ISOLATED = 1048576,
} ISOLATIONLEVEL;

typedef int XACTTRANSINFO;

typedef int XACTSTATS;

typedef enum {
    ISOFLAG_RETAIN_COMMIT_DC = 1,
    ISOFLAG_RETAIN_COMMIT = 2,
    ISOFLAG_RETAIN_COMMIT_NO = 3,
    ISOFLAG_RETAIN_ABORT_DC = 4,
    ISOFLAG_RETAIN_ABORT = 8,
    ISOFLAG_RETAIN_ABORT_NO = 12,
    ISOFLAG_RETAIN_DONTCARE = 5,
    ISOFLAG_RETAIN_BOTH = 10,
    ISOFLAG_RETAIN_NONE = 15,
    ISOFLAG_OPTIMISTIC = 16,
    ISOFLAG_READONLY = 32,
} ISOFLAG;

typedef enum {
    XACTTC_NONE = 0,
    XACTTC_SYNC_PHASEONE = 1,
    XACTTC_SYNC_PHASETWO = 2,
    XACTTC_SYNC = 2,
    XACTTC_ASYNC_PHASEONE = 4,
    XACTTC_ASYNC = 4,
} XACTTC;

typedef enum {
    XACTRM_OPTIMISTICLASTWINS = 1,
    XACTRM_NOREADONLYPREPARES = 2,
} XACTRM;

typedef enum {
    XACTCONST_TIMEOUTINFINITE = 0,
} XACTCONST;

typedef enum {
    XACTHEURISTIC_ABORT = 1,
    XACTHEURISTIC_COMMIT = 2,
    XACTHEURISTIC_DAMAGE = 3,
    XACTHEURISTIC_DANGER = 4,
} XACTHEURISTIC;

typedef enum {
    XACTSTAT_NONE = 0,
    XACTSTAT_OPENNORMAL = 1,
    XACTSTAT_OPENREFUSED = 2,
    XACTSTAT_PREPARING = 4,
    XACTSTAT_PREPARED = 8,
    XACTSTAT_PREPARERETAINING = 16,
    XACTSTAT_PREPARERETAINED = 32,
    XACTSTAT_COMMITTING = 64,
    XACTSTAT_COMMITRETAINING = 128,
    XACTSTAT_ABORTING = 256,
    XACTSTAT_ABORTED = 512,
    XACTSTAT_COMMITTED = 1024,
    XACTSTAT_HEURISTIC_ABORT = 2048,
    XACTSTAT_HEURISTIC_COMMIT = 4096,
    XACTSTAT_HEURISTIC_DAMAGE = 8192,
    XACTSTAT_HEURISTIC_DANGER = 16384,
    XACTSTAT_FORCED_ABORT = 32768,
    XACTSTAT_FORCED_COMMIT = 65536,
    XACTSTAT_INDOUBT = 131072,
    XACTSTAT_CLOSED = 262144,
    XACTSTAT_OPEN = 3,
    XACTSTAT_NOTPREPARED = 524227,
    XACTSTAT_ALL = 524287,
} XACTSTAT;

typedef int XACTOPT;

typedef int ITransaction;

typedef int ITransactionCloner;

typedef int ITransaction2;

typedef int ITransactionDispenser;

typedef int ITransactionOptions;

typedef int ITransactionOutcomeEvents;

typedef int ITmNodeName;

typedef int IKernelTransaction;

typedef int ITransactionResourceAsync;

typedef int ITransactionLastResourceAsync;

typedef int ITransactionResource;

typedef int ITransactionEnlistmentAsync;

typedef int ITransactionLastEnlistmentAsync;

typedef int ITransactionExportFactory;

typedef int ITransactionImportWhereabouts;

typedef int ITransactionExport;

typedef int ITransactionImport;

typedef int ITipTransaction;

typedef int ITipHelper;

typedef int ITipPullSink;

typedef int IDtcNetworkAccessConfig;

typedef enum {
    NO_AUTHENTICATION_REQUIRED = 0,
    INCOMING_AUTHENTICATION_REQUIRED = 1,
    MUTUAL_AUTHENTICATION_REQUIRED = 2,
} AUTHENTICATION_LEVEL;

typedef int IDtcNetworkAccessConfig2;

typedef int IDtcNetworkAccessConfig3;

typedef enum {
    XACT_E_CONNECTION_REQUEST_DENIED = -2147168000,
    XACT_E_TOOMANY_ENLISTMENTS = -2147167999,
    XACT_E_DUPLICATE_GUID = -2147167998,
    XACT_E_NOTSINGLEPHASE = -2147167997,
    XACT_E_RECOVERYALREADYDONE = -2147167996,
    XACT_E_PROTOCOL = -2147167995,
    XACT_E_RM_FAILURE = -2147167994,
    XACT_E_RECOVERY_FAILED = -2147167993,
    XACT_E_LU_NOT_FOUND = -2147167992,
    XACT_E_DUPLICATE_LU = -2147167991,
    XACT_E_LU_NOT_CONNECTED = -2147167990,
    XACT_E_DUPLICATE_TRANSID = -2147167989,
    XACT_E_LU_BUSY = -2147167988,
    XACT_E_LU_NO_RECOVERY_PROCESS = -2147167987,
    XACT_E_LU_DOWN = -2147167986,
    XACT_E_LU_RECOVERING = -2147167985,
    XACT_E_LU_RECOVERY_MISMATCH = -2147167984,
    XACT_E_RM_UNAVAILABLE = -2147167983,
    XACT_E_LRMRECOVERYALREADYDONE = -2147167982,
    XACT_E_NOLASTRESOURCEINTERFACE = -2147167981,
    XACT_S_NONOTIFY = 315648,
    XACT_OK_NONOTIFY = 315649,
    dwUSER_MS_SQLSERVER = 65535,
} XACT_DTC_CONSTANTS;

typedef int xid_t;

typedef int xa_switch_t;

typedef int IXATransLookup;

typedef int IXATransLookup2;

typedef int IResourceManagerSink;

// TODO: this type is limited to platform 'windows5.0'
typedef int IResourceManager;

typedef int ILastResourceManager;

typedef int IResourceManager2;

typedef int IResourceManagerRejoinable;

typedef int IXAConfig;

typedef int IRMHelper;

typedef int IXAObtainRMInfo;

typedef int IResourceManagerFactory;

typedef int IResourceManagerFactory2;

typedef int IPrepareInfo;

typedef int IPrepareInfo2;

typedef int IGetDispenser;

typedef int ITransactionVoterBallotAsync2;

typedef int ITransactionVoterNotifyAsync2;

typedef int ITransactionVoterFactory2;

typedef int ITransactionPhase0EnlistmentAsync;

typedef int ITransactionPhase0NotifyAsync;

typedef int ITransactionPhase0Factory;

typedef int ITransactionTransmitter;

typedef int ITransactionTransmitterFactory;

typedef int ITransactionReceiver;

typedef int ITransactionReceiverFactory;

typedef int _ProxyConfigParams;

typedef int IDtcLuConfigure;

typedef int IDtcLuRecovery;

typedef int IDtcLuRecoveryFactory;

typedef enum {
    DTCINITIATEDRECOVERYWORK_CHECKLUSTATUS = 1,
    DTCINITIATEDRECOVERYWORK_TRANS = 2,
    DTCINITIATEDRECOVERYWORK_TMDOWN = 3,
} _DtcLu_LocalRecovery_Work;

typedef enum {
    DTCLUXLN_COLD = 1,
    DTCLUXLN_WARM = 2,
} _DtcLu_Xln;

typedef enum {
    DTCLUXLNCONFIRMATION_CONFIRM = 1,
    DTCLUXLNCONFIRMATION_LOGNAMEMISMATCH = 2,
    DTCLUXLNCONFIRMATION_COLDWARMMISMATCH = 3,
    DTCLUXLNCONFIRMATION_OBSOLETE = 4,
} _DtcLu_Xln_Confirmation;

typedef enum {
    DTCLUXLNRESPONSE_OK_SENDOURXLNBACK = 1,
    DTCLUXLNRESPONSE_OK_SENDCONFIRMATION = 2,
    DTCLUXLNRESPONSE_LOGNAMEMISMATCH = 3,
    DTCLUXLNRESPONSE_COLDWARMMISMATCH = 4,
} _DtcLu_Xln_Response;

typedef enum {
    DTCLUXLNERROR_PROTOCOL = 1,
    DTCLUXLNERROR_LOGNAMEMISMATCH = 2,
    DTCLUXLNERROR_COLDWARMMISMATCH = 3,
} _DtcLu_Xln_Error;

typedef enum {
    DTCLUCOMPARESTATE_COMMITTED = 1,
    DTCLUCOMPARESTATE_HEURISTICCOMMITTED = 2,
    DTCLUCOMPARESTATE_HEURISTICMIXED = 3,
    DTCLUCOMPARESTATE_HEURISTICRESET = 4,
    DTCLUCOMPARESTATE_INDOUBT = 5,
    DTCLUCOMPARESTATE_RESET = 6,
} _DtcLu_CompareState;

typedef enum {
    DTCLUCOMPARESTATESCONFIRMATION_CONFIRM = 1,
    DTCLUCOMPARESTATESCONFIRMATION_PROTOCOL = 2,
} _DtcLu_CompareStates_Confirmation;

typedef enum {
    DTCLUCOMPARESTATESERROR_PROTOCOL = 1,
} _DtcLu_CompareStates_Error;

typedef enum {
    DTCLUCOMPARESTATESRESPONSE_OK = 1,
    DTCLUCOMPARESTATESRESPONSE_PROTOCOL = 2,
} _DtcLu_CompareStates_Response;

typedef int IDtcLuRecoveryInitiatedByDtcTransWork;

typedef int IDtcLuRecoveryInitiatedByDtcStatusWork;

typedef int IDtcLuRecoveryInitiatedByDtc;

typedef int IDtcLuRecoveryInitiatedByLuWork;

typedef int IDtcLuRecoveryInitiatedByLu;

typedef int IDtcLuRmEnlistment;

typedef int IDtcLuRmEnlistmentSink;

typedef int IDtcLuRmEnlistmentFactory;

typedef int IDtcLuSubordinateDtc;

typedef int IDtcLuSubordinateDtcSink;

typedef int IDtcLuSubordinateDtcFactory;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISecurityIdentityColl;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISecurityCallersColl;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISecurityCallContext;

// TODO: this type is limited to platform 'windows5.0'
typedef int IGetSecurityCallContext;

// TODO: this type is limited to platform 'windows5.0'
typedef int SecurityProperty;

// TODO: this type is limited to platform 'windows5.0'
typedef int ContextInfo;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int ContextInfo2;

// TODO: this type is limited to platform 'windows5.0'
typedef int ObjectContext;

// TODO: this type is limited to platform 'windows5.0'
typedef int ITransactionContextEx;

// TODO: this type is limited to platform 'windows5.0'
typedef int ITransactionContext;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICreateWithTransactionEx;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int ICreateWithLocalTransaction;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICreateWithTipTransactionEx;

typedef int COMSVCSEVENTINFO;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IComLTxEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComUserEvent;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComThreadEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComAppEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComInstanceEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComTransactionEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComMethodEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComObjectEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComResourceEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComSecurityEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComObjectPoolEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComObjectPoolEvents2;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComObjectConstructionEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComActivityEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComIdentityEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComQCEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComExceptionEvents;

typedef int ILBEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComCRMEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComMethod2Events;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IComTrackingInfoEvents;

typedef enum {
    TRKCOLL_PROCESSES = 0,
    TRKCOLL_APPLICATIONS = 1,
    TRKCOLL_COMPONENTS = 2,
} TRACKING_COLL_TYPE;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IComTrackingInfoCollection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IComTrackingInfoObject;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IComTrackingInfoProperties;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IComApp2Events;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComTransaction2Events;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComInstance2Events;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComObjectPool2Events;

// TODO: this type is limited to platform 'windows5.0'
typedef int IComObjectConstruction2Events;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISystemAppEventData;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMtsEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMtsEventInfo;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMTSLocator;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMtsGrp;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMessageMover;

typedef int IEventServerTrace;

typedef int RECYCLE_INFO;

typedef enum {
    DUMPTYPE_FULL = 0,
    DUMPTYPE_MINI = 1,
    DUMPTYPE_NONE = 2,
} DUMPTYPE;

typedef int HANG_INFO;

typedef enum {
    APPTYPE_UNKNOWN = -1,
    APPTYPE_SERVER = 1,
    APPTYPE_LIBRARY = 0,
    APPTYPE_SWC = 2,
} COMPLUS_APPTYPE;

typedef int CAppStatistics;

typedef int CAppData;

typedef int CCLSIDData;

typedef int CCLSIDData2;

typedef enum {
    GATD_INCLUDE_PROCESS_EXE_NAME = 1,
    GATD_INCLUDE_LIBRARY_APPS = 2,
    GATD_INCLUDE_SWC = 4,
    GATD_INCLUDE_CLASS_NAME = 8,
    GATD_INCLUDE_APPLICATION_NAME = 16,
} GetAppTrackerDataFlags;

typedef int ApplicationProcessSummary;

typedef int ApplicationProcessStatistics;

typedef int ApplicationProcessRecycleInfo;

typedef int ApplicationSummary;

typedef int ComponentSummary;

typedef int ComponentStatistics;

typedef int ComponentHangMonitorInfo;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IGetAppTrackerData;

// TODO: this type is limited to platform 'windows5.0'
typedef int IDispenserManager;

// TODO: this type is limited to platform 'windows5.0'
typedef int IHolder;

// TODO: this type is limited to platform 'windows5.0'
typedef int IDispenserDriver;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int ITransactionProxy;

typedef int IContextSecurityPerimeter;

typedef int ITxProxyHolder;

// TODO: this type is limited to platform 'windows5.0'
typedef int IObjectContext;

// TODO: this type is limited to platform 'windows5.0'
typedef int IObjectControl;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEnumNames;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISecurityProperty;

// TODO: this type is limited to platform 'windows5.0'
typedef int ObjectControl;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISharedProperty;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISharedPropertyGroup;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISharedPropertyGroupManager;

// TODO: this type is limited to platform 'windows5.0'
typedef int IObjectConstruct;

// TODO: this type is limited to platform 'windows5.0'
typedef int IObjectConstructString;

// TODO: this type is limited to platform 'windows5.0'
typedef int IObjectContextActivity;

// TODO: this type is limited to platform 'windows5.0'
typedef int IObjectContextInfo;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IObjectContextInfo2;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int ITransactionStatus;

// TODO: this type is limited to platform 'windows5.0'
typedef int IObjectContextTip;

// TODO: this type is limited to platform 'windows5.0'
typedef int IPlaybackControl;

// TODO: this type is limited to platform 'windows5.0'
typedef int IGetContextProperties;

typedef enum {
    TxCommit = 0,
    TxAbort = 1,
} TransactionVote;

// TODO: this type is limited to platform 'windows5.0'
typedef int IContextState;

// TODO: this type is limited to platform 'windows5.0'
typedef int IPoolManager;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISelectCOMLBServer;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICOMLBArguments;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICrmLogControl;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICrmCompensatorVariants;

typedef int CrmLogRecordRead;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICrmCompensator;

typedef enum {
    TxState_Active = 0,
    TxState_Committed = 1,
    TxState_Aborted = 2,
    TxState_Indoubt = 3,
} CrmTransactionState;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICrmMonitorLogRecords;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICrmMonitorClerks;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICrmMonitor;

// TODO: this type is limited to platform 'windows5.0'
typedef int ICrmFormatLogRecords;

typedef enum {
    CSC_Inherit = 0,
    CSC_Ignore = 1,
} CSC_InheritanceConfig;

typedef enum {
    CSC_ThreadPoolNone = 0,
    CSC_ThreadPoolInherit = 1,
    CSC_STAThreadPool = 2,
    CSC_MTAThreadPool = 3,
} CSC_ThreadPool;

typedef enum {
    CSC_NoBinding = 0,
    CSC_BindToPoolThread = 1,
} CSC_Binding;

typedef enum {
    CSC_NoTransaction = 0,
    CSC_IfContainerIsTransactional = 1,
    CSC_CreateTransactionIfNecessary = 2,
    CSC_NewTransaction = 3,
} CSC_TransactionConfig;

typedef enum {
    CSC_NoSynchronization = 0,
    CSC_IfContainerIsSynchronized = 1,
    CSC_NewSynchronizationIfNecessary = 2,
    CSC_NewSynchronization = 3,
} CSC_SynchronizationConfig;

typedef enum {
    CSC_DontUseTracker = 0,
    CSC_UseTracker = 1,
} CSC_TrackerConfig;

typedef enum {
    CSC_NoPartition = 0,
    CSC_InheritPartition = 1,
    CSC_NewPartition = 2,
} CSC_PartitionConfig;

typedef enum {
    CSC_NoIISIntrinsics = 0,
    CSC_InheritIISIntrinsics = 1,
} CSC_IISIntrinsicsConfig;

typedef enum {
    CSC_NoCOMTIIntrinsics = 0,
    CSC_InheritCOMTIIntrinsics = 1,
} CSC_COMTIIntrinsicsConfig;

typedef enum {
    CSC_NoSxs = 0,
    CSC_InheritSxs = 1,
    CSC_NewSxs = 2,
} CSC_SxsConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceIISIntrinsicsConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceComTIIntrinsicsConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceSxsConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int ICheckSxsConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceInheritanceConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceThreadPoolConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceTransactionConfigBase;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceTransactionConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceSysTxnConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceSynchronizationConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceTrackerConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServicePartitionConfig;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceCall;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IAsyncErrorNotify;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServiceActivity;

// TODO: this type is limited to platform 'windows5.0'
typedef int IThreadPoolKnobs;

typedef int IComStaThreadPoolKnobs;

typedef int IComMtaThreadPoolKnobs;

typedef int IComStaThreadPoolKnobs2;

// TODO: this type is limited to platform 'windows5.0'
typedef int IProcessInitializer;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IServicePoolConfig;

// TODO: this type is limited to platform 'windows5.0'
typedef int IServicePool;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IManagedPooledObj;

// TODO: this type is limited to platform 'windows5.0'
typedef int IManagedPoolAction;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IManagedObjectInfo;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IAppDomainHelper;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IAssemblyLocator;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IManagedActivationEvents;

// TODO: this type is limited to platform 'windows5.0'
typedef int ISendMethodEvents;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int ITransactionResourcePool;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMTSCall;

// TODO: this type is limited to platform 'windows5.0'
typedef int IContextProperties;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IObjPool;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int ITransactionProperty;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMTSActivity;

typedef enum {
    mtsErrCtxAborted = 2147803138,
    mtsErrCtxAborting = 2147803139,
    mtsErrCtxNoContext = 2147803140,
    mtsErrCtxNotRegistered = 2147803141,
    mtsErrCtxSynchTimeout = 2147803142,
    mtsErrCtxOldReference = 2147803143,
    mtsErrCtxRoleNotFound = 2147803148,
    mtsErrCtxNoSecurity = 2147803149,
    mtsErrCtxWrongThread = 2147803150,
    mtsErrCtxTMNotAvailable = 2147803151,
    comQCErrApplicationNotQueued = 2148599296,
    comQCErrNoQueueableInterfaces = 2148599297,
    comQCErrQueuingServiceNotAvailable = 2148599298,
    comQCErrQueueTransactMismatch = 2148599299,
    comqcErrRecorderMarshalled = 2148599300,
    comqcErrOutParam = 2148599301,
    comqcErrRecorderNotTrusted = 2148599302,
    comqcErrPSLoad = 2148599303,
    comqcErrMarshaledObjSameTxn = 2148599304,
    comqcErrInvalidMessage = 2148599376,
    comqcErrMsmqSidUnavailable = 2148599377,
    comqcErrWrongMsgExtension = 2148599378,
    comqcErrMsmqServiceUnavailable = 2148599379,
    comqcErrMsgNotAuthenticated = 2148599380,
    comqcErrMsmqConnectorUsed = 2148599381,
    comqcErrBadMarshaledObject = 2148599382,
} AutoSvcs_Error_Constants;

typedef enum {
    LockSetGet = 0,
    LockMethod = 1,
} LockModes;

typedef enum {
    Standard = 0,
    Process = 1,
} ReleaseModes;

typedef enum {
    CRMFLAG_FORGETTARGET = 1,
    CRMFLAG_WRITTENDURINGPREPARE = 2,
    CRMFLAG_WRITTENDURINGCOMMIT = 4,
    CRMFLAG_WRITTENDURINGABORT = 8,
    CRMFLAG_WRITTENDURINGRECOVERY = 16,
    CRMFLAG_WRITTENDURINGREPLAY = 32,
    CRMFLAG_REPLAYINPROGRESS = 64,
} CRMFLAGS;

typedef enum {
    CRMREGFLAG_PREPAREPHASE = 1,
    CRMREGFLAG_COMMITPHASE = 2,
    CRMREGFLAG_ABORTPHASE = 4,
    CRMREGFLAG_ALLPHASES = 7,
    CRMREGFLAG_FAILIFINDOUBTSREMAIN = 16,
} CRMREGFLAGS;

typedef int CEventSystem;

typedef int CEventPublisher;

typedef int CEventClass;

typedef int CEventSubscription;

typedef int EventObjectChange;

typedef int EventObjectChange2;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEventSystem;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEventClass;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEventClass2;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEventSubscription;

// TODO: this type is limited to platform 'windows5.0'
typedef int IFiringControl;

// TODO: this type is limited to platform 'windows5.0'
typedef int IPublisherFilter;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMultiInterfacePublisherFilter;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEventObjectChange;

typedef int COMEVENTSYSCHANGEINFO;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEventObjectChange2;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEnumEventObject;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEventObjectCollection;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEventControl;

// TODO: this type is limited to platform 'windows5.0'
typedef int IMultiInterfaceEventControl;

typedef int IDontSupportEventSubscription;


//--------------------------------------------------------------------------------
// Section: Functions (9)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.1.2600'
/*HRESULT*/void CoGetDefaultContext();

// TODO: this type is limited to platform 'windows5.1.2600'
/*HRESULT*/void CoCreateActivity();

// TODO: this type is limited to platform 'windows5.1.2600'
/*HRESULT*/void CoEnterServiceDomain();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void CoLeaveServiceDomain();

// TODO: this type is limited to platform 'windows5.1.2600'
/*HRESULT*/void GetManagedExtensions();

// TODO: this type is limited to platform 'windows5.0'
/*?*c_void*/void SafeRef();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void RecycleSurrogate();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void MTSCreateActivity();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void GetDispenserManager();

