// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (423)
//--------------------------------------------------------------------------------
#define SHORT_PACKET_TERMINATE (UINT)1
#define AUTO_CLEAR_STALL (UINT)2
#define PIPE_TRANSFER_TIMEOUT (UINT)3
#define IGNORE_SHORT_PACKETS (UINT)4
#define ALLOW_PARTIAL_READS (UINT)5
#define AUTO_FLUSH (UINT)6
#define RAW_IO (UINT)7
#define MAXIMUM_TRANSFER_SIZE (UINT)8
#define RESET_PIPE_ON_RESUME (UINT)9
#define AUTO_SUSPEND (UINT)129
#define SUSPEND_DELAY (UINT)131
#define DEVICE_SPEED (UINT)1
#define LowSpeed (UINT)1
#define FullSpeed (UINT)2
#define HighSpeed (UINT)3
#define USBUSER_VERSION (UINT)4
#define USBUSER_GET_CONTROLLER_INFO_0 (UINT)1
#define USBUSER_GET_CONTROLLER_DRIVER_KEY (UINT)2
#define USBUSER_PASS_THRU (UINT)3
#define USBUSER_GET_POWER_STATE_MAP (UINT)4
#define USBUSER_GET_BANDWIDTH_INFORMATION (UINT)5
#define USBUSER_GET_BUS_STATISTICS_0 (UINT)6
#define USBUSER_GET_ROOTHUB_SYMBOLIC_NAME (UINT)7
#define USBUSER_GET_USB_DRIVER_VERSION (UINT)8
#define USBUSER_GET_USB2_HW_VERSION (UINT)9
#define USBUSER_USB_REFRESH_HCT_REG (UINT)10
#define USBUSER_OP_SEND_ONE_PACKET (UINT)268435457
#define USBUSER_OP_RAW_RESET_PORT (UINT)536870913
#define USBUSER_OP_OPEN_RAW_DEVICE (UINT)536870914
#define USBUSER_OP_CLOSE_RAW_DEVICE (UINT)536870915
#define USBUSER_OP_SEND_RAW_COMMAND (UINT)536870916
#define USBUSER_SET_ROOTPORT_FEATURE (UINT)536870917
#define USBUSER_CLEAR_ROOTPORT_FEATURE (UINT)536870918
#define USBUSER_GET_ROOTPORT_STATUS (UINT)536870919
#define USBUSER_INVALID_REQUEST (UINT)4294967280
#define USBUSER_OP_MASK_DEVONLY_API (UINT)268435456
#define USBUSER_OP_MASK_HCTEST_API (UINT)536870912
#define USB_PACKETFLAG_LOW_SPEED (UINT)1
#define USB_PACKETFLAG_FULL_SPEED (UINT)2
#define USB_PACKETFLAG_HIGH_SPEED (UINT)4
#define USB_PACKETFLAG_ASYNC_IN (UINT)8
#define USB_PACKETFLAG_ASYNC_OUT (UINT)16
#define USB_PACKETFLAG_ISO_IN (UINT)32
#define USB_PACKETFLAG_ISO_OUT (UINT)64
#define USB_PACKETFLAG_SETUP (UINT)128
#define USB_PACKETFLAG_TOGGLE0 (UINT)256
#define USB_PACKETFLAG_TOGGLE1 (UINT)512
#define USB_HC_FEATURE_FLAG_PORT_POWER_SWITCHING (UINT)1
#define USB_HC_FEATURE_FLAG_SEL_SUSPEND (UINT)2
#define USB_HC_FEATURE_LEGACY_BIOS (UINT)4
#define USB_HC_FEATURE_TIME_SYNC_API (UINT)8
#define USB_SUBMIT_URB (UINT)0
#define USB_RESET_PORT (UINT)1
#define USB_GET_ROOTHUB_PDO (UINT)3
#define USB_GET_PORT_STATUS (UINT)4
#define USB_ENABLE_PORT (UINT)5
#define USB_GET_HUB_COUNT (UINT)6
#define USB_CYCLE_PORT (UINT)7
#define USB_GET_HUB_NAME (UINT)8
#define USB_IDLE_NOTIFICATION (UINT)9
#define USB_RECORD_FAILURE (UINT)10
#define USB_GET_BUS_INFO (UINT)264
#define USB_GET_CONTROLLER_NAME (UINT)265
#define USB_GET_BUSGUID_INFO (UINT)266
#define USB_GET_PARENT_HUB_INFO (UINT)267
#define USB_GET_DEVICE_HANDLE (UINT)268
#define USB_GET_DEVICE_HANDLE_EX (UINT)269
#define USB_GET_TT_DEVICE_HANDLE (UINT)270
#define USB_GET_TOPOLOGY_ADDRESS (UINT)271
#define USB_IDLE_NOTIFICATION_EX (UINT)272
#define USB_REQ_GLOBAL_SUSPEND (UINT)273
#define USB_REQ_GLOBAL_RESUME (UINT)274
#define USB_GET_HUB_CONFIG_INFO (UINT)275
#define USB_FAIL_GET_STATUS (UINT)280
#define USB_REGISTER_COMPOSITE_DEVICE (UINT)0
#define USB_UNREGISTER_COMPOSITE_DEVICE (UINT)1
#define USB_REQUEST_REMOTE_WAKE_NOTIFICATION (UINT)2
#define HCD_GET_STATS_1 (UINT)255
#define HCD_DIAGNOSTIC_MODE_ON (UINT)256
#define HCD_DIAGNOSTIC_MODE_OFF (UINT)257
#define HCD_GET_ROOT_HUB_NAME (UINT)258
#define HCD_GET_DRIVERKEY_NAME (UINT)265
#define HCD_GET_STATS_2 (UINT)266
#define HCD_DISABLE_PORT (UINT)268
#define HCD_ENABLE_PORT (UINT)269
#define HCD_USER_REQUEST (UINT)270
#define HCD_TRACE_READ_REQUEST (UINT)275
#define USB_GET_NODE_INFORMATION (UINT)258
#define USB_GET_NODE_CONNECTION_INFORMATION (UINT)259
#define USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION (UINT)260
#define USB_GET_NODE_CONNECTION_NAME (UINT)261
#define USB_DIAG_IGNORE_HUBS_ON (UINT)262
#define USB_DIAG_IGNORE_HUBS_OFF (UINT)263
#define USB_GET_NODE_CONNECTION_DRIVERKEY_NAME (UINT)264
#define USB_GET_HUB_CAPABILITIES (UINT)271
#define USB_GET_NODE_CONNECTION_ATTRIBUTES (UINT)272
#define USB_HUB_CYCLE_PORT (UINT)273
#define USB_GET_NODE_CONNECTION_INFORMATION_EX (UINT)274
#define USB_RESET_HUB (UINT)275
#define USB_GET_HUB_CAPABILITIES_EX (UINT)276
#define USB_GET_HUB_INFORMATION_EX (UINT)277
#define USB_GET_PORT_CONNECTOR_PROPERTIES (UINT)278
#define USB_GET_NODE_CONNECTION_INFORMATION_EX_V2 (UINT)279
#define USB_GET_TRANSPORT_CHARACTERISTICS (UINT)281
#define USB_REGISTER_FOR_TRANSPORT_CHARACTERISTICS_CHANGE (UINT)282
#define USB_NOTIFY_ON_TRANSPORT_CHARACTERISTICS_CHANGE (UINT)283
#define USB_UNREGISTER_FOR_TRANSPORT_CHARACTERISTICS_CHANGE (UINT)284
#define USB_START_TRACKING_FOR_TIME_SYNC (UINT)285
#define USB_GET_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC (UINT)286
#define USB_STOP_TRACKING_FOR_TIME_SYNC (UINT)287
#define USB_GET_DEVICE_CHARACTERISTICS (UINT)288
#define GUID_DEVINTERFACE_USB_HUB GUID { "f18a0e88-c30c-11d0-8815-00a0c906bed8" }
#define GUID_DEVINTERFACE_USB_BILLBOARD GUID { "5e9adaef-f879-473f-b807-4e5ea77d1b1c" }
#define GUID_DEVINTERFACE_USB_DEVICE GUID { "a5dcbf10-6530-11d2-901f-00c04fb951ed" }
#define GUID_DEVINTERFACE_USB_HOST_CONTROLLER GUID { "3abf6f2d-71c4-462a-8a92-1e6861e6af27" }
#define GUID_USB_WMI_STD_DATA GUID { "4e623b20-cb14-11d1-b331-00a0c959bbd2" }
#define GUID_USB_WMI_STD_NOTIFICATION GUID { "4e623b20-cb14-11d1-b331-00a0c959bbd2" }
#define GUID_USB_WMI_DEVICE_PERF_INFO GUID { "66c1aa3c-499f-49a0-a9a5-61e2359f6407" }
#define GUID_USB_WMI_NODE_INFO GUID { "9c179357-dc7a-4f41-b66b-323b9ddcb5b1" }
#define GUID_USB_WMI_TRACING GUID { "3a61881b-b4e6-4bf9-ae0f-3cd8f394e52f" }
#define GUID_USB_TRANSFER_TRACING GUID { "681eb8aa-403d-452c-9f8a-f0616fac9540" }
#define GUID_USB_PERFORMANCE_TRACING GUID { "d5de77a6-6ae9-425c-b1e2-f5615fd348a9" }
#define GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION GUID { "9bbbf831-a2f2-43b4-96d1-86944b5914b3" }
#define BMREQUEST_HOST_TO_DEVICE (UINT)0
#define BMREQUEST_DEVICE_TO_HOST (UINT)1
#define BMREQUEST_STANDARD (UINT)0
#define BMREQUEST_CLASS (UINT)1
#define BMREQUEST_VENDOR (UINT)2
#define BMREQUEST_TO_DEVICE (UINT)0
#define BMREQUEST_TO_INTERFACE (UINT)1
#define BMREQUEST_TO_ENDPOINT (UINT)2
#define BMREQUEST_TO_OTHER (UINT)3
#define USB_REQUEST_GET_STATUS (UINT)0
#define USB_REQUEST_CLEAR_FEATURE (UINT)1
#define USB_REQUEST_SET_FEATURE (UINT)3
#define USB_REQUEST_SET_ADDRESS (UINT)5
#define USB_REQUEST_GET_DESCRIPTOR (UINT)6
#define USB_REQUEST_SET_DESCRIPTOR (UINT)7
#define USB_REQUEST_GET_CONFIGURATION (UINT)8
#define USB_REQUEST_SET_CONFIGURATION (UINT)9
#define USB_REQUEST_GET_INTERFACE (UINT)10
#define USB_REQUEST_SET_INTERFACE (UINT)11
#define USB_REQUEST_SYNC_FRAME (UINT)12
#define USB_REQUEST_GET_FIRMWARE_STATUS (UINT)26
#define USB_REQUEST_SET_FIRMWARE_STATUS (UINT)27
#define USB_GET_FIRMWARE_ALLOWED_OR_DISALLOWED_STATE (UINT)0
#define USB_GET_FIRMWARE_HASH (UINT)1
#define USB_DEVICE_FIRMWARE_HASH_LENGTH (UINT)32
#define USB_DISALLOW_FIRMWARE_UPDATE (UINT)0
#define USB_ALLOW_FIRMWARE_UPDATE (UINT)1
#define USB_REQUEST_SET_SEL (UINT)48
#define USB_REQUEST_ISOCH_DELAY (UINT)49
#define USB_DEVICE_DESCRIPTOR_TYPE (UINT)1
#define USB_CONFIGURATION_DESCRIPTOR_TYPE (UINT)2
#define USB_STRING_DESCRIPTOR_TYPE (UINT)3
#define USB_INTERFACE_DESCRIPTOR_TYPE (UINT)4
#define USB_ENDPOINT_DESCRIPTOR_TYPE (UINT)5
#define USB_DEVICE_QUALIFIER_DESCRIPTOR_TYPE (UINT)6
#define USB_OTHER_SPEED_CONFIGURATION_DESCRIPTOR_TYPE (UINT)7
#define USB_INTERFACE_POWER_DESCRIPTOR_TYPE (UINT)8
#define USB_OTG_DESCRIPTOR_TYPE (UINT)9
#define USB_DEBUG_DESCRIPTOR_TYPE (UINT)10
#define USB_INTERFACE_ASSOCIATION_DESCRIPTOR_TYPE (UINT)11
#define USB_BOS_DESCRIPTOR_TYPE (UINT)15
#define USB_DEVICE_CAPABILITY_DESCRIPTOR_TYPE (UINT)16
#define USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR_TYPE (UINT)48
#define USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR_TYPE (UINT)49
#define USB_RESERVED_DESCRIPTOR_TYPE (UINT)6
#define USB_CONFIG_POWER_DESCRIPTOR_TYPE (UINT)7
#define USB_FEATURE_ENDPOINT_STALL (UINT)0
#define USB_FEATURE_REMOTE_WAKEUP (UINT)1
#define USB_FEATURE_TEST_MODE (UINT)2
#define USB_FEATURE_FUNCTION_SUSPEND (UINT)0
#define USB_FEATURE_U1_ENABLE (UINT)48
#define USB_FEATURE_U2_ENABLE (UINT)49
#define USB_FEATURE_LTM_ENABLE (UINT)50
#define USB_FEATURE_LDM_ENABLE (UINT)53
#define USB_FEATURE_BATTERY_WAKE_MASK (UINT)40
#define USB_FEATURE_OS_IS_PD_AWARE (UINT)41
#define USB_FEATURE_POLICY_MODE (UINT)42
#define USB_FEATURE_CHARGING_POLICY (UINT)54
#define USB_CHARGING_POLICY_DEFAULT (UINT)0
#define USB_CHARGING_POLICY_ICCHPF (UINT)1
#define USB_CHARGING_POLICY_ICCLPF (UINT)2
#define USB_CHARGING_POLICY_NO_POWER (UINT)3
#define USB_STATUS_PORT_STATUS (UINT)0
#define USB_STATUS_PD_STATUS (UINT)1
#define USB_STATUS_EXT_PORT_STATUS (UINT)2
#define USB_GETSTATUS_SELF_POWERED (UINT)1
#define USB_GETSTATUS_REMOTE_WAKEUP_ENABLED (UINT)2
#define USB_GETSTATUS_U1_ENABLE (UINT)4
#define USB_GETSTATUS_U2_ENABLE (UINT)8
#define USB_GETSTATUS_LTM_ENABLE (UINT)16
#define USB_DEVICE_CLASS_RESERVED (UINT)0
#define USB_DEVICE_CLASS_AUDIO (UINT)1
#define USB_DEVICE_CLASS_COMMUNICATIONS (UINT)2
#define USB_DEVICE_CLASS_HUMAN_INTERFACE (UINT)3
#define USB_DEVICE_CLASS_MONITOR (UINT)4
#define USB_DEVICE_CLASS_PHYSICAL_INTERFACE (UINT)5
#define USB_DEVICE_CLASS_POWER (UINT)6
#define USB_DEVICE_CLASS_IMAGE (UINT)6
#define USB_DEVICE_CLASS_PRINTER (UINT)7
#define USB_DEVICE_CLASS_STORAGE (UINT)8
#define USB_DEVICE_CLASS_HUB (UINT)9
#define USB_DEVICE_CLASS_CDC_DATA (UINT)10
#define USB_DEVICE_CLASS_SMART_CARD (UINT)11
#define USB_DEVICE_CLASS_CONTENT_SECURITY (UINT)13
#define USB_DEVICE_CLASS_VIDEO (UINT)14
#define USB_DEVICE_CLASS_PERSONAL_HEALTHCARE (UINT)15
#define USB_DEVICE_CLASS_AUDIO_VIDEO (UINT)16
#define USB_DEVICE_CLASS_BILLBOARD (UINT)17
#define USB_DEVICE_CLASS_DIAGNOSTIC_DEVICE (UINT)220
#define USB_DEVICE_CLASS_WIRELESS_CONTROLLER (UINT)224
#define USB_DEVICE_CLASS_MISCELLANEOUS (UINT)239
#define USB_DEVICE_CLASS_APPLICATION_SPECIFIC (UINT)254
#define USB_DEVICE_CLASS_VENDOR_SPECIFIC (UINT)255
#define USB_DEVICE_CAPABILITY_WIRELESS_USB (UINT)1
#define USB_DEVICE_CAPABILITY_USB20_EXTENSION (UINT)2
#define USB_DEVICE_CAPABILITY_SUPERSPEED_USB (UINT)3
#define USB_DEVICE_CAPABILITY_CONTAINER_ID (UINT)4
#define USB_DEVICE_CAPABILITY_PLATFORM (UINT)5
#define USB_DEVICE_CAPABILITY_POWER_DELIVERY (UINT)6
#define USB_DEVICE_CAPABILITY_BATTERY_INFO (UINT)7
#define USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT (UINT)8
#define USB_DEVICE_CAPABILITY_PD_PROVIDER_PORT (UINT)9
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB (UINT)10
#define USB_DEVICE_CAPABILITY_PRECISION_TIME_MEASUREMENT (UINT)11
#define USB_DEVICE_CAPABILITY_BILLBOARD (UINT)13
#define USB_DEVICE_CAPABILITY_FIRMWARE_STATUS (UINT)17
#define USB_DEVICE_CAPABILITY_USB20_EXTENSION_BMATTRIBUTES_RESERVED_MASK (UINT)4294901985
#define USB_DEVICE_CAPABILITY_SUPERSPEED_BMATTRIBUTES_RESERVED_MASK (UINT)253
#define USB_DEVICE_CAPABILITY_SUPERSPEED_BMATTRIBUTES_LTM_CAPABLE (UINT)2
#define USB_DEVICE_CAPABILITY_SUPERSPEED_SPEEDS_SUPPORTED_RESERVED_MASK (UINT)65520
#define USB_DEVICE_CAPABILITY_SUPERSPEED_SPEEDS_SUPPORTED_LOW (UINT)1
#define USB_DEVICE_CAPABILITY_SUPERSPEED_SPEEDS_SUPPORTED_FULL (UINT)2
#define USB_DEVICE_CAPABILITY_SUPERSPEED_SPEEDS_SUPPORTED_HIGH (UINT)4
#define USB_DEVICE_CAPABILITY_SUPERSPEED_SPEEDS_SUPPORTED_SUPER (UINT)8
#define USB_DEVICE_CAPABILITY_SUPERSPEED_U1_DEVICE_EXIT_MAX_VALUE (UINT)10
#define USB_DEVICE_CAPABILITY_SUPERSPEED_U2_DEVICE_EXIT_MAX_VALUE (UINT)2047
#define USB_DEVICE_CAPABILITY_MAX_U1_LATENCY (UINT)10
#define USB_DEVICE_CAPABILITY_MAX_U2_LATENCY (UINT)2047
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_LSE_BPS (UINT)0
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_LSE_KBPS (UINT)1
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_LSE_MBPS (UINT)2
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_LSE_GBPS (UINT)3
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_MODE_SYMMETRIC (UINT)0
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_MODE_ASYMMETRIC (UINT)1
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_DIR_RX (UINT)0
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_DIR_TX (UINT)1
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_PROTOCOL_SS (UINT)0
#define USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED_PROTOCOL_SSP (UINT)1
#define GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID GUID { "d8dd60df-4589-4cc7-9cd2-659d9e648a9f" }
#define USB_CONFIG_POWERED_MASK (UINT)192
#define USB_CONFIG_BUS_POWERED (UINT)128
#define USB_CONFIG_SELF_POWERED (UINT)64
#define USB_CONFIG_REMOTE_WAKEUP (UINT)32
#define USB_CONFIG_RESERVED (UINT)31
#define USB_ENDPOINT_DIRECTION_MASK (UINT)128
#define USB_ENDPOINT_ADDRESS_MASK (UINT)15
#define USB_ENDPOINT_TYPE_MASK (UINT)3
#define USB_ENDPOINT_TYPE_CONTROL (UINT)0
#define USB_ENDPOINT_TYPE_ISOCHRONOUS (UINT)1
#define USB_ENDPOINT_TYPE_BULK (UINT)2
#define USB_ENDPOINT_TYPE_INTERRUPT (UINT)3
#define USB_ENDPOINT_TYPE_BULK_RESERVED_MASK (UINT)252
#define USB_ENDPOINT_TYPE_CONTROL_RESERVED_MASK (UINT)252
#define USB_20_ENDPOINT_TYPE_INTERRUPT_RESERVED_MASK (UINT)252
#define USB_30_ENDPOINT_TYPE_INTERRUPT_RESERVED_MASK (UINT)204
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_RESERVED_MASK (UINT)192
#define USB_30_ENDPOINT_TYPE_INTERRUPT_USAGE_MASK (UINT)48
#define USB_30_ENDPOINT_TYPE_INTERRUPT_USAGE_PERIODIC (UINT)0
#define USB_30_ENDPOINT_TYPE_INTERRUPT_USAGE_NOTIFICATION (UINT)16
#define USB_30_ENDPOINT_TYPE_INTERRUPT_USAGE_RESERVED10 (UINT)32
#define USB_30_ENDPOINT_TYPE_INTERRUPT_USAGE_RESERVED11 (UINT)48
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_SYNCHRONIZATION_MASK (UINT)12
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_SYNCHRONIZATION_NO_SYNCHRONIZATION (UINT)0
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_SYNCHRONIZATION_ASYNCHRONOUS (UINT)4
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_SYNCHRONIZATION_ADAPTIVE (UINT)8
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_SYNCHRONIZATION_SYNCHRONOUS (UINT)12
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_USAGE_MASK (UINT)48
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_USAGE_DATA_ENDOINT (UINT)0
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_USAGE_FEEDBACK_ENDPOINT (UINT)16
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_USAGE_IMPLICIT_FEEDBACK_DATA_ENDPOINT (UINT)32
#define USB_ENDPOINT_TYPE_ISOCHRONOUS_USAGE_RESERVED (UINT)48
#define USB_ENDPOINT_SUPERSPEED_BULK_MAX_PACKET_SIZE (UINT)1024
#define USB_ENDPOINT_SUPERSPEED_CONTROL_MAX_PACKET_SIZE (UINT)512
#define USB_ENDPOINT_SUPERSPEED_ISO_MAX_PACKET_SIZE (UINT)1024
#define USB_ENDPOINT_SUPERSPEED_INTERRUPT_MAX_PACKET_SIZE (UINT)1024
#define MAXIMUM_USB_STRING_LENGTH (UINT)255
#define USB_SUPERSPEED_ISOCHRONOUS_MAX_MULTIPLIER (UINT)2
#define USB_SUPERSPEEDPLUS_ISOCHRONOUS_MIN_BYTESPERINTERVAL (UINT)49153
#define USB_SUPERSPEEDPLUS_ISOCHRONOUS_MAX_BYTESPERINTERVAL (UINT)16777215
#define USB_20_HUB_DESCRIPTOR_TYPE (UINT)41
#define USB_30_HUB_DESCRIPTOR_TYPE (UINT)42
#define USB_REQUEST_GET_STATE (UINT)2
#define USB_REQUEST_CLEAR_TT_BUFFER (UINT)8
#define USB_REQUEST_RESET_TT (UINT)9
#define USB_REQUEST_GET_TT_STATE (UINT)10
#define USB_REQUEST_STOP_TT (UINT)11
#define USB_REQUEST_SET_HUB_DEPTH (UINT)12
#define USB_REQUEST_GET_PORT_ERR_COUNT (UINT)13
#define USB_PORT_STATUS_CONNECT (UINT)1
#define USB_PORT_STATUS_ENABLE (UINT)2
#define USB_PORT_STATUS_SUSPEND (UINT)4
#define USB_PORT_STATUS_OVER_CURRENT (UINT)8
#define USB_PORT_STATUS_RESET (UINT)16
#define USB_PORT_STATUS_POWER (UINT)256
#define USB_PORT_STATUS_LOW_SPEED (UINT)512
#define USB_PORT_STATUS_HIGH_SPEED (UINT)1024
#define PORT_LINK_STATE_U0 (UINT)0
#define PORT_LINK_STATE_U1 (UINT)1
#define PORT_LINK_STATE_U2 (UINT)2
#define PORT_LINK_STATE_U3 (UINT)3
#define PORT_LINK_STATE_DISABLED (UINT)4
#define PORT_LINK_STATE_RX_DETECT (UINT)5
#define PORT_LINK_STATE_INACTIVE (UINT)6
#define PORT_LINK_STATE_POLLING (UINT)7
#define PORT_LINK_STATE_RECOVERY (UINT)8
#define PORT_LINK_STATE_HOT_RESET (UINT)9
#define PORT_LINK_STATE_COMPLIANCE_MODE (UINT)10
#define PORT_LINK_STATE_LOOPBACK (UINT)11
#define PORT_LINK_STATE_TEST_MODE (UINT)11
#define USB_FEATURE_INTERFACE_POWER_D0 (UINT)2
#define USB_FEATURE_INTERFACE_POWER_D1 (UINT)3
#define USB_FEATURE_INTERFACE_POWER_D2 (UINT)4
#define USB_FEATURE_INTERFACE_POWER_D3 (UINT)5
#define USB_SUPPORT_D0_COMMAND (UINT)1
#define USB_SUPPORT_D1_COMMAND (UINT)2
#define USB_SUPPORT_D2_COMMAND (UINT)4
#define USB_SUPPORT_D3_COMMAND (UINT)8
#define USB_SUPPORT_D1_WAKEUP (UINT)16
#define USB_SUPPORT_D2_WAKEUP (UINT)32
#define USBDI_VERSION (UINT)1536
#define USB_PORTATTR_NO_CONNECTOR (UINT)1
#define USB_PORTATTR_SHARED_USB2 (UINT)2
#define USB_PORTATTR_MINI_CONNECTOR (UINT)4
#define USB_PORTATTR_OEM_CONNECTOR (UINT)8
#define USB_PORTATTR_OWNED_BY_CC (UINT)16777216
#define USB_PORTATTR_NO_OVERCURRENT_UI (UINT)33554432
#define USB_DEFAULT_DEVICE_ADDRESS (UINT)0
#define USB_DEFAULT_ENDPOINT_ADDRESS (UINT)0
#define USB_DEFAULT_MAX_PACKET (UINT)64
#define URB_FUNCTION_SELECT_CONFIGURATION (UINT)0
#define URB_FUNCTION_SELECT_INTERFACE (UINT)1
#define URB_FUNCTION_ABORT_PIPE (UINT)2
#define URB_FUNCTION_TAKE_FRAME_LENGTH_CONTROL (UINT)3
#define URB_FUNCTION_RELEASE_FRAME_LENGTH_CONTROL (UINT)4
#define URB_FUNCTION_GET_FRAME_LENGTH (UINT)5
#define URB_FUNCTION_SET_FRAME_LENGTH (UINT)6
#define URB_FUNCTION_GET_CURRENT_FRAME_NUMBER (UINT)7
#define URB_FUNCTION_CONTROL_TRANSFER (UINT)8
#define URB_FUNCTION_BULK_OR_INTERRUPT_TRANSFER (UINT)9
#define URB_FUNCTION_ISOCH_TRANSFER (UINT)10
#define URB_FUNCTION_GET_DESCRIPTOR_FROM_DEVICE (UINT)11
#define URB_FUNCTION_SET_DESCRIPTOR_TO_DEVICE (UINT)12
#define URB_FUNCTION_SET_FEATURE_TO_DEVICE (UINT)13
#define URB_FUNCTION_SET_FEATURE_TO_INTERFACE (UINT)14
#define URB_FUNCTION_SET_FEATURE_TO_ENDPOINT (UINT)15
#define URB_FUNCTION_CLEAR_FEATURE_TO_DEVICE (UINT)16
#define URB_FUNCTION_CLEAR_FEATURE_TO_INTERFACE (UINT)17
#define URB_FUNCTION_CLEAR_FEATURE_TO_ENDPOINT (UINT)18
#define URB_FUNCTION_GET_STATUS_FROM_DEVICE (UINT)19
#define URB_FUNCTION_GET_STATUS_FROM_INTERFACE (UINT)20
#define URB_FUNCTION_GET_STATUS_FROM_ENDPOINT (UINT)21
#define URB_FUNCTION_RESERVED_0X0016 (UINT)22
#define URB_FUNCTION_VENDOR_DEVICE (UINT)23
#define URB_FUNCTION_VENDOR_INTERFACE (UINT)24
#define URB_FUNCTION_VENDOR_ENDPOINT (UINT)25
#define URB_FUNCTION_CLASS_DEVICE (UINT)26
#define URB_FUNCTION_CLASS_INTERFACE (UINT)27
#define URB_FUNCTION_CLASS_ENDPOINT (UINT)28
#define URB_FUNCTION_RESERVE_0X001D (UINT)29
#define URB_FUNCTION_SYNC_RESET_PIPE_AND_CLEAR_STALL (UINT)30
#define URB_FUNCTION_CLASS_OTHER (UINT)31
#define URB_FUNCTION_VENDOR_OTHER (UINT)32
#define URB_FUNCTION_GET_STATUS_FROM_OTHER (UINT)33
#define URB_FUNCTION_CLEAR_FEATURE_TO_OTHER (UINT)34
#define URB_FUNCTION_SET_FEATURE_TO_OTHER (UINT)35
#define URB_FUNCTION_GET_DESCRIPTOR_FROM_ENDPOINT (UINT)36
#define URB_FUNCTION_SET_DESCRIPTOR_TO_ENDPOINT (UINT)37
#define URB_FUNCTION_GET_CONFIGURATION (UINT)38
#define URB_FUNCTION_GET_INTERFACE (UINT)39
#define URB_FUNCTION_GET_DESCRIPTOR_FROM_INTERFACE (UINT)40
#define URB_FUNCTION_SET_DESCRIPTOR_TO_INTERFACE (UINT)41
#define URB_FUNCTION_RESERVE_0X002B (UINT)43
#define URB_FUNCTION_RESERVE_0X002C (UINT)44
#define URB_FUNCTION_RESERVE_0X002D (UINT)45
#define URB_FUNCTION_RESERVE_0X002E (UINT)46
#define URB_FUNCTION_RESERVE_0X002F (UINT)47
#define URB_FUNCTION_GET_MS_FEATURE_DESCRIPTOR (UINT)42
#define URB_FUNCTION_SYNC_RESET_PIPE (UINT)48
#define URB_FUNCTION_SYNC_CLEAR_STALL (UINT)49
#define URB_FUNCTION_CONTROL_TRANSFER_EX (UINT)50
#define URB_FUNCTION_RESERVE_0X0033 (UINT)51
#define URB_FUNCTION_RESERVE_0X0034 (UINT)52
#define URB_FUNCTION_OPEN_STATIC_STREAMS (UINT)53
#define URB_FUNCTION_CLOSE_STATIC_STREAMS (UINT)54
#define URB_FUNCTION_BULK_OR_INTERRUPT_TRANSFER_USING_CHAINED_MDL (UINT)55
#define URB_FUNCTION_ISOCH_TRANSFER_USING_CHAINED_MDL (UINT)56
#define URB_FUNCTION_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS (UINT)61
#define USBD_SHORT_TRANSFER_OK (UINT)2
#define USBD_START_ISO_TRANSFER_ASAP (UINT)4
#define USBD_DEFAULT_PIPE_TRANSFER (UINT)8
#define USBD_TRANSFER_DIRECTION_OUT (UINT)0
#define USBD_TRANSFER_DIRECTION_IN (UINT)1
#define USBD_ISO_START_FRAME_RANGE (UINT)1024
#define USBD_DEFAULT_MAXIMUM_TRANSFER_SIZE (UINT)4294967295
#define USBD_PF_CHANGE_MAX_PACKET (UINT)1
#define USBD_PF_SHORT_PACKET_OPT (UINT)2
#define USBD_PF_ENABLE_RT_THREAD_ACCESS (UINT)4
#define USBD_PF_MAP_ADD_TRANSFERS (UINT)8
#define USBD_PF_VIDEO_PRIORITY (UINT)16
#define USBD_PF_VOICE_PRIORITY (UINT)32
#define USBD_PF_INTERACTIVE_PRIORITY (UINT)48
#define USBD_PF_PRIORITY_MASK (UINT)240
#define USBD_PF_HANDLES_SSP_HIGH_BANDWIDTH_ISOCH (UINT)256
#define USBD_PF_SSP_HIGH_BANDWIDTH_ISOCH (UINT)65536
#define OS_STRING_DESCRIPTOR_INDEX (UINT)238
#define MS_GENRE_DESCRIPTOR_INDEX (UINT)1
#define MS_POWER_DESCRIPTOR_INDEX (UINT)2
#define MS_OS_FLAGS_CONTAINERID (UINT)2
#define URB_OPEN_STATIC_STREAMS_VERSION_100 (UINT)256
#define WinUSB_TestGuid GUID { "da812bff-12c3-46a2-8e2b-dbd3b7834c43" }

