// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (342)
//--------------------------------------------------------------------------------
#define WMT_VIDEOIMAGE_SAMPLE_INPUT_FRAME (UINT)1
#define WMT_VIDEOIMAGE_SAMPLE_OUTPUT_FRAME (UINT)2
#define WMT_VIDEOIMAGE_SAMPLE_USES_CURRENT_INPUT_FRAME (UINT)4
#define WMT_VIDEOIMAGE_SAMPLE_USES_PREVIOUS_INPUT_FRAME (UINT)8
#define WMT_VIDEOIMAGE_SAMPLE_MOTION (UINT)1
#define WMT_VIDEOIMAGE_SAMPLE_ROTATION (UINT)2
#define WMT_VIDEOIMAGE_SAMPLE_BLENDING (UINT)4
#define WMT_VIDEOIMAGE_SAMPLE_ADV_BLENDING (UINT)8
#define WMT_VIDEOIMAGE_INTEGER_DENOMINATOR (INT)65536
#define WMT_VIDEOIMAGE_MAGIC_NUMBER (UINT)491406834
#define WMT_VIDEOIMAGE_MAGIC_NUMBER_2 (UINT)491406835
#define WMT_VIDEOIMAGE_TRANSITION_BOW_TIE (UINT)11
#define WMT_VIDEOIMAGE_TRANSITION_CIRCLE (UINT)12
#define WMT_VIDEOIMAGE_TRANSITION_CROSS_FADE (UINT)13
#define WMT_VIDEOIMAGE_TRANSITION_DIAGONAL (UINT)14
#define WMT_VIDEOIMAGE_TRANSITION_DIAMOND (UINT)15
#define WMT_VIDEOIMAGE_TRANSITION_FADE_TO_COLOR (UINT)16
#define WMT_VIDEOIMAGE_TRANSITION_FILLED_V (UINT)17
#define WMT_VIDEOIMAGE_TRANSITION_FLIP (UINT)18
#define WMT_VIDEOIMAGE_TRANSITION_INSET (UINT)19
#define WMT_VIDEOIMAGE_TRANSITION_IRIS (UINT)20
#define WMT_VIDEOIMAGE_TRANSITION_PAGE_ROLL (UINT)21
#define WMT_VIDEOIMAGE_TRANSITION_RECTANGLE (UINT)23
#define WMT_VIDEOIMAGE_TRANSITION_REVEAL (UINT)24
#define WMT_VIDEOIMAGE_TRANSITION_SLIDE (UINT)27
#define WMT_VIDEOIMAGE_TRANSITION_SPLIT (UINT)29
#define WMT_VIDEOIMAGE_TRANSITION_STAR (UINT)30
#define WMT_VIDEOIMAGE_TRANSITION_WHEEL (UINT)31
#define WM_SampleExtension_ContentType_Size (UINT)1
#define WM_SampleExtension_PixelAspectRatio_Size (UINT)2
#define WM_SampleExtension_Timecode_Size (UINT)14
#define WM_SampleExtension_SampleDuration_Size (UINT)2
#define WM_SampleExtension_ChromaLocation_Size (UINT)1
#define WM_SampleExtension_ColorSpaceInfo_Size (UINT)3
#define WM_CT_REPEAT_FIRST_FIELD (UINT)16
#define WM_CT_BOTTOM_FIELD_FIRST (UINT)32
#define WM_CT_TOP_FIELD_FIRST (UINT)64
#define WM_CT_INTERLACED (UINT)128
#define WM_CL_INTERLACED420 (UINT)0
#define WM_CL_PROGRESSIVE420 (UINT)1
#define WM_MAX_VIDEO_STREAMS (UINT)63
#define WM_MAX_STREAMS (UINT)63
#define WMDRM_IMPORT_INIT_STRUCT_DEFINED (UINT)1
#define DRM_OPL_TYPES (UINT)1
#define g_dwWMSpecialAttributes (UINT)20
#define g_wszWMDuration "Duration"
#define g_wszWMBitrate "Bitrate"
#define g_wszWMSeekable "Seekable"
#define g_wszWMStridable "Stridable"
#define g_wszWMBroadcast "Broadcast"
#define g_wszWMProtected "Is_Protected"
#define g_wszWMTrusted "Is_Trusted"
#define g_wszWMSignature_Name "Signature_Name"
#define g_wszWMHasAudio "HasAudio"
#define g_wszWMHasImage "HasImage"
#define g_wszWMHasScript "HasScript"
#define g_wszWMHasVideo "HasVideo"
#define g_wszWMCurrentBitrate "CurrentBitrate"
#define g_wszWMOptimalBitrate "OptimalBitrate"
#define g_wszWMHasAttachedImages "HasAttachedImages"
#define g_wszWMSkipBackward "Can_Skip_Backward"
#define g_wszWMSkipForward "Can_Skip_Forward"
#define g_wszWMNumberOfFrames "NumberOfFrames"
#define g_wszWMFileSize "FileSize"
#define g_wszWMHasArbitraryDataStream "HasArbitraryDataStream"
#define g_wszWMHasFileTransferStream "HasFileTransferStream"
#define g_wszWMContainerFormat "WM/ContainerFormat"
#define g_dwWMContentAttributes (UINT)5
#define g_wszWMTitle "Title"
#define g_wszWMTitleSort "TitleSort"
#define g_wszWMAuthor "Author"
#define g_wszWMAuthorSort "AuthorSort"
#define g_wszWMDescription "Description"
#define g_wszWMRating "Rating"
#define g_wszWMCopyright "Copyright"
#define g_wszWMUse_DRM "Use_DRM"
#define g_wszWMDRM_Flags "DRM_Flags"
#define g_wszWMDRM_Level "DRM_Level"
#define g_wszWMUse_Advanced_DRM "Use_Advanced_DRM"
#define g_wszWMDRM_KeySeed "DRM_KeySeed"
#define g_wszWMDRM_KeyID "DRM_KeyID"
#define g_wszWMDRM_ContentID "DRM_ContentID"
#define g_wszWMDRM_SourceID "DRM_SourceID"
#define g_wszWMDRM_IndividualizedVersion "DRM_IndividualizedVersion"
#define g_wszWMDRM_LicenseAcqURL "DRM_LicenseAcqURL"
#define g_wszWMDRM_V1LicenseAcqURL "DRM_V1LicenseAcqURL"
#define g_wszWMDRM_HeaderSignPrivKey "DRM_HeaderSignPrivKey"
#define g_wszWMDRM_LASignaturePrivKey "DRM_LASignaturePrivKey"
#define g_wszWMDRM_LASignatureCert "DRM_LASignatureCert"
#define g_wszWMDRM_LASignatureLicSrvCert "DRM_LASignatureLicSrvCert"
#define g_wszWMDRM_LASignatureRootCert "DRM_LASignatureRootCert"
#define g_wszWMAlbumTitle "WM/AlbumTitle"
#define g_wszWMAlbumTitleSort "WM/AlbumTitleSort"
#define g_wszWMTrack "WM/Track"
#define g_wszWMPromotionURL "WM/PromotionURL"
#define g_wszWMAlbumCoverURL "WM/AlbumCoverURL"
#define g_wszWMGenre "WM/Genre"
#define g_wszWMYear "WM/Year"
#define g_wszWMGenreID "WM/GenreID"
#define g_wszWMMCDI "WM/MCDI"
#define g_wszWMComposer "WM/Composer"
#define g_wszWMComposerSort "WM/ComposerSort"
#define g_wszWMLyrics "WM/Lyrics"
#define g_wszWMTrackNumber "WM/TrackNumber"
#define g_wszWMToolName "WM/ToolName"
#define g_wszWMToolVersion "WM/ToolVersion"
#define g_wszWMIsVBR "IsVBR"
#define g_wszWMAlbumArtist "WM/AlbumArtist"
#define g_wszWMAlbumArtistSort "WM/AlbumArtistSort"
#define g_wszWMBannerImageType "BannerImageType"
#define g_wszWMBannerImageData "BannerImageData"
#define g_wszWMBannerImageURL "BannerImageURL"
#define g_wszWMCopyrightURL "CopyrightURL"
#define g_wszWMAspectRatioX "AspectRatioX"
#define g_wszWMAspectRatioY "AspectRatioY"
#define g_wszASFLeakyBucketPairs "ASFLeakyBucketPairs"
#define g_dwWMNSCAttributes (UINT)5
#define g_wszWMNSCName "NSC_Name"
#define g_wszWMNSCAddress "NSC_Address"
#define g_wszWMNSCPhone "NSC_Phone"
#define g_wszWMNSCEmail "NSC_Email"
#define g_wszWMNSCDescription "NSC_Description"
#define g_wszWMWriter "WM/Writer"
#define g_wszWMConductor "WM/Conductor"
#define g_wszWMProducer "WM/Producer"
#define g_wszWMDirector "WM/Director"
#define g_wszWMContentGroupDescription "WM/ContentGroupDescription"
#define g_wszWMSubTitle "WM/SubTitle"
#define g_wszWMPartOfSet "WM/PartOfSet"
#define g_wszWMProtectionType "WM/ProtectionType"
#define g_wszWMVideoHeight "WM/VideoHeight"
#define g_wszWMVideoWidth "WM/VideoWidth"
#define g_wszWMVideoFrameRate "WM/VideoFrameRate"
#define g_wszWMMediaClassPrimaryID "WM/MediaClassPrimaryID"
#define g_wszWMMediaClassSecondaryID "WM/MediaClassSecondaryID"
#define g_wszWMPeriod "WM/Period"
#define g_wszWMCategory "WM/Category"
#define g_wszWMPicture "WM/Picture"
#define g_wszWMLyrics_Synchronised "WM/Lyrics_Synchronised"
#define g_wszWMOriginalLyricist "WM/OriginalLyricist"
#define g_wszWMOriginalArtist "WM/OriginalArtist"
#define g_wszWMOriginalAlbumTitle "WM/OriginalAlbumTitle"
#define g_wszWMOriginalReleaseYear "WM/OriginalReleaseYear"
#define g_wszWMOriginalFilename "WM/OriginalFilename"
#define g_wszWMPublisher "WM/Publisher"
#define g_wszWMEncodedBy "WM/EncodedBy"
#define g_wszWMEncodingSettings "WM/EncodingSettings"
#define g_wszWMEncodingTime "WM/EncodingTime"
#define g_wszWMAuthorURL "WM/AuthorURL"
#define g_wszWMUserWebURL "WM/UserWebURL"
#define g_wszWMAudioFileURL "WM/AudioFileURL"
#define g_wszWMAudioSourceURL "WM/AudioSourceURL"
#define g_wszWMLanguage "WM/Language"
#define g_wszWMParentalRating "WM/ParentalRating"
#define g_wszWMBeatsPerMinute "WM/BeatsPerMinute"
#define g_wszWMInitialKey "WM/InitialKey"
#define g_wszWMMood "WM/Mood"
#define g_wszWMText "WM/Text"
#define g_wszWMDVDID "WM/DVDID"
#define g_wszWMWMContentID "WM/WMContentID"
#define g_wszWMWMCollectionID "WM/WMCollectionID"
#define g_wszWMWMCollectionGroupID "WM/WMCollectionGroupID"
#define g_wszWMUniqueFileIdentifier "WM/UniqueFileIdentifier"
#define g_wszWMModifiedBy "WM/ModifiedBy"
#define g_wszWMRadioStationName "WM/RadioStationName"
#define g_wszWMRadioStationOwner "WM/RadioStationOwner"
#define g_wszWMPlaylistDelay "WM/PlaylistDelay"
#define g_wszWMCodec "WM/Codec"
#define g_wszWMDRM "WM/DRM"
#define g_wszWMISRC "WM/ISRC"
#define g_wszWMProvider "WM/Provider"
#define g_wszWMProviderRating "WM/ProviderRating"
#define g_wszWMProviderStyle "WM/ProviderStyle"
#define g_wszWMContentDistributor "WM/ContentDistributor"
#define g_wszWMSubscriptionContentID "WM/SubscriptionContentID"
#define g_wszWMWMADRCPeakReference "WM/WMADRCPeakReference"
#define g_wszWMWMADRCPeakTarget "WM/WMADRCPeakTarget"
#define g_wszWMWMADRCAverageReference "WM/WMADRCAverageReference"
#define g_wszWMWMADRCAverageTarget "WM/WMADRCAverageTarget"
#define g_wszWMStreamTypeInfo "WM/StreamTypeInfo"
#define g_wszWMPeakBitrate "WM/PeakBitrate"
#define g_wszWMASFPacketCount "WM/ASFPacketCount"
#define g_wszWMASFSecurityObjectsSize "WM/ASFSecurityObjectsSize"
#define g_wszWMSharedUserRating "WM/SharedUserRating"
#define g_wszWMSubTitleDescription "WM/SubTitleDescription"
#define g_wszWMMediaCredits "WM/MediaCredits"
#define g_wszWMParentalRatingReason "WM/ParentalRatingReason"
#define g_wszWMOriginalReleaseTime "WM/OriginalReleaseTime"
#define g_wszWMMediaStationCallSign "WM/MediaStationCallSign"
#define g_wszWMMediaStationName "WM/MediaStationName"
#define g_wszWMMediaNetworkAffiliation "WM/MediaNetworkAffiliation"
#define g_wszWMMediaOriginalChannel "WM/MediaOriginalChannel"
#define g_wszWMMediaOriginalBroadcastDateTime "WM/MediaOriginalBroadcastDateTime"
#define g_wszWMMediaIsStereo "WM/MediaIsStereo"
#define g_wszWMVideoClosedCaptioning "WM/VideoClosedCaptioning"
#define g_wszWMMediaIsRepeat "WM/MediaIsRepeat"
#define g_wszWMMediaIsLive "WM/MediaIsLive"
#define g_wszWMMediaIsTape "WM/MediaIsTape"
#define g_wszWMMediaIsDelay "WM/MediaIsDelay"
#define g_wszWMMediaIsSubtitled "WM/MediaIsSubtitled"
#define g_wszWMMediaIsPremiere "WM/MediaIsPremiere"
#define g_wszWMMediaIsFinale "WM/MediaIsFinale"
#define g_wszWMMediaIsSAP "WM/MediaIsSAP"
#define g_wszWMProviderCopyright "WM/ProviderCopyright"
#define g_wszWMISAN "WM/ISAN"
#define g_wszWMADID "WM/ADID"
#define g_wszWMWMShadowFileSourceFileType "WM/WMShadowFileSourceFileType"
#define g_wszWMWMShadowFileSourceDRMType "WM/WMShadowFileSourceDRMType"
#define g_wszWMWMCPDistributor "WM/WMCPDistributor"
#define g_wszWMWMCPDistributorID "WM/WMCPDistributorID"
#define g_wszWMSeasonNumber "WM/SeasonNumber"
#define g_wszWMEpisodeNumber "WM/EpisodeNumber"
#define g_wszEarlyDataDelivery "EarlyDataDelivery"
#define g_wszJustInTimeDecode "JustInTimeDecode"
#define g_wszSingleOutputBuffer "SingleOutputBuffer"
#define g_wszSoftwareScaling "SoftwareScaling"
#define g_wszDeliverOnReceive "DeliverOnReceive"
#define g_wszScrambledAudio "ScrambledAudio"
#define g_wszDedicatedDeliveryThread "DedicatedDeliveryThread"
#define g_wszEnableDiscreteOutput "EnableDiscreteOutput"
#define g_wszSpeakerConfig "SpeakerConfig"
#define g_wszDynamicRangeControl "DynamicRangeControl"
#define g_wszAllowInterlacedOutput "AllowInterlacedOutput"
#define g_wszVideoSampleDurations "VideoSampleDurations"
#define g_wszStreamLanguage "StreamLanguage"
#define g_wszEnableWMAProSPDIFOutput "EnableWMAProSPDIFOutput"
#define g_wszDeinterlaceMode "DeinterlaceMode"
#define g_wszInitialPatternForInverseTelecine "InitialPatternForInverseTelecine"
#define g_wszJPEGCompressionQuality "JPEGCompressionQuality"
#define g_wszWatermarkCLSID "WatermarkCLSID"
#define g_wszWatermarkConfig "WatermarkConfig"
#define g_wszInterlacedCoding "InterlacedCoding"
#define g_wszFixedFrameRate "FixedFrameRate"
#define g_wszOriginalSourceFormatTag "_SOURCEFORMATTAG"
#define g_wszOriginalWaveFormat "_ORIGINALWAVEFORMAT"
#define g_wszEDL "_EDL"
#define g_wszComplexity "_COMPLEXITYEX"
#define g_wszDecoderComplexityRequested "_DECODERCOMPLEXITYPROFILE"
#define g_wszReloadIndexOnSeek "ReloadIndexOnSeek"
#define g_wszStreamNumIndexObjects "StreamNumIndexObjects"
#define g_wszFailSeekOnError "FailSeekOnError"
#define g_wszPermitSeeksBeyondEndOfStream "PermitSeeksBeyondEndOfStream"
#define g_wszUsePacketAtSeekPoint "UsePacketAtSeekPoint"
#define g_wszSourceBufferTime "SourceBufferTime"
#define g_wszSourceMaxBytesAtOnce "SourceMaxBytesAtOnce"
#define g_wszVBREnabled "_VBRENABLED"
#define g_wszVBRQuality "_VBRQUALITY"
#define g_wszVBRBitrateMax "_RMAX"
#define g_wszVBRBufferWindowMax "_BMAX"
#define g_wszVBRPeak "VBR Peak"
#define g_wszBufferAverage "Buffer Average"
#define g_wszComplexityMax "_COMPLEXITYEXMAX"
#define g_wszComplexityOffline "_COMPLEXITYEXOFFLINE"
#define g_wszComplexityLive "_COMPLEXITYEXLIVE"
#define g_wszIsVBRSupported "_ISVBRSUPPORTED"
#define g_wszNumPasses "_PASSESUSED"
#define g_wszMusicSpeechClassMode "MusicSpeechClassMode"
#define g_wszMusicClassMode "MusicClassMode"
#define g_wszSpeechClassMode "SpeechClassMode"
#define g_wszMixedClassMode "MixedClassMode"
#define g_wszSpeechCaps "SpeechFormatCap"
#define g_wszPeakValue "PeakValue"
#define g_wszAverageLevel "AverageLevel"
#define g_wszFold6To2Channels3 "Fold6To2Channels3"
#define g_wszFoldToChannelsTemplate "Fold%luTo%luChannels%lu"
#define g_wszDeviceConformanceTemplate "DeviceConformanceTemplate"
#define g_wszEnableFrameInterpolation "EnableFrameInterpolation"
#define g_wszNeedsPreviousSample "NeedsPreviousSample"
#define g_wszWMIsCompilation "WM/IsCompilation"
#define WMMEDIASUBTYPE_Base GUID { "00000000-0000-0010-8000-00aa00389b71" }
#define WMMEDIATYPE_Video GUID { "73646976-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_RGB1 GUID { "e436eb78-524f-11ce-9f53-0020af0ba770" }
#define WMMEDIASUBTYPE_RGB4 GUID { "e436eb79-524f-11ce-9f53-0020af0ba770" }
#define WMMEDIASUBTYPE_RGB8 GUID { "e436eb7a-524f-11ce-9f53-0020af0ba770" }
#define WMMEDIASUBTYPE_RGB565 GUID { "e436eb7b-524f-11ce-9f53-0020af0ba770" }
#define WMMEDIASUBTYPE_RGB555 GUID { "e436eb7c-524f-11ce-9f53-0020af0ba770" }
#define WMMEDIASUBTYPE_RGB24 GUID { "e436eb7d-524f-11ce-9f53-0020af0ba770" }
#define WMMEDIASUBTYPE_RGB32 GUID { "e436eb7e-524f-11ce-9f53-0020af0ba770" }
#define WMMEDIASUBTYPE_I420 GUID { "30323449-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_IYUV GUID { "56555949-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_YV12 GUID { "32315659-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_YUY2 GUID { "32595559-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_P422 GUID { "32323450-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_UYVY GUID { "59565955-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_YVYU GUID { "55595659-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_YVU9 GUID { "39555659-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_VIDEOIMAGE GUID { "1d4a45f2-e5f6-4b44-8388-f0ae5c0e0c37" }
#define WMMEDIASUBTYPE_MP43 GUID { "3334504d-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_MP4S GUID { "5334504d-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_M4S2 GUID { "3253344d-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMV1 GUID { "31564d57-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMV2 GUID { "32564d57-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_MSS1 GUID { "3153534d-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_MPEG2_VIDEO GUID { "e06d8026-db46-11cf-b4d1-00805f6cbbea" }
#define WMMEDIATYPE_Audio GUID { "73647561-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_PCM GUID { "00000001-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_DRM GUID { "00000009-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMAudioV9 GUID { "00000162-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMAudio_Lossless GUID { "00000163-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_MSS2 GUID { "3253534d-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMSP1 GUID { "0000000a-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMSP2 GUID { "0000000b-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMV3 GUID { "33564d57-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMVP GUID { "50564d57-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WVP2 GUID { "32505657-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMVA GUID { "41564d57-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WVC1 GUID { "31435657-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMAudioV8 GUID { "00000161-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMAudioV7 GUID { "00000161-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WMAudioV2 GUID { "00000161-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_ACELPnet GUID { "00000130-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_MP3 GUID { "00000055-0000-0010-8000-00aa00389b71" }
#define WMMEDIASUBTYPE_WebStream GUID { "776257d4-c627-41cb-8f81-7ac7ff1c40cc" }
#define WMMEDIATYPE_Script GUID { "73636d64-0000-0010-8000-00aa00389b71" }
#define WMMEDIATYPE_Image GUID { "34a50fd8-8aa5-4386-81fe-a0efe0488e31" }
#define WMMEDIATYPE_FileTransfer GUID { "d9e47579-930e-4427-adfc-ad80f290e470" }
#define WMMEDIATYPE_Text GUID { "9bba1ea7-5ab2-4829-ba57-0940209bcf3e" }
#define WMFORMAT_VideoInfo GUID { "05589f80-c356-11ce-bf01-00aa0055595a" }
#define WMFORMAT_MPEG2Video GUID { "e06d80e3-db46-11cf-b4d1-00805f6cbbea" }
#define WMFORMAT_WaveFormatEx GUID { "05589f81-c356-11ce-bf01-00aa0055595a" }
#define WMFORMAT_Script GUID { "5c8510f2-debe-4ca7-bba5-f07a104f8dff" }
#define WMFORMAT_WebStream GUID { "da1e6b13-8359-4050-b398-388e965bf00c" }
#define WMSCRIPTTYPE_TwoStrings GUID { "82f38a70-c29f-11d1-97ad-00a0c95ea850" }
#define WM_SampleExtensionGUID_OutputCleanPoint GUID { "f72a3c6f-6eb4-4ebc-b192-09ad9759e828" }
#define WM_SampleExtensionGUID_Timecode GUID { "399595ec-8667-4e2d-8fdb-98814ce76c1e" }
#define WM_SampleExtensionGUID_ChromaLocation GUID { "4c5acca0-9276-4b2c-9e4c-a0edefdd217e" }
#define WM_SampleExtensionGUID_ColorSpaceInfo GUID { "f79ada56-30eb-4f2b-9f7a-f24b139a1157" }
#define WM_SampleExtensionGUID_UserDataInfo GUID { "732bb4fa-78be-4549-99bd-02db1a55b7a8" }
#define WM_SampleExtensionGUID_FileName GUID { "e165ec0e-19ed-45d7-b4a7-25cbd1e28e9b" }
#define WM_SampleExtensionGUID_ContentType GUID { "d590dc20-07bc-436c-9cf7-f3bbfbf1a4dc" }
#define WM_SampleExtensionGUID_PixelAspectRatio GUID { "1b1ee554-f9ea-4bc8-821a-376b74e4c4b8" }
#define WM_SampleExtensionGUID_SampleDuration GUID { "c6bd9450-867f-4907-83a3-c77921b733ad" }
#define WM_SampleExtensionGUID_SampleProtectionSalt GUID { "5403deee-b9ee-438f-aa83-3804997e569d" }
#define CLSID_WMMUTEX_Language GUID { "d6e22a00-35da-11d1-9034-00a0c90349be" }
#define CLSID_WMMUTEX_Bitrate GUID { "d6e22a01-35da-11d1-9034-00a0c90349be" }
#define CLSID_WMMUTEX_Presentation GUID { "d6e22a02-35da-11d1-9034-00a0c90349be" }
#define CLSID_WMMUTEX_Unknown GUID { "d6e22a03-35da-11d1-9034-00a0c90349be" }
#define CLSID_WMBandwidthSharing_Exclusive GUID { "af6060aa-5197-11d2-b6af-00c04fd908e9" }
#define CLSID_WMBandwidthSharing_Partial GUID { "af6060ab-5197-11d2-b6af-00c04fd908e9" }
#define WMT_DMOCATEGORY_AUDIO_WATERMARK GUID { "65221c5a-fa75-4b39-b50c-06c336b6a3ef" }
#define WMT_DMOCATEGORY_VIDEO_WATERMARK GUID { "187cc922-8efc-4404-9daf-63f4830df1bc" }
#define CLSID_ClientNetManager GUID { "cd12a3ce-9c42-11d2-beed-0060082f2054" }

