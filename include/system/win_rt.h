// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (8)
//--------------------------------------------------------------------------------
#define E_SURFACE_CONTENTS_LOST (UINT)2150301728
#define MAX_ERROR_MESSAGE_CHARS (UINT)512
#define CastingSourceInfo_Property_PreferredSourceUriScheme "PreferredSourceUriScheme"
#define CastingSourceInfo_Property_CastingTypes "CastingTypes"
#define CastingSourceInfo_Property_ProtectedMedia "ProtectedMedia"
#define CLSID_SoftwareBitmapNativeFactory GUID { "84e65691-8602-4a84-be46-708be9cd4b74" }
#define CLSID_AudioFrameNativeFactory GUID { "16a0a3b9-9f65-4102-9367-2cda3a4f372a" }
#define CLSID_VideoFrameNativeFactory GUID { "d194386a-04e3-4814-8100-b2b0ae6d78c7" }

//--------------------------------------------------------------------------------
// Section: Types (119)
//--------------------------------------------------------------------------------
typedef int EventRegistrationToken;

typedef int __AnonymousRecord_roapi_L45_C9;

typedef int HSTRING;

typedef int HSTRING_BUFFER;

typedef int ROPARAMIIDHANDLE;

typedef int APARTMENT_SHUTDOWN_REGISTRATION_COOKIE;

typedef enum {
    ACTIVATIONTYPE_UNCATEGORIZED = 0,
    ACTIVATIONTYPE_FROM_MONIKER = 1,
    ACTIVATIONTYPE_FROM_DATA = 2,
    ACTIVATIONTYPE_FROM_STORAGE = 4,
    ACTIVATIONTYPE_FROM_STREAM = 8,
    ACTIVATIONTYPE_FROM_FILE = 16,
} ACTIVATIONTYPE;

// TODO: this type is limited to platform 'windows8.1'
typedef int IAgileReference;

// TODO: this type is limited to platform 'windows8.0'
typedef int IApartmentShutdown;

typedef int ServerInformation;

typedef enum {
    AGILEREFERENCE_DEFAULT = 0,
    AGILEREFERENCE_DELAYEDMARSHAL = 1,
} AgileReferenceOptions;

// TODO: this type is limited to platform 'windows10.0.15063'
typedef int ISpatialInteractionManagerInterop;

// TODO: this type is limited to platform 'windows10.0.15063'
typedef int IHolographicSpaceInterop;

typedef int HSTRING_HEADER;

typedef enum {
    BaseTrust = 0,
    PartialTrust = 1,
    FullTrust = 2,
} TrustLevel;

// TODO: this type is limited to platform 'windows8.0'
typedef int IInspectable;

typedef int PINSPECT_HSTRING_CALLBACK;

typedef int PINSPECT_HSTRING_CALLBACK2;

typedef enum {
    DQTAT_COM_NONE = 0,
    DQTAT_COM_ASTA = 1,
    DQTAT_COM_STA = 2,
} DISPATCHERQUEUE_THREAD_APARTMENTTYPE;

typedef enum {
    DQTYPE_THREAD_DEDICATED = 1,
    DQTYPE_THREAD_CURRENT = 2,
} DISPATCHERQUEUE_THREAD_TYPE;

typedef int DispatcherQueueOptions;

typedef int IAccountsSettingsPaneInterop;

typedef int IAppServiceConnectionExtendedExecution;

typedef int ICorrelationVectorSource;

typedef enum {
    CASTING_CONNECTION_ERROR_STATUS_SUCCEEDED = 0,
    CASTING_CONNECTION_ERROR_STATUS_DEVICE_DID_NOT_RESPOND = 1,
    CASTING_CONNECTION_ERROR_STATUS_DEVICE_ERROR = 2,
    CASTING_CONNECTION_ERROR_STATUS_DEVICE_LOCKED = 3,
    CASTING_CONNECTION_ERROR_STATUS_PROTECTED_PLAYBACK_FAILED = 4,
    CASTING_CONNECTION_ERROR_STATUS_INVALID_CASTING_SOURCE = 5,
    CASTING_CONNECTION_ERROR_STATUS_UNKNOWN = 6,
} CASTING_CONNECTION_ERROR_STATUS;