//--------------------------------------------------------------------------------
// Section: Types (124)
//--------------------------------------------------------------------------------
typedef enum {
    UsbLowSpeed = 0,
    UsbFullSpeed = 1,
    UsbHighSpeed = 2,
    UsbSuperSpeed = 3,
} USB_DEVICE_SPEED;

typedef enum {
    Usb11Device = 0,
    Usb20Device = 1,
} USB_DEVICE_TYPE;

typedef int BM_REQUEST_TYPE;

typedef int USB_DEFAULT_PIPE_SETUP_PACKET;

typedef int USB_DEVICE_STATUS;

typedef int USB_INTERFACE_STATUS;

typedef int USB_ENDPOINT_STATUS;

typedef int USB_COMMON_DESCRIPTOR;

typedef int USB_DEVICE_DESCRIPTOR;

typedef int USB_DEVICE_QUALIFIER_DESCRIPTOR;

typedef int USB_BOS_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED;

typedef int USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR;

typedef int USB_DEVICE_CAPABILITY_DESCRIPTOR;

typedef int USB_CONFIGURATION_DESCRIPTOR;

typedef int USB_INTERFACE_ASSOCIATION_DESCRIPTOR;

typedef int USB_INTERFACE_DESCRIPTOR;

typedef int USB_ENDPOINT_DESCRIPTOR;

