// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (220)
//--------------------------------------------------------------------------------
#define IMAPI_SECTOR_SIZE (UINT)2048
#define IMAPI2_DEFAULT_COMMAND_TIMEOUT (UINT)10
#define DISPID_DDISCMASTER2EVENTS_DEVICEADDED (UINT)256
#define DISPID_DDISCMASTER2EVENTS_DEVICEREMOVED (UINT)257
#define DISPID_IDISCRECORDER2_EJECTMEDIA (UINT)256
#define DISPID_IDISCRECORDER2_CLOSETRAY (UINT)257
#define DISPID_IDISCRECORDER2_ACQUIREEXCLUSIVEACCESS (UINT)258
#define DISPID_IDISCRECORDER2_RELEASEEXCLUSIVEACCESS (UINT)259
#define DISPID_IDISCRECORDER2_DISABLEMCN (UINT)260
#define DISPID_IDISCRECORDER2_ENABLEMCN (UINT)261
#define DISPID_IDISCRECORDER2_INITIALIZEDISCRECORDER (UINT)262
#define DISPID_IDISCRECORDER2_VENDORID (UINT)513
#define DISPID_IDISCRECORDER2_PRODUCTID (UINT)514
#define DISPID_IDISCRECORDER2_PRODUCTREVISION (UINT)515
#define DISPID_IDISCRECORDER2_VOLUMENAME (UINT)516
#define DISPID_IDISCRECORDER2_VOLUMEPATHNAMES (UINT)517
#define DISPID_IDISCRECORDER2_DEVICECANLOADMEDIA (UINT)518
#define DISPID_IDISCRECORDER2_LEGACYDEVICENUMBER (UINT)519
#define DISPID_IDISCRECORDER2_SUPPORTEDFEATUREPAGES (UINT)520
#define DISPID_IDISCRECORDER2_CURRENTFEATUREPAGES (UINT)521
#define DISPID_IDISCRECORDER2_SUPPORTEDPROFILES (UINT)522
#define DISPID_IDISCRECORDER2_CURRENTPROFILES (UINT)523
#define DISPID_IDISCRECORDER2_SUPPORTEDMODEPAGES (UINT)524
#define DISPID_IDISCRECORDER2_EXCLUSIVEACCESSOWNER (UINT)525
#define DISPID_IWRITEENGINE2_WRITESECTION (UINT)512
#define DISPID_IWRITEENGINE2_CANCELWRITE (UINT)513
#define DISPID_IWRITEENGINE2_DISCRECORDER (UINT)256
#define DISPID_IWRITEENGINE2_USESTREAMINGWRITE12 (UINT)257
#define DISPID_IWRITEENGINE2_STARTINGSECTORSPERSECOND (UINT)258
#define DISPID_IWRITEENGINE2_ENDINGSECTORSPERSECOND (UINT)259
#define DISPID_IWRITEENGINE2_BYTESPERSECTOR (UINT)260
#define DISPID_IWRITEENGINE2_WRITEINPROGRESS (UINT)261
#define DISPID_IWRITEENGINE2EVENTARGS_STARTLBA (UINT)256
#define DISPID_IWRITEENGINE2EVENTARGS_SECTORCOUNT (UINT)257
#define DISPID_IWRITEENGINE2EVENTARGS_LASTREADLBA (UINT)258
#define DISPID_IWRITEENGINE2EVENTARGS_LASTWRITTENLBA (UINT)259
#define DISPID_IWRITEENGINE2EVENTARGS_TOTALDEVICEBUFFER (UINT)260
#define DISPID_IWRITEENGINE2EVENTARGS_USEDDEVICEBUFFER (UINT)261
#define DISPID_IWRITEENGINE2EVENTARGS_TOTALSYSTEMBUFFER (UINT)262
#define DISPID_IWRITEENGINE2EVENTARGS_USEDSYSTEMBUFFER (UINT)263
#define DISPID_IWRITEENGINE2EVENTARGS_FREESYSTEMBUFFER (UINT)264
#define DISPID_DWRITEENGINE2EVENTS_UPDATE (UINT)256
#define DISPID_IDISCFORMAT2_RECORDERSUPPORTED (UINT)2048
#define DISPID_IDISCFORMAT2_MEDIASUPPORTED (UINT)2049
#define DISPID_IDISCFORMAT2_MEDIAPHYSICALLYBLANK (UINT)1792
#define DISPID_IDISCFORMAT2_MEDIAHEURISTICALLYBLANK (UINT)1793
#define DISPID_IDISCFORMAT2_SUPPORTEDMEDIATYPES (UINT)1794
#define DISPID_IDISCFORMAT2ERASE_RECORDER (UINT)256
#define DISPID_IDISCFORMAT2ERASE_FULLERASE (UINT)257
#define DISPID_IDISCFORMAT2ERASE_MEDIATYPE (UINT)258
#define DISPID_IDISCFORMAT2ERASE_CLIENTNAME (UINT)259
#define DISPID_IDISCFORMAT2ERASE_ERASEMEDIA (UINT)513
#define DISPID_IDISCFORMAT2ERASEEVENTS_UPDATE (UINT)512
#define DISPID_IDISCFORMAT2DATA_RECORDER (UINT)256
#define DISPID_IDISCFORMAT2DATA_BUFFERUNDERRUNFREEDISABLED (UINT)257
#define DISPID_IDISCFORMAT2DATA_POSTGAPALREADYINIMAGE (UINT)260
#define DISPID_IDISCFORMAT2DATA_CURRENTMEDIASTATUS (UINT)262
#define DISPID_IDISCFORMAT2DATA_WRITEPROTECTSTATUS (UINT)263
#define DISPID_IDISCFORMAT2DATA_TOTALSECTORS (UINT)264
#define DISPID_IDISCFORMAT2DATA_FREESECTORS (UINT)265
#define DISPID_IDISCFORMAT2DATA_NEXTWRITABLEADDRESS (UINT)266
#define DISPID_IDISCFORMAT2DATA_STARTSECTOROFPREVIOUSSESSION (UINT)267
#define DISPID_IDISCFORMAT2DATA_LASTSECTOROFPREVIOUSSESSION (UINT)268
#define DISPID_IDISCFORMAT2DATA_FORCEMEDIATOBECLOSED (UINT)269
#define DISPID_IDISCFORMAT2DATA_DISABLEDVDCOMPATIBILITYMODE (UINT)270
#define DISPID_IDISCFORMAT2DATA_CURRENTMEDIATYPE (UINT)271
#define DISPID_IDISCFORMAT2DATA_CLIENTNAME (UINT)272
#define DISPID_IDISCFORMAT2DATA_REQUESTEDWRITESPEED (UINT)273
#define DISPID_IDISCFORMAT2DATA_REQUESTEDROTATIONTYPEISPURECAV (UINT)274
#define DISPID_IDISCFORMAT2DATA_CURRENTWRITESPEED (UINT)275
#define DISPID_IDISCFORMAT2DATA_CURRENTROTATIONTYPEISPURECAV (UINT)276
#define DISPID_IDISCFORMAT2DATA_SUPPORTEDWRITESPEEDS (UINT)277
#define DISPID_IDISCFORMAT2DATA_SUPPORTEDWRITESPEEDDESCRIPTORS (UINT)278
#define DISPID_IDISCFORMAT2DATA_FORCEOVERWRITE (UINT)279
#define DISPID_IDISCFORMAT2DATA_MUTLISESSIONINTERFACES (UINT)280
#define DISPID_IDISCFORMAT2DATA_WRITE (UINT)512
#define DISPID_IDISCFORMAT2DATA_CANCELWRITE (UINT)513
#define DISPID_IDISCFORMAT2DATA_SETWRITESPEED (UINT)514
#define DISPID_DDISCFORMAT2DATAEVENTS_UPDATE (UINT)512
#define DISPID_IDISCFORMAT2DATAEVENTARGS_ELAPSEDTIME (UINT)768
#define DISPID_IDISCFORMAT2DATAEVENTARGS_ESTIMATEDREMAININGTIME (UINT)769
#define DISPID_IDISCFORMAT2DATAEVENTARGS_ESTIMATEDTOTALTIME (UINT)770
#define DISPID_IDISCFORMAT2DATAEVENTARGS_CURRENTACTION (UINT)771
#define DISPID_IDISCFORMAT2TAO_RECORDER (UINT)256
#define DISPID_IDISCFORMAT2TAO_BUFFERUNDERRUNFREEDISABLED (UINT)258
#define DISPID_IDISCFORMAT2TAO_NUMBEROFEXISTINGTRACKS (UINT)259
#define DISPID_IDISCFORMAT2TAO_TOTALSECTORSONMEDIA (UINT)260
#define DISPID_IDISCFORMAT2TAO_FREESECTORSONMEDIA (UINT)261
#define DISPID_IDISCFORMAT2TAO_USEDSECTORSONMEDIA (UINT)262
#define DISPID_IDISCFORMAT2TAO_DONOTFINALIZEMEDIA (UINT)263
#define DISPID_IDISCFORMAT2TAO_EXPECTEDTABLEOFCONTENTS (UINT)266
#define DISPID_IDISCFORMAT2TAO_CURRENTMEDIATYPE (UINT)267
#define DISPID_IDISCFORMAT2TAO_CLIENTNAME (UINT)270
#define DISPID_IDISCFORMAT2TAO_REQUESTEDWRITESPEED (UINT)271
#define DISPID_IDISCFORMAT2TAO_REQUESTEDROTATIONTYPEISPURECAV (UINT)272
#define DISPID_IDISCFORMAT2TAO_CURRENTWRITESPEED (UINT)273
#define DISPID_IDISCFORMAT2TAO_CURRENTROTATIONTYPEISPURECAV (UINT)274
#define DISPID_IDISCFORMAT2TAO_SUPPORTEDWRITESPEEDS (UINT)275
#define DISPID_IDISCFORMAT2TAO_SUPPORTEDWRITESPEEDDESCRIPTORS (UINT)276
#define DISPID_IDISCFORMAT2TAO_PREPAREMEDIA (UINT)512
#define DISPID_IDISCFORMAT2TAO_ADDAUDIOTRACK (UINT)513
#define DISPID_IDISCFORMAT2TAO_CANCELADDTRACK (UINT)514
#define DISPID_IDISCFORMAT2TAO_FINISHMEDIA (UINT)515
#define DISPID_IDISCFORMAT2TAO_SETWRITESPEED (UINT)516
#define DISPID_DDISCFORMAT2TAOEVENTS_UPDATE (UINT)512
#define DISPID_IDISCFORMAT2TAOEVENTARGS_CURRENTTRACKNUMBER (UINT)768
#define DISPID_IDISCFORMAT2TAOEVENTARGS_CURRENTACTION (UINT)769
#define DISPID_IDISCFORMAT2TAOEVENTARGS_ELAPSEDTIME (UINT)770
#define DISPID_IDISCFORMAT2TAOEVENTARGS_ESTIMATEDREMAININGTIME (UINT)771
#define DISPID_IDISCFORMAT2TAOEVENTARGS_ESTIMATEDTOTALTIME (UINT)772
#define DISPID_IDISCFORMAT2RAWCD_RECORDER (UINT)256
#define DISPID_IDISCFORMAT2RAWCD_BUFFERUNDERRUNFREEDISABLED (UINT)258
#define DISPID_IDISCFORMAT2RAWCD_STARTOFNEXTSESSION (UINT)259
#define DISPID_IDISCFORMAT2RAWCD_LASTPOSSIBLESTARTOFLEADOUT (UINT)260
#define DISPID_IDISCFORMAT2RAWCD_CURRENTMEDIATYPE (UINT)261
#define DISPID_IDISCFORMAT2RAWCD_SUPPORTEDDATASECTORTYPES (UINT)264
#define DISPID_IDISCFORMAT2RAWCD_REQUESTEDDATASECTORTYPE (UINT)265
#define DISPID_IDISCFORMAT2RAWCD_CLIENTNAME (UINT)266
#define DISPID_IDISCFORMAT2RAWCD_REQUESTEDWRITESPEED (UINT)267
#define DISPID_IDISCFORMAT2RAWCD_REQUESTEDROTATIONTYPEISPURECAV (UINT)268
#define DISPID_IDISCFORMAT2RAWCD_CURRENTWRITESPEED (UINT)269
#define DISPID_IDISCFORMAT2RAWCD_CURRENTROTATIONTYPEISPURECAV (UINT)270
#define DISPID_IDISCFORMAT2RAWCD_SUPPORTEDWRITESPEEDS (UINT)271
#define DISPID_IDISCFORMAT2RAWCD_SUPPORTEDWRITESPEEDDESCRIPTORS (UINT)272
#define DISPID_IDISCFORMAT2RAWCD_PREPAREMEDIA (UINT)512
#define DISPID_IDISCFORMAT2RAWCD_WRITEMEDIA (UINT)513
#define DISPID_IDISCFORMAT2RAWCD_WRITEMEDIAWITHVALIDATION (UINT)514
#define DISPID_IDISCFORMAT2RAWCD_CANCELWRITE (UINT)515
#define DISPID_IDISCFORMAT2RAWCD_RELEASEMEDIA (UINT)516
#define DISPID_IDISCFORMAT2RAWCD_SETWRITESPEED (UINT)517
#define DISPID_DDISCFORMAT2RAWCDEVENTS_UPDATE (UINT)512
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_CURRENTTRACKNUMBER (UINT)768
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_CURRENTACTION (UINT)769
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_ELAPSEDTIME (UINT)768
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_ESTIMATEDREMAININGTIME (UINT)769
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_ESTIMATEDTOTALTIME (UINT)770
#define IMAPI_SECTORS_PER_SECOND_AT_1X_CD (UINT)75
#define IMAPI_SECTORS_PER_SECOND_AT_1X_DVD (UINT)680
#define IMAPI_SECTORS_PER_SECOND_AT_1X_BD (UINT)2195
#define IMAPI_SECTORS_PER_SECOND_AT_1X_HD_DVD (UINT)4568
#define DISPID_IMULTISESSION_SUPPORTEDONCURRENTMEDIA (UINT)256
#define DISPID_IMULTISESSION_INUSE (UINT)257
#define DISPID_IMULTISESSION_IMPORTRECORDER (UINT)258
#define DISPID_IMULTISESSION_FIRSTDATASESSION (UINT)512
#define DISPID_IMULTISESSION_STARTSECTOROFPREVIOUSSESSION (UINT)513
#define DISPID_IMULTISESSION_LASTSECTOROFPREVIOUSSESSION (UINT)514
#define DISPID_IMULTISESSION_NEXTWRITABLEADDRESS (UINT)515
#define DISPID_IMULTISESSION_FREESECTORS (UINT)516
#define DISPID_IMULTISESSION_WRITEUNITSIZE (UINT)517
#define DISPID_IMULTISESSION_LASTWRITTENADDRESS (UINT)518
#define DISPID_IMULTISESSION_SECTORSONMEDIA (UINT)519
#define DISPID_IRAWCDIMAGECREATOR_CREATERESULTIMAGE (UINT)512
#define DISPID_IRAWCDIMAGECREATOR_ADDTRACK (UINT)513
#define DISPID_IRAWCDIMAGECREATOR_ADDSPECIALPREGAP (UINT)514
#define DISPID_IRAWCDIMAGECREATOR_ADDSUBCODERWGENERATOR (UINT)515
#define DISPID_IRAWCDIMAGECREATOR_RESULTINGIMAGETYPE (UINT)256
#define DISPID_IRAWCDIMAGECREATOR_STARTOFLEADOUT (UINT)257
#define DISPID_IRAWCDIMAGECREATOR_STARTOFLEADOUTLIMIT (UINT)258
#define DISPID_IRAWCDIMAGECREATOR_DISABLEGAPLESSAUDIO (UINT)259
#define DISPID_IRAWCDIMAGECREATOR_MEDIACATALOGNUMBER (UINT)260
#define DISPID_IRAWCDIMAGECREATOR_STARTINGTRACKNUMBER (UINT)261
#define DISPID_IRAWCDIMAGECREATOR_TRACKINFO (UINT)262
#define DISPID_IRAWCDIMAGECREATOR_NUMBEROFEXISTINGTRACKS (UINT)263
#define DISPID_IRAWCDIMAGECREATOR_USEDSECTORSONDISC (UINT)264
#define DISPID_IRAWCDIMAGECREATOR_EXPECTEDTABLEOFCONTENTS (UINT)265
#define DISPID_IRAWCDTRACKINFO_STARTINGLBA (UINT)256
#define DISPID_IRAWCDTRACKINFO_SECTORCOUNT (UINT)257
#define DISPID_IRAWCDTRACKINFO_TRACKNUMBER (UINT)258
#define DISPID_IRAWCDTRACKINFO_SECTORTYPE (UINT)259
#define DISPID_IRAWCDTRACKINFO_ISRC (UINT)260
#define DISPID_IRAWCDTRACKINFO_DIGITALAUDIOCOPYSETTING (UINT)261
#define DISPID_IRAWCDTRACKINFO_AUDIOHASPREEMPHASIS (UINT)262
#define DISPID_IBLOCKRANGE_STARTLBA (UINT)256
#define DISPID_IBLOCKRANGE_ENDLBA (UINT)257
#define DISPID_IBLOCKRANGELIST_BLOCKRANGES (UINT)256
#define IMAPILib2_MajorVersion (UINT)1
#define IMAPILib2_MinorVersion (UINT)0
#define IMAPI2FS_BOOT_ENTRY_COUNT_MAX (UINT)32
#define DISPID_DFILESYSTEMIMAGEEVENTS_UPDATE (UINT)256
#define DISPID_DFILESYSTEMIMAGEIMPORTEVENTS_UPDATEIMPORT (UINT)257
#define IMAPI2FS_MajorVersion (UINT)1
#define IMAPI2FS_MinorVersion (UINT)0
#define IMAPI_S_PROPERTIESIGNORED (HRESULT)(INT)262656
#define IMAPI_S_BUFFER_TO_SMALL (HRESULT)(INT)262657
#define IMAPI_E_NOTOPENED (HRESULT)(INT)-2147220981
#define IMAPI_E_NOTINITIALIZED (HRESULT)(INT)-2147220980
#define IMAPI_E_USERABORT (HRESULT)(INT)-2147220979
#define IMAPI_E_GENERIC (HRESULT)(INT)-2147220978
#define IMAPI_E_MEDIUM_NOTPRESENT (HRESULT)(INT)-2147220977
#define IMAPI_E_MEDIUM_INVALIDTYPE (HRESULT)(INT)-2147220976
#define IMAPI_E_DEVICE_NOPROPERTIES (HRESULT)(INT)-2147220975
#define IMAPI_E_DEVICE_NOTACCESSIBLE (HRESULT)(INT)-2147220974
#define IMAPI_E_DEVICE_NOTPRESENT (HRESULT)(INT)-2147220973
#define IMAPI_E_DEVICE_INVALIDTYPE (HRESULT)(INT)-2147220972
#define IMAPI_E_INITIALIZE_WRITE (HRESULT)(INT)-2147220971
#define IMAPI_E_INITIALIZE_ENDWRITE (HRESULT)(INT)-2147220970
#define IMAPI_E_FILESYSTEM (HRESULT)(INT)-2147220969
#define IMAPI_E_FILEACCESS (HRESULT)(INT)-2147220968
#define IMAPI_E_DISCINFO (HRESULT)(INT)-2147220967
#define IMAPI_E_TRACKNOTOPEN (HRESULT)(INT)-2147220966
#define IMAPI_E_TRACKOPEN (HRESULT)(INT)-2147220965
#define IMAPI_E_DISCFULL (HRESULT)(INT)-2147220964
#define IMAPI_E_BADJOLIETNAME (HRESULT)(INT)-2147220963
#define IMAPI_E_INVALIDIMAGE (HRESULT)(INT)-2147220962
#define IMAPI_E_NOACTIVEFORMAT (HRESULT)(INT)-2147220961
#define IMAPI_E_NOACTIVERECORDER (HRESULT)(INT)-2147220960
#define IMAPI_E_WRONGFORMAT (HRESULT)(INT)-2147220959
#define IMAPI_E_ALREADYOPEN (HRESULT)(INT)-2147220958
#define IMAPI_E_WRONGDISC (HRESULT)(INT)-2147220957
#define IMAPI_E_FILEEXISTS (HRESULT)(INT)-2147220956
#define IMAPI_E_STASHINUSE (HRESULT)(INT)-2147220955
#define IMAPI_E_DEVICE_STILL_IN_USE (HRESULT)(INT)-2147220954
#define IMAPI_E_LOSS_OF_STREAMING (HRESULT)(INT)-2147220953
#define IMAPI_E_COMPRESSEDSTASH (HRESULT)(INT)-2147220952
#define IMAPI_E_ENCRYPTEDSTASH (HRESULT)(INT)-2147220951
#define IMAPI_E_NOTENOUGHDISKFORSTASH (HRESULT)(INT)-2147220950
#define IMAPI_E_REMOVABLESTASH (HRESULT)(INT)-2147220949
#define IMAPI_E_CANNOT_WRITE_TO_MEDIA (HRESULT)(INT)-2147220948
#define IMAPI_E_TRACK_NOT_BIG_ENOUGH (HRESULT)(INT)-2147220947
#define IMAPI_E_BOOTIMAGE_AND_NONBLANK_DISC (HRESULT)(INT)-2147220946

