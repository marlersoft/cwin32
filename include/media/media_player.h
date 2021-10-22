// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (121)
//--------------------------------------------------------------------------------
#define CLSID_XFeedsManager GUID { "fe6b11c3-c72e-4061-86c6-9d163121f229" }
#define WMPGC_FLAGS_ALLOW_PREROLL (UINT)1
#define WMPGC_FLAGS_SUPPRESS_DIALOGS (UINT)2
#define WMPGC_FLAGS_IGNORE_AV_SYNC (UINT)4
#define WMPGC_FLAGS_DISABLE_PLUGINS (UINT)8
#define WMPGC_FLAGS_USE_CUSTOM_GRAPH (UINT)16
#define WMPUE_EC_USER (UINT)33024
#define WMP_MDRT_FLAGS_UNREPORTED_DELETED_ITEMS (UINT)1
#define WMP_MDRT_FLAGS_UNREPORTED_ADDED_ITEMS (UINT)2
#define IOCTL_WMP_METADATA_ROUND_TRIP (UINT)827346263
#define IOCTL_WMP_DEVICE_CAN_SYNC (UINT)844123479
#define EFFECT_CANGOFULLSCREEN (UINT)1
#define EFFECT_HASPROPERTYPAGE (UINT)2
#define EFFECT_VARIABLEFREQSTEP (UINT)4
#define EFFECT_WINDOWEDONLY (UINT)8
#define EFFECT2_FULLSCREENEXCLUSIVE (UINT)16
#define SA_BUFFER_SIZE (UINT)1024
#define PLUGIN_TYPE_BACKGROUND (UINT)1
#define PLUGIN_TYPE_SEPARATEWINDOW (UINT)2
#define PLUGIN_TYPE_DISPLAYAREA (UINT)3
#define PLUGIN_TYPE_SETTINGSAREA (UINT)4
#define PLUGIN_TYPE_METADATAAREA (UINT)5
#define PLUGIN_FLAGS_HASPROPERTYPAGE (UINT)2147483648
#define PLUGIN_FLAGS_INSTALLAUTORUN (UINT)1073741824
#define PLUGIN_FLAGS_LAUNCHPROPERTYPAGE (UINT)536870912
#define PLUGIN_FLAGS_ACCEPTSMEDIA (UINT)268435456
#define PLUGIN_FLAGS_ACCEPTSPLAYLISTS (UINT)134217728
#define PLUGIN_FLAGS_HASPRESETS (UINT)67108864
#define PLUGIN_FLAGS_HIDDEN (UINT)33554432
#define SUBSCRIPTION_CAP_DEVICEAVAILABLE (UINT)16
#define SUBSCRIPTION_CAP_BACKGROUNDPROCESSING (UINT)8
#define SUBSCRIPTION_CAP_IS_CONTENTPARTNER (UINT)64
#define SUBSCRIPTION_CAP_ALTLOGIN (UINT)128
#define SUBSCRIPTION_CAP_ALLOWPLAY (UINT)1
#define SUBSCRIPTION_CAP_ALLOWCDBURN (UINT)2
#define SUBSCRIPTION_CAP_ALLOWPDATRANSFER (UINT)4
#define SUBSCRIPTION_CAP_PREPAREFORSYNC (UINT)32
#define SUBSCRIPTION_V1_CAPS (UINT)15
#define SUBSCRIPTION_CAP_UILESSMODE_ALLOWPLAY (UINT)256
#define CLSID_WMPSkinManager GUID { "b2a7fd52-301f-4348-b93a-638c6de49229" }
#define CLSID_WMPMediaPluginRegistrar GUID { "5569e7f5-424b-4b93-89ca-79d17924689a" }
#define WMP_PLUGINTYPE_DSP GUID { "6434baea-4954-498d-abd5-2b07123e1f04" }
#define WMP_PLUGINTYPE_DSP_OUTOFPROC GUID { "ef29b174-c347-44cc-9a4f-2399118ff38c" }
#define WMP_PLUGINTYPE_RENDERING GUID { "a8554541-115d-406a-a4c7-51111c330183" }
#define kfltTimedLevelMaximumFrequency (FLOAT)22050
#define kfltTimedLevelMinimumFrequency (FLOAT)20
#define g_szContentPartnerInfo_LoginState "LoginState"
#define g_szContentPartnerInfo_MediaPlayerAccountType "MediaPlayerAccountType"
#define g_szContentPartnerInfo_AccountType "AccountType"
#define g_szContentPartnerInfo_HasCachedCredentials "HasCachedCredentials"
#define g_szContentPartnerInfo_LicenseRefreshAdvanceWarning "LicenseRefreshAdvanceWarning"
#define g_szContentPartnerInfo_PurchasedTrackRequiresReDownload "PurchasedTrackRequiresReDownload"
#define g_szContentPartnerInfo_MaximumTrackPurchasePerPurchase "MaximumNumberOfTracksPerPurchase"
#define g_szContentPartnerInfo_AccountBalance "AccountBalance"
#define g_szContentPartnerInfo_UserName "UserName"
#define g_szMediaPlayerTask_Burn "Burn"
#define g_szMediaPlayerTask_Browse "Browse"
#define g_szMediaPlayerTask_Sync "Sync"
#define g_szItemInfo_PopupURL "Popup"
#define g_szItemInfo_AuthenticationSuccessURL "AuthenticationSuccessURL"
#define g_szItemInfo_LoginFailureURL "LoginFailureURL"
#define g_szItemInfo_HTMLViewURL "HTMLViewURL"
#define g_szItemInfo_PopupCaption "PopupCaption"
#define g_szItemInfo_ALTLoginURL "ALTLoginURL"
#define g_szItemInfo_ALTLoginCaption "ALTLoginCaption"
#define g_szItemInfo_ForgetPasswordURL "ForgotPassword"
#define g_szItemInfo_CreateAccountURL "CreateAccount"
#define g_szItemInfo_ArtistArtURL "ArtistArt"
#define g_szItemInfo_AlbumArtURL "AlbumArt"
#define g_szItemInfo_ListArtURL "ListArt"
#define g_szItemInfo_GenreArtURL "GenreArt"
#define g_szItemInfo_SubGenreArtURL "SubGenreArt"
#define g_szItemInfo_RadioArtURL "RadioArt"
#define g_szItemInfo_TreeListIconURL "CPListIDIcon"
#define g_szItemInfo_ErrorDescription "CPErrorDescription"
#define g_szItemInfo_ErrorURL "CPErrorURL"
#define g_szItemInfo_ErrorURLLinkText "CPErrorURLLinkText"
#define g_szUnknownLocation "UnknownLocation"
#define g_szRootLocation "RootLocation"
#define g_szFlyoutMenu "FlyoutMenu"
#define g_szOnlineStore "OnlineStore"
#define g_szVideoRecent "VideoRecent"
#define g_szVideoRoot "VideoRoot"
#define g_szCPListID "CPListID"
#define g_szAllCPListIDs "AllCPListIDs"
#define g_szCPTrackID "CPTrackID"
#define g_szAllCPTrackIDs "AllCPTrackIDs"
#define g_szCPArtistID "CPArtistID"
#define g_szAllCPArtistIDs "AllCPArtistIDs"
#define g_szCPAlbumID "CPAlbumID"
#define g_szAllCPAlbumIDs "AllCPAlbumIDs"
#define g_szCPGenreID "CPGenreID"
#define g_szAllCPGenreIDs "AllCPGenreIDs"
#define g_szCPAlbumSubGenreID "CPAlbumSubGenreID"
#define g_szAllCPAlbumSubGenreIDs "AllCPAlbumSubGenreIDs"
#define g_szReleaseDateYear "ReleaseDateYear"
#define g_szAllReleaseDateYears "AllReleaseDateYears"
#define g_szCPRadioID "CPRadioID"
#define g_szAllCPRadioIDs "AllCPRadioIDs"
#define g_szAuthor "Author"
#define g_szAllAuthors "AllAuthors"
#define g_szWMParentalRating "WMParentalRating"
#define g_szAllWMParentalRatings "AllWMParentalRatings"
#define g_szAllUserEffectiveRatingStarss "AllUserEffectiveRatingStarss"
#define g_szUserEffectiveRatingStars "UserEffectiveRatingStars"
#define g_szUserPlaylist "UserPlaylist"
#define g_szViewMode_Report "ViewModeReport"
#define g_szViewMode_Details "ViewModeDetails"
#define g_szViewMode_Icon "ViewModeIcon"
#define g_szViewMode_Tile "ViewModeTile"
#define g_szViewMode_OrderedList "ViewModeOrderedList"
#define g_szContentPrice_Unknown "PriceUnknown"
#define g_szContentPrice_CannotBuy "PriceCannotBuy"
#define g_szContentPrice_Free "PriceFree"
#define g_szRefreshLicensePlay "RefreshForPlay"
#define g_szRefreshLicenseBurn "RefreshForBurn"
#define g_szRefreshLicenseSync "RefreshForSync"
#define g_szVerifyPermissionSync "VerifyPermissionSync"
#define g_szStationEvent_Started "TrackStarted"
#define g_szStationEvent_Complete "TrackComplete"
#define g_szStationEvent_Skipped "TrackSkipped"

