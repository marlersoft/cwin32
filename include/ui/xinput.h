// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (51)
//--------------------------------------------------------------------------------
#define XINPUT_DEVTYPE_GAMEPAD (UINT)1
#define XINPUT_DEVSUBTYPE_GAMEPAD (UINT)1
#define XINPUT_DEVSUBTYPE_UNKNOWN (UINT)0
#define XINPUT_DEVSUBTYPE_WHEEL (UINT)2
#define XINPUT_DEVSUBTYPE_ARCADE_STICK (UINT)3
#define XINPUT_DEVSUBTYPE_FLIGHT_STICK (UINT)4
#define XINPUT_DEVSUBTYPE_DANCE_PAD (UINT)5
#define XINPUT_DEVSUBTYPE_GUITAR (UINT)6
#define XINPUT_DEVSUBTYPE_GUITAR_ALTERNATE (UINT)7
#define XINPUT_DEVSUBTYPE_DRUM_KIT (UINT)8
#define XINPUT_DEVSUBTYPE_GUITAR_BASS (UINT)11
#define XINPUT_DEVSUBTYPE_ARCADE_PAD (UINT)19
#define XINPUT_CAPS_VOICE_SUPPORTED (UINT)4
#define XINPUT_CAPS_FFB_SUPPORTED (UINT)1
#define XINPUT_CAPS_WIRELESS (UINT)2
#define XINPUT_CAPS_PMD_SUPPORTED (UINT)8
#define XINPUT_CAPS_NO_NAVIGATION (UINT)16
#define XINPUT_GAMEPAD_DPAD_UP (UINT)1
#define XINPUT_GAMEPAD_DPAD_DOWN (UINT)2
#define XINPUT_GAMEPAD_DPAD_LEFT (UINT)4
#define XINPUT_GAMEPAD_DPAD_RIGHT (UINT)8
#define XINPUT_GAMEPAD_START (UINT)16
#define XINPUT_GAMEPAD_BACK (UINT)32
#define XINPUT_GAMEPAD_LEFT_THUMB (UINT)64
#define XINPUT_GAMEPAD_RIGHT_THUMB (UINT)128
#define XINPUT_GAMEPAD_LEFT_SHOULDER (UINT)256
#define XINPUT_GAMEPAD_RIGHT_SHOULDER (UINT)512
#define XINPUT_GAMEPAD_A (UINT)4096
#define XINPUT_GAMEPAD_B (UINT)8192
#define XINPUT_GAMEPAD_X (UINT)16384
#define XINPUT_GAMEPAD_Y (UINT)32768
#define XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE (UINT)7849
#define XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE (UINT)8689
#define XINPUT_GAMEPAD_TRIGGER_THRESHOLD (UINT)30
#define XINPUT_FLAG_GAMEPAD (UINT)1
#define BATTERY_DEVTYPE_GAMEPAD (UINT)0
#define BATTERY_DEVTYPE_HEADSET (UINT)1
#define BATTERY_TYPE_DISCONNECTED (UINT)0
#define BATTERY_TYPE_WIRED (UINT)1
#define BATTERY_TYPE_ALKALINE (UINT)2
#define BATTERY_TYPE_NIMH (UINT)3
#define BATTERY_TYPE_UNKNOWN (UINT)255
#define BATTERY_LEVEL_EMPTY (UINT)0
#define BATTERY_LEVEL_LOW (UINT)1
#define BATTERY_LEVEL_MEDIUM (UINT)2
#define BATTERY_LEVEL_FULL (UINT)3
#define XUSER_MAX_COUNT (UINT)4
#define XUSER_INDEX_ANY (UINT)255
#define XINPUT_KEYSTROKE_KEYDOWN (UINT)1
#define XINPUT_KEYSTROKE_KEYUP (UINT)2
#define XINPUT_KEYSTROKE_REPEAT (UINT)4

//--------------------------------------------------------------------------------
// Section: Types (7)
//--------------------------------------------------------------------------------
typedef enum {
    VK_PAD_A = 22528,
    VK_PAD_B = 22529,
    VK_PAD_X = 22530,
    VK_PAD_Y = 22531,
    VK_PAD_RSHOULDER = 22532,
    VK_PAD_LSHOULDER = 22533,
    VK_PAD_LTRIGGER = 22534,
    VK_PAD_RTRIGGER = 22535,
    VK_PAD_DPAD_UP = 22544,
    VK_PAD_DPAD_DOWN = 22545,
    VK_PAD_DPAD_LEFT = 22546,
    VK_PAD_DPAD_RIGHT = 22547,
    VK_PAD_START = 22548,
    VK_PAD_BACK = 22549,
    VK_PAD_LTHUMB_PRESS = 22550,
    VK_PAD_RTHUMB_PRESS = 22551,
    VK_PAD_LTHUMB_UP = 22560,
    VK_PAD_LTHUMB_DOWN = 22561,
    VK_PAD_LTHUMB_RIGHT = 22562,
    VK_PAD_LTHUMB_LEFT = 22563,
    VK_PAD_LTHUMB_UPLEFT = 22564,
    VK_PAD_LTHUMB_UPRIGHT = 22565,
    VK_PAD_LTHUMB_DOWNRIGHT = 22566,
    VK_PAD_LTHUMB_DOWNLEFT = 22567,
    VK_PAD_RTHUMB_UP = 22576,
    VK_PAD_RTHUMB_DOWN = 22577,
    VK_PAD_RTHUMB_RIGHT = 22578,
    VK_PAD_RTHUMB_LEFT = 22579,
    VK_PAD_RTHUMB_UPLEFT = 22580,
    VK_PAD_RTHUMB_UPRIGHT = 22581,
    VK_PAD_RTHUMB_DOWNRIGHT = 22582,
    VK_PAD_RTHUMB_DOWNLEFT = 22583,
} XINPUT_VIRTUAL_KEY;

typedef int XINPUT_GAMEPAD;

typedef int XINPUT_STATE;

typedef int XINPUT_VIBRATION;

typedef int XINPUT_CAPABILITIES;

typedef int XINPUT_BATTERY_INFORMATION;

typedef int XINPUT_KEYSTROKE;


//--------------------------------------------------------------------------------
// Section: Functions (7)
//--------------------------------------------------------------------------------
/*u32*/void XInputGetState();

/*u32*/void XInputSetState();

/*u32*/void XInputGetCapabilities();

/*void*/void XInputEnable();

/*u32*/void XInputGetAudioDeviceIds();

/*u32*/void XInputGetBatteryInformation();

/*u32*/void XInputGetKeystroke();

