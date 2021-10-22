// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (64)
//--------------------------------------------------------------------------------
#define WM_DDE_FIRST (UINT)992
#define WM_DDE_TERMINATE (UINT)993
#define WM_DDE_ADVISE (UINT)994
#define WM_DDE_UNADVISE (UINT)995
#define WM_DDE_ACK (UINT)996
#define WM_DDE_DATA (UINT)997
#define WM_DDE_REQUEST (UINT)998
#define WM_DDE_POKE (UINT)999
#define WM_DDE_EXECUTE (UINT)1000
#define WM_DDE_LAST (UINT)1000
#define CADV_LATEACK (UINT)65535
#define DDE_FACK (UINT)32768
#define DDE_FBUSY (UINT)16384
#define DDE_FDEFERUPD (UINT)16384
#define DDE_FACKREQ (UINT)32768
#define DDE_FRELEASE (UINT)8192
#define DDE_FREQUESTED (UINT)4096
#define DDE_FAPPSTATUS (UINT)255
#define DDE_FNOTPROCESSED (UINT)0
#define MSGF_DDEMGR (UINT)32769
#define CP_WINANSI (INT)1004
#define CP_WINUNICODE (INT)1200
#define XTYPF_NOBLOCK (UINT)2
#define XTYPF_NODATA (UINT)4
#define XTYPF_ACKREQ (UINT)8
#define XCLASS_MASK (UINT)64512
#define XCLASS_BOOL (UINT)4096
#define XCLASS_DATA (UINT)8192
#define XCLASS_FLAGS (UINT)16384
#define XCLASS_NOTIFICATION (UINT)32768
#define XTYP_MASK (UINT)240
#define XTYP_SHIFT (UINT)4
#define TIMEOUT_ASYNC (UINT)4294967295
#define QID_SYNC (UINT)4294967295
#define APPCMD_MASK (INT)4080
#define APPCLASS_MASK (INT)15
#define HDATA_APPOWNED (UINT)1
#define DMLERR_NO_ERROR (UINT)0
#define DMLERR_FIRST (UINT)16384
#define DMLERR_ADVACKTIMEOUT (UINT)16384
#define DMLERR_BUSY (UINT)16385
#define DMLERR_DATAACKTIMEOUT (UINT)16386
#define DMLERR_DLL_NOT_INITIALIZED (UINT)16387
#define DMLERR_DLL_USAGE (UINT)16388
#define DMLERR_EXECACKTIMEOUT (UINT)16389
#define DMLERR_INVALIDPARAMETER (UINT)16390
#define DMLERR_LOW_MEMORY (UINT)16391
#define DMLERR_MEMORY_ERROR (UINT)16392
#define DMLERR_NOTPROCESSED (UINT)16393
#define DMLERR_NO_CONV_ESTABLISHED (UINT)16394
#define DMLERR_POKEACKTIMEOUT (UINT)16395
#define DMLERR_POSTMSG_FAILED (UINT)16396
#define DMLERR_REENTRANCY (UINT)16397
#define DMLERR_SERVER_DIED (UINT)16398
#define DMLERR_SYS_ERROR (UINT)16399
#define DMLERR_UNADVACKTIMEOUT (UINT)16400
#define DMLERR_UNFOUND_QUEUE_ID (UINT)16401
#define DMLERR_LAST (UINT)16401
#define MH_CREATE (UINT)1
#define MH_KEEP (UINT)2
#define MH_DELETE (UINT)3
#define MH_CLEANUP (UINT)4
#define MAX_MONITORS (UINT)4
#define MF_MASK (UINT)4278190080

//--------------------------------------------------------------------------------
// Section: Types (30)
//--------------------------------------------------------------------------------
typedef enum {
    EC_ENABLEALL = 0,
    EC_ENABLEONE = 128,
    EC_DISABLE = 8,
    EC_QUERYWAITING = 2,
} DDE_ENABLE_CALLBACK_CMD;