//--------------------------------------------------------------------------------
// Section: Types (153)
//--------------------------------------------------------------------------------
typedef int WindowsMediaPlayer;

typedef enum {
    wmposUndefined = 0,
    wmposPlaylistChanging = 1,
    wmposPlaylistLocating = 2,
    wmposPlaylistConnecting = 3,
    wmposPlaylistLoading = 4,
    wmposPlaylistOpening = 5,
    wmposPlaylistOpenNoMedia = 6,
    wmposPlaylistChanged = 7,
    wmposMediaChanging = 8,
    wmposMediaLocating = 9,
    wmposMediaConnecting = 10,
    wmposMediaLoading = 11,
    wmposMediaOpening = 12,
    wmposMediaOpen = 13,
    wmposBeginCodecAcquisition = 14,
    wmposEndCodecAcquisition = 15,
    wmposBeginLicenseAcquisition = 16,
    wmposEndLicenseAcquisition = 17,
    wmposBeginIndividualization = 18,
    wmposEndIndividualization = 19,
    wmposMediaWaiting = 20,
    wmposOpeningUnknownURL = 21,
} WMPOpenState;

typedef enum {
    wmppsUndefined = 0,
    wmppsStopped = 1,
    wmppsPaused = 2,
    wmppsPlaying = 3,
    wmppsScanForward = 4,
    wmppsScanReverse = 5,
    wmppsBuffering = 6,
    wmppsWaiting = 7,
    wmppsMediaEnded = 8,
    wmppsTransitioning = 9,
    wmppsReady = 10,
    wmppsReconnecting = 11,
    wmppsLast = 12,
} WMPPlayState;

