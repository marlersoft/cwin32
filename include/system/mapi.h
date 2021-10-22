// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (52)
//--------------------------------------------------------------------------------
#define MAPI_OLE (UINT)1
#define MAPI_OLE_STATIC (UINT)2
#define MAPI_ORIG (UINT)0
#define MAPI_TO (UINT)1
#define MAPI_CC (UINT)2
#define MAPI_BCC (UINT)3
#define MAPI_UNREAD (UINT)1
#define MAPI_RECEIPT_REQUESTED (UINT)2
#define MAPI_SENT (UINT)4
#define MAPI_LOGON_UI (UINT)1
#define MAPI_PASSWORD_UI (UINT)131072
#define MAPI_NEW_SESSION (UINT)2
#define MAPI_FORCE_DOWNLOAD (UINT)4096
#define MAPI_EXTENDED (UINT)32
#define MAPI_DIALOG (UINT)8
#define MAPI_FORCE_UNICODE (UINT)262144
#define MAPI_UNREAD_ONLY (UINT)32
#define MAPI_GUARANTEE_FIFO (UINT)256
#define MAPI_LONG_MSGID (UINT)16384
#define MAPI_PEEK (UINT)128
#define MAPI_SUPPRESS_ATTACH (UINT)2048
#define MAPI_ENVELOPE_ONLY (UINT)64
#define MAPI_BODY_AS_FILE (UINT)512
#define MAPI_AB_NOMODIFY (UINT)1024
#define SUCCESS_SUCCESS (UINT)0
#define MAPI_USER_ABORT (UINT)1
#define MAPI_E_FAILURE (UINT)2
#define MAPI_E_LOGON_FAILURE (UINT)3
#define MAPI_E_DISK_FULL (UINT)4
#define MAPI_E_INSUFFICIENT_MEMORY (UINT)5
#define MAPI_E_ACCESS_DENIED (UINT)6
#define MAPI_E_TOO_MANY_SESSIONS (UINT)8
#define MAPI_E_TOO_MANY_FILES (UINT)9
#define MAPI_E_TOO_MANY_RECIPIENTS (UINT)10
#define MAPI_E_ATTACHMENT_NOT_FOUND (UINT)11
#define MAPI_E_ATTACHMENT_OPEN_FAILURE (UINT)12
#define MAPI_E_ATTACHMENT_WRITE_FAILURE (UINT)13
#define MAPI_E_UNKNOWN_RECIPIENT (UINT)14
#define MAPI_E_BAD_RECIPTYPE (UINT)15
#define MAPI_E_NO_MESSAGES (UINT)16
#define MAPI_E_INVALID_MESSAGE (UINT)17
#define MAPI_E_TEXT_TOO_LARGE (UINT)18
#define MAPI_E_INVALID_SESSION (UINT)19
#define MAPI_E_TYPE_NOT_SUPPORTED (UINT)20
#define MAPI_E_AMBIGUOUS_RECIPIENT (UINT)21
#define MAPI_E_MESSAGE_IN_USE (UINT)22
#define MAPI_E_NETWORK_FAILURE (UINT)23
#define MAPI_E_INVALID_EDITFIELDS (UINT)24
#define MAPI_E_INVALID_RECIPS (UINT)25
#define MAPI_E_NOT_SUPPORTED (UINT)26
#define MAPI_E_UNICODE_NOT_SUPPORTED (UINT)27
#define MAPI_E_ATTACHMENT_TOO_LARGE (UINT)28

//--------------------------------------------------------------------------------
// Section: Types (20)
//--------------------------------------------------------------------------------
typedef int MapiFileDesc;

typedef int MapiFileDescW;

typedef int MapiFileTagExt;

typedef int MapiRecipDesc;

typedef int MapiRecipDescW;

typedef int MapiMessage;

typedef int MapiMessageW;

typedef int LPMAPILOGON;

typedef int LPMAPILOGOFF;

typedef int LPMAPISENDMAIL;

typedef int LPMAPISENDMAILW;

typedef int LPMAPISENDDOCUMENTS;

typedef int LPMAPIFINDNEXT;

typedef int LPMAPIREADMAIL;

typedef int LPMAPISAVEMAIL;

typedef int LPMAPIDELETEMAIL;

typedef int LPMAPIFREEBUFFER;

typedef int LPMAPIADDRESS;

typedef int LPMAPIDETAILS;

typedef int LPMAPIRESOLVENAME;


//--------------------------------------------------------------------------------
// Section: Functions (1)
//--------------------------------------------------------------------------------
/*u32*/void MAPIFreeBuffer();

