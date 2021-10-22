// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (83)
//--------------------------------------------------------------------------------
#define FADF_AUTO (UINT)1
#define FADF_STATIC (UINT)2
#define FADF_EMBEDDED (UINT)4
#define FADF_FIXEDSIZE (UINT)16
#define FADF_RECORD (UINT)32
#define FADF_HAVEIID (UINT)64
#define FADF_HAVEVARTYPE (UINT)128
#define FADF_BSTR (UINT)256
#define FADF_UNKNOWN (UINT)512
#define FADF_DISPATCH (UINT)1024
#define FADF_VARIANT (UINT)2048
#define FADF_RESERVED (UINT)61448
#define PARAMFLAG_NONE (UINT)0
#define PARAMFLAG_FIN (UINT)1
#define PARAMFLAG_FOUT (UINT)2
#define PARAMFLAG_FLCID (UINT)4
#define PARAMFLAG_FRETVAL (UINT)8
#define PARAMFLAG_FOPT (UINT)16
#define PARAMFLAG_FHASDEFAULT (UINT)32
#define PARAMFLAG_FHASCUSTDATA (UINT)64
#define IMPLTYPEFLAG_FDEFAULT (UINT)1
#define IMPLTYPEFLAG_FSOURCE (UINT)2
#define IMPLTYPEFLAG_FRESTRICTED (UINT)4
#define IMPLTYPEFLAG_FDEFAULTVTABLE (UINT)8
#define DISPID_UNKNOWN (INT)-1
#define DISPID_VALUE (UINT)0
#define DISPID_PROPERTYPUT (INT)-3
#define DISPID_NEWENUM (INT)-4
#define DISPID_EVALUATE (INT)-5
#define DISPID_CONSTRUCTOR (INT)-6
#define DISPID_DESTRUCTOR (INT)-7
#define DISPID_COLLECT (INT)-8
#define STDOLE_MAJORVERNUM (UINT)1
#define STDOLE_MINORVERNUM (UINT)0
#define STDOLE_LCID (UINT)0
#define STDOLE2_MAJORVERNUM (UINT)2
#define STDOLE2_MINORVERNUM (UINT)0
#define STDOLE2_LCID (UINT)0
#define VARIANT_NOVALUEPROP (UINT)1
#define VARIANT_ALPHABOOL (UINT)2
#define VARIANT_NOUSEROVERRIDE (UINT)4
#define VARIANT_CALENDAR_HIJRI (UINT)8
#define VARIANT_LOCALBOOL (UINT)16
#define VARIANT_CALENDAR_THAI (UINT)32
#define VARIANT_CALENDAR_GREGORIAN (UINT)64
#define VARIANT_USE_NLS (UINT)128
#define LOCALE_USE_NLS (UINT)268435456
#define VTDATEGRE_MAX (UINT)2958465
#define VTDATEGRE_MIN (INT)-657434
#define NUMPRS_LEADING_WHITE (UINT)1
#define NUMPRS_TRAILING_WHITE (UINT)2
#define NUMPRS_LEADING_PLUS (UINT)4
#define NUMPRS_TRAILING_PLUS (UINT)8
#define NUMPRS_LEADING_MINUS (UINT)16
#define NUMPRS_TRAILING_MINUS (UINT)32
#define NUMPRS_HEX_OCT (UINT)64
#define NUMPRS_PARENS (UINT)128
#define NUMPRS_DECIMAL (UINT)256
#define NUMPRS_THOUSANDS (UINT)512
#define NUMPRS_CURRENCY (UINT)1024
#define NUMPRS_EXPONENT (UINT)2048
#define NUMPRS_USE_ALL (UINT)4096
#define NUMPRS_STD (UINT)8191
#define NUMPRS_NEG (UINT)65536
#define NUMPRS_INEXACT (UINT)131072
#define VARCMP_LT (UINT)0
#define VARCMP_EQ (UINT)1
#define VARCMP_GT (UINT)2
#define VARCMP_NULL (UINT)3
#define ID_DEFAULTINST (INT)-2
#define DISPATCH_METHOD (UINT)1
#define DISPATCH_PROPERTYGET (UINT)2
#define DISPATCH_PROPERTYPUT (UINT)4
#define DISPATCH_PROPERTYPUTREF (UINT)8
#define LOAD_TLB_AS_32BIT (UINT)32
#define LOAD_TLB_AS_64BIT (UINT)64
#define ACTIVEOBJECT_STRONG (UINT)0
#define ACTIVEOBJECT_WEAK (UINT)1
#define SID_VariantConversion GUID { "1f101481-bccd-11d0-9336-00a0c90dcaa9" }
#define SID_GetCaller GUID { "4717cc40-bcb9-11d0-9336-00a0c90dcaa9" }
#define SID_ProvideRuntimeContext GUID { "74a5040c-dd0c-48f0-ac85-194c3259180a" }
#define DISPATCH_CONSTRUCT (UINT)16384
#define DISPID_THIS (INT)-613

