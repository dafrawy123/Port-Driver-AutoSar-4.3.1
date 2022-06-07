/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_hw.h
 *
 * Description: Pin and register definitions Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Mahmoud el Dafrawy
 ******************************************************************************/
#ifndef PORT_HW_H
#define PORT_HW_H

#include "Std_Types.h"

/*********************************************************************************
 * 		             Useful Macros					*									 *
 * *******************************************************************************/
#define ADD(ptr,offset) (*(volatile uint32 *)((volatile uint8 *)ptr + offset))

   
/*********************************************************************************
 * 		         Register Definitions					*									 *
 * *******************************************************************************/
/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C
   
/*PLL Register*/   
#define SYSCTL_REGCGC2_REG        (*((volatile uint32 *)0x400FE108))
/*********************************************************************************
 * 		         PIN Definitions 					*									 *
 * *******************************************************************************/
#define PORT_NUM 		             (6U)
#define PINS_NUM			     (43U)

#define PORTA_NUM			     (0U)
#define PORTB_NUM			     (1U)
#define PORTC_NUM			     (2U)
#define PORTD_NUM	                     (3U)
#define PORTE_NUM			     (4U)
#define PORTF_NUM			     (5U)

//Port Pins Range
#define PORTA_PIN_START         	     (0U)
#define PORTA_PIN_END           	     (7U)

#define PORTB_PIN_START         	     (8U)
#define PORTB_PIN_END           	     (15U)

#define PORTC_PIN_START         	     (16U)
#define PORTC_PIN_END           	     (23U)

#define PORTD_PIN_START         	     (24U)
#define PORTD_PIN_END           	     (31U)

#define PORTE_PIN_START         	     (32U)
#define PORTE_PIN_END           	     (37U)

#define PORTF_PIN_START         	     (38U)
#define PORTF_PIN_END           	     (42U)

#define PORT_A_PIN_0 			    (0U)
#define PORT_A_PIN_1 			    (1U)
#define PORT_A_PIN_2 			    (2U)
#define PORT_A_PIN_3 			    (3U)
#define PORT_A_PIN_4 			    (4U)
#define PORT_A_PIN_5 			    (5U)
#define PORT_A_PIN_6 			    (6U)
#define PORT_A_PIN_7 			    (7U)

#define PORT_B_PIN_0 			    (0U)
#define PORT_B_PIN_1 			    (1U)
#define PORT_B_PIN_2 			    (2U)
#define PORT_B_PIN_3 		            (3U)
#define PORT_B_PIN_4 			    (4U)
#define PORT_B_PIN_5 			    (5U)
#define PORT_B_PIN_6 			    (6U)
#define PORT_B_PIN_7 			    (7)

#define PORT_C_PIN_0 			    (0U)
#define PORT_C_PIN_1 			    (1U)
#define PORT_C_PIN_2 			    (2U)
#define PORT_C_PIN_3 			    (3U)
#define PORT_C_PIN_4 			    (4U)
#define PORT_C_PIN_5 			    (5U)
#define PORT_C_PIN_6 			    (6U)
#define PORT_C_PIN_7 			    (7U)

#define PORT_D_PIN_0 			    (0U)
#define PORT_D_PIN_1 			    (1U)
#define PORT_D_PIN_2 			    (2U)
#define PORT_D_PIN_3 			    (3U)
#define PORT_D_PIN_4 			    (4U)
#define PORT_D_PIN_5 			    (5U)
#define PORT_D_PIN_6 			    (6U)
#define PORT_D_PIN_7 			    (7U)

#define PORT_E_PIN_0 			    (0U)
#define PORT_E_PIN_1 			    (1U)
#define PORT_E_PIN_2 			    (2U)
#define PORT_E_PIN_3 			    (3U)
#define PORT_E_PIN_4 			    (4U)
#define PORT_E_PIN_5 			    (5U)

#define PORT_F_PIN_0 			    (0U)
#define PORT_F_PIN_1 			    (1U)
#define PORT_F_PIN_2 			    (2U)
#define PORT_F_PIN_3 			    (3U)
#define PORT_F_PIN_4 			    (4U)

#endif