typedef int USB_HIGH_SPEED_MAXPACKET;

typedef int USB_STRING_DESCRIPTOR;

typedef int USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR;

typedef int USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR;

typedef int USB_HUB_DESCRIPTOR;

typedef int USB_30_HUB_DESCRIPTOR;

typedef int USB_HUB_STATUS;

typedef int USB_HUB_CHANGE;

typedef int USB_HUB_STATUS_AND_CHANGE;

typedef int USB_20_PORT_STATUS;

typedef int USB_20_PORT_CHANGE;

typedef int USB_30_PORT_STATUS;

typedef int USB_30_PORT_CHANGE;

typedef int USB_PORT_STATUS;

typedef int USB_PORT_CHANGE;

typedef int USB_PORT_EXT_STATUS;

typedef int USB_PORT_STATUS_AND_CHANGE;

typedef int USB_PORT_EXT_STATUS_AND_CHANGE;

typedef int USB_HUB_30_PORT_REMOTE_WAKE_MASK;

typedef int USB_FUNCTION_SUSPEND_OPTIONS;

typedef int USB_CONFIGURATION_POWER_DESCRIPTOR;

typedef int USB_INTERFACE_POWER_DESCRIPTOR;

typedef enum {
    USB_HcGeneric = 0,
    OHCI_Generic = 100,
    OHCI_Hydra = 101,
    OHCI_NEC = 102,
    UHCI_Generic = 200,
    UHCI_Piix4 = 201,
    UHCI_Piix3 = 202,
    UHCI_Ich2 = 203,
    UHCI_Reserved204 = 204,
    UHCI_Ich1 = 205,
    UHCI_Ich3m = 206,
    UHCI_Ich4 = 207,
    UHCI_Ich5 = 208,
    UHCI_Ich6 = 209,
    UHCI_Intel = 249,
    UHCI_VIA = 250,
    UHCI_VIA_x01 = 251,
    UHCI_VIA_x02 = 252,
    UHCI_VIA_x03 = 253,
    UHCI_VIA_x04 = 254,
    UHCI_VIA_x0E_FIFO = 264,
    EHCI_Generic = 1000,
    EHCI_NEC = 2000,
    EHCI_Lucent = 3000,
    EHCI_NVIDIA_Tegra2 = 4000,
    EHCI_NVIDIA_Tegra3 = 4001,
    EHCI_Intel_Medfield = 5001,
} USB_CONTROLLER_FLAVOR;

