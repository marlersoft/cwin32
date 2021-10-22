// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (88)
//--------------------------------------------------------------------------------
#define GUID_DEVINTERFACE_SENSOR GUID { "ba1bb692-9b7a-4833-9a1e-525ed134e7e2" }
#define SENSOR_EVENT_STATE_CHANGED GUID { "bfd96016-6bd7-4560-ad34-f2f6607e8f81" }
#define SENSOR_EVENT_DATA_UPDATED GUID { "2ed0f2a4-0087-41d3-87db-6773370b3c88" }
#define SENSOR_EVENT_PROPERTY_CHANGED GUID { "2358f099-84c9-4d3d-90df-c2421e2b2045" }
#define SENSOR_EVENT_ACCELEROMETER_SHAKE GUID { "825f5a94-0f48-4396-9ca0-6ecb5c99d915" }
#define SENSOR_EVENT_PARAMETER_COMMON_GUID GUID { "64346e30-8728-4b34-bdf6-4f52442c5c28" }
#define SENSOR_ERROR_PARAMETER_COMMON_GUID GUID { "77112bcd-fce1-4f43-b8b8-a88256adb4b3" }
#define SENSOR_PROPERTY_COMMON_GUID GUID { "7f8383ec-d3ec-495c-a8cf-b8bbe85c2920" }
#define SENSOR_CATEGORY_ALL GUID { "c317c286-c468-4288-9975-d4c4587c442c" }
#define SENSOR_CATEGORY_LOCATION GUID { "bfa794e4-f964-4fdb-90f6-51056bfe4b44" }
#define SENSOR_CATEGORY_ENVIRONMENTAL GUID { "323439aa-7f66-492b-ba0c-73e9aa0a65d5" }
#define SENSOR_CATEGORY_MOTION GUID { "cd09daf1-3b2e-4c3d-b598-b5e5ff93fd46" }
#define SENSOR_CATEGORY_ORIENTATION GUID { "9e6c04b6-96fe-4954-b726-68682a473f69" }
#define SENSOR_CATEGORY_MECHANICAL GUID { "8d131d68-8ef7-4656-80b5-cccbd93791c5" }
#define SENSOR_CATEGORY_ELECTRICAL GUID { "fb73fcd8-fc4a-483c-ac58-27b691c6beff" }
#define SENSOR_CATEGORY_BIOMETRIC GUID { "ca19690f-a2c7-477d-a99e-99ec6e2b5648" }
#define SENSOR_CATEGORY_LIGHT GUID { "17a665c0-9063-4216-b202-5c7a255e18ce" }
#define SENSOR_CATEGORY_SCANNER GUID { "b000e77e-f5b5-420f-815d-0270a726f270" }
#define SENSOR_CATEGORY_OTHER GUID { "2c90e7a9-f4c9-4fa2-af37-56d471fe5a3d" }
#define SENSOR_CATEGORY_UNSUPPORTED GUID { "2beae7fa-19b0-48c5-a1f6-b5480dc206b0" }
#define SENSOR_TYPE_LOCATION_GPS GUID { "ed4ca589-327a-4ff9-a560-91da4b48275e" }
#define SENSOR_TYPE_LOCATION_STATIC GUID { "095f8184-0fa9-4445-8e6e-b70f320b6b4c" }
#define SENSOR_TYPE_LOCATION_LOOKUP GUID { "3b2eae4a-72ce-436d-96d2-3c5b8570e987" }
#define SENSOR_TYPE_LOCATION_TRIANGULATION GUID { "691c341a-5406-4fe1-942f-2246cbeb39e0" }
#define SENSOR_TYPE_LOCATION_OTHER GUID { "9b2d0566-0368-4f71-b88d-533f132031de" }
#define SENSOR_TYPE_LOCATION_BROADCAST GUID { "d26988cf-5162-4039-bb17-4c58b698e44a" }
#define SENSOR_TYPE_LOCATION_DEAD_RECKONING GUID { "1a37d538-f28b-42da-9fce-a9d0a2a6d829" }
#define SENSOR_TYPE_ENVIRONMENTAL_TEMPERATURE GUID { "04fd0ec4-d5da-45fa-95a9-5db38ee19306" }
#define SENSOR_TYPE_ENVIRONMENTAL_ATMOSPHERIC_PRESSURE GUID { "0e903829-ff8a-4a93-97df-3dcbde402288" }
#define SENSOR_TYPE_ENVIRONMENTAL_HUMIDITY GUID { "5c72bf67-bd7e-4257-990b-98a3ba3b400a" }
#define SENSOR_TYPE_ENVIRONMENTAL_WIND_SPEED GUID { "dd50607b-a45f-42cd-8efd-ec61761c4226" }
#define SENSOR_TYPE_ENVIRONMENTAL_WIND_DIRECTION GUID { "9ef57a35-9306-434d-af09-37fa5a9c00bd" }
#define SENSOR_TYPE_ACCELEROMETER_1D GUID { "c04d2387-7340-4cc2-991e-3b18cb8ef2f4" }
#define SENSOR_TYPE_ACCELEROMETER_2D GUID { "b2c517a8-f6b5-4ba6-a423-5df560b4cc07" }
#define SENSOR_TYPE_ACCELEROMETER_3D GUID { "c2fb0f5f-e2d2-4c78-bcd0-352a9582819d" }
#define SENSOR_TYPE_MOTION_DETECTOR GUID { "5c7c1a12-30a5-43b9-a4b2-cf09ec5b7be8" }
#define SENSOR_TYPE_GYROMETER_1D GUID { "fa088734-f552-4584-8324-edfaf649652c" }
#define SENSOR_TYPE_GYROMETER_2D GUID { "31ef4f83-919b-48bf-8de0-5d7a9d240556" }
#define SENSOR_TYPE_GYROMETER_3D GUID { "09485f5a-759e-42c2-bd4b-a349b75c8643" }
#define SENSOR_TYPE_SPEEDOMETER GUID { "6bd73c1f-0bb4-4310-81b2-dfc18a52bf94" }
#define SENSOR_TYPE_COMPASS_1D GUID { "a415f6c5-cb50-49d0-8e62-a8270bd7a26c" }
#define SENSOR_TYPE_COMPASS_2D GUID { "15655cc0-997a-4d30-84db-57caba3648bb" }
#define SENSOR_TYPE_COMPASS_3D GUID { "76b5ce0d-17dd-414d-93a1-e127f40bdf6e" }
#define SENSOR_TYPE_INCLINOMETER_1D GUID { "b96f98c5-7a75-4ba7-94e9-ac868c966dd8" }
#define SENSOR_TYPE_INCLINOMETER_2D GUID { "ab140f6d-83eb-4264-b70b-b16a5b256a01" }
#define SENSOR_TYPE_INCLINOMETER_3D GUID { "b84919fb-ea85-4976-8444-6f6f5c6d31db" }
#define SENSOR_TYPE_DISTANCE_1D GUID { "5f14ab2f-1407-4306-a93f-b1dbabe4f9c0" }
#define SENSOR_TYPE_DISTANCE_2D GUID { "5cf9a46c-a9a2-4e55-b6a1-a04aafa95a92" }
#define SENSOR_TYPE_DISTANCE_3D GUID { "a20cae31-0e25-4772-9fe5-96608a1354b2" }
#define SENSOR_TYPE_AGGREGATED_QUADRANT_ORIENTATION GUID { "9f81f1af-c4ab-4307-9904-c828bfb90829" }
#define SENSOR_TYPE_AGGREGATED_DEVICE_ORIENTATION GUID { "cdb5d8f7-3cfd-41c8-8542-cce622cf5d6e" }
#define SENSOR_TYPE_AGGREGATED_SIMPLE_DEVICE_ORIENTATION GUID { "86a19291-0482-402c-bf4c-addac52b1c39" }
#define SENSOR_TYPE_VOLTAGE GUID { "c5484637-4fb7-4953-98b8-a56d8aa1fb1e" }
#define SENSOR_TYPE_CURRENT GUID { "5adc9fce-15a0-4bbe-a1ad-2d38a9ae831c" }
#define SENSOR_TYPE_CAPACITANCE GUID { "ca2ffb1c-2317-49c0-a0b4-b63ce63461a0" }
#define SENSOR_TYPE_RESISTANCE GUID { "9993d2c8-c157-4a52-a7b5-195c76037231" }
#define SENSOR_TYPE_INDUCTANCE GUID { "dc1d933f-c435-4c7d-a2fe-607192a524d3" }
#define SENSOR_TYPE_ELECTRICAL_POWER GUID { "212f10f5-14ab-4376-9a43-a7794098c2fe" }
#define SENSOR_TYPE_POTENTIOMETER GUID { "2b3681a9-cadc-45aa-a6ff-54957c8bb440" }
#define SENSOR_TYPE_FREQUENCY GUID { "8cd2cbb6-73e6-4640-a709-72ae8fb60d7f" }
#define SENSOR_TYPE_BOOLEAN_SWITCH GUID { "9c7e371f-1041-460b-8d5c-71e4752e350c" }
#define SENSOR_TYPE_MULTIVALUE_SWITCH GUID { "b3ee4d76-37a4-4402-b25e-99c60a775fa1" }
#define SENSOR_TYPE_FORCE GUID { "c2ab2b02-1a1c-4778-a81b-954a1788cc75" }
#define SENSOR_TYPE_SCALE GUID { "c06dd92c-7feb-438e-9bf6-82207fff5bb8" }
#define SENSOR_TYPE_PRESSURE GUID { "26d31f34-6352-41cf-b793-ea0713d53d77" }
#define SENSOR_TYPE_STRAIN GUID { "c6d1ec0e-6803-4361-ad3d-85bcc58c6d29" }
#define SENSOR_TYPE_BOOLEAN_SWITCH_ARRAY GUID { "545c8ba5-b143-4545-868f-ca7fd986b4f6" }
#define SENSOR_TYPE_HUMAN_PRESENCE GUID { "c138c12b-ad52-451c-9375-87f518ff10c6" }
#define SENSOR_TYPE_HUMAN_PROXIMITY GUID { "5220dae9-3179-4430-9f90-06266d2a34de" }
#define SENSOR_TYPE_TOUCH GUID { "17db3018-06c4-4f7d-81af-9274b7599c27" }
#define SENSOR_TYPE_AMBIENT_LIGHT GUID { "97f115c8-599a-4153-8894-d2d12899918a" }
#define SENSOR_TYPE_RFID_SCANNER GUID { "44328ef5-02dd-4e8d-ad5d-9249832b2eca" }
#define SENSOR_TYPE_BARCODE_SCANNER GUID { "990b3d8f-85bb-45ff-914d-998c04f372df" }
#define SENSOR_TYPE_CUSTOM GUID { "e83af229-8640-4d18-a213-e22675ebb2c3" }
#define SENSOR_TYPE_UNKNOWN GUID { "10ba83e3-ef4f-41ed-9885-a87d6435a8e1" }
#define SENSOR_DATA_TYPE_COMMON_GUID GUID { "db5e0cf2-cf1f-4c18-b46c-d86011d62150" }
#define SENSOR_DATA_TYPE_LOCATION_GUID GUID { "055c74d8-ca6f-47d6-95c6-1ed3637a0ff4" }
#define SENSOR_DATA_TYPE_ENVIRONMENTAL_GUID GUID { "8b0aa2f1-2d57-42ee-8cc0-4d27622b46c4" }
#define SENSOR_DATA_TYPE_MOTION_GUID GUID { "3f8a69a2-07c5-4e48-a965-cd797aab56d5" }
#define SENSOR_DATA_TYPE_ORIENTATION_GUID GUID { "1637d8a2-4248-4275-865d-558de84aedfd" }
#define SENSOR_DATA_TYPE_GUID_MECHANICAL_GUID GUID { "38564a7c-f2f2-49bb-9b2b-ba60f66a58df" }
#define SENSOR_DATA_TYPE_BIOMETRIC_GUID GUID { "2299288a-6d9e-4b0b-b7ec-3528f89e40af" }
#define SENSOR_DATA_TYPE_LIGHT_GUID GUID { "e4c77ce2-dcb7-46e9-8439-4fec548833a6" }
#define SENSOR_DATA_TYPE_SCANNER_GUID GUID { "d7a59a3c-3421-44ab-8d3a-9de8ab6c4cae" }
#define SENSOR_DATA_TYPE_ELECTRICAL_GUID GUID { "bbb246d1-e242-4780-a2d3-cded84f35842" }
#define SENSOR_DATA_TYPE_CUSTOM_GUID GUID { "b14c764f-07cf-41e8-9d82-ebe3d0776a6f" }
#define SENSOR_PROPERTY_TEST_GUID GUID { "e1e962f4-6e65-45f7-9c36-d487b7b1bd34" }
#define GNSS_CLEAR_ALL_ASSISTANCE_DATA (UINT)1

