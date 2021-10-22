// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (4)
//--------------------------------------------------------------------------------
#define DISPID_EVENT_ON_STATE_CHANGED (UINT)5
#define DISPID_EVENT_ON_TERMINATION (UINT)6
#define DISPID_EVENT_ON_CONTEXT_DATA (UINT)7
#define DISPID_EVENT_ON_SEND_ERROR (UINT)8

//--------------------------------------------------------------------------------
// Section: Types (6)
//--------------------------------------------------------------------------------
typedef int RendezvousApplication;

typedef enum {
    RSS_UNKNOWN = 0,
    RSS_READY = 1,
    RSS_INVITATION = 2,
    RSS_ACCEPTED = 3,
    RSS_CONNECTED = 4,
    RSS_CANCELLED = 5,
    RSS_DECLINED = 6,
    RSS_TERMINATED = 7,
} RENDEZVOUS_SESSION_STATE;

typedef enum {
    RSF_NONE = 0,
    RSF_INVITER = 1,
    RSF_INVITEE = 2,
    RSF_ORIGINAL_INVITER = 4,
    RSF_REMOTE_LEGACYSESSION = 8,
    RSF_REMOTE_WIN7SESSION = 16,
} RENDEZVOUS_SESSION_FLAGS;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRendezvousSession;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DRendezvousSessionEvents;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRendezvousApplication;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------