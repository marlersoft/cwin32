// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (1)
//--------------------------------------------------------------------------------
#define AVRF_MAX_TRACES (UINT)32

//--------------------------------------------------------------------------------
// Section: Types (12)
//--------------------------------------------------------------------------------
typedef enum {
    AVRF_ENUM_RESOURCES_FLAGS_DONT_RESOLVE_TRACES = 2,
    AVRF_ENUM_RESOURCES_FLAGS_SUSPEND = 1,
} VERIFIER_ENUM_RESOURCE_FLAGS;

typedef int AVRF_BACKTRACE_INFORMATION;

typedef enum {
    AllocationStateUnknown = 0,
    AllocationStateBusy = 1,
    AllocationStateFree = 2,
} eUserAllocationState;

typedef enum {
    HeapFullPageHeap = 1073741824,
    HeapMetadata = -2147483648,
    HeapStateMask = -65536,
} eHeapAllocationState;

typedef enum {
    HeapEnumerationEverything = 0,
    HeapEnumerationStop = -1,
} eHeapEnumerationLevel;

typedef int AVRF_HEAP_ALLOCATION;

typedef enum {
    OperationDbUnused = 0,
    OperationDbOPEN = 1,
    OperationDbCLOSE = 2,
    OperationDbBADREF = 3,
} eHANDLE_TRACE_OPERATIONS;

typedef int AVRF_HANDLE_OPERATION;

typedef enum {
    AvrfResourceHeapAllocation = 0,
    AvrfResourceHandleTrace = 1,
    AvrfResourceMax = 2,
} eAvrfResourceTypes;

typedef int AVRF_RESOURCE_ENUMERATE_CALLBACK;

typedef int AVRF_HEAPALLOCATION_ENUMERATE_CALLBACK;

typedef int AVRF_HANDLEOPERATION_ENUMERATE_CALLBACK;


//--------------------------------------------------------------------------------
// Section: Functions (1)
//--------------------------------------------------------------------------------
/*u32*/void VerifierEnumerateResource();