//--------------------------------------------------------------------------------
// Section: Types (180)
//--------------------------------------------------------------------------------
typedef int IAMWMBufferPass;

typedef int IAMWMBufferPassCallback;

typedef enum {
    AM_CONFIGASFWRITER_PARAM_AUTOINDEX = 1,
    AM_CONFIGASFWRITER_PARAM_MULTIPASS = 2,
    AM_CONFIGASFWRITER_PARAM_DONTCOMPRESS = 3,
} _AM_ASFWRITERCONFIG_PARAM;

typedef int AM_WMT_EVENT_DATA;

typedef int INSSBuffer;

typedef int INSSBuffer2;

typedef int INSSBuffer3;

typedef int INSSBuffer4;

typedef int IWMSBufferAllocator;

typedef enum {
    WEBSTREAM_SAMPLE_TYPE_FILE = 1,
    WEBSTREAM_SAMPLE_TYPE_RENDER = 2,
} WEBSTREAM_SAMPLE_TYPE;

typedef enum {
    WM_SF_CLEANPOINT = 1,
    WM_SF_DISCONTINUITY = 2,
    WM_SF_DATALOSS = 4,
} WM_SF_TYPE;

typedef enum {
    WM_SFEX_NOTASYNCPOINT = 2,
    WM_SFEX_DATALOSS = 4,
} WM_SFEX_TYPE;