typedef enum {
    CASTING_CONNECTION_STATE_DISCONNECTED = 0,
    CASTING_CONNECTION_STATE_CONNECTED = 1,
    CASTING_CONNECTION_STATE_RENDERING = 2,
    CASTING_CONNECTION_STATE_DISCONNECTING = 3,
    CASTING_CONNECTION_STATE_CONNECTING = 4,
} CASTING_CONNECTION_STATE;

typedef int ICastingEventHandler;

typedef int ICastingController;

typedef int ICastingSourceInfo;

typedef int IDragDropManagerInterop;

// TODO: this type is limited to platform 'windows10.0.14393'
typedef int IInputPaneInterop;

// TODO: this type is limited to platform 'windows8.0'
typedef int IPlayToManagerInterop;

typedef int IPrinting3DManagerInterop;

// TODO: this type is limited to platform 'windows8.0'
typedef int IPrintManagerInterop;

typedef int ICorrelationVectorInformation;

typedef int IUIViewSettingsInterop;

typedef int IUserActivityInterop;

typedef int IUserActivitySourceHostInterop;

typedef int IUserActivityRequestManagerInterop;

typedef int IUserConsentVerifierInterop;

typedef int IWebAuthenticationCoreManagerInterop;

typedef int PFN_PDF_CREATE_RENDERER;

typedef int PDF_RENDER_PARAMS;

typedef int IPdfRendererNative;

typedef int IDisplayDeviceInterop;

typedef int IDisplayPathInterop;

typedef int IGraphicsCaptureItemInterop;

typedef int IDirect3DDxgiInterfaceAccess;

typedef int ISoftwareBitmapNative;

typedef int ISoftwareBitmapNativeFactory;

typedef int IAudioFrameNative;

typedef int IVideoFrameNative;

typedef int IAudioFrameNativeFactory;

typedef int IVideoFrameNativeFactory;

typedef int ISurfaceImageSourceNative;

typedef int IVirtualSurfaceUpdatesCallbackNative;

typedef int IVirtualSurfaceImageSourceNative;

typedef int ISwapChainBackgroundPanelNative;

typedef int ISurfaceImageSourceManagerNative;

typedef int ISurfaceImageSourceNativeWithD2D;

typedef int ISwapChainPanelNative;

typedef int ISwapChainPanelNative2;

typedef enum {
    GRAPHICS_EFFECT_PROPERTY_MAPPING_UNKNOWN = 0,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT = 1,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_VECTORX = 2,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_VECTORY = 3,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_VECTORZ = 4,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_VECTORW = 5,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_RECT_TO_VECTOR4 = 6,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_RADIANS_TO_DEGREES = 7,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_COLORMATRIX_ALPHA_MODE = 8,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_COLOR_TO_VECTOR3 = 9,
    GRAPHICS_EFFECT_PROPERTY_MAPPING_COLOR_TO_VECTOR4 = 10,
} GRAPHICS_EFFECT_PROPERTY_MAPPING;

typedef int IGraphicsEffectD2D1Interop;

typedef int IGeometrySource2DInterop;

typedef int ICompositionDrawingSurfaceInterop;

typedef int ICompositionDrawingSurfaceInterop2;

typedef int ICompositionGraphicsDeviceInterop;

typedef int ICompositorInterop;

typedef int ISwapChainInterop;

typedef int IVisualInteractionSourceInterop;

typedef int ICompositionCapabilitiesInteropFactory;

typedef int ICompositorDesktopInterop;

typedef int IDesktopWindowTargetInterop;

typedef int IDesktopWindowContentBridgeInterop;