//--------------------------------------------------------------------------------
// Section: Types (113)
//--------------------------------------------------------------------------------
typedef enum {
    RECORDER_BURNING = 2,
    RECORDER_DOING_NOTHING = 0,
    RECORDER_OPENED = 1,
} DISC_RECORDER_STATE_FLAGS;

typedef int MsftDiscMaster2;

typedef int MsftDiscRecorder2;

typedef int MsftWriteEngine2;

typedef int MsftDiscFormat2Erase;

typedef int MsftDiscFormat2Data;

typedef int MsftDiscFormat2TrackAtOnce;

typedef int MsftDiscFormat2RawCD;

typedef int MsftStreamZero;

typedef int MsftStreamPrng001;

typedef int MsftStreamConcatenate;

typedef int MsftStreamInterleave;

typedef int MsftWriteSpeedDescriptor;

typedef int MsftMultisessionSequential;

typedef int MsftMultisessionRandomWrite;

typedef int MsftRawCDImageCreator;

typedef enum {
    IMAPI_MEDIA_TYPE_UNKNOWN = 0,
    IMAPI_MEDIA_TYPE_CDROM = 1,
    IMAPI_MEDIA_TYPE_CDR = 2,
    IMAPI_MEDIA_TYPE_CDRW = 3,
    IMAPI_MEDIA_TYPE_DVDROM = 4,
    IMAPI_MEDIA_TYPE_DVDRAM = 5,
    IMAPI_MEDIA_TYPE_DVDPLUSR = 6,
    IMAPI_MEDIA_TYPE_DVDPLUSRW = 7,
    IMAPI_MEDIA_TYPE_DVDPLUSR_DUALLAYER = 8,
    IMAPI_MEDIA_TYPE_DVDDASHR = 9,
    IMAPI_MEDIA_TYPE_DVDDASHRW = 10,
    IMAPI_MEDIA_TYPE_DVDDASHR_DUALLAYER = 11,
    IMAPI_MEDIA_TYPE_DISK = 12,
    IMAPI_MEDIA_TYPE_DVDPLUSRW_DUALLAYER = 13,
    IMAPI_MEDIA_TYPE_HDDVDROM = 14,
    IMAPI_MEDIA_TYPE_HDDVDR = 15,
    IMAPI_MEDIA_TYPE_HDDVDRAM = 16,
    IMAPI_MEDIA_TYPE_BDROM = 17,
    IMAPI_MEDIA_TYPE_BDR = 18,
    IMAPI_MEDIA_TYPE_BDRE = 19,
    IMAPI_MEDIA_TYPE_MAX = 19,
} IMAPI_MEDIA_PHYSICAL_TYPE;

