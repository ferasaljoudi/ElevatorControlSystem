#include "main.h"
#include "stm32f1xx_it.h"
#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>
#include <string.h>

extern UART_HandleTypeDef huart2;
volatile uint8_t isEmergency = 1;

void NMI_Handler(void)
{
  while (1) {}
}

void HardFault_Handler(void)
{
  while (1) {}
}

void MemManage_Handler(void)
{
  while (1) {}
}

void BusFault_Handler(void)
{
  while (1) {}
}

void UsageFault_Handler(void)
{
  while (1) {}
}

void DebugMon_Handler(void) {}

void SysTick_Handler(void)
{
  HAL_IncTick();
#if (INCLUDE_xTaskGetSchedulerState == 1)
  if (xTaskGetSchedulerState() != taskSCHEDULER_NOT_STARTED)
  {
#endif
    xPortSysTickHandler();
#if (INCLUDE_xTaskGetSchedulerState == 1)
  }
#endif
}

void EXTI0_IRQHandler(void)
{
  if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0) == GPIO_PIN_RESET)
  {
    isEmergency = !isEmergency;

    extern char elevatorState[20];
    if (!isEmergency)
    {
      strcpy(elevatorState, "Emergency Mode");
    }
    else
    {
      strcpy(elevatorState, "Idle");
    }

    extern void UpdateStatusWindow(void);
    UpdateStatusWindow();
  }
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);
}

void USART2_IRQHandler(void)
{
  HAL_UART_IRQHandler(&huart2);
}
