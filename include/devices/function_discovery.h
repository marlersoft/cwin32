// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (32)
//--------------------------------------------------------------------------------
#define FD_EVENTID_PRIVATE (UINT)100
#define FD_EVENTID (UINT)1000
#define FD_EVENTID_ASYNCTHREADEXIT (UINT)1001
#define FD_EVENTID_SEARCHSTART (UINT)1002
#define FD_EVENTID_IPADDRESSCHANGE (UINT)1003
#define FD_EVENTID_QUERYREFRESH (UINT)1004
#define SID_PnpProvider GUID { "8101368e-cabb-4426-acff-96c410812000" }
#define SID_UPnPActivator GUID { "0d0d66eb-cf74-4164-b52f-08344672dd46" }
#define SID_EnumInterface GUID { "40eab0b9-4d7f-4b53-a334-1581dd9041f4" }
#define SID_PNPXPropertyStore GUID { "a86530b1-542f-439f-b71c-b0756b13677a" }
#define SID_PNPXAssociation GUID { "cee8ccc9-4f6b-4469-a235-5a22869eef03" }
#define SID_PNPXServiceCollection GUID { "439e80ee-a217-4712-9fa6-deabd9c2a727" }
#define SID_FDPairingHandler GUID { "383b69fa-5486-49da-91f5-d63c24c8e9d0" }
#define SID_EnumDeviceFunction GUID { "13e0e9e2-c3fa-4e3c-906e-64502fa4dc95" }
#define SID_UnpairProvider GUID { "89a502fc-857b-4698-a0b7-027192002f9e" }
#define SID_DeviceDisplayStatusManager GUID { "f59aa553-8309-46ca-9736-1ac3c62d6031" }
#define SID_FunctionDiscoveryProviderRefresh GUID { "2b4cbdc9-31c4-40d4-a62d-772aa174ed52" }
#define SID_UninstallDeviceFunction GUID { "c920566e-5671-4496-8025-bf0b89bd44cd" }
#define FMTID_FD GUID { "904b03a2-471d-423c-a584-f3483238a146" }
#define FD_Visibility_Default (UINT)0
#define FD_Visibility_Hidden (UINT)1
#define FMTID_Device GUID { "78c34fc8-104a-4aca-9ea4-524d52996e57" }
#define FMTID_DeviceInterface GUID { "53808008-07bb-4661-bc3c-b5953e708560" }
#define FMTID_Pairing GUID { "8807cae6-7db6-4f10-8ee4-435eaa1392bc" }
#define FMTID_WSD GUID { "92506491-ff95-4724-a05a-5b81885a7c92" }
#define FMTID_PNPX GUID { "656a3bb3-ecc0-43fd-8477-4ae0404a96cd" }
#define FMTID_PNPXDynamicProperty GUID { "4fc5077e-b686-44be-93e3-86cafe368ccd" }
#define PNPX_INSTALLSTATE_NOTINSTALLED (UINT)0
#define PNPX_INSTALLSTATE_INSTALLED (UINT)1
#define PNPX_INSTALLSTATE_INSTALLING (UINT)2
#define PNPX_INSTALLSTATE_FAILED (UINT)3
#define FD_LONGHORN (UINT)1

//--------------------------------------------------------------------------------
// Section: Types (23)
//--------------------------------------------------------------------------------
typedef enum {
    QC_EQUALS = 0,
    QC_NOTEQUAL = 1,
    QC_LESSTHAN = 2,
    QC_LESSTHANOREQUAL = 3,
    QC_GREATERTHAN = 4,
    QC_GREATERTHANOREQUAL = 5,
    QC_STARTSWITH = 6,
    QC_EXISTS = 7,
    QC_DOESNOTEXIST = 8,
    QC_CONTAINS = 9,
} PropertyConstraint;

typedef enum {
    SVF_SYSTEM = 0,
    SVF_USER = 1,
} SystemVisibilityFlags;

typedef enum {
    QUA_ADD = 0,
    QUA_REMOVE = 1,
    QUA_CHANGE = 2,
} QueryUpdateAction;

typedef enum {
    QCT_PROVIDER = 0,
    QCT_LAYERED = 1,
} QueryCategoryType;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionDiscoveryNotification;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionDiscovery;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionInstance;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionInstanceCollection;

typedef int IPropertyStoreCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionInstanceQuery;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionInstanceCollectionQuery;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionDiscoveryProvider;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IProviderProperties;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IProviderPublishing;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionDiscoveryProviderFactory;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionDiscoveryProviderQuery;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IProviderQueryConstraintCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IProviderPropertyConstraintCollection;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFunctionDiscoveryServiceProvider;

typedef int PNPXAssociation;

typedef int PNPXPairingHandler;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IPNPXAssociation;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IPNPXDeviceAssociation;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