typedef enum {
    IMAPI_WRITEPROTECTED_UNTIL_POWERDOWN = 1,
    IMAPI_WRITEPROTECTED_BY_CARTRIDGE = 2,
    IMAPI_WRITEPROTECTED_BY_MEDIA_SPECIFIC_REASON = 4,
    IMAPI_WRITEPROTECTED_BY_SOFTWARE_WRITE_PROTECT = 8,
    IMAPI_WRITEPROTECTED_BY_DISC_CONTROL_BLOCK = 16,
    IMAPI_WRITEPROTECTED_READ_ONLY_MEDIA = 16384,
} IMAPI_MEDIA_WRITE_PROTECT_STATE;

typedef enum {
    IMAPI_READ_TRACK_ADDRESS_TYPE_LBA = 0,
    IMAPI_READ_TRACK_ADDRESS_TYPE_TRACK = 1,
    IMAPI_READ_TRACK_ADDRESS_TYPE_SESSION = 2,
} IMAPI_READ_TRACK_ADDRESS_TYPE;

typedef enum {
    IMAPI_MODE_PAGE_REQUEST_TYPE_CURRENT_VALUES = 0,
    IMAPI_MODE_PAGE_REQUEST_TYPE_CHANGEABLE_VALUES = 1,
    IMAPI_MODE_PAGE_REQUEST_TYPE_DEFAULT_VALUES = 2,
    IMAPI_MODE_PAGE_REQUEST_TYPE_SAVED_VALUES = 3,
} IMAPI_MODE_PAGE_REQUEST_TYPE;