//--------------------------------------------------------------------------------
// Section: Types (78)
//--------------------------------------------------------------------------------
typedef int LPEXCEPFINO_DEFERRED_FILLIN;

typedef int SAFEARRAYBOUND;

typedef int _wireSAFEARR_BSTR;

typedef int _wireSAFEARR_UNKNOWN;

typedef int _wireSAFEARR_DISPATCH;

typedef int _wireSAFEARR_VARIANT;

typedef int _wireSAFEARR_BRECORD;

typedef int _wireSAFEARR_HAVEIID;

typedef enum {
    SF_ERROR = 10,
    SF_I1 = 16,
    SF_I2 = 2,
    SF_I4 = 3,
    SF_I8 = 20,
    SF_BSTR = 8,
    SF_UNKNOWN = 13,
    SF_DISPATCH = 9,
    SF_VARIANT = 12,
    SF_RECORD = 36,
    SF_HAVEIID = 32781,
} SF_TYPE;

typedef int _wireSAFEARRAY_UNION;

typedef int _wireSAFEARRAY;

typedef int SAFEARRAY;

typedef int VARIANT;

typedef int _wireBRECORD;

typedef int _wireVARIANT;

typedef enum {
    TKIND_ENUM = 0,
    TKIND_RECORD = 1,
    TKIND_MODULE = 2,
    TKIND_INTERFACE = 3,
    TKIND_DISPATCH = 4,
    TKIND_COCLASS = 5,
    TKIND_ALIAS = 6,
    TKIND_UNION = 7,
    TKIND_MAX = 8,
} TYPEKIND;

typedef int TYPEDESC;

typedef int ARRAYDESC;

typedef int PARAMDESCEX;

typedef int PARAMDESC;

typedef int IDLDESC;

typedef int ELEMDESC;

typedef int TYPEATTR;

typedef int DISPPARAMS;

typedef int EXCEPINFO;

typedef enum {
    CC_FASTCALL = 0,
    CC_CDECL = 1,
    CC_MSCPASCAL = 2,
    CC_PASCAL = 2,
    CC_MACPASCAL = 3,
    CC_STDCALL = 4,
    CC_FPFASTCALL = 5,
    CC_SYSCALL = 6,
    CC_MPWCDECL = 7,
    CC_MPWPASCAL = 8,
    CC_MAX = 9,
} CALLCONV;

typedef enum {
    FUNC_VIRTUAL = 0,
    FUNC_PUREVIRTUAL = 1,
    FUNC_NONVIRTUAL = 2,
    FUNC_STATIC = 3,
    FUNC_DISPATCH = 4,
} FUNCKIND;

typedef enum {
    INVOKE_FUNC = 1,
    INVOKE_PROPERTYGET = 2,
    INVOKE_PROPERTYPUT = 4,
    INVOKE_PROPERTYPUTREF = 8,
} INVOKEKIND;

typedef int FUNCDESC;

typedef enum {
    VAR_PERINSTANCE = 0,
    VAR_STATIC = 1,
    VAR_CONST = 2,
    VAR_DISPATCH = 3,
} VARKIND;

typedef int VARDESC;

typedef enum {
    TYPEFLAG_FAPPOBJECT = 1,
    TYPEFLAG_FCANCREATE = 2,
    TYPEFLAG_FLICENSED = 4,
    TYPEFLAG_FPREDECLID = 8,
    TYPEFLAG_FHIDDEN = 16,
    TYPEFLAG_FCONTROL = 32,
    TYPEFLAG_FDUAL = 64,
    TYPEFLAG_FNONEXTENSIBLE = 128,
    TYPEFLAG_FOLEAUTOMATION = 256,
    TYPEFLAG_FRESTRICTED = 512,
    TYPEFLAG_FAGGREGATABLE = 1024,
    TYPEFLAG_FREPLACEABLE = 2048,
    TYPEFLAG_FDISPATCHABLE = 4096,
    TYPEFLAG_FREVERSEBIND = 8192,
    TYPEFLAG_FPROXY = 16384,
} TYPEFLAGS;