typedef enum {
    wmplcUnknown = 0,
    wmplcClear = 1,
    wmplcInfoChange = 2,
    wmplcMove = 3,
    wmplcDelete = 4,
    wmplcInsert = 5,
    wmplcAppend = 6,
    wmplcPrivate = 7,
    wmplcNameChange = 8,
    wmplcMorph = 9,
    wmplcSort = 10,
    wmplcLast = 11,
} WMPPlaylistChangeEventType;

typedef int IWMPErrorItem;

typedef int IWMPError;

typedef int IWMPMedia;

typedef int IWMPControls;

typedef int IWMPSettings;

typedef int IWMPClosedCaption;

typedef int IWMPPlaylist;

typedef int IWMPCdrom;

typedef int IWMPCdromCollection;

typedef int IWMPStringCollection;

typedef int IWMPMediaCollection;

typedef int IWMPPlaylistArray;

typedef int IWMPPlaylistCollection;

typedef int IWMPNetwork;

typedef int IWMPCore;

typedef int IWMPPlayer;

typedef int IWMPPlayer2;

typedef int IWMPMedia2;

typedef int IWMPControls2;

typedef int IWMPDVD;

typedef int IWMPCore2;

typedef int IWMPPlayer3;

typedef int IWMPErrorItem2;

typedef int IWMPRemoteMediaServices;