typedef enum {
    IMAPI_MODE_PAGE_TYPE_READ_WRITE_ERROR_RECOVERY = 1,
    IMAPI_MODE_PAGE_TYPE_MRW = 3,
    IMAPI_MODE_PAGE_TYPE_WRITE_PARAMETERS = 5,
    IMAPI_MODE_PAGE_TYPE_CACHING = 8,
    IMAPI_MODE_PAGE_TYPE_INFORMATIONAL_EXCEPTIONS = 28,
    IMAPI_MODE_PAGE_TYPE_TIMEOUT_AND_PROTECT = 29,
    IMAPI_MODE_PAGE_TYPE_POWER_CONDITION = 26,
    IMAPI_MODE_PAGE_TYPE_LEGACY_CAPABILITIES = 42,
} IMAPI_MODE_PAGE_TYPE;

typedef enum {
    IMAPI_FEATURE_PAGE_TYPE_PROFILE_LIST = 0,
    IMAPI_FEATURE_PAGE_TYPE_CORE = 1,
    IMAPI_FEATURE_PAGE_TYPE_MORPHING = 2,
    IMAPI_FEATURE_PAGE_TYPE_REMOVABLE_MEDIUM = 3,
    IMAPI_FEATURE_PAGE_TYPE_WRITE_PROTECT = 4,
    IMAPI_FEATURE_PAGE_TYPE_RANDOMLY_READABLE = 16,
    IMAPI_FEATURE_PAGE_TYPE_CD_MULTIREAD = 29,
    IMAPI_FEATURE_PAGE_TYPE_CD_READ = 30,
    IMAPI_FEATURE_PAGE_TYPE_DVD_READ = 31,
    IMAPI_FEATURE_PAGE_TYPE_RANDOMLY_WRITABLE = 32,
    IMAPI_FEATURE_PAGE_TYPE_INCREMENTAL_STREAMING_WRITABLE = 33,
    IMAPI_FEATURE_PAGE_TYPE_SECTOR_ERASABLE = 34,
    IMAPI_FEATURE_PAGE_TYPE_FORMATTABLE = 35,
    IMAPI_FEATURE_PAGE_TYPE_HARDWARE_DEFECT_MANAGEMENT = 36,
    IMAPI_FEATURE_PAGE_TYPE_WRITE_ONCE = 37,
    IMAPI_FEATURE_PAGE_TYPE_RESTRICTED_OVERWRITE = 38,
    IMAPI_FEATURE_PAGE_TYPE_CDRW_CAV_WRITE = 39,
    IMAPI_FEATURE_PAGE_TYPE_MRW = 40,
    IMAPI_FEATURE_PAGE_TYPE_ENHANCED_DEFECT_REPORTING = 41,
    IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_RW = 42,
    IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_R = 43,
    IMAPI_FEATURE_PAGE_TYPE_RIGID_RESTRICTED_OVERWRITE = 44,
    IMAPI_FEATURE_PAGE_TYPE_CD_TRACK_AT_ONCE = 45,
    IMAPI_FEATURE_PAGE_TYPE_CD_MASTERING = 46,
    IMAPI_FEATURE_PAGE_TYPE_DVD_DASH_WRITE = 47,
    IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_READ = 48,
    IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_R_WRITE = 49,
    IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_RW_WRITE = 50,
    IMAPI_FEATURE_PAGE_TYPE_LAYER_JUMP_RECORDING = 51,
    IMAPI_FEATURE_PAGE_TYPE_CD_RW_MEDIA_WRITE_SUPPORT = 55,
    IMAPI_FEATURE_PAGE_TYPE_BD_PSEUDO_OVERWRITE = 56,
    IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_R_DUAL_LAYER = 59,
    IMAPI_FEATURE_PAGE_TYPE_BD_READ = 64,
    IMAPI_FEATURE_PAGE_TYPE_BD_WRITE = 65,
    IMAPI_FEATURE_PAGE_TYPE_HD_DVD_READ = 80,
    IMAPI_FEATURE_PAGE_TYPE_HD_DVD_WRITE = 81,
    IMAPI_FEATURE_PAGE_TYPE_POWER_MANAGEMENT = 256,
    IMAPI_FEATURE_PAGE_TYPE_SMART = 257,
    IMAPI_FEATURE_PAGE_TYPE_EMBEDDED_CHANGER = 258,
    IMAPI_FEATURE_PAGE_TYPE_CD_ANALOG_PLAY = 259,
    IMAPI_FEATURE_PAGE_TYPE_MICROCODE_UPDATE = 260,
    IMAPI_FEATURE_PAGE_TYPE_TIMEOUT = 261,
    IMAPI_FEATURE_PAGE_TYPE_DVD_CSS = 262,
    IMAPI_FEATURE_PAGE_TYPE_REAL_TIME_STREAMING = 263,
    IMAPI_FEATURE_PAGE_TYPE_LOGICAL_UNIT_SERIAL_NUMBER = 264,
    IMAPI_FEATURE_PAGE_TYPE_MEDIA_SERIAL_NUMBER = 265,
    IMAPI_FEATURE_PAGE_TYPE_DISC_CONTROL_BLOCKS = 266,
    IMAPI_FEATURE_PAGE_TYPE_DVD_CPRM = 267,
    IMAPI_FEATURE_PAGE_TYPE_FIRMWARE_INFORMATION = 268,
    IMAPI_FEATURE_PAGE_TYPE_AACS = 269,
    IMAPI_FEATURE_PAGE_TYPE_VCPS = 272,
} IMAPI_FEATURE_PAGE_TYPE;