typedef enum {
    FUNCFLAG_FRESTRICTED = 1,
    FUNCFLAG_FSOURCE = 2,
    FUNCFLAG_FBINDABLE = 4,
    FUNCFLAG_FREQUESTEDIT = 8,
    FUNCFLAG_FDISPLAYBIND = 16,
    FUNCFLAG_FDEFAULTBIND = 32,
    FUNCFLAG_FHIDDEN = 64,
    FUNCFLAG_FUSESGETLASTERROR = 128,
    FUNCFLAG_FDEFAULTCOLLELEM = 256,
    FUNCFLAG_FUIDEFAULT = 512,
    FUNCFLAG_FNONBROWSABLE = 1024,
    FUNCFLAG_FREPLACEABLE = 2048,
    FUNCFLAG_FIMMEDIATEBIND = 4096,
} FUNCFLAGS;

typedef enum {
    VARFLAG_FREADONLY = 1,
    VARFLAG_FSOURCE = 2,
    VARFLAG_FBINDABLE = 4,
    VARFLAG_FREQUESTEDIT = 8,
    VARFLAG_FDISPLAYBIND = 16,
    VARFLAG_FDEFAULTBIND = 32,
    VARFLAG_FHIDDEN = 64,
    VARFLAG_FRESTRICTED = 128,
    VARFLAG_FDEFAULTCOLLELEM = 256,
    VARFLAG_FUIDEFAULT = 512,
    VARFLAG_FNONBROWSABLE = 1024,
    VARFLAG_FREPLACEABLE = 2048,
    VARFLAG_FIMMEDIATEBIND = 4096,
} VARFLAGS;

typedef int CLEANLOCALSTORAGE;

typedef int CUSTDATAITEM;

typedef int CUSTDATA;

typedef int ICreateTypeInfo;

typedef int ICreateTypeInfo2;

typedef int ICreateTypeLib;

typedef int ICreateTypeLib2;

typedef int IDispatch;

typedef int IEnumVARIANT;

typedef enum {
    DESCKIND_NONE = 0,
    DESCKIND_FUNCDESC = 1,
    DESCKIND_VARDESC = 2,
    DESCKIND_TYPECOMP = 3,
    DESCKIND_IMPLICITAPPOBJ = 4,
    DESCKIND_MAX = 5,
} DESCKIND;

typedef int BINDPTR;

typedef int ITypeComp;

typedef int ITypeInfo;

typedef int ITypeInfo2;

typedef enum {
    SYS_WIN16 = 0,
    SYS_WIN32 = 1,
    SYS_MAC = 2,
    SYS_WIN64 = 3,
} SYSKIND;

typedef enum {
    LIBFLAG_FRESTRICTED = 1,
    LIBFLAG_FCONTROL = 2,
    LIBFLAG_FHIDDEN = 4,
    LIBFLAG_FHASDISKIMAGE = 8,
} LIBFLAGS;

typedef int TLIBATTR;

typedef int ITypeLib;

typedef int ITypeLib2;

typedef enum {
    CHANGEKIND_ADDMEMBER = 0,
    CHANGEKIND_DELETEMEMBER = 1,
    CHANGEKIND_SETNAMES = 2,
    CHANGEKIND_SETDOCUMENTATION = 3,
    CHANGEKIND_GENERAL = 4,
    CHANGEKIND_INVALIDATE = 5,
    CHANGEKIND_CHANGEFAILED = 6,
    CHANGEKIND_MAX = 7,
} CHANGEKIND;

typedef int ITypeChangeEvents;

typedef int IErrorInfo;

typedef int ICreateErrorInfo;

typedef int ISupportErrorInfo;

typedef int ITypeFactory;

typedef int ITypeMarshal;

typedef int IRecordInfo;

typedef int IErrorLog;

typedef int IPropertyBag;

typedef int ITypeLibRegistrationReader;

typedef int ITypeLibRegistration;

typedef int NUMPARSE;

typedef int UDATE;

typedef enum {
    REGKIND_DEFAULT = 0,
    REGKIND_REGISTER = 1,
    REGKIND_NONE = 2,
} REGKIND;

typedef int PARAMDATA;

typedef int METHODDATA;

typedef int INTERFACEDATA;

typedef int IDispatchEx;

typedef int IDispError;

typedef int IVariantChangeType;

typedef int IObjectIdentity;

typedef int ICanHandleException;

typedef int IProvideRuntimeContext;