typedef int USBD_VERSION_INFORMATION;

typedef enum {
    UsbdPipeTypeControl = 0,
    UsbdPipeTypeIsochronous = 1,
    UsbdPipeTypeBulk = 2,
    UsbdPipeTypeInterrupt = 3,
} USBD_PIPE_TYPE;

typedef int USBD_DEVICE_INFORMATION;

typedef int USBD_PIPE_INFORMATION;

typedef enum {
    UsbdEndpointOffloadModeNotSupported = 0,
    UsbdEndpointOffloadSoftwareAssisted = 1,
    UsbdEndpointOffloadHardwareAssisted = 2,
} USBD_ENDPOINT_OFFLOAD_MODE;

typedef int USBD_ENDPOINT_OFFLOAD_INFORMATION;

typedef int USBD_INTERFACE_INFORMATION;

typedef int _URB_HCD_AREA;

typedef int _URB_HEADER;

typedef int _URB_SELECT_INTERFACE;

typedef int _URB_SELECT_CONFIGURATION;

typedef int _URB_PIPE_REQUEST;

typedef int _URB_FRAME_LENGTH_CONTROL;

typedef int _URB_GET_FRAME_LENGTH;

typedef int _URB_SET_FRAME_LENGTH;

typedef int _URB_GET_CURRENT_FRAME_NUMBER;