typedef enum {
    WMT_ERROR = 0,
    WMT_OPENED = 1,
    WMT_BUFFERING_START = 2,
    WMT_BUFFERING_STOP = 3,
    WMT_EOF = 4,
    WMT_END_OF_FILE = 4,
    WMT_END_OF_SEGMENT = 5,
    WMT_END_OF_STREAMING = 6,
    WMT_LOCATING = 7,
    WMT_CONNECTING = 8,
    WMT_NO_RIGHTS = 9,
    WMT_MISSING_CODEC = 10,
    WMT_STARTED = 11,
    WMT_STOPPED = 12,
    WMT_CLOSED = 13,
    WMT_STRIDING = 14,
    WMT_TIMER = 15,
    WMT_INDEX_PROGRESS = 16,
    WMT_SAVEAS_START = 17,
    WMT_SAVEAS_STOP = 18,
    WMT_NEW_SOURCEFLAGS = 19,
    WMT_NEW_METADATA = 20,
    WMT_BACKUPRESTORE_BEGIN = 21,
    WMT_SOURCE_SWITCH = 22,
    WMT_ACQUIRE_LICENSE = 23,
    WMT_INDIVIDUALIZE = 24,
    WMT_NEEDS_INDIVIDUALIZATION = 25,
    WMT_NO_RIGHTS_EX = 26,
    WMT_BACKUPRESTORE_END = 27,
    WMT_BACKUPRESTORE_CONNECTING = 28,
    WMT_BACKUPRESTORE_DISCONNECTING = 29,
    WMT_ERROR_WITHURL = 30,
    WMT_RESTRICTED_LICENSE = 31,
    WMT_CLIENT_CONNECT = 32,
    WMT_CLIENT_DISCONNECT = 33,
    WMT_NATIVE_OUTPUT_PROPS_CHANGED = 34,
    WMT_RECONNECT_START = 35,
    WMT_RECONNECT_END = 36,
    WMT_CLIENT_CONNECT_EX = 37,
    WMT_CLIENT_DISCONNECT_EX = 38,
    WMT_SET_FEC_SPAN = 39,
    WMT_PREROLL_READY = 40,
    WMT_PREROLL_COMPLETE = 41,
    WMT_CLIENT_PROPERTIES = 42,
    WMT_LICENSEURL_SIGNATURE_STATE = 43,
    WMT_INIT_PLAYLIST_BURN = 44,
    WMT_TRANSCRYPTOR_INIT = 45,
    WMT_TRANSCRYPTOR_SEEKED = 46,
    WMT_TRANSCRYPTOR_READ = 47,
    WMT_TRANSCRYPTOR_CLOSED = 48,
    WMT_PROXIMITY_RESULT = 49,
    WMT_PROXIMITY_COMPLETED = 50,
    WMT_CONTENT_ENABLER = 51,
} WMT_STATUS;