typedef enum {
    VT_EMPTY = 0,
    VT_NULL = 1,
    VT_I2 = 2,
    VT_I4 = 3,
    VT_R4 = 4,
    VT_R8 = 5,
    VT_CY = 6,
    VT_DATE = 7,
    VT_BSTR = 8,
    VT_DISPATCH = 9,
    VT_ERROR = 10,
    VT_BOOL = 11,
    VT_VARIANT = 12,
    VT_UNKNOWN = 13,
    VT_DECIMAL = 14,
    VT_I1 = 16,
    VT_UI1 = 17,
    VT_UI2 = 18,
    VT_UI4 = 19,
    VT_I8 = 20,
    VT_UI8 = 21,
    VT_INT = 22,
    VT_UINT = 23,
    VT_VOID = 24,
    VT_HRESULT = 25,
    VT_PTR = 26,
    VT_SAFEARRAY = 27,
    VT_CARRAY = 28,
    VT_USERDEFINED = 29,
    VT_LPSTR = 30,
    VT_LPWSTR = 31,
    VT_RECORD = 36,
    VT_INT_PTR = 37,
    VT_UINT_PTR = 38,
    VT_FILETIME = 64,
    VT_BLOB = 65,
    VT_STREAM = 66,
    VT_STORAGE = 67,
    VT_STREAMED_OBJECT = 68,
    VT_STORED_OBJECT = 69,
    VT_BLOB_OBJECT = 70,
    VT_CF = 71,
    VT_CLSID = 72,
    VT_VERSIONED_STREAM = 73,
    VT_BSTR_BLOB = 4095,
    VT_VECTOR = 4096,
    VT_ARRAY = 8192,
    VT_BYREF = 16384,
    VT_RESERVED = 32768,
    VT_ILLEGAL = 65535,
    VT_ILLEGALMASKED = 4095,
    VT_TYPEMASK = 4095,
} VARENUM;


//--------------------------------------------------------------------------------
// Section: Functions (402)
//--------------------------------------------------------------------------------
/*u32*/void BSTR_UserSize();

/*?*u8*/void BSTR_UserMarshal();

/*?*u8*/void BSTR_UserUnmarshal();

/*void*/void BSTR_UserFree();

/*u32*/void HWND_UserSize();

/*?*u8*/void HWND_UserMarshal();

/*?*u8*/void HWND_UserUnmarshal();

/*void*/void HWND_UserFree();

/*u32*/void VARIANT_UserSize();

/*?*u8*/void VARIANT_UserMarshal();

/*?*u8*/void VARIANT_UserUnmarshal();

/*void*/void VARIANT_UserFree();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void BSTR_UserSize64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*?*u8*/void BSTR_UserMarshal64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*?*u8*/void BSTR_UserUnmarshal64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void BSTR_UserFree64();

/*u32*/void HWND_UserSize64();

/*?*u8*/void HWND_UserMarshal64();

/*?*u8*/void HWND_UserUnmarshal64();

/*void*/void HWND_UserFree64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void VARIANT_UserSize64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*?*u8*/void VARIANT_UserMarshal64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*?*u8*/void VARIANT_UserUnmarshal64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void VARIANT_UserFree64();

/*i32*/void DosDateTimeToVariantTime();

/*i32*/void VariantTimeToDosDateTime();

/*i32*/void SystemTimeToVariantTime();

/*i32*/void VariantTimeToSystemTime();

/*HRESULT*/void SafeArrayAllocDescriptor();

/*HRESULT*/void SafeArrayAllocDescriptorEx();

/*HRESULT*/void SafeArrayAllocData();

/*?*SAFEARRAY*/void SafeArrayCreate();

/*?*SAFEARRAY*/void SafeArrayCreateEx();

/*HRESULT*/void SafeArrayCopyData();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void SafeArrayReleaseDescriptor();

/*HRESULT*/void SafeArrayDestroyDescriptor();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void SafeArrayReleaseData();

/*HRESULT*/void SafeArrayDestroyData();

// TODO: this type is limited to platform 'windows5.1.2600'
/*HRESULT*/void SafeArrayAddRef();

/*HRESULT*/void SafeArrayDestroy();

/*HRESULT*/void SafeArrayRedim();

/*u32*/void SafeArrayGetDim();

/*u32*/void SafeArrayGetElemsize();

/*HRESULT*/void SafeArrayGetUBound();

/*HRESULT*/void SafeArrayGetLBound();

/*HRESULT*/void SafeArrayLock();

/*HRESULT*/void SafeArrayUnlock();

/*HRESULT*/void SafeArrayAccessData();

/*HRESULT*/void SafeArrayUnaccessData();

/*HRESULT*/void SafeArrayGetElement();

/*HRESULT*/void SafeArrayPutElement();

/*HRESULT*/void SafeArrayCopy();

/*HRESULT*/void SafeArrayPtrOfIndex();