typedef int _URB_CONTROL_DESCRIPTOR_REQUEST;

typedef int _URB_CONTROL_GET_STATUS_REQUEST;

typedef int _URB_CONTROL_FEATURE_REQUEST;

typedef int _URB_CONTROL_VENDOR_OR_CLASS_REQUEST;

typedef int _URB_CONTROL_GET_INTERFACE_REQUEST;

typedef int _URB_CONTROL_GET_CONFIGURATION_REQUEST;

typedef int OS_STRING;

typedef int _URB_OS_FEATURE_DESCRIPTOR_REQUEST;

typedef int _URB_CONTROL_TRANSFER;

typedef int _URB_CONTROL_TRANSFER_EX;

typedef int _URB_BULK_OR_INTERRUPT_TRANSFER;

typedef int USBD_ISO_PACKET_DESCRIPTOR;

typedef int _URB_ISOCH_TRANSFER;

typedef int USBD_STREAM_INFORMATION;

typedef int _URB_OPEN_STATIC_STREAMS;

typedef int _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS;

typedef int URB;

typedef int USB_IDLE_CALLBACK;

typedef int USB_IDLE_CALLBACK_INFO;

typedef enum {
    UsbUserSuccess = 0,
    UsbUserNotSupported = 1,
    UsbUserInvalidRequestCode = 2,
    UsbUserFeatureDisabled = 3,
    UsbUserInvalidHeaderParameter = 4,
    UsbUserInvalidParameter = 5,
    UsbUserMiniportError = 6,
    UsbUserBufferTooSmall = 7,
    UsbUserErrorNotMapped = 8,
    UsbUserDeviceNotStarted = 9,
    UsbUserNoDeviceConnected = 10,
} USB_USER_ERROR_CODE;