// TODO: this type is limited to platform 'windows8.0'
typedef int IRestrictedErrorInfo;

// TODO: this type is limited to platform 'windows8.1'
typedef int ILanguageExceptionErrorInfo;

// TODO: this type is limited to platform 'windows10.0.15063'
typedef int ILanguageExceptionTransform;

// TODO: this type is limited to platform 'windows10.0.15063'
typedef int ILanguageExceptionStackBackTrace;

// TODO: this type is limited to platform 'windows10.0.15063'
typedef int ILanguageExceptionErrorInfo2;

// TODO: this type is limited to platform 'windows8.0'
typedef int IActivationFactory;

typedef enum {
    RO_INIT_SINGLETHREADED = 0,
    RO_INIT_MULTITHREADED = 1,
} RO_INIT_TYPE;

typedef int IBufferByteAccess;

typedef enum {
    RO_ERROR_REPORTING_NONE = 0,
    RO_ERROR_REPORTING_SUPPRESSEXCEPTIONS = 1,
    RO_ERROR_REPORTING_FORCEEXCEPTIONS = 2,
    RO_ERROR_REPORTING_USESETERRORINFO = 4,
    RO_ERROR_REPORTING_SUPPRESSSETERRORINFO = 8,
} RO_ERROR_REPORTING_FLAGS;

typedef int PINSPECT_MEMORY_CALLBACK;

typedef int IRoSimpleMetaDataBuilder;

typedef int IRoMetaDataLocator;

typedef enum {
    BSOS_DEFAULT = 0,
    BSOS_PREFERDESTINATIONSTREAM = 1,
} BSOS_OPTIONS;

typedef int IMemoryBufferByteAccess;

// TODO: this type is limited to platform 'windows8.0'
typedef int IWeakReference;

// TODO: this type is limited to platform 'windows8.0'
typedef int IWeakReferenceSource;

typedef int IWindowsDevicesAllJoynBusAttachmentInterop;

typedef int IWindowsDevicesAllJoynBusAttachmentFactoryInterop;

typedef int IWindowsDevicesAllJoynBusObjectInterop;

typedef int IWindowsDevicesAllJoynBusObjectFactoryInterop;

typedef int ILearningModelOperatorProviderNative;

typedef int ITensorNative;

typedef int ITensorStaticsNative;

typedef int ILearningModelDeviceFactoryNative;

typedef int IHolographicCameraInterop;

typedef int IHolographicCameraRenderingParametersInterop;

typedef int IHolographicQuadLayerInterop;

typedef int IHolographicQuadLayerUpdateParametersInterop;

typedef int IPrintWorkflowXpsReceiver;

typedef int IPrintWorkflowObjectModelSourceFileContentNative;

typedef int IPrintWorkflowXpsObjectModelTargetPackageNative;

typedef int IPrintWorkflowConfigurationNative;

typedef int IDesktopWindowXamlSourceNative;

typedef int IDesktopWindowXamlSourceNative2;

typedef int IReferenceTrackerTarget;

typedef int IReferenceTracker;

typedef int IReferenceTrackerManager;

typedef int IFindReferenceTargetsCallback;

typedef enum {
    XAML_REFERENCETRACKER_DISCONNECT_DEFAULT = 0,
    XAML_REFERENCETRACKER_DISCONNECT_SUSPEND = 1,
} XAML_REFERENCETRACKER_DISCONNECT;

typedef int IReferenceTrackerHost;

typedef int IReferenceTrackerExtension;

typedef int TrackerHandle__;

typedef int ITrackerOwner;

typedef int ISystemMediaTransportControlsInterop;


//--------------------------------------------------------------------------------
// Section: Functions (71)
//--------------------------------------------------------------------------------
/*HRESULT*/void CoDecodeProxy();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void RoGetAgileReference();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void HSTRING_UserSize();

// TODO: this type is limited to platform 'windows8.0'
/*?*u8*/void HSTRING_UserMarshal();