/*HRESULT*/void SafeArraySetRecordInfo();

/*HRESULT*/void SafeArrayGetRecordInfo();

/*HRESULT*/void SafeArraySetIID();

/*HRESULT*/void SafeArrayGetIID();

/*HRESULT*/void SafeArrayGetVartype();

/*?*SAFEARRAY*/void SafeArrayCreateVector();

/*?*SAFEARRAY*/void SafeArrayCreateVectorEx();

/*void*/void VariantInit();

/*HRESULT*/void VariantClear();

/*HRESULT*/void VariantCopy();

/*HRESULT*/void VariantCopyInd();

/*HRESULT*/void VariantChangeType();

/*HRESULT*/void VariantChangeTypeEx();

/*HRESULT*/void VectorFromBstr();

/*HRESULT*/void BstrFromVector();

/*HRESULT*/void VarUI1FromI2();

/*HRESULT*/void VarUI1FromI4();

/*HRESULT*/void VarUI1FromI8();

/*HRESULT*/void VarUI1FromR4();

/*HRESULT*/void VarUI1FromR8();

/*HRESULT*/void VarUI1FromCy();

/*HRESULT*/void VarUI1FromDate();

/*HRESULT*/void VarUI1FromStr();

/*HRESULT*/void VarUI1FromDisp();

/*HRESULT*/void VarUI1FromBool();

/*HRESULT*/void VarUI1FromI1();

/*HRESULT*/void VarUI1FromUI2();

/*HRESULT*/void VarUI1FromUI4();

/*HRESULT*/void VarUI1FromUI8();

/*HRESULT*/void VarUI1FromDec();

/*HRESULT*/void VarI2FromUI1();

/*HRESULT*/void VarI2FromI4();

/*HRESULT*/void VarI2FromI8();

/*HRESULT*/void VarI2FromR4();

/*HRESULT*/void VarI2FromR8();

/*HRESULT*/void VarI2FromCy();

/*HRESULT*/void VarI2FromDate();

/*HRESULT*/void VarI2FromStr();

/*HRESULT*/void VarI2FromDisp();

/*HRESULT*/void VarI2FromBool();

/*HRESULT*/void VarI2FromI1();

/*HRESULT*/void VarI2FromUI2();

/*HRESULT*/void VarI2FromUI4();

/*HRESULT*/void VarI2FromUI8();

/*HRESULT*/void VarI2FromDec();

/*HRESULT*/void VarI4FromUI1();

/*HRESULT*/void VarI4FromI2();

/*HRESULT*/void VarI4FromI8();

/*HRESULT*/void VarI4FromR4();

/*HRESULT*/void VarI4FromR8();

/*HRESULT*/void VarI4FromCy();

/*HRESULT*/void VarI4FromDate();

/*HRESULT*/void VarI4FromStr();

/*HRESULT*/void VarI4FromDisp();

/*HRESULT*/void VarI4FromBool();

/*HRESULT*/void VarI4FromI1();

/*HRESULT*/void VarI4FromUI2();

/*HRESULT*/void VarI4FromUI4();

/*HRESULT*/void VarI4FromUI8();

/*HRESULT*/void VarI4FromDec();

/*HRESULT*/void VarI8FromUI1();

/*HRESULT*/void VarI8FromI2();

/*HRESULT*/void VarI8FromR4();

/*HRESULT*/void VarI8FromR8();

/*HRESULT*/void VarI8FromCy();

/*HRESULT*/void VarI8FromDate();

/*HRESULT*/void VarI8FromStr();

/*HRESULT*/void VarI8FromDisp();

/*HRESULT*/void VarI8FromBool();

/*HRESULT*/void VarI8FromI1();

/*HRESULT*/void VarI8FromUI2();

/*HRESULT*/void VarI8FromUI4();

/*HRESULT*/void VarI8FromUI8();

/*HRESULT*/void VarI8FromDec();

/*HRESULT*/void VarR4FromUI1();

/*HRESULT*/void VarR4FromI2();

/*HRESULT*/void VarR4FromI4();

/*HRESULT*/void VarR4FromI8();

/*HRESULT*/void VarR4FromR8();

/*HRESULT*/void VarR4FromCy();

/*HRESULT*/void VarR4FromDate();

/*HRESULT*/void VarR4FromStr();

/*HRESULT*/void VarR4FromDisp();

/*HRESULT*/void VarR4FromBool();

/*HRESULT*/void VarR4FromI1();

/*HRESULT*/void VarR4FromUI2();

/*HRESULT*/void VarR4FromUI4();

