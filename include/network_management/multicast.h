// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (3)
//--------------------------------------------------------------------------------
#define MCAST_CLIENT_ID_LEN (UINT)17
#define MCAST_API_VERSION_0 (INT)0
#define MCAST_API_VERSION_1 (INT)1

//--------------------------------------------------------------------------------
// Section: Types (6)
//--------------------------------------------------------------------------------
typedef int IPNG_ADDRESS;

typedef int MCAST_CLIENT_UID;

typedef int MCAST_SCOPE_CTX;

typedef int MCAST_SCOPE_ENTRY;

typedef int MCAST_LEASE_REQUEST;

typedef int MCAST_LEASE_RESPONSE;


//--------------------------------------------------------------------------------
// Section: Functions (7)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
/*u32*/void McastApiStartup();

// TODO: this type is limited to platform 'windows5.0'
/*void*/void McastApiCleanup();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void McastGenUID();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void McastEnumerateScopes();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void McastRequestAddress();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void McastRenewAddress();

// TODO: this type is limited to platform 'windows5.0'
/*u32*/void McastReleaseAddress();