typedef int USBUSER_REQUEST_HEADER;

typedef int PACKET_PARAMETERS;

typedef int USBUSER_SEND_ONE_PACKET;

typedef int RAW_RESET_PORT_PARAMETERS;

typedef int USBUSER_RAW_RESET_ROOT_PORT;

typedef int RAW_ROOTPORT_FEATURE;

typedef int USBUSER_ROOTPORT_FEATURE_REQUEST;

typedef int RAW_ROOTPORT_PARAMETERS;

typedef int USBUSER_ROOTPORT_PARAMETERS;

typedef int USB_CONTROLLER_INFO_0;

typedef int USBUSER_CONTROLLER_INFO_0;

typedef int USB_UNICODE_NAME;

typedef int USBUSER_CONTROLLER_UNICODE_NAME;

typedef int USB_PASS_THRU_PARAMETERS;

typedef int USBUSER_PASS_THRU_REQUEST;

typedef enum {
    WdmUsbPowerNotMapped = 0,
    WdmUsbPowerSystemUnspecified = 100,
    WdmUsbPowerSystemWorking = 101,
    WdmUsbPowerSystemSleeping1 = 102,
    WdmUsbPowerSystemSleeping2 = 103,
    WdmUsbPowerSystemSleeping3 = 104,
    WdmUsbPowerSystemHibernate = 105,
    WdmUsbPowerSystemShutdown = 106,
    WdmUsbPowerDeviceUnspecified = 200,
    WdmUsbPowerDeviceD0 = 201,
    WdmUsbPowerDeviceD1 = 202,
    WdmUsbPowerDeviceD2 = 203,
    WdmUsbPowerDeviceD3 = 204,
} WDMUSB_POWER_STATE;