/*HRESULT*/void VarR4FromUI8();

/*HRESULT*/void VarR4FromDec();

/*HRESULT*/void VarR8FromUI1();

/*HRESULT*/void VarR8FromI2();

/*HRESULT*/void VarR8FromI4();

/*HRESULT*/void VarR8FromI8();

/*HRESULT*/void VarR8FromR4();

/*HRESULT*/void VarR8FromCy();

/*HRESULT*/void VarR8FromDate();

/*HRESULT*/void VarR8FromStr();

/*HRESULT*/void VarR8FromDisp();

/*HRESULT*/void VarR8FromBool();

/*HRESULT*/void VarR8FromI1();

/*HRESULT*/void VarR8FromUI2();

/*HRESULT*/void VarR8FromUI4();

/*HRESULT*/void VarR8FromUI8();

/*HRESULT*/void VarR8FromDec();

/*HRESULT*/void VarDateFromUI1();

/*HRESULT*/void VarDateFromI2();

/*HRESULT*/void VarDateFromI4();

/*HRESULT*/void VarDateFromI8();

/*HRESULT*/void VarDateFromR4();

/*HRESULT*/void VarDateFromR8();

/*HRESULT*/void VarDateFromCy();

/*HRESULT*/void VarDateFromStr();

/*HRESULT*/void VarDateFromDisp();

/*HRESULT*/void VarDateFromBool();

/*HRESULT*/void VarDateFromI1();

/*HRESULT*/void VarDateFromUI2();

/*HRESULT*/void VarDateFromUI4();

/*HRESULT*/void VarDateFromUI8();

/*HRESULT*/void VarDateFromDec();

/*HRESULT*/void VarCyFromUI1();

/*HRESULT*/void VarCyFromI2();

/*HRESULT*/void VarCyFromI4();

/*HRESULT*/void VarCyFromI8();

/*HRESULT*/void VarCyFromR4();

/*HRESULT*/void VarCyFromR8();

/*HRESULT*/void VarCyFromDate();

/*HRESULT*/void VarCyFromStr();

/*HRESULT*/void VarCyFromDisp();

/*HRESULT*/void VarCyFromBool();

/*HRESULT*/void VarCyFromI1();

/*HRESULT*/void VarCyFromUI2();

/*HRESULT*/void VarCyFromUI4();

/*HRESULT*/void VarCyFromUI8();

/*HRESULT*/void VarCyFromDec();

/*HRESULT*/void VarBstrFromUI1();

/*HRESULT*/void VarBstrFromI2();

/*HRESULT*/void VarBstrFromI4();

/*HRESULT*/void VarBstrFromI8();

/*HRESULT*/void VarBstrFromR4();

/*HRESULT*/void VarBstrFromR8();

/*HRESULT*/void VarBstrFromCy();

/*HRESULT*/void VarBstrFromDate();

/*HRESULT*/void VarBstrFromDisp();

/*HRESULT*/void VarBstrFromBool();

/*HRESULT*/void VarBstrFromI1();

/*HRESULT*/void VarBstrFromUI2();

/*HRESULT*/void VarBstrFromUI4();

/*HRESULT*/void VarBstrFromUI8();

/*HRESULT*/void VarBstrFromDec();

/*HRESULT*/void VarBoolFromUI1();

/*HRESULT*/void VarBoolFromI2();

/*HRESULT*/void VarBoolFromI4();

/*HRESULT*/void VarBoolFromI8();

/*HRESULT*/void VarBoolFromR4();

/*HRESULT*/void VarBoolFromR8();

/*HRESULT*/void VarBoolFromDate();

/*HRESULT*/void VarBoolFromCy();

/*HRESULT*/void VarBoolFromStr();

/*HRESULT*/void VarBoolFromDisp();

/*HRESULT*/void VarBoolFromI1();

/*HRESULT*/void VarBoolFromUI2();

/*HRESULT*/void VarBoolFromUI4();

/*HRESULT*/void VarBoolFromUI8();

/*HRESULT*/void VarBoolFromDec();

/*HRESULT*/void VarI1FromUI1();

/*HRESULT*/void VarI1FromI2();

/*HRESULT*/void VarI1FromI4();

/*HRESULT*/void VarI1FromI8();

/*HRESULT*/void VarI1FromR4();

/*HRESULT*/void VarI1FromR8();

/*HRESULT*/void VarI1FromDate();

/*HRESULT*/void VarI1FromCy();

/*HRESULT*/void VarI1FromStr();

/*HRESULT*/void VarI1FromDisp();

/*HRESULT*/void VarI1FromBool();