typedef enum {
    WMT_OFF = 0,
    WMT_CLEANPOINT_ONLY = 1,
    WMT_ON = 2,
} WMT_STREAM_SELECTION;

typedef enum {
    WMT_IT_NONE = 0,
    WMT_IT_BITMAP = 1,
    WMT_IT_JPEG = 2,
    WMT_IT_GIF = 3,
} WMT_IMAGE_TYPE;

typedef enum {
    WMT_TYPE_DWORD = 0,
    WMT_TYPE_STRING = 1,
    WMT_TYPE_BINARY = 2,
    WMT_TYPE_BOOL = 3,
    WMT_TYPE_QWORD = 4,
    WMT_TYPE_WORD = 5,
    WMT_TYPE_GUID = 6,
} WMT_ATTR_DATATYPE;

typedef enum {
    WMT_IMAGETYPE_BITMAP = 1,
    WMT_IMAGETYPE_JPEG = 2,
    WMT_IMAGETYPE_GIF = 3,
} WMT_ATTR_IMAGETYPE;

typedef enum {
    WMT_VER_4_0 = 262144,
    WMT_VER_7_0 = 458752,
    WMT_VER_8_0 = 524288,
    WMT_VER_9_0 = 589824,
} WMT_VERSION;

typedef enum {
    WMT_Storage_Format_MP3 = 0,
    WMT_Storage_Format_V1 = 1,
} WMT_STORAGE_FORMAT;

