#include "stm32f1xx.h"

#if !defined(HSE_VALUE)
#define HSE_VALUE 8000000U
#endif

#if !defined(HSI_VALUE)
#define HSI_VALUE 8000000U
#endif

uint32_t SystemCoreClock = 8000000;
const uint8_t AHBPrescTable[16U] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9};
const uint8_t APBPrescTable[8U] = {0, 0, 0, 0, 1, 2, 3, 4};

void SystemInit(void)
{
#if defined(USER_VECT_TAB_ADDRESS)
  SCB->VTOR = FLASH_BASE | 0x00000000U;
#endif
}

void SystemCoreClockUpdate(void)
{
  uint32_t tmp, pllmull, pllsource;

  tmp = RCC->CFGR & RCC_CFGR_SWS;

  switch (tmp)
  {
    case 0x00U:
      SystemCoreClock = HSI_VALUE;
      break;
    case 0x04U:
      SystemCoreClock = HSE_VALUE;
      break;
    case 0x08U:
      pllmull = RCC->CFGR & RCC_CFGR_PLLMULL;
      pllsource = RCC->CFGR & RCC_CFGR_PLLSRC;
      pllmull = (pllmull >> 18U) + 2U;

      if (pllsource == 0x00U)
        SystemCoreClock = (HSI_VALUE >> 1U) * pllmull;
      else if ((RCC->CFGR & RCC_CFGR_PLLXTPRE) != 0U)
        SystemCoreClock = (HSE_VALUE >> 1U) * pllmull;
      else
        SystemCoreClock = HSE_VALUE * pllmull;
      break;
    default:
      SystemCoreClock = HSI_VALUE;
      break;
  }

  tmp = AHBPrescTable[((RCC->CFGR & RCC_CFGR_HPRE) >> 4U)];
  SystemCoreClock >>= tmp;
}
