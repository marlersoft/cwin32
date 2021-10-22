// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (277)
//--------------------------------------------------------------------------------
#define IOCTL_MTP_CUSTOM_COMMAND (UINT)827348045
#define MTP_NEXTPHASE_READ_DATA (UINT)1
#define MTP_NEXTPHASE_WRITE_DATA (UINT)2
#define MTP_NEXTPHASE_NO_DATA (UINT)3
#define RSA_KEY_LEN (UINT)64
#define SAC_SESSION_KEYLEN (UINT)8
#define SAC_PROTOCOL_WMDM (UINT)1
#define SAC_PROTOCOL_V1 (UINT)2
#define SAC_CERT_X509 (UINT)1
#define SAC_CERT_V1 (UINT)2
#define WMDM_DEVICE_PROTOCOL_MTP GUID { "979e54e5-0afc-4604-8d93-dc798a4bcf45" }
#define WMDM_DEVICE_PROTOCOL_RAPI GUID { "2a11ed91-8c8f-41e4-82d1-8386e003561c" }
#define WMDM_DEVICE_PROTOCOL_MSC GUID { "a4d2c26c-a881-44bb-bd5d-1f703c71f7a9" }
#define WMDM_SERVICE_PROVIDER_VENDOR_MICROSOFT GUID { "7de8686d-78ee-43ea-a496-c625ac91cc5d" }
#define WMDMID_LENGTH (UINT)128
#define WMDM_MAC_LENGTH (UINT)8
#define WMDM_S_NOT_ALL_PROPERTIES_APPLIED (INT)282625
#define WMDM_S_NOT_ALL_PROPERTIES_RETRIEVED (INT)282626
#define WMDM_E_BUSY (INT)-2147201024
#define WMDM_E_INTERFACEDEAD (INT)-2147201023
#define WMDM_E_INVALIDTYPE (INT)-2147201022
#define WMDM_E_PROCESSFAILED (INT)-2147201021
#define WMDM_E_NOTSUPPORTED (INT)-2147201020
#define WMDM_E_NOTCERTIFIED (INT)-2147201019
#define WMDM_E_NORIGHTS (INT)-2147201018
#define WMDM_E_CALL_OUT_OF_SEQUENCE (INT)-2147201017
#define WMDM_E_BUFFERTOOSMALL (INT)-2147201016
#define WMDM_E_MOREDATA (INT)-2147201015
#define WMDM_E_MAC_CHECK_FAILED (INT)-2147201014
#define WMDM_E_USER_CANCELLED (INT)-2147201013
#define WMDM_E_SDMI_TRIGGER (INT)-2147201012
#define WMDM_E_SDMI_NOMORECOPIES (INT)-2147201011
#define WMDM_E_REVOKED (INT)-2147201010
#define WMDM_E_LICENSE_NOTEXIST (INT)-2147201009
#define WMDM_E_INCORRECT_APPSEC (INT)-2147201008
#define WMDM_E_INCORRECT_RIGHTS (INT)-2147201007
#define WMDM_E_LICENSE_EXPIRED (INT)-2147201006
#define WMDM_E_CANTOPEN_PMSN_SERVICE_PIPE (INT)-2147201005
#define WMDM_E_TOO_MANY_SESSIONS (INT)-2147201005
#define WMDM_WMDM_REVOKED (UINT)1
#define WMDM_APP_REVOKED (UINT)2
#define WMDM_SP_REVOKED (UINT)4
#define WMDM_SCP_REVOKED (UINT)8
#define WMDM_GET_FORMAT_SUPPORT_AUDIO (UINT)1
#define WMDM_GET_FORMAT_SUPPORT_VIDEO (UINT)2
#define WMDM_GET_FORMAT_SUPPORT_FILE (UINT)4
#define WMDM_RIGHTS_PLAYBACKCOUNT (UINT)1
#define WMDM_RIGHTS_EXPIRATIONDATE (UINT)2
#define WMDM_RIGHTS_GROUPID (UINT)4
#define WMDM_RIGHTS_FREESERIALIDS (UINT)8
#define WMDM_RIGHTS_NAMEDSERIALIDS (UINT)16
#define WMDM_DEVICE_TYPE_PLAYBACK (UINT)1
#define WMDM_DEVICE_TYPE_RECORD (UINT)2
#define WMDM_DEVICE_TYPE_DECODE (UINT)4
#define WMDM_DEVICE_TYPE_ENCODE (UINT)8
#define WMDM_DEVICE_TYPE_STORAGE (UINT)16
#define WMDM_DEVICE_TYPE_VIRTUAL (UINT)32
#define WMDM_DEVICE_TYPE_SDMI (UINT)64
#define WMDM_DEVICE_TYPE_NONSDMI (UINT)128
#define WMDM_DEVICE_TYPE_NONREENTRANT (UINT)256
#define WMDM_DEVICE_TYPE_FILELISTRESYNC (UINT)512
#define WMDM_DEVICE_TYPE_VIEW_PREF_METADATAVIEW (UINT)1024
#define WMDM_POWER_CAP_BATTERY (UINT)1
#define WMDM_POWER_CAP_EXTERNAL (UINT)2
#define WMDM_POWER_IS_BATTERY (UINT)4
#define WMDM_POWER_IS_EXTERNAL (UINT)8
#define WMDM_POWER_PERCENT_AVAILABLE (UINT)16
#define WMDM_STATUS_READY (UINT)1
#define WMDM_STATUS_BUSY (UINT)2
#define WMDM_STATUS_DEVICE_NOTPRESENT (UINT)4
#define WMDM_STATUS_DEVICECONTROL_PLAYING (UINT)8
#define WMDM_STATUS_DEVICECONTROL_RECORDING (UINT)16
#define WMDM_STATUS_DEVICECONTROL_PAUSED (UINT)32
#define WMDM_STATUS_DEVICECONTROL_REMOTE (UINT)64
#define WMDM_STATUS_DEVICECONTROL_STREAM (UINT)128
#define WMDM_STATUS_STORAGE_NOTPRESENT (UINT)256
#define WMDM_STATUS_STORAGE_INITIALIZING (UINT)512
#define WMDM_STATUS_STORAGE_BROKEN (UINT)1024
#define WMDM_STATUS_STORAGE_NOTSUPPORTED (UINT)2048
#define WMDM_STATUS_STORAGE_UNFORMATTED (UINT)4096
#define WMDM_STATUS_STORAGECONTROL_INSERTING (UINT)8192
#define WMDM_STATUS_STORAGECONTROL_DELETING (UINT)16384
#define WMDM_STATUS_STORAGECONTROL_APPENDING (UINT)32768
#define WMDM_STATUS_STORAGECONTROL_MOVING (UINT)65536
#define WMDM_STATUS_STORAGECONTROL_READING (UINT)131072
#define WMDM_DEVICECAP_CANPLAY (UINT)1
#define WMDM_DEVICECAP_CANSTREAMPLAY (UINT)2
#define WMDM_DEVICECAP_CANRECORD (UINT)4
#define WMDM_DEVICECAP_CANSTREAMRECORD (UINT)8
#define WMDM_DEVICECAP_CANPAUSE (UINT)16
#define WMDM_DEVICECAP_CANRESUME (UINT)32
#define WMDM_DEVICECAP_CANSTOP (UINT)64
#define WMDM_DEVICECAP_CANSEEK (UINT)128
#define WMDM_DEVICECAP_HASSECURECLOCK (UINT)256
#define WMDM_SEEK_REMOTECONTROL (UINT)1
#define WMDM_SEEK_STREAMINGAUDIO (UINT)2
#define WMDM_STORAGE_ATTR_FILESYSTEM (UINT)1
#define WMDM_STORAGE_ATTR_REMOVABLE (UINT)2
#define WMDM_STORAGE_ATTR_NONREMOVABLE (UINT)4
#define WMDM_FILE_ATTR_FOLDER (UINT)8
#define WMDM_FILE_ATTR_LINK (UINT)16
#define WMDM_FILE_ATTR_FILE (UINT)32
#define WMDM_FILE_ATTR_VIDEO (UINT)64
#define WMDM_STORAGE_ATTR_CANEDITMETADATA (UINT)128
#define WMDM_STORAGE_ATTR_FOLDERS (UINT)256
#define WMDM_FILE_ATTR_AUDIO (UINT)4096
#define WMDM_FILE_ATTR_DATA (UINT)8192
#define WMDM_FILE_ATTR_CANPLAY (UINT)16384
#define WMDM_FILE_ATTR_CANDELETE (UINT)32768
#define WMDM_FILE_ATTR_CANMOVE (UINT)65536
#define WMDM_FILE_ATTR_CANRENAME (UINT)131072
#define WMDM_FILE_ATTR_CANREAD (UINT)262144
#define WMDM_FILE_ATTR_MUSIC (UINT)524288
#define WMDM_FILE_CREATE_OVERWRITE (UINT)1048576
#define WMDM_FILE_ATTR_AUDIOBOOK (UINT)2097152
#define WMDM_FILE_ATTR_HIDDEN (UINT)4194304
#define WMDM_FILE_ATTR_SYSTEM (UINT)8388608
#define WMDM_FILE_ATTR_READONLY (UINT)16777216
#define WMDM_STORAGE_ATTR_HAS_FOLDERS (UINT)33554432
#define WMDM_STORAGE_ATTR_HAS_FILES (UINT)67108864
#define WMDM_STORAGE_IS_DEFAULT (UINT)134217728
#define WMDM_STORAGE_CONTAINS_DEFAULT (UINT)268435456
#define WMDM_STORAGE_ATTR_VIRTUAL (UINT)536870912
#define WMDM_STORAGECAP_FOLDERSINROOT (UINT)1
#define WMDM_STORAGECAP_FILESINROOT (UINT)2
#define WMDM_STORAGECAP_FOLDERSINFOLDERS (UINT)4
#define WMDM_STORAGECAP_FILESINFOLDERS (UINT)8
#define WMDM_STORAGECAP_FOLDERLIMITEXISTS (UINT)16
#define WMDM_STORAGECAP_FILELIMITEXISTS (UINT)32
#define WMDM_STORAGECAP_NOT_INITIALIZABLE (UINT)64
#define WMDM_MODE_BLOCK (UINT)1
#define WMDM_MODE_THREAD (UINT)2
#define WMDM_CONTENT_FILE (UINT)4
#define WMDM_CONTENT_FOLDER (UINT)8
#define WMDM_CONTENT_OPERATIONINTERFACE (UINT)16
#define WMDM_MODE_QUERY (UINT)32
#define WMDM_MODE_PROGRESS (UINT)64
#define WMDM_MODE_TRANSFER_PROTECTED (UINT)128
#define WMDM_MODE_TRANSFER_UNPROTECTED (UINT)256
#define WMDM_STORAGECONTROL_INSERTBEFORE (UINT)512
#define WMDM_STORAGECONTROL_INSERTAFTER (UINT)1024
#define WMDM_STORAGECONTROL_INSERTINTO (UINT)2048
#define WMDM_MODE_RECURSIVE (UINT)4096
#define WMDM_RIGHTS_PLAY_ON_PC (UINT)1
#define WMDM_RIGHTS_COPY_TO_NON_SDMI_DEVICE (UINT)2
#define WMDM_RIGHTS_COPY_TO_CD (UINT)8
#define WMDM_RIGHTS_COPY_TO_SDMI_DEVICE (UINT)16
#define WMDM_SEEK_BEGIN (UINT)1
#define WMDM_SEEK_CURRENT (UINT)2
#define WMDM_SEEK_END (UINT)8
#define DO_NOT_VIRTUALIZE_STORAGES_AS_DEVICES (UINT)1
#define ALLOW_OUTOFBAND_NOTIFICATION (UINT)2
#define MDSP_READ (UINT)1
#define MDSP_WRITE (UINT)2
#define MDSP_SEEK_BOF (UINT)1
#define MDSP_SEEK_CUR (UINT)2
#define MDSP_SEEK_EOF (UINT)4
#define WMDM_SCP_EXAMINE_EXTENSION (INT)1
#define WMDM_SCP_EXAMINE_DATA (INT)2
#define WMDM_SCP_DECIDE_DATA (INT)8
#define WMDM_SCP_PROTECTED_OUTPUT (INT)16
#define WMDM_SCP_UNPROTECTED_OUTPUT (INT)32
#define WMDM_SCP_RIGHTS_DATA (INT)64
#define WMDM_SCP_TRANSFER_OBJECTDATA (INT)32
#define WMDM_SCP_NO_MORE_CHANGES (INT)64
#define WMDM_SCP_DRMINFO_NOT_DRMPROTECTED (INT)0
#define WMDM_SCP_DRMINFO_V1HEADER (INT)1
#define WMDM_SCP_DRMINFO_V2HEADER (INT)2
#define SCP_EVENTID_ACQSECURECLOCK GUID { "86248cc9-4a59-43e2-9146-48a7f3f4140c" }
#define SCP_EVENTID_NEEDTOINDIV GUID { "87a507c7-b469-4386-b976-d5d1ce538a6f" }
#define SCP_EVENTID_DRMINFO GUID { "213dd287-41d2-432b-9e3f-3b4f7b3581dd" }
#define SCP_PARAMID_DRMVERSION GUID { "41d0155d-7cc7-4217-ada9-005074624da4" }
#define SAC_MAC_LEN (UINT)8
#define WMDM_LOG_SEV_INFO (UINT)1
#define WMDM_LOG_SEV_WARN (UINT)2
#define WMDM_LOG_SEV_ERROR (UINT)4
#define WMDM_LOG_NOTIMESTAMP (UINT)16
#define g_wszWMDMFileName "WMDM/FileName"
#define g_wszWMDMFormatCode "WMDM/FormatCode"
#define g_wszWMDMLastModifiedDate "WMDM/LastModifiedDate"
#define g_wszWMDMFileCreationDate "WMDM/FileCreationDate"
#define g_wszWMDMFileSize "WMDM/FileSize"
#define g_wszWMDMFileAttributes "WMDM/FileAttributes"
#define g_wszAudioWAVECodec "WMDM/AudioWAVECodec"
#define g_wszVideoFourCCCodec "WMDM/VideoFourCCCodec"
#define g_wszWMDMTitle "WMDM/Title"
#define g_wszWMDMAuthor "WMDM/Author"
#define g_wszWMDMDescription "WMDM/Description"
#define g_wszWMDMIsProtected "WMDM/IsProtected"
#define g_wszWMDMAlbumTitle "WMDM/AlbumTitle"
#define g_wszWMDMAlbumArtist "WMDM/AlbumArtist"
#define g_wszWMDMTrack "WMDM/Track"
#define g_wszWMDMGenre "WMDM/Genre"
#define g_wszWMDMTrackMood "WMDM/TrackMood"
#define g_wszWMDMAlbumCoverFormat "WMDM/AlbumCoverFormat"
#define g_wszWMDMAlbumCoverSize "WMDM/AlbumCoverSize"
#define g_wszWMDMAlbumCoverHeight "WMDM/AlbumCoverHeight"
#define g_wszWMDMAlbumCoverWidth "WMDM/AlbumCoverWidth"
#define g_wszWMDMAlbumCoverDuration "WMDM/AlbumCoverDuration"
#define g_wszWMDMAlbumCoverData "WMDM/AlbumCoverData"
#define g_wszWMDMYear "WMDM/Year"
#define g_wszWMDMComposer "WMDM/Composer"
#define g_wszWMDMCodec "WMDM/Codec"
#define g_wszWMDMDRMId "WMDM/DRMId"
#define g_wszWMDMBitrate "WMDM/Bitrate"
#define g_wszWMDMBitRateType "WMDM/BitRateType"
#define g_wszWMDMSampleRate "WMDM/SampleRate"
#define g_wszWMDMNumChannels "WMDM/NumChannels"
#define g_wszWMDMBlockAlignment "WMDM/BlockAlignment"
#define g_wszWMDMAudioBitDepth "WMDM/AudioBitDepth"
#define g_wszWMDMTotalBitrate "WMDM/TotalBitrate"
#define g_wszWMDMVideoBitrate "WMDM/VideoBitrate"
#define g_wszWMDMFrameRate "WMDM/FrameRate"
#define g_wszWMDMScanType "WMDM/ScanType"
#define g_wszWMDMKeyFrameDistance "WMDM/KeyFrameDistance"
#define g_wszWMDMBufferSize "WMDM/BufferSize"
#define g_wszWMDMQualitySetting "WMDM/QualitySetting"
#define g_wszWMDMEncodingProfile "WMDM/EncodingProfile"
#define g_wszWMDMDuration "WMDM/Duration"
#define g_wszWMDMAlbumArt "WMDM/AlbumArt"
#define g_wszWMDMBuyNow "WMDM/BuyNow"
#define g_wszWMDMNonConsumable "WMDM/NonConsumable"
#define g_wszWMDMediaClassPrimaryID "WMDM/MediaClassPrimaryID"
#define g_wszWMDMMediaClassSecondaryID "WMDM/MediaClassSecondaryID"
#define g_wszWMDMUserEffectiveRating "WMDM/UserEffectiveRating"
#define g_wszWMDMUserRating "WMDM/UserRating"
#define g_wszWMDMUserRatingOnDevice "WMDM/UserRatingOnDevice"
#define g_wszWMDMPlayCount "WMDM/PlayCount"
#define g_wszWMDMDevicePlayCount "WMDM/DevicePlayCount"
#define g_wszWMDMAuthorDate "WMDM/AuthorDate"
#define g_wszWMDMUserLastPlayTime "WMDM/UserLastPlayTime"
#define g_wszWMDMSubTitle "WMDM/SubTitle"
#define g_wszWMDMSubTitleDescription "WMDM/SubTitleDescription"
#define g_wszWMDMMediaCredits "WMDM/MediaCredits"
#define g_wszWMDMMediaStationName "WMDM/MediaStationName"
#define g_wszWMDMMediaOriginalChannel "WMDM/MediaOriginalChannel"
#define g_wszWMDMMediaOriginalBroadcastDateTime "WMDM/MediaOriginalBroadcastDateTime"
#define g_wszWMDMProviderCopyright "WMDM/ProviderCopyright"
#define g_wszWMDMSyncID "WMDM/SyncID"
#define g_wszWMDMPersistentUniqueID "WMDM/PersistentUniqueID"
#define g_wszWMDMWidth "WMDM/Width"
#define g_wszWMDMHeight "WMDM/Height"
#define g_wszWMDMSyncTime "WMDM/SyncTime"
#define g_wszWMDMParentalRating "WMDM/ParentalRating"
#define g_wszWMDMMetaGenre "WMDM/MetaGenre"
#define g_wszWMDMIsRepeat "WMDM/IsRepeat"
#define g_wszWMDMSupportedDeviceProperties "WMDM/SupportedDeviceProperties"
#define g_wszWMDMDeviceFriendlyName "WMDM/DeviceFriendlyName"
#define g_wszWMDMFormatsSupported "WMDM/FormatsSupported"
#define g_wszWMDMFormatsSupportedAreOrdered "WMDM/FormatsSupportedAreOrdered"
#define g_wszWMDMSyncRelationshipID "WMDM/SyncRelationshipID"
#define g_wszWMDMDeviceModelName "WMDM/DeviceModelName"
#define g_wszWMDMDeviceFirmwareVersion "WMDM/DeviceFirmwareVersion"
#define g_wszWMDMDeviceVendorExtension "WMDM/DeviceVendorExtension"
#define g_wszWMDMDeviceProtocol "WMDM/DeviceProtocol"
#define g_wszWMDMDeviceServiceProviderVendor "WMDM/DeviceServiceProviderVendor"
#define g_wszWMDMDeviceRevocationInfo "WMDM/DeviceRevocationInfo"
#define g_wszWMDMCollectionID "WMDM/CollectionID"
#define g_wszWMDMOwner "WMDM/Owner"
#define g_wszWMDMEditor "WMDM/Editor"
#define g_wszWMDMWebmaster "WMDM/Webmaster"
#define g_wszWMDMSourceURL "WMDM/SourceURL"
#define g_wszWMDMDestinationURL "WMDM/DestinationURL"
#define g_wszWMDMCategory "WMDM/Category"
#define g_wszWMDMTimeBookmark "WMDM/TimeBookmark"
#define g_wszWMDMObjectBookmark "WMDM/ObjectBookmark"
#define g_wszWMDMByteBookmark "WMDM/ByteBookmark"
#define g_wszWMDMDataOffset "WMDM/DataOffset"
#define g_wszWMDMDataLength "WMDM/DataLength"
#define g_wszWMDMDataUnits "WMDM/DataUnits"
#define g_wszWMDMTimeToLive "WMDM/TimeToLive"
#define g_wszWMDMMediaGuid "WMDM/MediaGuid"
#define g_wszWPDPassthroughPropertyValues "WPD/PassthroughPropertyValues"
#define EVENT_WMDM_CONTENT_TRANSFER GUID { "339c9bf4-bcfe-4ed8-94df-eaf8c26ab61b" }
#define MTP_COMMAND_MAX_PARAMS (UINT)5
#define MTP_RESPONSE_MAX_PARAMS (UINT)5
#define MTP_RESPONSE_OK (SHORT)8193

