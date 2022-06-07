/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller- Port Driver 
 *
 * Author: Mahmoud el Dafrawy
 ******************************************************************************/
#ifndef PORT_CFG_H
#define PORT_CFG_H

#include "Port_hw.h"

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_ON)

/* Pre-compile option for presence of Dio_FlipChannel API*/
#define PORT_SET_PIN_DIRECTION_API           (STD_ON)


/* Number of the configured PORT Channels */
#define PORT_CONFIGURED_CHANNLES              (43U)


/* Channel Index */
#define PortConf_LED1_CHANNEL_ID_INDEX        		(39U)
#define PortConf_BUTTON1_CHANNEL_ID_INDEX     		(42U)

/* Port Configured Port ID's  */
#define PortConf_LED1_PORT_NUM                		PORTF_NUM /* PORTF */
#define PortConf_BUTTON1_PORT_NUM             		PORTF_NUM /* PORTF */

/* Port Configured Port ID's  */
#define PortConf_LED1_PIN_NUM                 		PORT_F_PIN_1
#define PortConf_BUTTON1_PIN_NUM              		PORT_F_PIN_4

/* Port Configured Port Direction  */
#define PortConf_LED1_PIN_DIRECTION          		PORT_PIN_OUT
#define PortConf_BUTTON1_PIN_DIRECTION        		PORT_PIN_IN

/* Port Configured Port Initial Value  */
#define PortConf_LED1_PIN_initial             		PIN_MODE_LOW

/*Port configured Resistors*/
#define PortConf_BUTTON1_PIN_RESISTOR         		Enable_Pull_up

/* Port Configured Direction Changeable   */
#define PortConf_LED1_PIN_DIRECTION_CHANGEABLE          direction_Unchangeable/* Unchangeable */
#define PortConf_BUTTON1_DIRECTION_CHANGEABLE           direction_Unchangeable/* Unchangeable */

/* Port Configured Mode Changeable   */
#define PortConf_LED1_PIN_MODE_CHANGEABLE              mode_Unchangeable/* Unchangeable */
#define PortConf_BUTTON1_MODE_CHANGEABLE               mode_Unchangeable/* Unchangeable */


/* Port Default value to Configure each pin */
#define PortConf_DEFAULT_PIN_DIRECTION  	        PORT_PIN_OUT
#define PortConf_DEFAULT_PIN_INITIAL_VALUE	 	PIN_MODE_LOW
#define PortConf_DEFAULT_DIRECTION_CHANGEABLE  		direction_Unchangeable
#define PortConf_DEFAULT_PIN_MODE_CHANGEABLE	        mode_Unchangeable
#define PortConf_DEFAULT_MODE                           DIO
#define PortConf_DEFAULT_RESISTOR                       Disable   


#endif