// TODO: this type is limited to platform 'windows8.0'
/*?*u8*/void HSTRING_UserUnmarshal();

// TODO: this type is limited to platform 'windows8.0'
/*void*/void HSTRING_UserFree();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void HSTRING_UserSize64();

// TODO: this type is limited to platform 'windows8.0'
/*?*u8*/void HSTRING_UserMarshal64();

// TODO: this type is limited to platform 'windows8.0'
/*?*u8*/void HSTRING_UserUnmarshal64();

// TODO: this type is limited to platform 'windows8.0'
/*void*/void HSTRING_UserFree64();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsCreateString();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsCreateStringReference();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsDeleteString();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsDuplicateString();

// TODO: this type is limited to platform 'windows8.0'
/*u32*/void WindowsGetStringLen();

// TODO: this type is limited to platform 'windows8.0'
/*PWSTR*/void WindowsGetStringRawBuffer();

// TODO: this type is limited to platform 'windows8.0'
/*BOOL*/void WindowsIsStringEmpty();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsStringHasEmbeddedNull();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsCompareStringOrdinal();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsSubstring();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsSubstringWithSpecifiedLength();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsConcatString();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsReplaceString();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsTrimStringStart();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsTrimStringEnd();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsPreallocateStringBuffer();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsPromoteStringBuffer();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsDeleteStringBuffer();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsInspectString();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void WindowsInspectString2();

/*HRESULT*/void CreateDispatcherQueueController();

/*HRESULT*/void PdfCreateRenderer();

/*HRESULT*/void CreateDirect3D11DeviceFromDXGIDevice();

/*HRESULT*/void CreateDirect3D11SurfaceFromDXGISurface();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoInitialize();

// TODO: this type is limited to platform 'windows8.0'
/*void*/void RoUninitialize();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoActivateInstance();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoRegisterActivationFactories();

// TODO: this type is limited to platform 'windows8.0'
/*void*/void RoRevokeActivationFactories();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoGetActivationFactory();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoRegisterForApartmentShutdown();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoUnregisterForApartmentShutdown();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoGetApartmentIdentifier();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoGetBufferMarshaler();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoGetErrorReportingFlags();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoSetErrorReportingFlags();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoResolveRestrictedErrorInfoReference();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void SetRestrictedErrorInfo();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void GetRestrictedErrorInfo();

// TODO: this type is limited to platform 'windows8.0'
/*BOOL*/void RoOriginateErrorW();

// TODO: this type is limited to platform 'windows8.0'
/*BOOL*/void RoOriginateError();

// TODO: this type is limited to platform 'windows8.0'
/*BOOL*/void RoTransformErrorW();

// TODO: this type is limited to platform 'windows8.0'
/*BOOL*/void RoTransformError();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoCaptureErrorContext();

// TODO: this type is limited to platform 'windows8.0'
/*void*/void RoFailFastWithErrorContext();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void RoOriginateLanguageException();

// TODO: this type is limited to platform 'windows8.1'
/*void*/void RoClearError();

/*HRESULT*/void RoReportUnhandledError();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void RoInspectThreadErrorInfo();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void RoInspectCapturedStackBackTrace();

/*HRESULT*/void RoGetMatchingRestrictedErrorInfo();

/*HRESULT*/void RoReportFailedDelegate();

// TODO: this type is limited to platform 'windows8.0'
/*BOOL*/void IsErrorPropagationEnabled();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void MetaDataGetDispenser();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoGetParameterizedTypeInstanceIID();

// TODO: this type is limited to platform 'windows8.0'
/*void*/void RoFreeParameterizedTypeExtra();

// TODO: this type is limited to platform 'windows8.0'
/*PSTR*/void RoParameterizedTypeExtraGetTypeSignature();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void RoGetServerActivatableClasses();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void CreateRandomAccessStreamOnFile();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void CreateRandomAccessStreamOverStream();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void CreateStreamOverRandomAccessStream();

