/*=====================================================================================================*/
/*=====================================================================================================*/
#include <string.h>
#include "stm32f1_system.h"
#include "stm32f1_usart.h"
#include "module_rs232.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
#define LED_B   PCO(13)
#define LED_G   PCO(14)
#define LED_R   PCO(15)
/*=====================================================================================================*/
/*=====================================================================================================*/
void USART1_IRQHandler( void )
{
  u8 RecvBuf[64] = {0};

  if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET) {
    RS232_RecvStr(USART1, (u8*)RecvBuf);
    RS232_SendStr(USART1, (uc8*)RecvBuf);
  }
}
/*=====================================================================================================*/
/*=====================================================================================================*/
void SysTick_Handler( void )
{
}
/*=====================================================================================================*/
/*=====================================================================================================*/
void HardFault_Handler( void )
{
  while(1);
}
void MemManage_Handler( void )
{
  while(1);
}
void BusFault_Handler( void )
{
  while(1);
}
void UsageFault_Handler( void )
{
  while(1);
}
void SVC_Handler( void )
{
  while(1);
}
void DebugMon_Handler( void )
{
  while(1);
}
void PendSV_Handler( void )
{
  while(1);
}
void NMI_Handler( void )
{
  while(1);
}
/*=====================================================================================================*/
/*=====================================================================================================*/