typedef enum {
    WMT_DRMLA_UNTRUSTED = 0,
    WMT_DRMLA_TRUSTED = 1,
    WMT_DRMLA_TAMPERED = 2,
} WMT_DRMLA_TRUST;

typedef enum {
    WMT_Transport_Type_Unreliable = 0,
    WMT_Transport_Type_Reliable = 1,
} WMT_TRANSPORT_TYPE;

typedef enum {
    WMT_PROTOCOL_HTTP = 0,
} WMT_NET_PROTOCOL;

typedef enum {
    WMT_PLAY_MODE_AUTOSELECT = 0,
    WMT_PLAY_MODE_LOCAL = 1,
    WMT_PLAY_MODE_DOWNLOAD = 2,
    WMT_PLAY_MODE_STREAMING = 3,
} WMT_PLAY_MODE;

typedef enum {
    WMT_PROXY_SETTING_NONE = 0,
    WMT_PROXY_SETTING_MANUAL = 1,
    WMT_PROXY_SETTING_AUTO = 2,
    WMT_PROXY_SETTING_BROWSER = 3,
    WMT_PROXY_SETTING_MAX = 4,
} WMT_PROXY_SETTINGS;

typedef enum {
    WMT_CODECINFO_AUDIO = 0,
    WMT_CODECINFO_VIDEO = 1,
    WMT_CODECINFO_UNKNOWN = -1,
} WMT_CODEC_INFO_TYPE;