typedef int IWMPSkinManager;

typedef int IWMPMetadataPicture;

typedef int IWMPMetadataText;

typedef int IWMPMedia3;

typedef int IWMPSettings2;

typedef int IWMPControls3;

typedef int IWMPClosedCaption2;

typedef int IWMPPlayerApplication;

typedef int IWMPCore3;

typedef int IWMPPlayer4;

typedef int IWMPPlayerServices;

typedef enum {
    wmpssUnknown = 0,
    wmpssSynchronizing = 1,
    wmpssStopped = 2,
    wmpssEstimating = 3,
    wmpssLast = 4,
} WMPSyncState;

typedef enum {
    wmpdsUnknown = 0,
    wmpdsPartnershipExists = 1,
    wmpdsPartnershipDeclined = 2,
    wmpdsPartnershipAnother = 3,
    wmpdsManualDevice = 4,
    wmpdsNewDevice = 5,
    wmpdsLast = 6,
} WMPDeviceStatus;

typedef int IWMPSyncDevice;

typedef int IWMPSyncServices;

typedef int IWMPPlayerServices2;

typedef enum {
    wmprsUnknown = 0,
    wmprsRipping = 1,
    wmprsStopped = 2,
} WMPRipState;

typedef enum {
    wmpbfAudioCD = 0,
    wmpbfDataCD = 1,
} WMPBurnFormat;

typedef enum {
    wmpbsUnknown = 0,
    wmpbsBusy = 1,
    wmpbsReady = 2,
    wmpbsWaitingForDisc = 3,
    wmpbsRefreshStatusPending = 4,
    wmpbsPreparingToBurn = 5,
    wmpbsBurning = 6,
    wmpbsStopped = 7,
    wmpbsErasing = 8,
    wmpbsDownloading = 9,
} WMPBurnState;

typedef enum {
    wmpsccetUnknown = 0,
    wmpsccetInsert = 1,
    wmpsccetChange = 2,
    wmpsccetDelete = 3,
    wmpsccetClear = 4,
    wmpsccetBeginUpdates = 5,
    wmpsccetEndUpdates = 6,
} WMPStringCollectionChangeEventType;

typedef int IWMPCdromRip;

typedef int IWMPCdromBurn;

typedef int IWMPQuery;

typedef int IWMPMediaCollection2;

typedef int IWMPStringCollection2;

typedef enum {
    wmpltUnknown = 0,
    wmpltAll = 1,
    wmpltLocal = 2,
    wmpltRemote = 3,
    wmpltDisc = 4,
    wmpltPortableDevice = 5,
} WMPLibraryType;

typedef int IWMPLibrary;

typedef int IWMPLibraryServices;

typedef int IWMPLibrarySharingServices;

typedef enum {
    wmpfssUnknown = 0,
    wmpfssScanning = 1,
    wmpfssUpdating = 2,
    wmpfssStopped = 3,
} WMPFolderScanState;

typedef int IWMPFolderMonitorServices;

typedef int IWMPSyncDevice2;

typedef int IWMPSyncDevice3;

typedef int IWMPLibrary2;

typedef int WMPLib;

typedef int WMPRemoteMediaServices;

typedef int IWMPEvents;

typedef int IWMPEvents2;

typedef int IWMPEvents3;

typedef int IWMPEvents4;

typedef int _WMPOCXEvents;

typedef int IWMPNodeRealEstate;

typedef int IWMPNodeRealEstateHost;

typedef int IWMPNodeWindowed;

typedef int IWMPNodeWindowedHost;

typedef int IWMPWindowMessageSink;

typedef int IWMPNodeWindowless;