//--------------------------------------------------------------------------------
// Section: Types (91)
//--------------------------------------------------------------------------------
typedef int __MACINFO;

typedef int MediaDevMgrClassFactory;

typedef int MediaDevMgr;

typedef int WMDMDevice;

typedef int WMDMStorage;

typedef int WMDMStorageGlobal;

typedef int WMDMDeviceEnum;

typedef int WMDMStorageEnum;

typedef enum {
    WMDM_TYPE_DWORD = 0,
    WMDM_TYPE_STRING = 1,
    WMDM_TYPE_BINARY = 2,
    WMDM_TYPE_BOOL = 3,
    WMDM_TYPE_QWORD = 4,
    WMDM_TYPE_WORD = 5,
    WMDM_TYPE_GUID = 6,
    WMDM_TYPE_DATE = 7,
} WMDM_TAG_DATATYPE;

typedef enum {
    WMDM_SESSION_NONE = 0,
    WMDM_SESSION_TRANSFER_TO_DEVICE = 1,
    WMDM_SESSION_TRANSFER_FROM_DEVICE = 16,
    WMDM_SESSION_DELETE = 256,
    WMDM_SESSION_CUSTOM = 4096,
} WMDM_SESSION_TYPE;

typedef int _WAVEFORMATEX;

typedef int _BITMAPINFOHEADER;