//--------------------------------------------------------------------------------
// Section: Types (17)
//--------------------------------------------------------------------------------
typedef int SensorManager;

typedef int SensorCollection;

typedef int Sensor;

typedef int SensorDataReport;

typedef enum {
    SENSOR_STATE_MIN = 0,
    SENSOR_STATE_READY = 0,
    SENSOR_STATE_NOT_AVAILABLE = 1,
    SENSOR_STATE_NO_DATA = 2,
    SENSOR_STATE_INITIALIZING = 3,
    SENSOR_STATE_ACCESS_DENIED = 4,
    SENSOR_STATE_ERROR = 5,
    SENSOR_STATE_MAX = 5,
} SensorState;

typedef enum {
    SENSOR_CONNECTION_TYPE_PC_INTEGRATED = 0,
    SENSOR_CONNECTION_TYPE_PC_ATTACHED = 1,
    SENSOR_CONNECTION_TYPE_PC_EXTERNAL = 2,
} SensorConnectionType;

typedef enum {
    LOCATION_DESIRED_ACCURACY_DEFAULT = 0,
    LOCATION_DESIRED_ACCURACY_HIGH = 1,
} LOCATION_DESIRED_ACCURACY;

typedef enum {
    LOCATION_POSITION_SOURCE_CELLULAR = 0,
    LOCATION_POSITION_SOURCE_SATELLITE = 1,
    LOCATION_POSITION_SOURCE_WIFI = 2,
    LOCATION_POSITION_SOURCE_IPADDRESS = 3,
    LOCATION_POSITION_SOURCE_UNKNOWN = 4,
} LOCATION_POSITION_SOURCE;

