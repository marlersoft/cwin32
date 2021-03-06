// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (19)
//--------------------------------------------------------------------------------
#define EVCF_HASSETTINGS (UINT)1
#define EVCF_ENABLEBYDEFAULT (UINT)2
#define EVCF_REMOVEFROMLIST (UINT)4
#define EVCF_ENABLEBYDEFAULT_AUTO (UINT)8
#define EVCF_DONTSHOWIFZERO (UINT)16
#define EVCF_SETTINGSMODE (UINT)32
#define EVCF_OUTOFDISKSPACE (UINT)64
#define EVCF_USERCONSENTOBTAINED (UINT)128
#define EVCF_SYSTEMAUTORUN (UINT)256
#define EVCCBF_LASTNOTIFICATION (UINT)1
#define STATEBITS_FLAT (UINT)1
#define REC_S_IDIDTHEUPDATES (HRESULT)(INT)266240
#define REC_S_NOTCOMPLETE (HRESULT)(INT)266241
#define REC_S_NOTCOMPLETEBUTPROPAGATE (HRESULT)(INT)266242
#define REC_E_ABORTED (HRESULT)(INT)-2147217408
#define REC_E_NOCALLBACK (HRESULT)(INT)-2147217407
#define REC_E_NORESIDUES (HRESULT)(INT)-2147217406
#define REC_E_TOODIFFERENT (HRESULT)(INT)-2147217405
#define REC_E_INEEDTODOTHEUPDATES (HRESULT)(INT)-2147217404

//--------------------------------------------------------------------------------
// Section: Types (9)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
typedef int IEmptyVolumeCacheCallBack;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEmptyVolumeCache;

// TODO: this type is limited to platform 'windows5.0'
typedef int IEmptyVolumeCache2;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IReconcileInitiator;

typedef enum {
    RECONCILEF_MAYBOTHERUSER = 1,
    RECONCILEF_FEEDBACKWINDOWVALID = 2,
    RECONCILEF_NORESIDUESOK = 4,
    RECONCILEF_OMITSELFRESIDUE = 8,
    RECONCILEF_RESUMERECONCILIATION = 16,
    RECONCILEF_YOUMAYDOTHEUPDATES = 32,
    RECONCILEF_ONLYYOUWERECHANGED = 64,
    ALL_RECONCILE_FLAGS = 127,
} _reconcilef;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IReconcilableObject;

typedef int IBriefcaseInitiator;

// TODO: this type is limited to platform 'windows5.0'
typedef int IActiveDesktopP;

// TODO: this type is limited to platform 'windows5.0'
typedef int IADesktopP2;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