typedef int _VIDEOINFOHEADER;

typedef int WMFILECAPABILITIES;

typedef int OPAQUECOMMAND;

typedef int WMDMID;

typedef int WMDMDATETIME;

typedef int WMDMRIGHTS;

typedef int WMDMMetadataView;

typedef enum {
    ENUM_MODE_RAW = 0,
    ENUM_MODE_USE_DEVICE_PREF = 1,
    ENUM_MODE_METADATA_VIEWS = 2,
} WMDM_STORAGE_ENUM_MODE;

typedef enum {
    WMDM_FORMATCODE_NOTUSED = 0,
    WMDM_FORMATCODE_ALLIMAGES = -1,
    WMDM_FORMATCODE_UNDEFINED = 12288,
    WMDM_FORMATCODE_ASSOCIATION = 12289,
    WMDM_FORMATCODE_SCRIPT = 12290,
    WMDM_FORMATCODE_EXECUTABLE = 12291,
    WMDM_FORMATCODE_TEXT = 12292,
    WMDM_FORMATCODE_HTML = 12293,
    WMDM_FORMATCODE_DPOF = 12294,
    WMDM_FORMATCODE_AIFF = 12295,
    WMDM_FORMATCODE_WAVE = 12296,
    WMDM_FORMATCODE_MP3 = 12297,
    WMDM_FORMATCODE_AVI = 12298,
    WMDM_FORMATCODE_MPEG = 12299,
    WMDM_FORMATCODE_ASF = 12300,
    WMDM_FORMATCODE_RESERVED_FIRST = 12301,
    WMDM_FORMATCODE_RESERVED_LAST = 14335,
    WMDM_FORMATCODE_IMAGE_UNDEFINED = 14336,
    WMDM_FORMATCODE_IMAGE_EXIF = 14337,
    WMDM_FORMATCODE_IMAGE_TIFFEP = 14338,
    WMDM_FORMATCODE_IMAGE_FLASHPIX = 14339,
    WMDM_FORMATCODE_IMAGE_BMP = 14340,
    WMDM_FORMATCODE_IMAGE_CIFF = 14341,
    WMDM_FORMATCODE_IMAGE_GIF = 14343,
    WMDM_FORMATCODE_IMAGE_JFIF = 14344,
    WMDM_FORMATCODE_IMAGE_PCD = 14345,
    WMDM_FORMATCODE_IMAGE_PICT = 14346,
    WMDM_FORMATCODE_IMAGE_PNG = 14347,
    WMDM_FORMATCODE_IMAGE_TIFF = 14349,
    WMDM_FORMATCODE_IMAGE_TIFFIT = 14350,
    WMDM_FORMATCODE_IMAGE_JP2 = 14351,
    WMDM_FORMATCODE_IMAGE_JPX = 14352,
    WMDM_FORMATCODE_IMAGE_RESERVED_FIRST = 14353,
    WMDM_FORMATCODE_IMAGE_RESERVED_LAST = 16383,
    WMDM_FORMATCODE_UNDEFINEDFIRMWARE = 47106,
    WMDM_FORMATCODE_WBMP = 47107,
    WMDM_FORMATCODE_JPEGXR = 47108,
    WMDM_FORMATCODE_WINDOWSIMAGEFORMAT = 47233,
    WMDM_FORMATCODE_UNDEFINEDAUDIO = 47360,
    WMDM_FORMATCODE_WMA = 47361,
    WMDM_FORMATCODE_OGG = 47362,
    WMDM_FORMATCODE_AAC = 47363,
    WMDM_FORMATCODE_AUDIBLE = 47364,
    WMDM_FORMATCODE_FLAC = 47366,
    WMDM_FORMATCODE_QCELP = 47367,
    WMDM_FORMATCODE_AMR = 47368,
    WMDM_FORMATCODE_UNDEFINEDVIDEO = 47488,
    WMDM_FORMATCODE_WMV = 47489,
    WMDM_FORMATCODE_MP4 = 47490,
    WMDM_FORMATCODE_MP2 = 47491,
    WMDM_FORMATCODE_3GP = 47492,
    WMDM_FORMATCODE_3G2 = 47493,
    WMDM_FORMATCODE_AVCHD = 47494,
    WMDM_FORMATCODE_ATSCTS = 47495,
    WMDM_FORMATCODE_DVBTS = 47496,
    WMDM_FORMATCODE_MKV = 47497,
    WMDM_FORMATCODE_MKA = 47498,
    WMDM_FORMATCODE_MK3D = 47499,
    WMDM_FORMATCODE_UNDEFINEDCOLLECTION = 47616,
    WMDM_FORMATCODE_ABSTRACTMULTIMEDIAALBUM = 47617,
    WMDM_FORMATCODE_ABSTRACTIMAGEALBUM = 47618,
    WMDM_FORMATCODE_ABSTRACTAUDIOALBUM = 47619,
    WMDM_FORMATCODE_ABSTRACTVIDEOALBUM = 47620,
    WMDM_FORMATCODE_ABSTRACTAUDIOVIDEOPLAYLIST = 47621,
    WMDM_FORMATCODE_ABSTRACTCONTACTGROUP = 47622,
    WMDM_FORMATCODE_ABSTRACTMESSAGEFOLDER = 47623,
    WMDM_FORMATCODE_ABSTRACTCHAPTEREDPRODUCTION = 47624,
    WMDM_FORMATCODE_MEDIA_CAST = 47627,
    WMDM_FORMATCODE_WPLPLAYLIST = 47632,
    WMDM_FORMATCODE_M3UPLAYLIST = 47633,
    WMDM_FORMATCODE_MPLPLAYLIST = 47634,
    WMDM_FORMATCODE_ASXPLAYLIST = 47635,
    WMDM_FORMATCODE_PLSPLAYLIST = 47636,
    WMDM_FORMATCODE_UNDEFINEDDOCUMENT = 47744,
    WMDM_FORMATCODE_ABSTRACTDOCUMENT = 47745,
    WMDM_FORMATCODE_XMLDOCUMENT = 47746,
    WMDM_FORMATCODE_MICROSOFTWORDDOCUMENT = 47747,
    WMDM_FORMATCODE_MHTCOMPILEDHTMLDOCUMENT = 47748,
    WMDM_FORMATCODE_MICROSOFTEXCELSPREADSHEET = 47749,
    WMDM_FORMATCODE_MICROSOFTPOWERPOINTDOCUMENT = 47750,
    WMDM_FORMATCODE_UNDEFINEDMESSAGE = 47872,
    WMDM_FORMATCODE_ABSTRACTMESSAGE = 47873,
    WMDM_FORMATCODE_UNDEFINEDCONTACT = 48000,
    WMDM_FORMATCODE_ABSTRACTCONTACT = 48001,
    WMDM_FORMATCODE_VCARD2 = 48002,
    WMDM_FORMATCODE_VCARD3 = 48003,
    WMDM_FORMATCODE_UNDEFINEDCALENDARITEM = 48640,
    WMDM_FORMATCODE_ABSTRACTCALENDARITEM = 48641,
    WMDM_FORMATCODE_VCALENDAR1 = 48642,
    WMDM_FORMATCODE_VCALENDAR2 = 48643,
    WMDM_FORMATCODE_UNDEFINEDWINDOWSEXECUTABLE = 48768,
    WMDM_FORMATCODE_M4A = 1297101889,
    WMDM_FORMATCODE_3GPA = 860311617,
    WMDM_FORMATCODE_3G2A = 860303937,
    WMDM_FORMATCODE_SECTION = 48770,
} WMDM_FORMATCODE;

