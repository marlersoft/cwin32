// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (0)
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// Section: Types (4)
//--------------------------------------------------------------------------------
typedef enum {
    UOI_FLAGS = 1,
    UOI_HEAPSIZE = 5,
    UOI_IO = 6,
    UOI_NAME = 2,
    UOI_TYPE = 3,
    UOI_USER_SID = 4,
} USER_OBJECT_INFORMATION_INDEX;

typedef int HWINSTA;

typedef int HDESK;

typedef int USEROBJECTFLAGS;


//--------------------------------------------------------------------------------
// Section: Functions (27)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
/*HDESK*/void CreateDesktopA();

// TODO: this type is limited to platform 'windows5.0'
/*HDESK*/void CreateDesktopW();

// TODO: this type is limited to platform 'windows6.0.6000'
/*HDESK*/void CreateDesktopExA();

// TODO: this type is limited to platform 'windows6.0.6000'
/*HDESK*/void CreateDesktopExW();

// TODO: this type is limited to platform 'windows5.0'
/*HDESK*/void OpenDesktopA();

// TODO: this type is limited to platform 'windows5.0'
/*HDESK*/void OpenDesktopW();

// TODO: this type is limited to platform 'windows5.0'
/*HDESK*/void OpenInputDesktop();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void EnumDesktopsA();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void EnumDesktopsW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void EnumDesktopWindows();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SwitchDesktop();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetThreadDesktop();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void CloseDesktop();

// TODO: this type is limited to platform 'windows5.0'
/*HDESK*/void GetThreadDesktop();

// TODO: this type is limited to platform 'windows5.0'
/*HWINSTA*/void CreateWindowStationA();

// TODO: this type is limited to platform 'windows5.0'
/*HWINSTA*/void CreateWindowStationW();

// TODO: this type is limited to platform 'windows5.0'
/*HWINSTA*/void OpenWindowStationA();

// TODO: this type is limited to platform 'windows5.0'
/*HWINSTA*/void OpenWindowStationW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void EnumWindowStationsA();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void EnumWindowStationsW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void CloseWindowStation();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetProcessWindowStation();

// TODO: this type is limited to platform 'windows5.0'
/*HWINSTA*/void GetProcessWindowStation();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void GetUserObjectInformationA();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void GetUserObjectInformationW();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetUserObjectInformationA();

// TODO: this type is limited to platform 'windows5.0'
/*BOOL*/void SetUserObjectInformationW();

