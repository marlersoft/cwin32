// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (24)
//--------------------------------------------------------------------------------
#define RDCE_TABLE_FULL (UINT)2147745793
#define RDCE_TABLE_CORRUPT (UINT)2147745794
#define MSRDC_SIGNATURE_HASHSIZE (UINT)16
#define SimilarityFileIdMinSize (UINT)4
#define SimilarityFileIdMaxSize (UINT)32
#define MSRDC_VERSION (UINT)65536
#define MSRDC_MINIMUM_COMPATIBLE_APP_VERSION (UINT)65536
#define MSRDC_MINIMUM_DEPTH (UINT)1
#define MSRDC_MAXIMUM_DEPTH (UINT)8
#define MSRDC_MINIMUM_COMPAREBUFFER (UINT)100000
#define MSRDC_MAXIMUM_COMPAREBUFFER (UINT)1073741824
#define MSRDC_DEFAULT_COMPAREBUFFER (UINT)3200000
#define MSRDC_MINIMUM_INPUTBUFFERSIZE (UINT)1024
#define MSRDC_MINIMUM_HORIZONSIZE (UINT)128
#define MSRDC_MAXIMUM_HORIZONSIZE (UINT)16384
#define MSRDC_MINIMUM_HASHWINDOWSIZE (UINT)2
#define MSRDC_MAXIMUM_HASHWINDOWSIZE (UINT)96
#define MSRDC_DEFAULT_HASHWINDOWSIZE_1 (UINT)48
#define MSRDC_DEFAULT_HORIZONSIZE_1 (UINT)1024
#define MSRDC_DEFAULT_HASHWINDOWSIZE_N (UINT)2
#define MSRDC_DEFAULT_HORIZONSIZE_N (UINT)128
#define MSRDC_MAXIMUM_TRAITVALUE (UINT)63
#define MSRDC_MINIMUM_MATCHESREQUIRED (UINT)1
#define MSRDC_MAXIMUM_MATCHESREQUIRED (UINT)16

//--------------------------------------------------------------------------------
// Section: Types (48)
//--------------------------------------------------------------------------------
typedef int RdcLibrary;

typedef int RdcGeneratorParameters;

typedef int RdcGeneratorFilterMaxParameters;

typedef int RdcGenerator;

typedef int RdcFileReader;

typedef int RdcSignatureReader;

typedef int RdcComparator;

typedef int SimilarityReportProgress;

typedef int SimilarityTableDumpState;

typedef int SimilarityTraitsTable;

typedef int SimilarityFileIdTable;

typedef int Similarity;

typedef int RdcSimilarityGenerator;

typedef int FindSimilarResults;

typedef int SimilarityTraitsMapping;

typedef int SimilarityTraitsMappedView;

typedef enum {
    RDC_NoError = 0,
    RDC_HeaderVersionNewer = 1,
    RDC_HeaderVersionOlder = 2,
    RDC_HeaderMissingOrCorrupt = 3,
    RDC_HeaderWrongType = 4,
    RDC_DataMissingOrCorrupt = 5,
    RDC_DataTooManyRecords = 6,
    RDC_FileChecksumMismatch = 7,
    RDC_ApplicationError = 8,
    RDC_Aborted = 9,
    RDC_Win32Error = 10,
} RDC_ErrorCode;

typedef enum {
    RDCGENTYPE_Unused = 0,
    RDCGENTYPE_FilterMax = 1,
} GeneratorParametersType;

typedef enum {
    RDCNEED_SOURCE = 0,
    RDCNEED_TARGET = 1,
    RDCNEED_SEED = 2,
    RDCNEED_SEED_MAX = 255,
} RdcNeedType;

typedef int RdcNeed;

typedef int RdcBufferPointer;

typedef int RdcNeedPointer;

typedef int RdcSignature;

typedef int RdcSignaturePointer;

typedef enum {
    RDCTABLE_InvalidOrUnknown = 0,
    RDCTABLE_Existing = 1,
    RDCTABLE_New = 2,
} RdcCreatedTables;

typedef enum {
    RDCMAPPING_Undefined = 0,
    RDCMAPPING_ReadOnly = 1,
    RDCMAPPING_ReadWrite = 2,
} RdcMappingAccessMode;

typedef int SimilarityMappedViewInfo;

typedef int SimilarityData;

typedef int FindSimilarFileIndexResults;

typedef int SimilarityDumpData;

typedef int SimilarityFileId;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcGeneratorParameters;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcGeneratorFilterMaxParameters;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcGenerator;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcFileReader;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcFileWriter;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcSignatureReader;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcComparator;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcLibrary;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISimilarityReportProgress;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISimilarityTableDumpState;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISimilarityTraitsMappedView;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISimilarityTraitsMapping;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISimilarityTraitsTable;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISimilarityFileIdTable;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRdcSimilarityGenerator;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFindSimilarResults;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISimilarity;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