typedef enum {
    IMAPI_PROFILE_TYPE_INVALID = 0,
    IMAPI_PROFILE_TYPE_NON_REMOVABLE_DISK = 1,
    IMAPI_PROFILE_TYPE_REMOVABLE_DISK = 2,
    IMAPI_PROFILE_TYPE_MO_ERASABLE = 3,
    IMAPI_PROFILE_TYPE_MO_WRITE_ONCE = 4,
    IMAPI_PROFILE_TYPE_AS_MO = 5,
    IMAPI_PROFILE_TYPE_CDROM = 8,
    IMAPI_PROFILE_TYPE_CD_RECORDABLE = 9,
    IMAPI_PROFILE_TYPE_CD_REWRITABLE = 10,
    IMAPI_PROFILE_TYPE_DVDROM = 16,
    IMAPI_PROFILE_TYPE_DVD_DASH_RECORDABLE = 17,
    IMAPI_PROFILE_TYPE_DVD_RAM = 18,
    IMAPI_PROFILE_TYPE_DVD_DASH_REWRITABLE = 19,
    IMAPI_PROFILE_TYPE_DVD_DASH_RW_SEQUENTIAL = 20,
    IMAPI_PROFILE_TYPE_DVD_DASH_R_DUAL_SEQUENTIAL = 21,
    IMAPI_PROFILE_TYPE_DVD_DASH_R_DUAL_LAYER_JUMP = 22,
    IMAPI_PROFILE_TYPE_DVD_PLUS_RW = 26,
    IMAPI_PROFILE_TYPE_DVD_PLUS_R = 27,
    IMAPI_PROFILE_TYPE_DDCDROM = 32,
    IMAPI_PROFILE_TYPE_DDCD_RECORDABLE = 33,
    IMAPI_PROFILE_TYPE_DDCD_REWRITABLE = 34,
    IMAPI_PROFILE_TYPE_DVD_PLUS_RW_DUAL = 42,
    IMAPI_PROFILE_TYPE_DVD_PLUS_R_DUAL = 43,
    IMAPI_PROFILE_TYPE_BD_ROM = 64,
    IMAPI_PROFILE_TYPE_BD_R_SEQUENTIAL = 65,
    IMAPI_PROFILE_TYPE_BD_R_RANDOM_RECORDING = 66,
    IMAPI_PROFILE_TYPE_BD_REWRITABLE = 67,
    IMAPI_PROFILE_TYPE_HD_DVD_ROM = 80,
    IMAPI_PROFILE_TYPE_HD_DVD_RECORDABLE = 81,
    IMAPI_PROFILE_TYPE_HD_DVD_RAM = 82,
    IMAPI_PROFILE_TYPE_NON_STANDARD = 65535,
} IMAPI_PROFILE_TYPE;