typedef enum {
    WM_DM_NOTINTERLACED = 0,
    WM_DM_DEINTERLACE_NORMAL = 1,
    WM_DM_DEINTERLACE_HALFSIZE = 2,
    WM_DM_DEINTERLACE_HALFSIZEDOUBLERATE = 3,
    WM_DM_DEINTERLACE_INVERSETELECINE = 4,
    WM_DM_DEINTERLACE_VERTICALHALFSIZEDOUBLERATE = 5,
} WM_DM_INTERLACED_TYPE;

typedef enum {
    WM_DM_IT_DISABLE_COHERENT_MODE = 0,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_AA_TOP = 1,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BB_TOP = 2,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BC_TOP = 3,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_CD_TOP = 4,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_DD_TOP = 5,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_AA_BOTTOM = 6,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BB_BOTTOM = 7,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BC_BOTTOM = 8,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_CD_BOTTOM = 9,
    WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_DD_BOTTOM = 10,
} WM_DM_IT_FIRST_FRAME_COHERENCY;

typedef enum {
    WMT_OFFSET_FORMAT_100NS = 0,
    WMT_OFFSET_FORMAT_FRAME_NUMBERS = 1,
    WMT_OFFSET_FORMAT_PLAYLIST_OFFSET = 2,
    WMT_OFFSET_FORMAT_TIMECODE = 3,
    WMT_OFFSET_FORMAT_100NS_APPROXIMATE = 4,
} WMT_OFFSET_FORMAT;