typedef enum {
    APPCLASS_MONITOR = 1,
    APPCLASS_STANDARD = 0,
    APPCMD_CLIENTONLY = 16,
    APPCMD_FILTERINITS = 32,
    CBF_FAIL_ALLSVRXACTIONS = 258048,
    CBF_FAIL_ADVISES = 16384,
    CBF_FAIL_CONNECTIONS = 8192,
    CBF_FAIL_EXECUTES = 32768,
    CBF_FAIL_POKES = 65536,
    CBF_FAIL_REQUESTS = 131072,
    CBF_FAIL_SELFCONNECTIONS = 4096,
    CBF_SKIP_ALLNOTIFICATIONS = 3932160,
    CBF_SKIP_CONNECT_CONFIRMS = 262144,
    CBF_SKIP_DISCONNECTS = 2097152,
    CBF_SKIP_REGISTRATIONS = 524288,
    CBF_SKIP_UNREGISTRATIONS = 1048576,
    MF_CALLBACKS = 134217728,
    MF_CONV = 1073741824,
    MF_ERRORS = 268435456,
    MF_HSZ_INFO = 16777216,
    MF_LINKS = 536870912,
    MF_POSTMSGS = 67108864,
    MF_SENDMSGS = 33554432,
} DDE_INITIALIZE_COMMAND;

typedef enum {
    DNS_REGISTER = 1,
    DNS_UNREGISTER = 2,
    DNS_FILTERON = 4,
    DNS_FILTEROFF = 8,
} DDE_NAME_SERVICE_CMD;

typedef enum {
    XTYP_ADVSTART = 4144,
    XTYP_ADVSTOP = 32832,
    XTYP_EXECUTE = 16464,
    XTYP_POKE = 16528,
    XTYP_REQUEST = 8368,
    XTYP_ADVDATA = 16400,
    XTYP_ADVREQ = 8226,
    XTYP_CONNECT = 4194,
    XTYP_CONNECT_CONFIRM = 32882,
    XTYP_DISCONNECT = 32962,
    XTYP_MONITOR = 33010,
    XTYP_REGISTER = 32930,
    XTYP_UNREGISTER = 32978,
    XTYP_WILDCONNECT = 8418,
    XTYP_XACT_COMPLETE = 32896,
} DDE_CLIENT_TRANSACTION_TYPE;

typedef enum {
    XST_ADVACKRCVD = 13,
    XST_ADVDATAACKRCVD = 16,
    XST_ADVDATASENT = 15,
    XST_ADVSENT = 11,
    XST_CONNECTED = 2,
    XST_DATARCVD = 6,
    XST_EXECACKRCVD = 10,
    XST_EXECSENT = 9,
    XST_INCOMPLETE = 1,
    XST_INIT1 = 3,
    XST_INIT2 = 4,
    XST_NULL = 0,
    XST_POKEACKRCVD = 8,
    XST_POKESENT = 7,
    XST_REQSENT = 5,
    XST_UNADVACKRCVD = 14,
    XST_UNADVSENT = 12,
} CONVINFO_CONVERSATION_STATE;

typedef enum {
    ST_ADVISE = 2,
    ST_BLOCKED = 8,
    ST_BLOCKNEXT = 128,
    ST_CLIENT = 16,
    ST_CONNECTED = 1,
    ST_INLIST = 64,
    ST_ISLOCAL = 4,
    ST_ISSELF = 256,
    ST_TERMINATED = 32,
} CONVINFO_STATUS;

typedef int HSZ;

typedef int HCONV;

typedef int HCONVLIST;

typedef int HDDEDATA;

typedef int DDEACK;

typedef int DDEADVISE;

typedef int DDEDATA;

typedef int DDEPOKE;

typedef int DDELN;

typedef int DDEUP;

typedef int HSZPAIR;

typedef int CONVCONTEXT;

typedef int CONVINFO;

typedef int PFNCALLBACK;

typedef int DDEML_MSG_HOOK_DATA;

typedef int MONMSGSTRUCT;

typedef int MONCBSTRUCT;

typedef int MONHSZSTRUCTA;

typedef int MONHSZSTRUCTW;

typedef int MONERRSTRUCT;

typedef int MONLINKSTRUCT;

typedef int MONCONVSTRUCT;

typedef int METAFILEPICT;

