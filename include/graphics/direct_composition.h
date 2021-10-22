// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (2)
//--------------------------------------------------------------------------------
#define COMPOSITIONOBJECT_READ (INT)1
#define COMPOSITIONOBJECT_WRITE (INT)2

//--------------------------------------------------------------------------------
// Section: Types (50)
//--------------------------------------------------------------------------------
typedef enum {
    DCOMPOSITION_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR = 0,
    DCOMPOSITION_BITMAP_INTERPOLATION_MODE_LINEAR = 1,
    DCOMPOSITION_BITMAP_INTERPOLATION_MODE_INHERIT = -1,
} DCOMPOSITION_BITMAP_INTERPOLATION_MODE;

typedef enum {
    DCOMPOSITION_BORDER_MODE_SOFT = 0,
    DCOMPOSITION_BORDER_MODE_HARD = 1,
    DCOMPOSITION_BORDER_MODE_INHERIT = -1,
} DCOMPOSITION_BORDER_MODE;

typedef enum {
    DCOMPOSITION_COMPOSITE_MODE_SOURCE_OVER = 0,
    DCOMPOSITION_COMPOSITE_MODE_DESTINATION_INVERT = 1,
    DCOMPOSITION_COMPOSITE_MODE_MIN_BLEND = 2,
    DCOMPOSITION_COMPOSITE_MODE_INHERIT = -1,
} DCOMPOSITION_COMPOSITE_MODE;

typedef enum {
    DCOMPOSITION_BACKFACE_VISIBILITY_VISIBLE = 0,
    DCOMPOSITION_BACKFACE_VISIBILITY_HIDDEN = 1,
    DCOMPOSITION_BACKFACE_VISIBILITY_INHERIT = -1,
} DCOMPOSITION_BACKFACE_VISIBILITY;

typedef enum {
    DCOMPOSITION_OPACITY_MODE_LAYER = 0,
    DCOMPOSITION_OPACITY_MODE_MULTIPLY = 1,
    DCOMPOSITION_OPACITY_MODE_INHERIT = -1,
} DCOMPOSITION_OPACITY_MODE;

typedef enum {
    DCOMPOSITION_DEPTH_MODE_TREE = 0,
    DCOMPOSITION_DEPTH_MODE_SPATIAL = 1,
    DCOMPOSITION_DEPTH_MODE_SORTED = 3,
    DCOMPOSITION_DEPTH_MODE_INHERIT = -1,
} DCOMPOSITION_DEPTH_MODE;

typedef int DCOMPOSITION_FRAME_STATISTICS;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionAnimation;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionDevice;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionTarget;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionVisual;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionEffect;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionTransform3D;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionTransform;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionTranslateTransform;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionScaleTransform;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionRotateTransform;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionSkewTransform;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionMatrixTransform;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionEffectGroup;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionTranslateTransform3D;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionScaleTransform3D;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionRotateTransform3D;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionMatrixTransform3D;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionClip;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionRectangleClip;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionSurface;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionVirtualSurface;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDCompositionDevice2;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDCompositionDesktopDevice;

typedef int IDCompositionDeviceDebug;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDCompositionSurfaceFactory;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDCompositionVisual2;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDCompositionVisualDebug;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDCompositionVisual3;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDCompositionDevice3;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDCompositionFilterEffect;

typedef int IDCompositionGaussianBlurEffect;

typedef int IDCompositionBrightnessEffect;

typedef int IDCompositionColorMatrixEffect;

typedef int IDCompositionShadowEffect;

typedef int IDCompositionHueRotationEffect;

typedef int IDCompositionSaturationEffect;

typedef int IDCompositionTurbulenceEffect;

typedef int IDCompositionLinearTransferEffect;

typedef int IDCompositionTableTransferEffect;

typedef int IDCompositionCompositeEffect;

typedef int IDCompositionBlendEffect;

typedef int IDCompositionArithmeticCompositeEffect;

typedef int IDCompositionAffineTransform2DEffect;


//--------------------------------------------------------------------------------
// Section: Functions (6)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void DCompositionCreateDevice();

// TODO: this type is limited to platform 'windows8.1'
/*HRESULT*/void DCompositionCreateDevice2();

/*HRESULT*/void DCompositionCreateDevice3();

// TODO: this type is limited to platform 'windows8.0'
/*HRESULT*/void DCompositionCreateSurfaceHandle();

/*HRESULT*/void DCompositionAttachMouseWheelToHwnd();

/*HRESULT*/void DCompositionAttachMouseDragToHwnd();

