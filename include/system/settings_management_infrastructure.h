// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (4)
//--------------------------------------------------------------------------------
#define WCM_SETTINGS_ID_FLAG_REFERENCE (UINT)0
#define WCM_SETTINGS_ID_FLAG_DEFINITION (UINT)1
#define LINK_STORE_TO_ENGINE_INSTANCE (UINT)1
#define LIMITED_VALIDATION_MODE (UINT)1

//--------------------------------------------------------------------------------
// Section: Types (16)
//--------------------------------------------------------------------------------
typedef int SettingsEngine;

typedef enum {
    OfflineMode = 1,
    OnlineMode = 2,
} WcmTargetMode;

typedef enum {
    SharedEnumeration = 1,
    UserEnumeration = 2,
    AllEnumeration = 3,
} WcmNamespaceEnumerationFlags;

typedef enum {
    dataTypeByte = 1,
    dataTypeSByte = 2,
    dataTypeUInt16 = 3,
    dataTypeInt16 = 4,
    dataTypeUInt32 = 5,
    dataTypeInt32 = 6,
    dataTypeUInt64 = 7,
    dataTypeInt64 = 8,
    dataTypeBoolean = 11,
    dataTypeString = 12,
    dataTypeFlagArray = 32768,
} WcmDataType;

typedef enum {
    settingTypeScalar = 1,
    settingTypeComplex = 2,
    settingTypeList = 3,
} WcmSettingType;

typedef enum {
    restrictionFacetMaxLength = 1,
    restrictionFacetEnumeration = 2,
    restrictionFacetMaxInclusive = 4,
    restrictionFacetMinInclusive = 8,
} WcmRestrictionFacets;

typedef enum {
    UnknownStatus = 0,
    UserRegistered = 1,
    UserUnregistered = 2,
    UserLoaded = 3,
    UserUnloaded = 4,
} WcmUserStatus;

typedef enum {
    ReadOnlyAccess = 1,
    ReadWriteAccess = 2,
} WcmNamespaceAccess;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IItemEnumerator;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISettingsIdentity;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ITargetInfo;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISettingsEngine;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISettingsItem;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISettingsNamespace;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISettingsResult;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int ISettingsContext;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------