typedef int IWMPNodeWindowlessHost;

typedef int IWMPVideoRenderConfig;

typedef int IWMPAudioRenderConfig;

typedef int IWMPRenderConfig;

typedef enum {
    WMPServices_StreamState_Stop = 0,
    WMPServices_StreamState_Pause = 1,
    WMPServices_StreamState_Play = 2,
} WMPServices_StreamState;

typedef int IWMPServices;

typedef int IWMPMediaPluginRegistrar;

typedef enum {
    WMPPlugin_Caps_CannotConvertFormats = 1,
} WMPPlugin_Caps;

typedef int IWMPPlugin;

typedef int IWMPPluginEnable;

typedef int IWMPGraphCreation;

typedef int IWMPConvert;

typedef int IWMPTranscodePolicy;

typedef int IWMPUserEventSink;

typedef int FeedsManager;

typedef int FeedFolderWatcher;

typedef int FeedWatcher;

typedef enum {
    FBSA_DISABLE = 0,
    FBSA_ENABLE = 1,
    FBSA_RUNNOW = 2,
} FEEDS_BACKGROUNDSYNC_ACTION;

typedef enum {
    FBSS_DISABLED = 0,
    FBSS_ENABLED = 1,
} FEEDS_BACKGROUNDSYNC_STATUS;

typedef enum {
    FES_ALL = 0,
    FES_SELF_ONLY = 1,
    FES_SELF_AND_CHILDREN_ONLY = 2,
} FEEDS_EVENTS_SCOPE;

typedef enum {
    FEM_FOLDEREVENTS = 1,
    FEM_FEEDEVENTS = 2,
} FEEDS_EVENTS_MASK;

typedef enum {
    FXSP_NONE = 0,
    FXSP_PUBDATE = 1,
    FXSP_DOWNLOADTIME = 2,
} FEEDS_XML_SORT_PROPERTY;

typedef enum {
    FXSO_NONE = 0,
    FXSO_ASCENDING = 1,
    FXSO_DESCENDING = 2,
} FEEDS_XML_SORT_ORDER;

typedef enum {
    FXFF_ALL = 0,
    FXFF_UNREAD = 1,
    FXFF_READ = 2,
} FEEDS_XML_FILTER_FLAGS;

typedef enum {
    FXIF_NONE = 0,
    FXIF_CF_EXTENSIONS = 1,
} FEEDS_XML_INCLUDE_FLAGS;

typedef enum {
    FDS_NONE = 0,
    FDS_PENDING = 1,
    FDS_DOWNLOADING = 2,
    FDS_DOWNLOADED = 3,
    FDS_DOWNLOAD_FAILED = 4,
} FEEDS_DOWNLOAD_STATUS;

typedef enum {
    FSS_DEFAULT = 0,
    FSS_INTERVAL = 1,
    FSS_MANUAL = 2,
    FSS_SUGGESTED = 3,
} FEEDS_SYNC_SETTING;

typedef enum {
    FDE_NONE = 0,
    FDE_DOWNLOAD_FAILED = 1,
    FDE_INVALID_FEED_FORMAT = 2,
    FDE_NORMALIZATION_FAILED = 3,
    FDE_PERSISTENCE_FAILED = 4,
    FDE_DOWNLOAD_BLOCKED = 5,
    FDE_CANCELED = 6,
    FDE_UNSUPPORTED_AUTH = 7,
    FDE_BACKGROUND_DOWNLOAD_DISABLED = 8,
    FDE_NOT_EXIST = 9,
    FDE_UNSUPPORTED_MSXML = 10,
    FDE_UNSUPPORTED_DTD = 11,
    FDE_DOWNLOAD_SIZE_LIMIT_EXCEEDED = 12,
    FDE_ACCESS_DENIED = 13,
    FDE_AUTH_FAILED = 14,
    FDE_INVALID_AUTH = 15,
} FEEDS_DOWNLOAD_ERROR;