typedef enum {
    WMT_IT_PRESENTATION_TIME = 0,
    WMT_IT_FRAME_NUMBERS = 1,
    WMT_IT_TIMECODE = 2,
} WMT_INDEXER_TYPE;

typedef enum {
    WMT_IT_NEAREST_DATA_UNIT = 1,
    WMT_IT_NEAREST_OBJECT = 2,
    WMT_IT_NEAREST_CLEAN_POINT = 3,
} WMT_INDEX_TYPE;

typedef enum {
    WMT_FM_SINGLE_BUFFERS = 1,
    WMT_FM_FILESINK_DATA_UNITS = 2,
    WMT_FM_FILESINK_UNBUFFERED = 4,
} WMT_FILESINK_MODE;

typedef enum {
    WMT_MS_CLASS_MUSIC = 0,
    WMT_MS_CLASS_SPEECH = 1,
    WMT_MS_CLASS_MIXED = 2,
} WMT_MUSICSPEECH_CLASS_MODE;

typedef enum {
    WMT_WMETYPE_AUDIO = 1,
    WMT_WMETYPE_VIDEO = 2,
} WMT_WATERMARK_ENTRY_TYPE;

typedef enum {
    WM_PLAYBACK_DRC_HIGH = 0,
    WM_PLAYBACK_DRC_MEDIUM = 1,
    WM_PLAYBACK_DRC_LOW = 2,
} WM_PLAYBACK_DRC_LEVEL;

typedef enum {
    WMT_TIMECODE_FRAMERATE_30 = 0,
    WMT_TIMECODE_FRAMERATE_30DROP = 1,
    WMT_TIMECODE_FRAMERATE_25 = 2,
    WMT_TIMECODE_FRAMERATE_24 = 3,
} WMT_TIMECODE_FRAMERATE;

typedef enum {
    WMT_CREDENTIAL_SAVE = 1,
    WMT_CREDENTIAL_DONT_CACHE = 2,
    WMT_CREDENTIAL_CLEAR_TEXT = 4,
    WMT_CREDENTIAL_PROXY = 8,
    WMT_CREDENTIAL_ENCRYPT = 16,
} WMT_CREDENTIAL_FLAGS;

typedef enum {
    WM_AETYPE_INCLUDE = 105,
    WM_AETYPE_EXCLUDE = 101,
} WM_AETYPE;

typedef enum {
    WMT_RIGHT_PLAYBACK = 1,
    WMT_RIGHT_COPY_TO_NON_SDMI_DEVICE = 2,
    WMT_RIGHT_COPY_TO_CD = 8,
    WMT_RIGHT_COPY_TO_SDMI_DEVICE = 16,
    WMT_RIGHT_ONE_TIME = 32,
    WMT_RIGHT_SAVE_STREAM_PROTECTED = 64,
    WMT_RIGHT_COPY = 128,
    WMT_RIGHT_COLLABORATIVE_PLAY = 256,
    WMT_RIGHT_SDMI_TRIGGER = 65536,
    WMT_RIGHT_SDMI_NOMORECOPIES = 131072,
} WMT_RIGHTS;

typedef int WM_STREAM_PRIORITY_RECORD;

typedef int WM_WRITER_STATISTICS;

typedef int WM_WRITER_STATISTICS_EX;

typedef int WM_READER_STATISTICS;

typedef int WM_READER_CLIENTINFO;

typedef int WM_CLIENT_PROPERTIES;

typedef int WM_CLIENT_PROPERTIES_EX;

typedef int WM_PORT_NUMBER_RANGE;

typedef int WMT_BUFFER_SEGMENT;

typedef int WMT_PAYLOAD_FRAGMENT;

typedef int WMT_FILESINK_DATA_UNIT;

typedef int WMT_WEBSTREAM_FORMAT;

typedef int WMT_WEBSTREAM_SAMPLE_HEADER;

typedef int WM_ADDRESS_ACCESSENTRY;

typedef int WM_PICTURE;

typedef int WM_SYNCHRONISED_LYRICS;

typedef int WM_USER_WEB_URL;

typedef int WM_USER_TEXT;

typedef int WM_LEAKY_BUCKET_PAIR;

typedef int WM_STREAM_TYPE_INFO;

typedef int WMT_WATERMARK_ENTRY;

typedef int WMT_VIDEOIMAGE_SAMPLE;

typedef int WMT_VIDEOIMAGE_SAMPLE2;

typedef int WM_MEDIA_TYPE;

typedef int WMVIDEOINFOHEADER;

typedef int WMVIDEOINFOHEADER2;

typedef int WMMPEG2VIDEOINFO;

typedef int WMSCRIPTFORMAT;