/*HRESULT*/void VarI1FromUI2();

/*HRESULT*/void VarI1FromUI4();

/*HRESULT*/void VarI1FromUI8();

/*HRESULT*/void VarI1FromDec();

/*HRESULT*/void VarUI2FromUI1();

/*HRESULT*/void VarUI2FromI2();

/*HRESULT*/void VarUI2FromI4();

/*HRESULT*/void VarUI2FromI8();

/*HRESULT*/void VarUI2FromR4();

/*HRESULT*/void VarUI2FromR8();

/*HRESULT*/void VarUI2FromDate();

/*HRESULT*/void VarUI2FromCy();

/*HRESULT*/void VarUI2FromStr();

/*HRESULT*/void VarUI2FromDisp();

/*HRESULT*/void VarUI2FromBool();

/*HRESULT*/void VarUI2FromI1();

/*HRESULT*/void VarUI2FromUI4();

/*HRESULT*/void VarUI2FromUI8();

/*HRESULT*/void VarUI2FromDec();

/*HRESULT*/void VarUI4FromUI1();

/*HRESULT*/void VarUI4FromI2();

/*HRESULT*/void VarUI4FromI4();

/*HRESULT*/void VarUI4FromI8();

/*HRESULT*/void VarUI4FromR4();

/*HRESULT*/void VarUI4FromR8();

/*HRESULT*/void VarUI4FromDate();

/*HRESULT*/void VarUI4FromCy();

/*HRESULT*/void VarUI4FromStr();

/*HRESULT*/void VarUI4FromDisp();

/*HRESULT*/void VarUI4FromBool();

/*HRESULT*/void VarUI4FromI1();

/*HRESULT*/void VarUI4FromUI2();

/*HRESULT*/void VarUI4FromUI8();

/*HRESULT*/void VarUI4FromDec();

/*HRESULT*/void VarUI8FromUI1();

/*HRESULT*/void VarUI8FromI2();

/*HRESULT*/void VarUI8FromI8();

/*HRESULT*/void VarUI8FromR4();

/*HRESULT*/void VarUI8FromR8();

/*HRESULT*/void VarUI8FromCy();

/*HRESULT*/void VarUI8FromDate();

/*HRESULT*/void VarUI8FromStr();

/*HRESULT*/void VarUI8FromDisp();

/*HRESULT*/void VarUI8FromBool();

/*HRESULT*/void VarUI8FromI1();

/*HRESULT*/void VarUI8FromUI2();

/*HRESULT*/void VarUI8FromUI4();

/*HRESULT*/void VarUI8FromDec();

/*HRESULT*/void VarDecFromUI1();

/*HRESULT*/void VarDecFromI2();

/*HRESULT*/void VarDecFromI4();

/*HRESULT*/void VarDecFromI8();

/*HRESULT*/void VarDecFromR4();

/*HRESULT*/void VarDecFromR8();

/*HRESULT*/void VarDecFromDate();

/*HRESULT*/void VarDecFromCy();

/*HRESULT*/void VarDecFromStr();

/*HRESULT*/void VarDecFromDisp();

/*HRESULT*/void VarDecFromBool();

/*HRESULT*/void VarDecFromI1();

/*HRESULT*/void VarDecFromUI2();

/*HRESULT*/void VarDecFromUI4();

/*HRESULT*/void VarDecFromUI8();

/*HRESULT*/void VarParseNumFromStr();

/*HRESULT*/void VarNumFromParseNum();

/*HRESULT*/void VarAdd();

/*HRESULT*/void VarAnd();

/*HRESULT*/void VarCat();

/*HRESULT*/void VarDiv();

/*HRESULT*/void VarEqv();

/*HRESULT*/void VarIdiv();

/*HRESULT*/void VarImp();

/*HRESULT*/void VarMod();

/*HRESULT*/void VarMul();

/*HRESULT*/void VarOr();

/*HRESULT*/void VarPow();

/*HRESULT*/void VarSub();

/*HRESULT*/void VarXor();

/*HRESULT*/void VarAbs();

/*HRESULT*/void VarFix();

/*HRESULT*/void VarInt();

/*HRESULT*/void VarNeg();

/*HRESULT*/void VarNot();

/*HRESULT*/void VarRound();

/*HRESULT*/void VarCmp();

/*HRESULT*/void VarDecAdd();

/*HRESULT*/void VarDecDiv();

/*HRESULT*/void VarDecMul();

/*HRESULT*/void VarDecSub();

/*HRESULT*/void VarDecAbs();

/*HRESULT*/void VarDecFix();

/*HRESULT*/void VarDecInt();

