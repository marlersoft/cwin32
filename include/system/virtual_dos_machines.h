// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (92)
//--------------------------------------------------------------------------------
#define VDMCONTEXT_i386 (UINT)65536
#define VDMCONTEXT_i486 (UINT)65536
#define VDM_KGDT_R3_CODE (UINT)24
#define VDM_MAXIMUM_SUPPORTED_EXTENSION (UINT)512
#define V86FLAGS_CARRY (UINT)1
#define V86FLAGS_PARITY (UINT)4
#define V86FLAGS_AUXCARRY (UINT)16
#define V86FLAGS_ZERO (UINT)64
#define V86FLAGS_SIGN (UINT)128
#define V86FLAGS_TRACE (UINT)256
#define V86FLAGS_INTERRUPT (UINT)512
#define V86FLAGS_DIRECTION (UINT)1024
#define V86FLAGS_OVERFLOW (UINT)2048
#define V86FLAGS_IOPL (UINT)12288
#define V86FLAGS_IOPL_BITS (UINT)18
#define V86FLAGS_RESUME (UINT)65536
#define V86FLAGS_V86 (UINT)131072
#define V86FLAGS_ALIGNMENT (UINT)262144
#define DBG_SEGLOAD (UINT)0
#define DBG_SEGMOVE (UINT)1
#define DBG_SEGFREE (UINT)2
#define DBG_MODLOAD (UINT)3
#define DBG_MODFREE (UINT)4
#define DBG_SINGLESTEP (UINT)5
#define DBG_BREAK (UINT)6
#define DBG_GPFAULT (UINT)7
#define DBG_DIVOVERFLOW (UINT)8
#define DBG_INSTRFAULT (UINT)9
#define DBG_TASKSTART (UINT)10
#define DBG_TASKSTOP (UINT)11
#define DBG_DLLSTART (UINT)12
#define DBG_DLLSTOP (UINT)13
#define DBG_ATTACH (UINT)14
#define DBG_TOOLHELP (UINT)15
#define DBG_STACKFAULT (UINT)16
#define DBG_WOWINIT (UINT)17
#define DBG_TEMPBP (UINT)18
#define DBG_MODMOVE (UINT)19
#define DBG_INIT (UINT)20
#define DBG_GPFAULT2 (UINT)21
#define VDMEVENT_NEEDS_INTERACTIVE (UINT)32768
#define VDMEVENT_VERBOSE (UINT)16384
#define VDMEVENT_PE (UINT)8192
#define VDMEVENT_ALLFLAGS (UINT)57344
#define VDMEVENT_V86 (UINT)1
#define VDMEVENT_PM16 (UINT)2
#define MAX_MODULE_NAME (UINT)9
#define MAX_PATH16 (UINT)255
#define SN_CODE (UINT)0
#define SN_DATA (UINT)1
#define SN_V86 (UINT)2
#define GLOBAL_ALL (UINT)0
#define GLOBAL_LRU (UINT)1
#define GLOBAL_FREE (UINT)2
#define GT_UNKNOWN (UINT)0
#define GT_DGROUP (UINT)1
#define GT_DATA (UINT)2
#define GT_CODE (UINT)3
#define GT_TASK (UINT)4
#define GT_RESOURCE (UINT)5
#define GT_MODULE (UINT)6
#define GT_FREE (UINT)7
#define GT_INTERNAL (UINT)8
#define GT_SENTINEL (UINT)9
#define GT_BURGERMASTER (UINT)10
#define GD_USERDEFINED (UINT)0
#define GD_CURSORCOMPONENT (UINT)1
#define GD_BITMAP (UINT)2
#define GD_ICONCOMPONENT (UINT)3
#define GD_MENU (UINT)4
#define GD_DIALOG (UINT)5
#define GD_STRING (UINT)6
#define GD_FONTDIR (UINT)7
#define GD_FONT (UINT)8
#define GD_ACCELERATORS (UINT)9
#define GD_RCDATA (UINT)10
#define GD_ERRTABLE (UINT)11
#define GD_CURSOR (UINT)12
#define GD_ICON (UINT)14
#define GD_NAMETABLE (UINT)15
#define GD_MAX_RESOURCE (UINT)15
#define VDMDBG_BREAK_DOSTASK (UINT)1
#define VDMDBG_BREAK_WOWTASK (UINT)2
#define VDMDBG_BREAK_LOADDLL (UINT)4
#define VDMDBG_BREAK_EXCEPTIONS (UINT)8
#define VDMDBG_BREAK_DEBUGGER (UINT)16
#define VDMDBG_TRACE_HISTORY (UINT)128
#define VDMDBG_BREAK_DIVIDEBYZERO (UINT)256
#define VDMDBG_MAX_SYMBOL_BUFFER (UINT)256
#define VDMADDR_V86 (UINT)2
#define VDMADDR_PM16 (UINT)4
#define VDMADDR_PM32 (UINT)16

//--------------------------------------------------------------------------------
// Section: Types (43)
//--------------------------------------------------------------------------------
typedef int VDMCONTEXT;

typedef int VDMLDT_ENTRY;

typedef int MODULEENTRY;

typedef int GLOBALENTRY;

typedef int VDMGETTHREADSELECTORENTRYPROC;

typedef int VDMGETCONTEXTPROC;

typedef int VDMSETCONTEXTPROC;

typedef int VDMCONTEXT_WITHOUT_XSAVE;

typedef int SEGMENT_NOTE;

typedef int IMAGE_NOTE;

typedef int TEMP_BP_NOTE;

typedef int VDM_SEGINFO;

typedef int DEBUGEVENTPROC;

typedef int PROCESSENUMPROC;

typedef int TASKENUMPROC;

typedef int TASKENUMPROCEX;

typedef int VDMPROCESSEXCEPTIONPROC;

typedef int VDMGETPOINTERPROC;

typedef int VDMKILLWOWPROC;

typedef int VDMDETECTWOWPROC;

typedef int VDMBREAKTHREADPROC;

typedef int VDMGETSELECTORMODULEPROC;

typedef int VDMGETMODULESELECTORPROC;

typedef int VDMMODULEFIRSTPROC;

typedef int VDMMODULENEXTPROC;

typedef int VDMGLOBALFIRSTPROC;

typedef int VDMGLOBALNEXTPROC;

typedef int VDMENUMPROCESSWOWPROC;

typedef int VDMENUMTASKWOWPROC;

typedef int VDMENUMTASKWOWEXPROC;

typedef int VDMTERMINATETASKINWOWPROC;

typedef int VDMSTARTTASKINWOWPROC;

typedef int VDMGETDBGFLAGSPROC;

typedef int VDMSETDBGFLAGSPROC;

typedef int VDMISMODULELOADEDPROC;

typedef int VDMGETSEGMENTINFOPROC;

typedef int VDMGETSYMBOLPROC;

typedef int VDMGETADDREXPRESSIONPROC;

typedef int MODULEENTRY;

typedef int GLOBALENTRY;

typedef int VDMGETTHREADSELECTORENTRYPROC;

typedef int VDMGETCONTEXTPROC;

typedef int VDMSETCONTEXTPROC;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
