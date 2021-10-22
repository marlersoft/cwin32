// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (4)
//--------------------------------------------------------------------------------
#define COMDB_MIN_PORTS_ARBITRATED (UINT)256
#define COMDB_MAX_PORTS_ARBITRATED (UINT)4096
#define CDB_REPORT_BITS (UINT)0
#define CDB_REPORT_BYTES (UINT)1

//--------------------------------------------------------------------------------
// Section: Types (1)
//--------------------------------------------------------------------------------
typedef int HCOMDB;


//--------------------------------------------------------------------------------
// Section: Functions (7)
//--------------------------------------------------------------------------------
/*i32*/void ComDBOpen();

/*i32*/void ComDBClose();

/*i32*/void ComDBGetCurrentPortUsage();

/*i32*/void ComDBClaimNextFreePort();

/*i32*/void ComDBClaimPort();

/*i32*/void ComDBReleasePort();

/*i32*/void ComDBResizeDatabase();

