// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (8)
//--------------------------------------------------------------------------------
#define DIRECTMANIPULATION_KEYBOARDFOCUS (UINT)4294967294
#define DIRECTMANIPULATION_MOUSEFOCUS (UINT)4294967293
#define CLSID_VerticalIndicatorContent GUID { "a10b5f17-afe0-4aa2-91e9-3e7001d2e6b4" }
#define CLSID_HorizontalIndicatorContent GUID { "e7d18cf5-3ec7-44d5-a76b-3770f3cf903d" }
#define CLSID_VirtualViewportContent GUID { "3206a19a-86f0-4cb4-a7f3-16e3b7e2d852" }
#define CLSID_DragDropConfigurationBehavior GUID { "09b01b3e-ba6c-454d-82e8-95e352329f23" }
#define CLSID_AutoScrollBehavior GUID { "26126a51-3c70-4c9a-aec2-948849eeb093" }
#define CLSID_DeferContactService GUID { "d7b67cf4-84bb-434e-86ae-6592bbc9abd9" }

//--------------------------------------------------------------------------------
// Section: Types (39)
//--------------------------------------------------------------------------------
typedef int DirectManipulationViewport;

typedef int DirectManipulationUpdateManager;

typedef int DirectManipulationPrimaryContent;

typedef int DirectManipulationManager;

typedef int DirectManipulationSharedManager;

typedef int DCompManipulationCompositor;

typedef enum {
    DIRECTMANIPULATION_BUILDING = 0,
    DIRECTMANIPULATION_ENABLED = 1,
    DIRECTMANIPULATION_DISABLED = 2,
    DIRECTMANIPULATION_RUNNING = 3,
    DIRECTMANIPULATION_INERTIA = 4,
    DIRECTMANIPULATION_READY = 5,
    DIRECTMANIPULATION_SUSPENDED = 6,
} DIRECTMANIPULATION_STATUS;

typedef enum {
    DIRECTMANIPULATION_HITTEST_TYPE_ASYNCHRONOUS = 0,
    DIRECTMANIPULATION_HITTEST_TYPE_SYNCHRONOUS = 1,
    DIRECTMANIPULATION_HITTEST_TYPE_AUTO_SYNCHRONOUS = 2,
} DIRECTMANIPULATION_HITTEST_TYPE;

typedef enum {
    DIRECTMANIPULATION_CONFIGURATION_NONE = 0,
    DIRECTMANIPULATION_CONFIGURATION_INTERACTION = 1,
    DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_X = 2,
    DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_Y = 4,
    DIRECTMANIPULATION_CONFIGURATION_SCALING = 16,
    DIRECTMANIPULATION_CONFIGURATION_TRANSLATION_INERTIA = 32,
    DIRECTMANIPULATION_CONFIGURATION_SCALING_INERTIA = 128,
    DIRECTMANIPULATION_CONFIGURATION_RAILS_X = 256,
    DIRECTMANIPULATION_CONFIGURATION_RAILS_Y = 512,
} DIRECTMANIPULATION_CONFIGURATION;

typedef enum {
    DIRECTMANIPULATION_GESTURE_NONE = 0,
    DIRECTMANIPULATION_GESTURE_DEFAULT = 0,
    DIRECTMANIPULATION_GESTURE_CROSS_SLIDE_VERTICAL = 8,
    DIRECTMANIPULATION_GESTURE_CROSS_SLIDE_HORIZONTAL = 16,
    DIRECTMANIPULATION_GESTURE_PINCH_ZOOM = 32,
} DIRECTMANIPULATION_GESTURE_CONFIGURATION;

typedef enum {
    DIRECTMANIPULATION_MOTION_NONE = 0,
    DIRECTMANIPULATION_MOTION_TRANSLATEX = 1,
    DIRECTMANIPULATION_MOTION_TRANSLATEY = 2,
    DIRECTMANIPULATION_MOTION_ZOOM = 4,
    DIRECTMANIPULATION_MOTION_CENTERX = 16,
    DIRECTMANIPULATION_MOTION_CENTERY = 32,
    DIRECTMANIPULATION_MOTION_ALL = 55,
} DIRECTMANIPULATION_MOTION_TYPES;

typedef enum {
    DIRECTMANIPULATION_VIEWPORT_OPTIONS_DEFAULT = 0,
    DIRECTMANIPULATION_VIEWPORT_OPTIONS_AUTODISABLE = 1,
    DIRECTMANIPULATION_VIEWPORT_OPTIONS_MANUALUPDATE = 2,
    DIRECTMANIPULATION_VIEWPORT_OPTIONS_INPUT = 4,
    DIRECTMANIPULATION_VIEWPORT_OPTIONS_EXPLICITHITTEST = 8,
    DIRECTMANIPULATION_VIEWPORT_OPTIONS_DISABLEPIXELSNAPPING = 16,
} DIRECTMANIPULATION_VIEWPORT_OPTIONS;

