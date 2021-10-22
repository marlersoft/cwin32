// NOTE: this file is autogenerated, DO NOT MODIFY
#include "../bootstrap.h"
//--------------------------------------------------------------------------------
// Section: Constants (21)
//--------------------------------------------------------------------------------
#define GUID_DEVINTERFACE_PWM_CONTROLLER GUID { "60824b4c-eed1-4c9c-b49c-1b961461a819" }
#define IOCTL_PWM_CONTROLLER_GET_INFO (UINT)262144
#define IOCTL_PWM_CONTROLLER_GET_ACTUAL_PERIOD (UINT)262148
#define IOCTL_PWM_CONTROLLER_SET_DESIRED_PERIOD (UINT)294920
#define IOCTL_PWM_PIN_GET_ACTIVE_DUTY_CYCLE_PERCENTAGE (UINT)262544
#define IOCTL_PWM_PIN_SET_ACTIVE_DUTY_CYCLE_PERCENTAGE (UINT)295316
#define IOCTL_PWM_PIN_GET_POLARITY (UINT)262552
#define IOCTL_PWM_PIN_SET_POLARITY (UINT)295324
#define IOCTL_PWM_PIN_START (UINT)295331
#define IOCTL_PWM_PIN_STOP (UINT)295335
#define IOCTL_PWM_PIN_IS_STARTED (UINT)262568
#define PWM_IOCTL_ID_CONTROLLER_GET_INFO (INT)0
#define PWM_IOCTL_ID_CONTROLLER_GET_ACTUAL_PERIOD (INT)1
#define PWM_IOCTL_ID_CONTROLLER_SET_DESIRED_PERIOD (INT)2
#define PWM_IOCTL_ID_PIN_GET_ACTIVE_DUTY_CYCLE_PERCENTAGE (INT)100
#define PWM_IOCTL_ID_PIN_SET_ACTIVE_DUTY_CYCLE_PERCENTAGE (INT)101
#define PWM_IOCTL_ID_PIN_GET_POLARITY (INT)102
#define PWM_IOCTL_ID_PIN_SET_POLARITY (INT)103
#define PWM_IOCTL_ID_PIN_START (INT)104
#define PWM_IOCTL_ID_PIN_STOP (INT)105
#define PWM_IOCTL_ID_PIN_IS_STARTED (INT)106

//--------------------------------------------------------------------------------
// Section: Types (10)
//--------------------------------------------------------------------------------
typedef int PWM_CONTROLLER_INFO;

typedef int PWM_CONTROLLER_GET_ACTUAL_PERIOD_OUTPUT;

typedef int PWM_CONTROLLER_SET_DESIRED_PERIOD_INPUT;

typedef int PWM_CONTROLLER_SET_DESIRED_PERIOD_OUTPUT;

typedef int PWM_PIN_GET_ACTIVE_DUTY_CYCLE_PERCENTAGE_OUTPUT;

typedef int PWM_PIN_SET_ACTIVE_DUTY_CYCLE_PERCENTAGE_INPUT;

typedef enum {
    PWM_ACTIVE_HIGH = 0,
    PWM_ACTIVE_LOW = 1,
} PWM_POLARITY;

typedef int PWM_PIN_GET_POLARITY_OUTPUT;

typedef int PWM_PIN_SET_POLARITY_INPUT;

typedef int PWM_PIN_IS_STARTED_OUTPUT;


//--------------------------------------------------------------------------------
// Section: Functions (0)
//--------------------------------------------------------------------------------