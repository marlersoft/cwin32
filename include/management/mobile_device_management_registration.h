// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (62)
//--------------------------------------------------------------------------------
#define MDM_REGISTRATION_FACILITY_CODE (UINT)25
#define DEVICE_ENROLLER_FACILITY_CODE (UINT)24
#define MREGISTER_E_DEVICE_MESSAGE_FORMAT_ERROR (HRESULT)(INT)-2145845247
#define MENROLL_E_DEVICE_MESSAGE_FORMAT_ERROR (HRESULT)(INT)-2145910783
#define MREGISTER_E_DEVICE_AUTHENTICATION_ERROR (HRESULT)(INT)-2145845246
#define MENROLL_E_DEVICE_AUTHENTICATION_ERROR (HRESULT)(INT)-2145910782
#define MREGISTER_E_DEVICE_AUTHORIZATION_ERROR (HRESULT)(INT)-2145845245
#define MENROLL_E_DEVICE_AUTHORIZATION_ERROR (HRESULT)(INT)-2145910781
#define MREGISTER_E_DEVICE_CERTIFCATEREQUEST_ERROR (HRESULT)(INT)-2145845244
#define MENROLL_E_DEVICE_CERTIFCATEREQUEST_ERROR (HRESULT)(INT)-2145910780
#define MREGISTER_E_DEVICE_CONFIGMGRSERVER_ERROR (HRESULT)(INT)-2145845243
#define MENROLL_E_DEVICE_CONFIGMGRSERVER_ERROR (HRESULT)(INT)-2145910779
#define MREGISTER_E_DEVICE_INTERNALSERVICE_ERROR (HRESULT)(INT)-2145845242
#define MENROLL_E_DEVICE_INTERNALSERVICE_ERROR (HRESULT)(INT)-2145910778
#define MREGISTER_E_DEVICE_INVALIDSECURITY_ERROR (HRESULT)(INT)-2145845241
#define MENROLL_E_DEVICE_INVALIDSECURITY_ERROR (HRESULT)(INT)-2145910777
#define MREGISTER_E_DEVICE_UNKNOWN_ERROR (HRESULT)(INT)-2145845240
#define MENROLL_E_DEVICE_UNKNOWN_ERROR (HRESULT)(INT)-2145910776
#define MREGISTER_E_REGISTRATION_IN_PROGRESS (HRESULT)(INT)-2145845239
#define MENROLL_E_ENROLLMENT_IN_PROGRESS (HRESULT)(INT)-2145910775
#define MREGISTER_E_DEVICE_ALREADY_REGISTERED (HRESULT)(INT)-2145845238
#define MENROLL_E_DEVICE_ALREADY_ENROLLED (HRESULT)(INT)-2145910774
#define MREGISTER_E_DEVICE_NOT_REGISTERED (HRESULT)(INT)-2145845237
#define MENROLL_E_DEVICE_NOT_ENROLLED (HRESULT)(INT)-2145910773
#define MREGISTER_E_DISCOVERY_REDIRECTED (HRESULT)(INT)-2145845236
#define MREGISTER_E_DEVICE_NOT_AD_REGISTERED_ERROR (HRESULT)(INT)-2145845235
#define MENROLL_E_DISCOVERY_SEC_CERT_DATE_INVALID (HRESULT)(INT)-2145910771
#define MREGISTER_E_DISCOVERY_FAILED (HRESULT)(INT)-2145845234
#define MENROLL_E_PASSWORD_NEEDED (HRESULT)(INT)-2145910770
#define MENROLL_E_WAB_ERROR (HRESULT)(INT)-2145910769
#define MENROLL_E_CONNECTIVITY (HRESULT)(INT)-2145910768
#define MENROLL_S_ENROLLMENT_SUSPENDED (HRESULT)(INT)1572881
#define MENROLL_E_INVALIDSSLCERT (HRESULT)(INT)-2145910766
#define MENROLL_E_DEVICECAPREACHED (HRESULT)(INT)-2145910765
#define MENROLL_E_DEVICENOTSUPPORTED (HRESULT)(INT)-2145910764
#define MENROLL_E_NOTSUPPORTED (HRESULT)(INT)-2145910763
#define MENROLL_E_NOTELIGIBLETORENEW (HRESULT)(INT)-2145910762
#define MENROLL_E_INMAINTENANCE (HRESULT)(INT)-2145910761
#define MENROLL_E_USERLICENSE (HRESULT)(INT)-2145910760
#define MENROLL_E_ENROLLMENTDATAINVALID (HRESULT)(INT)-2145910759
#define MENROLL_E_INSECUREREDIRECT (HRESULT)(INT)-2145910758
#define MENROLL_E_PLATFORM_WRONG_STATE (HRESULT)(INT)-2145910757
#define MENROLL_E_PLATFORM_LICENSE_ERROR (HRESULT)(INT)-2145910756
#define MENROLL_E_PLATFORM_UNKNOWN_ERROR (HRESULT)(INT)-2145910755
#define MENROLL_E_PROV_CSP_CERTSTORE (HRESULT)(INT)-2145910754
#define MENROLL_E_PROV_CSP_W7 (HRESULT)(INT)-2145910753
#define MENROLL_E_PROV_CSP_DMCLIENT (HRESULT)(INT)-2145910752
#define MENROLL_E_PROV_CSP_PFW (HRESULT)(INT)-2145910751
#define MENROLL_E_PROV_CSP_MISC (HRESULT)(INT)-2145910750
#define MENROLL_E_PROV_UNKNOWN (HRESULT)(INT)-2145910749
#define MENROLL_E_PROV_SSLCERTNOTFOUND (HRESULT)(INT)-2145910748
#define MENROLL_E_PROV_CSP_APPMGMT (HRESULT)(INT)-2145910747
#define MENROLL_E_DEVICE_MANAGEMENT_BLOCKED (HRESULT)(INT)-2145910746
#define MENROLL_E_CERTPOLICY_PRIVATEKEYCREATION_FAILED (HRESULT)(INT)-2145910745
#define MENROLL_E_CERTAUTH_FAILED_TO_FIND_CERT (HRESULT)(INT)-2145910744
#define MENROLL_E_EMPTY_MESSAGE (HRESULT)(INT)-2145910743
#define MENROLL_E_USER_CANCELED (HRESULT)(INT)-2145910742
#define MENROLL_E_MDM_NOT_CONFIGURED (HRESULT)(INT)-2145910741
#define DEVICEREGISTRATIONTYPE_MDM_ONLY (UINT)0
#define DEVICEREGISTRATIONTYPE_MAM (UINT)5
#define DEVICEREGISTRATIONTYPE_MDM_DEVICEWIDE_WITH_AAD (UINT)6
#define DEVICEREGISTRATIONTYPE_MDM_USERSPECIFIC_WITH_AAD (UINT)13

//--------------------------------------------------------------------------------
// Section: Types (3)
//--------------------------------------------------------------------------------
typedef int MANAGEMENT_SERVICE_INFO;

typedef int MANAGEMENT_REGISTRATION_INFO;

typedef enum {
    DeviceRegistrationBasicInfo = 1,
    MaxDeviceInfoClass = 2,
} REGISTRATION_INFORMATION_CLASS;


//--------------------------------------------------------------------------------
// Section: Functions (12)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void GetDeviceRegistrationInfo();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void IsDeviceRegisteredWithManagement();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void IsManagementRegistrationAllowed();

/*HRESULT*/void IsMdmUxWithoutAadAllowed();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void SetManagedExternally();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void DiscoverManagementService();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void RegisterDeviceWithManagementUsingAADCredentials();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void RegisterDeviceWithManagementUsingAADDeviceCredentials();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void RegisterDeviceWithManagement();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void UnregisterDeviceWithManagement();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void GetManagementAppHyperlink();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void DiscoverManagementServiceEx();