typedef enum {
    FEICF_READ_ITEM_COUNT_CHANGED = 1,
    FEICF_UNREAD_ITEM_COUNT_CHANGED = 2,
} FEEDS_EVENTS_ITEM_COUNT_FLAGS;

typedef enum {
    FEC_E_ERRORBASE = -1073479168,
    FEC_E_INVALIDMSXMLPROPERTY = -1073479168,
    FEC_E_DOWNLOADSIZELIMITEXCEEDED = -1073479167,
} FEEDS_ERROR_CODE;

typedef int IXFeedsManager;

typedef int IXFeedsEnum;

typedef int IXFeedFolder;

typedef int IXFeedFolderEvents;

typedef int IXFeed;

typedef int IXFeed2;

typedef int IXFeedEvents;

typedef int IXFeedItem;

typedef int IXFeedItem2;

typedef int IXFeedEnclosure;

typedef int IFeedsManager;

typedef int IFeedsEnum;

typedef int IFeedFolder;

typedef int IFeedFolderEvents;

typedef int IFeed;

typedef int IFeed2;

typedef int IFeedEvents;

typedef int IFeedItem;

typedef int IFeedItem2;

typedef int IFeedEnclosure;

typedef enum {
    stop_state = 0,
    pause_state = 1,
    play_state = 2,
} PlayerState;

typedef int TimedLevel;

typedef int IWMPEffects;

typedef int IWMPEffects2;

typedef int IWMPPluginUI;

typedef enum {
    wmpsnBackgroundProcessingBegin = 1,
    wmpsnBackgroundProcessingEnd = 2,
    wmpsnCatalogDownloadFailure = 3,
    wmpsnCatalogDownloadComplete = 4,
} WMPPartnerNotification;

typedef enum {
    wmpcnLoginStateChange = 1,
    wmpcnAuthResult = 2,
    wmpcnLicenseUpdated = 3,
    wmpcnNewCatalogAvailable = 4,
    wmpcnNewPluginAvailable = 5,
    wmpcnDisableRadioSkipping = 6,
} WMPCallbackNotification;

typedef enum {
    wmpttBrowse = 1,
    wmpttSync = 2,
    wmpttBurn = 3,
    wmpttCurrent = 4,
} WMPTaskType;

typedef int WMPContextMenuInfo;

typedef int IWMPContentContainer;

typedef enum {
    wmpttNoTransaction = 0,
    wmpttDownload = 1,
    wmpttBuy = 2,
} WMPTransactionType;

typedef int IWMPContentContainerList;

typedef enum {
    wmptsSmall = 0,
    wmptsMedium = 1,
    wmptsLarge = 2,
} WMPTemplateSize;

typedef enum {
    wmpstUnknown = 0,
    wmpstMusic = 1,
    wmpstVideo = 2,
    wmpstRadio = 3,
} WMPStreamingType;

typedef enum {
    wmpatBuyOnly = 1,
    wmpatSubscription = 2,
    wmpatJanus = 3,
} WMPAccountType;

typedef int IWMPContentPartnerCallback;

typedef int IWMPContentPartner;

typedef enum {
    wmpsseCurrentBegin = 1,
    wmpsseCurrentEnd = 2,
    wmpsseFullBegin = 3,
    wmpsseFullEnd = 4,
} WMPSubscriptionServiceEvent;

typedef int IWMPSubscriptionService;

typedef int IWMPSubscriptionServiceCallback;

typedef int IWMPSubscriptionService2;

typedef enum {
    wmpsdlsDownloading = 0,
    wmpsdlsPaused = 1,
    wmpsdlsProcessing = 2,
    wmpsdlsCompleted = 3,
    wmpsdlsCancelled = 4,
} WMPSubscriptionDownloadState;

typedef int IWMPDownloadItem;

typedef int IWMPDownloadItem2;

typedef int IWMPDownloadCollection;

typedef int IWMPDownloadManager;

typedef int WMP_WMDM_METADATA_ROUND_TRIP_PC2DEVICE;

typedef int WMP_WMDM_METADATA_ROUND_TRIP_DEVICE2PC;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