typedef enum {
    IMAPI_FORMAT2_DATA_WRITE_ACTION_VALIDATING_MEDIA = 0,
    IMAPI_FORMAT2_DATA_WRITE_ACTION_FORMATTING_MEDIA = 1,
    IMAPI_FORMAT2_DATA_WRITE_ACTION_INITIALIZING_HARDWARE = 2,
    IMAPI_FORMAT2_DATA_WRITE_ACTION_CALIBRATING_POWER = 3,
    IMAPI_FORMAT2_DATA_WRITE_ACTION_WRITING_DATA = 4,
    IMAPI_FORMAT2_DATA_WRITE_ACTION_FINALIZATION = 5,
    IMAPI_FORMAT2_DATA_WRITE_ACTION_COMPLETED = 6,
    IMAPI_FORMAT2_DATA_WRITE_ACTION_VERIFYING = 7,
} IMAPI_FORMAT2_DATA_WRITE_ACTION;

typedef enum {
    IMAPI_FORMAT2_DATA_MEDIA_STATE_UNKNOWN = 0,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_INFORMATIONAL_MASK = 15,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_UNSUPPORTED_MASK = 64512,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_OVERWRITE_ONLY = 1,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_RANDOMLY_WRITABLE = 1,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_BLANK = 2,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_APPENDABLE = 4,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_FINAL_SESSION = 8,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_DAMAGED = 1024,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_ERASE_REQUIRED = 2048,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_NON_EMPTY_SESSION = 4096,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_WRITE_PROTECTED = 8192,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_FINALIZED = 16384,
    IMAPI_FORMAT2_DATA_MEDIA_STATE_UNSUPPORTED_MEDIA = 32768,
} IMAPI_FORMAT2_DATA_MEDIA_STATE;