typedef enum {
    SIMPLE_DEVICE_ORIENTATION_NOT_ROTATED = 0,
    SIMPLE_DEVICE_ORIENTATION_ROTATED_90 = 1,
    SIMPLE_DEVICE_ORIENTATION_ROTATED_180 = 2,
    SIMPLE_DEVICE_ORIENTATION_ROTATED_270 = 3,
    SIMPLE_DEVICE_ORIENTATION_ROTATED_FACE_UP = 4,
    SIMPLE_DEVICE_ORIENTATION_ROTATED_FACE_DOWN = 5,
} SimpleDeviceOrientation;

typedef enum {
    MAGNETOMETER_ACCURACY_UNKNOWN = 0,
    MAGNETOMETER_ACCURACY_UNRELIABLE = 1,
    MAGNETOMETER_ACCURACY_APPROXIMATE = 2,
    MAGNETOMETER_ACCURACY_HIGH = 3,
} MagnetometerAccuracy;

// TODO: this type is limited to platform 'windows6.1'
typedef int ISensorManager;

// TODO: this type is limited to platform 'windows8.0'
typedef int ILocationPermissions;

// TODO: this type is limited to platform 'windows6.1'
typedef int ISensorCollection;

// TODO: this type is limited to platform 'windows6.1'
typedef int ISensor;

// TODO: this type is limited to platform 'windows6.1'
typedef int ISensorDataReport;

// TODO: this type is limited to platform 'windows6.1'
typedef int ISensorManagerEvents;

// TODO: this type is limited to platform 'windows6.1'
typedef int ISensorEvents;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------
