/******************************************************************************
 *
 * Module: ModuleTest
 *
 * File Name: Port_ModuleTest.c
 *
 * Description: Source file for the Port Test Cases.
 *
 * Author: Mahmoud Dafrawy
 ******************************************************************************/
#include <assert.h>
#include "PORT.h"
#include "Det.h"
#include "tm4c123gh6pm_registers.h"

#define PORT_INVALIDE_CHANNEL_NUM (51U)

Std_VersionInfoType Version_Info;

boolean Det_TestLastReportError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId) 
{
    boolean result = (Det_ModuleId == ModuleId) && (Det_InstanceId == InstanceId) && 
                     (Det_ApiId == ApiId) && (Det_ErrorId == ErrorId);
    Det_ModuleId = 0;
    Det_InstanceId = 0;
    Det_ApiId = 0;
    Det_ErrorId = 0;
    
    return result;
}

/************************************************************************************
* Test ID :TestCase1
* Description: Test for Write,API's that report a DIO_E_UNINIT DET 
*              error in case the Port_Init is not called yet.
* Pre-requisits: Port Module is not initialized before Run this test case.
* Test Procedure : 1. Call Port_SetPinDirection DET error PORT_E_UNINIT should be reported.
*                  2. Call Port_RefreshPortDirection DET error PORT_E_UNINIT should be reported.
*                  3. Call Port_SetPinMode DET error PORT_E_UNINIT should be reported.
*                  4. Call Port_SetPinMode DET error PORT_E_UNINIT should be reported.
*************************************************************************************/
void TestCase1(void)
{ 
    #if (PORT_SET_PIN_DIRECTION_API == STD_ON)
    Port_SetPinDirection(PortConf_LED1_CHANNEL_ID_INDEX,PORT_PIN_OUT);
    assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_UNINIT));
    #endif
    
    Port_RefreshPortDirection();
    assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_REFRESH_PORT_DIRECTION_SID,PORT_E_UNINIT));
    
   #if (DIO_VERSION_INFO_API == STD_ON) 
    Port_GetVersionInfo(&Version_Info);
    assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_GET_VERSION_INFO_SID,PORT_E_UNINIT));
   #endif
 
    Port_SetPinMode(PortConf_LED1_CHANNEL_ID_INDEX,DIO);
    assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_MODE_SID,PORT_E_UNINIT));
}
/************************************************************************************
* Test ID :TestCase2
* Description: Test for Port_Init and Port_GetVersionInfo API's report the correct DET 
*              error in case the API called with NULL pointer.
* Pre-requisits: No Need
* Test Procedure : 1. Call Port_Init DET error PORT_E_PARAM_CONFIG should be reported.
*                  2. Call Port_GetVersionInfo DET error PORT_E_PARAM_POINTER should be reported.
*************************************************************************************/
void TestCase2(void)
{
    Port_Init(NULL_PTR);
    assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_INIT_SID,PORT_E_PARAM_CONFIG));
    
#if (DIO_VERSION_INFO_API == STD_ON)
    Port_GetVersionInfo(NULL_PTR);
    assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_GET_VERSION_INFO_SID,PORT_E_PARAM_POINTER));
#endif  
    
}
/************************************************************************************
* Test ID :TestCase3
* Description: Test for setPinDirection and setPinMode APIs report a 
*              PORT_E_PARAM_PIN DET error in case invalid Channel ID.
* Pre-requisits: Port Module is initialized before Run this test case.
* Test Procedure : 1. Call Port_setPinDirection DET error PORT_E_PARAM_PIN 
*                     should be reported.
*                  2. Call Port_setPinMode DET error PORT_E_PARAM_PIN 
*                     should be reported.
*************************************************************************************/
void TestCase3(void)
{
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
Port_SetPinDirection(PORT_INVALIDE_CHANNEL_NUM, PORT_PIN_OUT);
assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_PARAM_PIN));
#endif

Port_SetPinMode(PORT_INVALIDE_CHANNEL_NUM, DIO);
assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_MODE_SID,PORT_E_PARAM_PIN));

}
/************************************************************************************
* Test ID :TestCase4
* Description: Test for setPinDirection report a 
*              PORT_E_DIRECTION_UNCHANGEABLE DET error in case of unchangeable direction config.
* Pre-requisits: Port Module is initialized before Run this test case.
* Test Procedure : 1. Call Port_setPinDirection DET error PORT_E_DIRECTION_UNCHANGEABLE 
*                     should be reported.
*************************************************************************************/
void TestCase4(void)
{
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
Port_SetPinDirection(PortConf_LED1_CHANNEL_ID_INDEX, PORT_PIN_OUT);
assert(Det_TestLastReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_DIRECTION_UNCHANGEABLE));
#endif


}
int main(void)
{
   
    /* Run the First Test Case */
    TestCase1();
    TestCase2();
    Port_Init(&Port_Configuration);
    TestCase3();
    TestCase4();
    while(1)
    {
    }
}