typedef enum {
    IMAPI_FORMAT2_TAO_WRITE_ACTION_UNKNOWN = 0,
    IMAPI_FORMAT2_TAO_WRITE_ACTION_PREPARING = 1,
    IMAPI_FORMAT2_TAO_WRITE_ACTION_WRITING = 2,
    IMAPI_FORMAT2_TAO_WRITE_ACTION_FINISHING = 3,
    IMAPI_FORMAT2_TAO_WRITE_ACTION_VERIFYING = 4,
} IMAPI_FORMAT2_TAO_WRITE_ACTION;

typedef enum {
    IMAPI_FORMAT2_RAW_CD_SUBCODE_PQ_ONLY = 1,
    IMAPI_FORMAT2_RAW_CD_SUBCODE_IS_COOKED = 2,
    IMAPI_FORMAT2_RAW_CD_SUBCODE_IS_RAW = 3,
} IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE;

typedef enum {
    IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_UNKNOWN = 0,
    IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_PREPARING = 1,
    IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_WRITING = 2,
    IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_FINISHING = 3,
} IMAPI_FORMAT2_RAW_CD_WRITE_ACTION;

typedef enum {
    IMAPI_CD_SECTOR_AUDIO = 0,
    IMAPI_CD_SECTOR_MODE_ZERO = 1,
    IMAPI_CD_SECTOR_MODE1 = 2,
    IMAPI_CD_SECTOR_MODE2FORM0 = 3,
    IMAPI_CD_SECTOR_MODE2FORM1 = 4,
    IMAPI_CD_SECTOR_MODE2FORM2 = 5,
    IMAPI_CD_SECTOR_MODE1RAW = 6,
    IMAPI_CD_SECTOR_MODE2FORM0RAW = 7,
    IMAPI_CD_SECTOR_MODE2FORM1RAW = 8,
    IMAPI_CD_SECTOR_MODE2FORM2RAW = 9,
} IMAPI_CD_SECTOR_TYPE;