typedef int USB_POWER_INFO;

typedef int USBUSER_POWER_INFO_REQUEST;

typedef int USB_OPEN_RAW_DEVICE_PARAMETERS;

typedef int USBUSER_OPEN_RAW_DEVICE;

typedef int USB_CLOSE_RAW_DEVICE_PARAMETERS;

typedef int USBUSER_CLOSE_RAW_DEVICE;

typedef int USB_SEND_RAW_COMMAND_PARAMETERS;

typedef int USBUSER_SEND_RAW_COMMAND;

typedef int USB_BANDWIDTH_INFO;

typedef int USBUSER_BANDWIDTH_INFO_REQUEST;

typedef int USB_BUS_STATISTICS_0;

typedef int USBUSER_BUS_STATISTICS_0_REQUEST;

typedef int USB_DRIVER_VERSION_PARAMETERS;

typedef int USBUSER_GET_DRIVER_VERSION;

typedef int USB_USB2HW_VERSION_PARAMETERS;

typedef int USBUSER_GET_USB2HW_VERSION;

typedef int USBUSER_REFRESH_HCT_REG;

typedef int WINUSB_PIPE_INFORMATION;

typedef int WINUSB_PIPE_INFORMATION_EX;

typedef int WINUSB_SETUP_PACKET;