typedef int WMT_COLORSPACEINFO_EXTENSION_DATA;

typedef int WMT_TIMECODE_EXTENSION_DATA;

typedef int DRM_VAL16;

typedef int IWMMediaProps;

typedef int IWMVideoMediaProps;

typedef int IWMWriter;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMDRMWriter;

typedef int WMDRM_IMPORT_INIT_STRUCT;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IWMDRMWriter2;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IWMDRMWriter3;

typedef int IWMInputMediaProps;

typedef int IWMPropertyVault;

typedef int IWMIStreamProps;

typedef int IWMReader;

typedef int IWMSyncReader;

typedef int IWMSyncReader2;

typedef int IWMOutputMediaProps;

typedef int IWMStatusCallback;

typedef int IWMReaderCallback;

typedef int IWMCredentialCallback;

typedef int IWMMetadataEditor;

typedef int IWMMetadataEditor2;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMDRMEditor;

typedef int IWMHeaderInfo;

typedef int IWMHeaderInfo2;

typedef int IWMHeaderInfo3;

typedef int IWMProfileManager;

typedef int IWMProfileManager2;

typedef int IWMProfileManagerLanguage;

typedef int IWMProfile;

typedef int IWMProfile2;

typedef int IWMProfile3;

typedef int IWMStreamConfig;

typedef int IWMStreamConfig2;

typedef int IWMStreamConfig3;

typedef int IWMPacketSize;

typedef int IWMPacketSize2;

typedef int IWMStreamList;

typedef int IWMMutualExclusion;

typedef int IWMMutualExclusion2;

typedef int IWMBandwidthSharing;

typedef int IWMStreamPrioritization;

typedef int IWMWriterAdvanced;

typedef int IWMWriterAdvanced2;

typedef int IWMWriterAdvanced3;

typedef int IWMWriterPreprocess;

typedef int IWMWriterPostViewCallback;

typedef int IWMWriterPostView;

typedef int IWMWriterSink;

typedef int IWMRegisterCallback;

typedef int IWMWriterFileSink;

typedef int IWMWriterFileSink2;

typedef int IWMWriterFileSink3;

typedef int IWMWriterNetworkSink;

typedef int IWMClientConnections;

typedef int IWMClientConnections2;

typedef int IWMReaderAdvanced;

typedef int IWMReaderAdvanced2;

typedef int IWMReaderAdvanced3;

typedef int IWMReaderAdvanced4;

typedef int IWMReaderAdvanced5;

typedef int IWMReaderAdvanced6;

typedef int IWMPlayerHook;

typedef int IWMReaderAllocatorEx;

typedef int IWMReaderTypeNegotiation;

typedef int IWMReaderCallbackAdvanced;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMDRMReader;

typedef int DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS;

typedef int DRM_OPL_OUTPUT_IDS;

typedef int DRM_OUTPUT_PROTECTION;

typedef int DRM_VIDEO_OUTPUT_PROTECTION_IDS;

typedef int DRM_PLAY_OPL;

typedef int DRM_COPY_OPL;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IWMDRMReader2;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IWMDRMReader3;

typedef int IWMReaderPlaylistBurn;

typedef int IWMReaderNetworkConfig;

typedef int IWMReaderNetworkConfig2;

typedef int IWMReaderStreamClock;

typedef int IWMIndexer;

typedef int IWMIndexer2;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMLicenseBackup;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMLicenseRestore;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMBackupRestoreProps;

typedef int IWMCodecInfo;

typedef int IWMCodecInfo2;

typedef int IWMCodecInfo3;

typedef int IWMLanguageList;

typedef int IWMWriterPushSink;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IWMDeviceRegistration;

typedef int IWMRegisteredDevice;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IWMProximityDetection;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IWMDRMMessageParser;

// TODO: this type is limited to platform 'windows5.1.2600'
typedef int IWMDRMTranscryptor;

typedef int IWMDRMTranscryptor2;

typedef int IWMDRMTranscryptionManager;

typedef int IWMWatermarkInfo;

typedef int IWMReaderAccelerator;

typedef int IWMReaderTimecode;

typedef int IWMAddressAccess;

typedef int IWMAddressAccess2;

typedef int IWMImageInfo;

typedef int IWMLicenseRevocationAgent;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMAuthorizer;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMSecureChannel;

// TODO: this type is limited to platform 'windows5.0'
typedef int IWMGetSecureChannel;

typedef int INSNetSourceCreator;

typedef int IWMPlayerTimestampHook;

typedef int IWMCodecAMVideoAccelerator;

typedef int IWMCodecVideoAccelerator;

typedef enum {
    NETSOURCE_URLCREDPOLICY_SETTING_SILENTLOGONOK = 0,
    NETSOURCE_URLCREDPOLICY_SETTING_MUSTPROMPTUSER = 1,
    NETSOURCE_URLCREDPOLICY_SETTING_ANONYMOUSONLY = 2,
} NETSOURCE_URLCREDPOLICY_SETTINGS;

typedef int IWMSInternalAdminNetSource;

typedef int IWMSInternalAdminNetSource2;

typedef int IWMSInternalAdminNetSource3;


//--------------------------------------------------------------------------------
// Section: Functions (11)
//--------------------------------------------------------------------------------
// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMIsContentProtected();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateWriter();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateReader();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateSyncReader();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateEditor();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateIndexer();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateBackupRestorer();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateProfileManager();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateWriterFileSink();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateWriterNetworkSink();

// TODO: this type is limited to platform 'windows5.0'
/*HRESULT*/void WMCreateWriterPushSink();