typedef enum {
    WMDM_ENUM_PROP_VALID_VALUES_ANY = 0,
    WMDM_ENUM_PROP_VALID_VALUES_RANGE = 1,
    WMDM_ENUM_PROP_VALID_VALUES_ENUM = 2,
} WMDM_ENUM_PROP_VALID_VALUES_FORM;

typedef int WMDM_PROP_VALUES_RANGE;

typedef int WMDM_PROP_VALUES_ENUM;

typedef int WMDM_PROP_DESC;

typedef int WMDM_PROP_CONFIG;

typedef int WMDM_FORMAT_CAPABILITY;

typedef enum {
    WMDM_FIND_SCOPE_GLOBAL = 0,
    WMDM_FIND_SCOPE_IMMEDIATE_CHILDREN = 1,
} WMDM_FIND_SCOPE;

typedef enum {
    WMDM_MSG_DEVICE_ARRIVAL = 0,
    WMDM_MSG_DEVICE_REMOVAL = 1,
    WMDM_MSG_MEDIA_ARRIVAL = 2,
    WMDM_MSG_MEDIA_REMOVAL = 3,
} WMDMMessage;

typedef int IWMDMMetaData;

typedef int IWMDeviceManager;

typedef int IWMDeviceManager2;

typedef int IWMDeviceManager3;

