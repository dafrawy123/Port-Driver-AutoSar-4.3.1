/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Mahmoud el Dafrawy
 ******************************************************************************/
#ifndef PORT_H
#define PORT_H

/* Id for the company in the AUTOSAR
 * for example Mahmoud Dafrawy's ID = 22 :) */
#define PORT_VENDOR_ID    (22U)
/* Port Module Id */
#define PORT_MODULE_ID    (124U)
/* Port Instance Id */
#define PORT_INSTANCE_ID  (0U)
/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)
/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)
/*
 * Macros for Port Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and Dio Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* Dio Pre-Compile Configuration Header file */
#include "PORT_cfg.h"

/* AUTOSAR Version checking between Dio_Cfg.h and Dio.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Dio_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Dio_Cfg.h and Dio.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Dio_Cfg.h does not match the expected version"
#endif
/* Non AUTOSAR files */
#include "Common_Macros.h"
/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
/* Service ID for PORT init */
#define PORT_INIT_SID                     (uint8)0x00
/* Service ID for PORT set pin direction */
#define PORT_SET_PIN_DIRECTION_SID        (uint8)0x01
/* Service ID for PORT Refresh port direction */
#define PORT_REFRESH_PORT_DIRECTION_SID    (uint8)0x02
/* Service ID for PORT get version info */
#define PORT_GET_VERSION_INFO_SID          (uint8)0x03
/* Service ID for PORT set pin mode */
#define PORT_SET_PIN_MODE_SID              (uint8)0x04
/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
/* DET code to report Invalid port pin id */
#define PORT_E_PARAM_PIN                  (uint8)0x0A
/* DET code to report pin direction not configured as changeable */
#define PORT_E_DIRECTION_UNCHANGEABLE     (uint8)0x0B
/* DET code to report Invalid param in init sevice */
#define PORT_E_PARAM_CONFIG                (uint8)0x0C
/* DET code to report Invalid mode */
#define PORT_E_PARAM_INVALID_MODE          (uint8)0x0D
/* DET code to report pin direction not configured as changeable */
#define PORT_E_MODE_UNCHANGEABLE           (uint8)0x0E
/* DET code to report module called without initialization */
#define PORT_E_UNINIT                      (uint8)0x0F
/* DET code to report that API is called with a Null Pointer */
#define PORT_E_PARAM_POINTER                (uint8)0x10

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
/* Type definition for Port_PinType used by the PORT APIs */
typedef uint8 Port_PinType;
/* Type definition for Port_PinType used by the PORT APIs */
typedef uint8 Port_PortType;
/* Type definition for Port_PinModeType used by the PORT APIs */
typedef enum {
DIO,                  
PIN_MODE_ONE,                   
PIN_MODE_TWO,                   
PIN_MODE_THREE,                 
PIN_MODE_FOUR,                  
PIN_MODE_FIVE,                  
PIN_MODE_SIX,                   
PIN_MODE_SEVEN,                 
PIN_MODE_EIGHT,                 
PIN_MODE_NINE,
ADC,
PIN_MODE_FOURTEEN=14
}Port_PinModeType;
/* Enum to hold Port_PinModeChangeable parameter*/
typedef enum {
        mode_Unchangeable,
	mode_Changeable
} Port_PinModeChangeable;
/* Enum to hold Port_PinDirectionChangeable parameter*/
typedef enum {
	direction_Unchangeable,
	direction_Changeable
} Port_PinDirectionChangeable;
/* Enum to hold pull up */
typedef enum {
	Disable,
	Enable_Pull_up,
        Enable_Pull_down
} Port_Resistor;
/* Enum to hold Port_PinInitialValue parameter, mandatory in case of DIO*/
typedef enum {
	PIN_MODE_LOW ,
        PIN_MODE_High 
} Port_PinInitialValue;
/*Enum to hold PIN direction */
typedef enum
{
    PORT_PIN_IN,
    PORT_PIN_OUT 
}Port_PinDirectionType;
/*Struct definition for initialization data of port driver */
typedef struct {
	Port_PortType port;
	Port_PinType pin_num;
	Port_PinDirectionType direction;
        Port_PinDirectionChangeable direction_changeble;
        Port_PinModeType mode;
        Port_PinModeChangeable mode_changeable;
	Port_Resistor resistor;
        Port_PinInitialValue value;
} Port_ConfigChannel;
/*Struct of the external data structure containing the initialization data for this driver. */
typedef struct {
	Port_ConfigChannel Port_Channels[PORT_CONFIGURED_CHANNLES];
} Port_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
/* Function for PORT_init API */
void Port_Init(const Port_ConfigType* ConfigPtr);
/* Function for PORT_SetPinDirection API */
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
void Port_SetPinDirection(
          Port_PinType Pin, 
          Port_PinDirectionType Direction
);
#endif
/* Function for PORT_RefreshPortDirection API */
void Port_RefreshPortDirection( 
 void 
); 
/* Function for PORT_GetVersionInfo API */
#if (PORT_VERSION_INFO_API == STD_ON)
void Port_GetVersionInfo( 
 Std_VersionInfoType* versioninfo 
);
#endif
/* Function for PORT_SetPinMode API */
void Port_SetPinMode( 
 Port_PinType Pin, 
 Port_PinModeType Mode 
); 
/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Dio and other modules */
extern const Port_ConfigType Port_Configuration;


#endif