typedef int USB_START_TRACKING_FOR_TIME_SYNC_INFORMATION;

typedef int USB_STOP_TRACKING_FOR_TIME_SYNC_INFORMATION;

typedef int USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION;


//--------------------------------------------------------------------------------
// Section: Functions (34)
//--------------------------------------------------------------------------------
/*BOOL*/void WinUsb_Initialize();

/*BOOL*/void WinUsb_Free();

/*BOOL*/void WinUsb_GetAssociatedInterface();

/*BOOL*/void WinUsb_GetDescriptor();

/*BOOL*/void WinUsb_QueryInterfaceSettings();

/*BOOL*/void WinUsb_QueryDeviceInformation();

/*BOOL*/void WinUsb_SetCurrentAlternateSetting();

/*BOOL*/void WinUsb_GetCurrentAlternateSetting();

/*BOOL*/void WinUsb_QueryPipe();

/*BOOL*/void WinUsb_QueryPipeEx();

/*BOOL*/void WinUsb_SetPipePolicy();

/*BOOL*/void WinUsb_GetPipePolicy();

/*BOOL*/void WinUsb_ReadPipe();

/*BOOL*/void WinUsb_WritePipe();

/*BOOL*/void WinUsb_ControlTransfer();

/*BOOL*/void WinUsb_ResetPipe();

/*BOOL*/void WinUsb_AbortPipe();

/*BOOL*/void WinUsb_FlushPipe();

/*BOOL*/void WinUsb_SetPowerPolicy();

/*BOOL*/void WinUsb_GetPowerPolicy();

/*BOOL*/void WinUsb_GetOverlappedResult();

/*?*USB_INTERFACE_DESCRIPTOR*/void WinUsb_ParseConfigurationDescriptor();

/*?*USB_COMMON_DESCRIPTOR*/void WinUsb_ParseDescriptors();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void WinUsb_GetCurrentFrameNumber();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void WinUsb_GetAdjustedFrameNumber();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void WinUsb_RegisterIsochBuffer();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void WinUsb_UnregisterIsochBuffer();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void WinUsb_WriteIsochPipe();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void WinUsb_ReadIsochPipe();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void WinUsb_WriteIsochPipeAsap();

// TODO: this type is limited to platform 'windows8.1'
/*BOOL*/void WinUsb_ReadIsochPipeAsap();

// TODO: this type is limited to platform 'windows10.0.10240'
/*BOOL*/void WinUsb_StartTrackingForTimeSync();

// TODO: this type is limited to platform 'windows10.0.10240'
/*BOOL*/void WinUsb_GetCurrentFrameNumberAndQpc();

// TODO: this type is limited to platform 'windows10.0.10240'
/*BOOL*/void WinUsb_StopTrackingForTimeSync();

