/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Pcfg.c
 *
 * Description:  Post Build Configuration Source file for TM4C123GH6PM Microcontroller - PORT Driver
 *
 * Author: Mahmoud el Dafrawy
 ******************************************************************************/
#include "PORT.h"
//#include "Port_hw.h"
/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)
/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

const Port_ConfigType Port_Configuration = {
/*Port A Default Configuration*/
PORTA_NUM,
PORT_A_PIN_0,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTA_NUM,
PORT_A_PIN_1,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTA_NUM,
PORT_A_PIN_2,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTA_NUM,
PORT_A_PIN_3,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTA_NUM,
PORT_A_PIN_4,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTA_NUM,
PORT_A_PIN_5,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTA_NUM,
PORT_A_PIN_6,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTA_NUM,
PORT_A_PIN_7,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

/*Port B Default Configuration*/
PORTB_NUM,
PORT_B_PIN_0,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTB_NUM,
PORT_B_PIN_1,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTB_NUM,
PORT_B_PIN_2,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTB_NUM,
PORT_B_PIN_3,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTB_NUM,
PORT_B_PIN_4,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTB_NUM,
PORT_B_PIN_5,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTB_NUM,
PORT_B_PIN_6,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTB_NUM,
PORT_B_PIN_7,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

/*Port C Default Configuration*/
PORTC_NUM,
PORT_C_PIN_0,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTC_NUM,
PORT_C_PIN_1,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTC_NUM,
PORT_C_PIN_2,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTC_NUM,
PORT_C_PIN_3,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTC_NUM,
PORT_C_PIN_4,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTC_NUM,
PORT_C_PIN_5,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTC_NUM,
PORT_C_PIN_6,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTC_NUM,
PORT_C_PIN_7,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

/*Port D Default Configuration*/
PORTD_NUM,
PORT_D_PIN_0,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTD_NUM,
PORT_D_PIN_1,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTD_NUM,
PORT_D_PIN_2,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTD_NUM,
PORT_D_PIN_3,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTD_NUM,
PORT_D_PIN_4,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTD_NUM,
PORT_D_PIN_5,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTD_NUM,
PORT_D_PIN_6,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTD_NUM,
PORT_D_PIN_7,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

/*Port E Default Configuration*/
PORTE_NUM,
PORT_E_PIN_0,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTE_NUM,
PORT_E_PIN_1,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTE_NUM,
PORT_E_PIN_2,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTE_NUM,
PORT_E_PIN_3,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTE_NUM,
PORT_E_PIN_4,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTE_NUM,
PORT_E_PIN_5,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

/*Port F Default Configuration*/
PORTF_NUM,
PORT_F_PIN_0,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PortConf_LED1_PORT_NUM,
PortConf_LED1_PIN_NUM,
PortConf_LED1_PIN_DIRECTION,
PortConf_LED1_PIN_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_LED1_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTF_NUM,
PORT_F_PIN_2,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PORTF_NUM,
PORT_F_PIN_3,
PortConf_DEFAULT_PIN_DIRECTION,
PortConf_DEFAULT_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_DEFAULT_PIN_MODE_CHANGEABLE,
PortConf_DEFAULT_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

PortConf_BUTTON1_PORT_NUM,
PortConf_BUTTON1_PIN_NUM,
PortConf_BUTTON1_PIN_DIRECTION,
PortConf_BUTTON1_DIRECTION_CHANGEABLE,
PortConf_DEFAULT_MODE,
PortConf_BUTTON1_MODE_CHANGEABLE,
PortConf_BUTTON1_PIN_RESISTOR,
PortConf_DEFAULT_PIN_INITIAL_VALUE,

};