typedef int IWMDMStorageGlobals;

typedef int IWMDMStorage;

typedef int IWMDMStorage2;

typedef int IWMDMStorage3;

typedef int IWMDMStorage4;

typedef int IWMDMOperation;

typedef int IWMDMOperation2;

typedef int IWMDMOperation3;

typedef int IWMDMProgress;

typedef int IWMDMProgress2;

typedef int IWMDMProgress3;

typedef int IWMDMDevice;

typedef int IWMDMDevice2;

typedef int IWMDMDevice3;

typedef int IWMDMDeviceSession;

typedef int IWMDMEnumDevice;

typedef int IWMDMDeviceControl;

typedef int IWMDMEnumStorage;

typedef int IWMDMStorageControl;

typedef int IWMDMStorageControl2;

typedef int IWMDMStorageControl3;

typedef int IWMDMObjectInfo;

typedef int IWMDMRevoked;

typedef int IWMDMNotification;

typedef int WMDMDetermineMaxPropStringLen;

typedef int IMDServiceProvider;

typedef int IMDServiceProvider2;

typedef int IMDServiceProvider3;

typedef int IMDSPEnumDevice;

typedef int IMDSPDevice;

typedef int IMDSPDevice2;

typedef int IMDSPDevice3;

typedef int IMDSPDeviceControl;

typedef int IMDSPEnumStorage;

typedef int IMDSPStorage;

typedef int IMDSPStorage2;

typedef int IMDSPStorage3;

typedef int IMDSPStorage4;

typedef int IMDSPStorageGlobals;

typedef int IMDSPObjectInfo;

typedef int IMDSPObject;

typedef int IMDSPObject2;

typedef int IMDSPDirectTransfer;

typedef int IMDSPRevoked;

typedef int ISCPSecureAuthenticate;

typedef int ISCPSecureAuthenticate2;

typedef int ISCPSecureQuery;

typedef int ISCPSecureQuery2;

typedef int ISCPSecureExchange;

typedef int ISCPSecureExchange2;

typedef int ISCPSecureExchange3;

typedef int ISCPSession;

typedef int ISCPSecureQuery3;

typedef int IComponentAuthenticate;

typedef int WMDMLogger;

typedef int IWMDMLogger;

typedef int MTP_COMMAND_DATA_IN;

typedef int MTP_COMMAND_DATA_OUT;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------