typedef int COPYDATASTRUCT;


//--------------------------------------------------------------------------------
// Section: Functions (76)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeSetQualityOfService();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void ImpersonateDdeClientWindow();

// TODO: this type is limited to platform 'windows5.0'
/*LPARAM*/void PackDDElParam();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void UnpackDDElParam();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void FreeDDElParam();

// TODO: this type is limited to platform 'windows5.0'
/*LPARAM*/void ReuseDDElParam();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void DdeInitializeA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void DdeInitializeW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeUninitialize();

// TODO: this type is limited to platform 'windows5.0'
/*HCONVLIST*/void DdeConnectList();

// TODO: this type is limited to platform 'windows5.0'
/*HCONV*/void DdeQueryNextServer();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeDisconnectList();

// TODO: this type is limited to platform 'windows5.0'
/*HCONV*/void DdeConnect();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeDisconnect();

// TODO: this type is limited to platform 'windows5.0'
/*HCONV*/void DdeReconnect();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void DdeQueryConvInfo();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeSetUserHandle();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeAbandonTransaction();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdePostAdvise();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeEnableCallback();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeImpersonateClient();

// TODO: this type is limited to platform 'windows5.0'
/*HDDEDATA*/void DdeNameService();

// TODO: this type is limited to platform 'windows5.0'
/*HDDEDATA*/void DdeClientTransaction();

// TODO: this type is limited to platform 'windows5.0'
/*HDDEDATA*/void DdeCreateDataHandle();

// TODO: this type is limited to platform 'windows5.0'
/*HDDEDATA*/void DdeAddData();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void DdeGetData();

// TODO: this type is limited to platform 'windows5.0'
/*?*u8*/void DdeAccessData();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeUnaccessData();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeFreeDataHandle();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void DdeGetLastError();

// TODO: this type is limited to platform 'windows5.0'
/*HSZ*/void DdeCreateStringHandleA();

// TODO: this type is limited to platform 'windows5.0'
/*HSZ*/void DdeCreateStringHandleW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void DdeQueryStringA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void DdeQueryStringW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeFreeStringHandle();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void DdeKeepStringHandle();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void DdeCmpStringHandles();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void OpenClipboard();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void CloseClipboard();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetClipboardSequenceNumber();

// TODO: this type is limited to platform 'windows5.0'
/*HWND*/void GetClipboardOwner();

// TODO: this type is limited to platform 'windows5.0'
/*HWND*/void SetClipboardViewer();

// TODO: this type is limited to platform 'windows5.0'
/*HWND*/void GetClipboardViewer();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void ChangeClipboardChain();

// TODO: this type is limited to platform 'windows5.0'
/*HANDLE*/void SetClipboardData();

// TODO: this type is limited to platform 'windows5.0'
/*HANDLE*/void GetClipboardData();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void RegisterClipboardFormatA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void RegisterClipboardFormatW();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void CountClipboardFormats();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void EnumClipboardFormats();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void GetClipboardFormatNameA();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void GetClipboardFormatNameW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void EmptyClipboard();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void IsClipboardFormatAvailable();

// TODO: this type is limited to platform 'windows5.0'
/*i32*/void GetPriorityClipboardFormat();

// TODO: this type is limited to platform 'windows5.0'
/*HWND*/void GetOpenClipboardWindow();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOL*/void AddClipboardFormatListener();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOL*/void RemoveClipboardFormatListener();

// TODO: this type is limited to platform 'windows6.0.6000'
/*BOOL*/void GetUpdatedClipboardFormats();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void GlobalDeleteAtom();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void InitAtomTable();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void DeleteAtom();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void GlobalAddAtomA();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void GlobalAddAtomW();

/*u16*/void GlobalAddAtomExA();

/*u16*/void GlobalAddAtomExW();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void GlobalFindAtomA();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void GlobalFindAtomW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GlobalGetAtomNameA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GlobalGetAtomNameW();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void AddAtomA();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void AddAtomW();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void FindAtomA();

// TODO: this type is limited to platform 'windows5.0'
/*u16*/void FindAtomW();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetAtomNameA();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void GetAtomNameW();