typedef enum {
    DIRECTMANIPULATION_SNAPPOINT_MANDATORY = 0,
    DIRECTMANIPULATION_SNAPPOINT_OPTIONAL = 1,
    DIRECTMANIPULATION_SNAPPOINT_MANDATORY_SINGLE = 2,
    DIRECTMANIPULATION_SNAPPOINT_OPTIONAL_SINGLE = 3,
} DIRECTMANIPULATION_SNAPPOINT_TYPE;

typedef enum {
    DIRECTMANIPULATION_COORDINATE_BOUNDARY = 0,
    DIRECTMANIPULATION_COORDINATE_ORIGIN = 1,
    DIRECTMANIPULATION_COORDINATE_MIRRORED = 16,
} DIRECTMANIPULATION_SNAPPOINT_COORDINATE;

typedef enum {
    DIRECTMANIPULATION_HORIZONTALALIGNMENT_NONE = 0,
    DIRECTMANIPULATION_HORIZONTALALIGNMENT_LEFT = 1,
    DIRECTMANIPULATION_HORIZONTALALIGNMENT_CENTER = 2,
    DIRECTMANIPULATION_HORIZONTALALIGNMENT_RIGHT = 4,
    DIRECTMANIPULATION_HORIZONTALALIGNMENT_UNLOCKCENTER = 8,
} DIRECTMANIPULATION_HORIZONTALALIGNMENT;

typedef enum {
    DIRECTMANIPULATION_VERTICALALIGNMENT_NONE = 0,
    DIRECTMANIPULATION_VERTICALALIGNMENT_TOP = 1,
    DIRECTMANIPULATION_VERTICALALIGNMENT_CENTER = 2,
    DIRECTMANIPULATION_VERTICALALIGNMENT_BOTTOM = 4,
    DIRECTMANIPULATION_VERTICALALIGNMENT_UNLOCKCENTER = 8,
} DIRECTMANIPULATION_VERTICALALIGNMENT;

typedef enum {
    DIRECTMANIPULATION_INPUT_MODE_AUTOMATIC = 0,
    DIRECTMANIPULATION_INPUT_MODE_MANUAL = 1,
} DIRECTMANIPULATION_INPUT_MODE;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationManager;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDirectManipulationManager2;

// TODO: this type is limited to platform 'windows10.0.10240'
typedef int IDirectManipulationManager3;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationViewport;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDirectManipulationViewport2;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationViewportEventHandler;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationContent;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationPrimaryContent;

typedef enum {
    DIRECTMANIPULATION_DRAG_DROP_READY = 0,
    DIRECTMANIPULATION_DRAG_DROP_PRESELECT = 1,
    DIRECTMANIPULATION_DRAG_DROP_SELECTING = 2,
    DIRECTMANIPULATION_DRAG_DROP_DRAGGING = 3,
    DIRECTMANIPULATION_DRAG_DROP_CANCELLED = 4,
    DIRECTMANIPULATION_DRAG_DROP_COMMITTED = 5,
} DIRECTMANIPULATION_DRAG_DROP_STATUS;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDirectManipulationDragDropEventHandler;

typedef enum {
    DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_VERTICAL = 1,
    DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_HORIZONTAL = 2,
    DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_SELECT_ONLY = 16,
    DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_SELECT_DRAG = 32,
    DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION_HOLD_DRAG = 64,
} DIRECTMANIPULATION_DRAG_DROP_CONFIGURATION;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDirectManipulationDragDropBehavior;

typedef enum {
    DIRECTMANIPULATION_INTERACTION_BEGIN = 0,
    DIRECTMANIPULATION_INTERACTION_TYPE_MANIPULATION = 1,
    DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_TAP = 2,
    DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_HOLD = 3,
    DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_CROSS_SLIDE = 4,
    DIRECTMANIPULATION_INTERACTION_TYPE_GESTURE_PINCH_ZOOM = 5,
    DIRECTMANIPULATION_INTERACTION_END = 100,
} DIRECTMANIPULATION_INTERACTION_TYPE;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDirectManipulationInteractionEventHandler;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationFrameInfoProvider;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationCompositor;

// TODO: this type is limited to platform 'windows10.0.10240'
typedef int IDirectManipulationCompositor2;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationUpdateHandler;

// TODO: this type is limited to platform 'windows8.0'
typedef int IDirectManipulationUpdateManager;

typedef enum {
    DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_STOP = 0,
    DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_FORWARD = 1,
    DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION_REVERSE = 2,
} DIRECTMANIPULATION_AUTOSCROLL_CONFIGURATION;

// TODO: this type is limited to platform 'windows8.1'
typedef int IDirectManipulationAutoScrollBehavior;

// TODO: this type is limited to platform 'windows10.0.10240'
typedef int IDirectManipulationDeferContactService;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