typedef enum {
    IMAPI_CD_TRACK_DIGITAL_COPY_PERMITTED = 0,
    IMAPI_CD_TRACK_DIGITAL_COPY_PROHIBITED = 1,
    IMAPI_CD_TRACK_DIGITAL_COPY_SCMS = 2,
} IMAPI_CD_TRACK_DIGITAL_COPY_SETTING;

typedef enum {
    IMAPI_BURN_VERIFICATION_NONE = 0,
    IMAPI_BURN_VERIFICATION_QUICK = 1,
    IMAPI_BURN_VERIFICATION_FULL = 2,
} IMAPI_BURN_VERIFICATION_LEVEL;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscMaster2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DDiscMaster2Events;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscRecorder2Ex;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscRecorder2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IWriteEngine2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IWriteEngine2EventArgs;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DWriteEngine2Events;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscFormat2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscFormat2Erase;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DDiscFormat2EraseEvents;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscFormat2Data;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DDiscFormat2DataEvents;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscFormat2DataEventArgs;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscFormat2TrackAtOnce;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DDiscFormat2TrackAtOnceEvents;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscFormat2TrackAtOnceEventArgs;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscFormat2RawCD;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DDiscFormat2RawCDEvents;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IDiscFormat2RawCDEventArgs;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBurnVerification;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IWriteSpeedDescriptor;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IMultisession;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IMultisessionSequential;

// TODO: this type is limited to platform 'windows6.1'
typedef int IMultisessionSequential2;

// TODO: this type is limited to platform 'windows6.1'
typedef int IMultisessionRandomWrite;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IStreamPseudoRandomBased;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IStreamConcatenate;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IStreamInterleave;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRawCDImageCreator;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IRawCDImageTrackInfo;

// TODO: this type is limited to platform 'windows6.1'
typedef int IBlockRange;

// TODO: this type is limited to platform 'windows6.1'
typedef int IBlockRangeList;

typedef int BootOptions;

typedef int FsiStream;

typedef int FileSystemImageResult;

typedef int ProgressItem;

typedef int EnumProgressItems;

typedef int ProgressItems;

typedef int FsiDirectoryItem;

typedef int FsiFileItem;

typedef int EnumFsiItems;

typedef int FsiNamedStreams;

typedef int MsftFileSystemImage;

typedef int MsftIsoImageManager;

typedef int BlockRange;

typedef int BlockRangeList;

typedef enum {
    FsiItemNotFound = 0,
    FsiItemDirectory = 1,
    FsiItemFile = 2,
} FsiItemType;

typedef enum {
    FsiFileSystemNone = 0,
    FsiFileSystemISO9660 = 1,
    FsiFileSystemJoliet = 2,
    FsiFileSystemUDF = 4,
    FsiFileSystemUnknown = 1073741824,
} FsiFileSystems;

typedef enum {
    EmulationNone = 0,
    Emulation12MFloppy = 1,
    Emulation144MFloppy = 2,
    Emulation288MFloppy = 3,
    EmulationHardDisk = 4,
} EmulationType;

typedef enum {
    PlatformX86 = 0,
    PlatformPowerPC = 1,
    PlatformMac = 2,
    PlatformEFI = 239,
} PlatformId;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IBootOptions;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IProgressItem;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IEnumProgressItems;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IProgressItems;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFileSystemImageResult;

// TODO: this type is limited to platform 'windows6.1'
typedef int IFileSystemImageResult2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFsiItem;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IEnumFsiItems;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFsiFileItem;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFsiFileItem2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFsiNamedStreams;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFsiDirectoryItem;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFsiDirectoryItem2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFileSystemImage;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFileSystemImage2;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IFileSystemImage3;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DFileSystemImageEvents;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int DFileSystemImageImportEvents;

// TODO: this type is limited to platform 'windows6.0.6000'
typedef int IIsoImageManager;

typedef int MSDiscRecorderObj;

typedef int MSDiscMasterObj;

typedef int MSEnumDiscRecordersObj;

typedef enum {
    MEDIA_CDDA_CDROM = 1,
    MEDIA_CD_ROM_XA = 2,
    MEDIA_CD_I = 3,
    MEDIA_CD_EXTRA = 4,
    MEDIA_CD_OTHER = 5,
    MEDIA_SPECIAL = 6,
} MEDIA_TYPES;

typedef enum {
    MEDIA_BLANK = 1,
    MEDIA_RW = 2,
    MEDIA_WRITABLE = 4,
    MEDIA_FORMAT_UNUSABLE_BY_IMAPI = 8,
} MEDIA_FLAGS;

typedef enum {
    RECORDER_CDR = 1,
    RECORDER_CDRW = 2,
} RECORDER_TYPES;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IDiscRecorder;

typedef int IEnumDiscRecorders;

typedef int IEnumDiscMasterFormats;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IRedbookDiscMaster;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IJolietDiscMaster;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IDiscMasterProgressEvents;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IDiscMaster;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