/*HRESULT*/void VarDecNeg();

/*HRESULT*/void VarDecRound();

/*HRESULT*/void VarDecCmp();

/*HRESULT*/void VarDecCmpR8();

/*HRESULT*/void VarCyAdd();

/*HRESULT*/void VarCyMul();

/*HRESULT*/void VarCyMulI4();

/*HRESULT*/void VarCyMulI8();

/*HRESULT*/void VarCySub();

/*HRESULT*/void VarCyAbs();

/*HRESULT*/void VarCyFix();

/*HRESULT*/void VarCyInt();

/*HRESULT*/void VarCyNeg();

/*HRESULT*/void VarCyRound();

/*HRESULT*/void VarCyCmp();

/*HRESULT*/void VarCyCmpR8();

/*HRESULT*/void VarBstrCat();

/*HRESULT*/void VarBstrCmp();

/*HRESULT*/void VarR8Pow();

/*HRESULT*/void VarR4CmpR8();

/*HRESULT*/void VarR8Round();

/*HRESULT*/void VarDateFromUdate();

/*HRESULT*/void VarDateFromUdateEx();

/*HRESULT*/void VarUdateFromDate();

/*HRESULT*/void GetAltMonthNames();

/*HRESULT*/void VarFormat();

/*HRESULT*/void VarFormatDateTime();

/*HRESULT*/void VarFormatNumber();

/*HRESULT*/void VarFormatPercent();

/*HRESULT*/void VarFormatCurrency();

/*HRESULT*/void VarWeekdayName();

/*HRESULT*/void VarMonthName();

/*HRESULT*/void VarFormatFromTokens();

/*HRESULT*/void VarTokenizeFormatString();

/*u32*/void LHashValOfNameSysA();

/*u32*/void LHashValOfNameSys();

/*HRESULT*/void LoadTypeLib();

/*HRESULT*/void LoadTypeLibEx();

/*HRESULT*/void LoadRegTypeLib();

/*HRESULT*/void QueryPathOfRegTypeLib();

/*HRESULT*/void RegisterTypeLib();

/*HRESULT*/void UnRegisterTypeLib();

/*HRESULT*/void RegisterTypeLibForUser();

/*HRESULT*/void UnRegisterTypeLibForUser();

/*HRESULT*/void CreateTypeLib();

/*HRESULT*/void CreateTypeLib2();

/*HRESULT*/void DispGetParam();

/*HRESULT*/void DispGetIDsOfNames();

/*HRESULT*/void DispInvoke();

/*HRESULT*/void CreateDispTypeInfo();

/*HRESULT*/void CreateStdDispatch();

/*HRESULT*/void DispCallFunc();

/*HRESULT*/void RegisterActiveObject();

/*HRESULT*/void RevokeActiveObject();

/*HRESULT*/void GetActiveObject();

/*HRESULT*/void SetErrorInfo();

/*HRESULT*/void GetErrorInfo();

/*HRESULT*/void CreateErrorInfo();

/*HRESULT*/void GetRecordInfoFromTypeInfo();

/*HRESULT*/void GetRecordInfoFromGuids();

/*u32*/void OaBuildVersion();

/*void*/void ClearCustData();

/*void*/void OaEnablePerUserTLibRegistration();

/*u32*/void STGMEDIUM_UserSize();

/*?*u8*/void STGMEDIUM_UserMarshal();

/*?*u8*/void STGMEDIUM_UserUnmarshal();

/*void*/void STGMEDIUM_UserFree();

/*u32*/void STGMEDIUM_UserSize64();

/*?*u8*/void STGMEDIUM_UserMarshal64();

/*?*u8*/void STGMEDIUM_UserUnmarshal64();

/*void*/void STGMEDIUM_UserFree64();

/*HRESULT*/void OleLoadPictureFile();

/*HRESULT*/void OleLoadPictureFileEx();

/*HRESULT*/void OleSavePictureFile();

/*u32*/void LPSAFEARRAY_UserSize();

/*?*u8*/void LPSAFEARRAY_UserMarshal();

/*?*u8*/void LPSAFEARRAY_UserUnmarshal();

/*void*/void LPSAFEARRAY_UserFree();

// TODO: this type is limited to platform 'windows5.1.2600'
/*u32*/void LPSAFEARRAY_UserSize64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*?*u8*/void LPSAFEARRAY_UserMarshal64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*?*u8*/void LPSAFEARRAY_UserUnmarshal64();

// TODO: this type is limited to platform 'windows5.1.2600'
/*void*/void LPSAFEARRAY_UserFree64();
