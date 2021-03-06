// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (1)
//--------------------------------------------------------------------------------
#define PSS_PERF_RESOLUTION (UINT)1000000

//--------------------------------------------------------------------------------
// Section: Types (23)
//--------------------------------------------------------------------------------
typedef int HPSS;

typedef int HPSSWALK;

typedef enum {
    PSS_HANDLE_NONE = 0,
    PSS_HANDLE_HAVE_TYPE = 1,
    PSS_HANDLE_HAVE_NAME = 2,
    PSS_HANDLE_HAVE_BASIC_INFORMATION = 4,
    PSS_HANDLE_HAVE_TYPE_SPECIFIC_INFORMATION = 8,
} PSS_HANDLE_FLAGS;

typedef enum {
    PSS_OBJECT_TYPE_UNKNOWN = 0,
    PSS_OBJECT_TYPE_PROCESS = 1,
    PSS_OBJECT_TYPE_THREAD = 2,
    PSS_OBJECT_TYPE_MUTANT = 3,
    PSS_OBJECT_TYPE_EVENT = 4,
    PSS_OBJECT_TYPE_SECTION = 5,
    PSS_OBJECT_TYPE_SEMAPHORE = 6,
} PSS_OBJECT_TYPE;

typedef enum {
    PSS_CAPTURE_NONE = 0,
    PSS_CAPTURE_VA_CLONE = 1,
    PSS_CAPTURE_RESERVED_00000002 = 2,
    PSS_CAPTURE_HANDLES = 4,
    PSS_CAPTURE_HANDLE_NAME_INFORMATION = 8,
    PSS_CAPTURE_HANDLE_BASIC_INFORMATION = 16,
    PSS_CAPTURE_HANDLE_TYPE_SPECIFIC_INFORMATION = 32,
    PSS_CAPTURE_HANDLE_TRACE = 64,
    PSS_CAPTURE_THREADS = 128,
    PSS_CAPTURE_THREAD_CONTEXT = 256,
    PSS_CAPTURE_THREAD_CONTEXT_EXTENDED = 512,
    PSS_CAPTURE_RESERVED_00000400 = 1024,
    PSS_CAPTURE_VA_SPACE = 2048,
    PSS_CAPTURE_VA_SPACE_SECTION_INFORMATION = 4096,
    PSS_CAPTURE_IPT_TRACE = 8192,
    PSS_CAPTURE_RESERVED_00004000 = 16384,
    PSS_CREATE_BREAKAWAY_OPTIONAL = 67108864,
    PSS_CREATE_BREAKAWAY = 134217728,
    PSS_CREATE_FORCE_BREAKAWAY = 268435456,
    PSS_CREATE_USE_VM_ALLOCATIONS = 536870912,
    PSS_CREATE_MEASURE_PERFORMANCE = 1073741824,
    PSS_CREATE_RELEASE_SECTION = 2147483648,
} PSS_CAPTURE_FLAGS;

typedef enum {
    PSS_QUERY_PROCESS_INFORMATION = 0,
    PSS_QUERY_VA_CLONE_INFORMATION = 1,
    PSS_QUERY_AUXILIARY_PAGES_INFORMATION = 2,
    PSS_QUERY_VA_SPACE_INFORMATION = 3,
    PSS_QUERY_HANDLE_INFORMATION = 4,
    PSS_QUERY_THREAD_INFORMATION = 5,
    PSS_QUERY_HANDLE_TRACE_INFORMATION = 6,
    PSS_QUERY_PERFORMANCE_COUNTERS = 7,
} PSS_QUERY_INFORMATION_CLASS;

typedef enum {
    PSS_WALK_AUXILIARY_PAGES = 0,
    PSS_WALK_VA_SPACE = 1,
    PSS_WALK_HANDLES = 2,
    PSS_WALK_THREADS = 3,
} PSS_WALK_INFORMATION_CLASS;

typedef enum {
    PSS_DUPLICATE_NONE = 0,
    PSS_DUPLICATE_CLOSE_SOURCE = 1,
} PSS_DUPLICATE_FLAGS;

typedef enum {
    PSS_PROCESS_FLAGS_NONE = 0,
    PSS_PROCESS_FLAGS_PROTECTED = 1,
    PSS_PROCESS_FLAGS_WOW64 = 2,
    PSS_PROCESS_FLAGS_RESERVED_03 = 4,
    PSS_PROCESS_FLAGS_RESERVED_04 = 8,
    PSS_PROCESS_FLAGS_FROZEN = 16,
} PSS_PROCESS_FLAGS;

typedef int PSS_PROCESS_INFORMATION;

typedef int PSS_VA_CLONE_INFORMATION;

typedef int PSS_AUXILIARY_PAGES_INFORMATION;

typedef int PSS_VA_SPACE_INFORMATION;

typedef int PSS_HANDLE_INFORMATION;

typedef int PSS_THREAD_INFORMATION;

typedef int PSS_HANDLE_TRACE_INFORMATION;

typedef int PSS_PERFORMANCE_COUNTERS;

typedef int PSS_AUXILIARY_PAGE_ENTRY;

typedef int PSS_VA_SPACE_ENTRY;

typedef int PSS_HANDLE_ENTRY;

typedef enum {
    PSS_THREAD_FLAGS_NONE = 0,
    PSS_THREAD_FLAGS_TERMINATED = 1,
} PSS_THREAD_FLAGS;

typedef int PSS_THREAD_ENTRY;

typedef int PSS_ALLOCATOR;


//--------------------------------------------------------------------------------
// Section: Functions (10)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssCaptureSnapshot();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssFreeSnapshot();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssQuerySnapshot();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssWalkSnapshot();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssDuplicateSnapshot();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssWalkMarkerCreate();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssWalkMarkerFree();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssWalkMarkerGetPosition();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssWalkMarkerSetPosition();

// TODO: this type is limited to platform 'windows8.1'
/*u32*/void PssWalkMarkerSeekToBeginning();

