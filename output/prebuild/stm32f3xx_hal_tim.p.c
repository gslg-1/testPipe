# 1 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
# 187 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h" 1
# 30 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h"
# 1 "Inc/stm32f3xx_hal_conf.h" 1
# 198 "Inc/stm32f3xx_hal_conf.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc.h" 1
# 29 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_def.h" 1
# 30 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_def.h"
# 1 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f3xx.h" 1
# 128 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f3xx.h"
# 1 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f302x8.h" 1
# 66 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f302x8.h"
typedef enum
{

  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  WWDG_IRQn = 0,
  PVD_IRQn = 1,
  TAMP_STAMP_IRQn = 2,
  RTC_WKUP_IRQn = 3,
  FLASH_IRQn = 4,
  RCC_IRQn = 5,
  EXTI0_IRQn = 6,
  EXTI1_IRQn = 7,
  EXTI2_TSC_IRQn = 8,
  EXTI3_IRQn = 9,
  EXTI4_IRQn = 10,
  DMA1_Channel1_IRQn = 11,
  DMA1_Channel2_IRQn = 12,
  DMA1_Channel3_IRQn = 13,
  DMA1_Channel4_IRQn = 14,
  DMA1_Channel5_IRQn = 15,
  DMA1_Channel6_IRQn = 16,
  DMA1_Channel7_IRQn = 17,
  ADC1_IRQn = 18,
  USB_HP_CAN_TX_IRQn = 19,
  USB_LP_CAN_RX0_IRQn = 20,
  CAN_RX1_IRQn = 21,
  CAN_SCE_IRQn = 22,
  EXTI9_5_IRQn = 23,
  TIM1_BRK_TIM15_IRQn = 24,
  TIM1_UP_TIM16_IRQn = 25,
  TIM1_TRG_COM_TIM17_IRQn = 26,
  TIM1_CC_IRQn = 27,
  TIM2_IRQn = 28,
  I2C1_EV_IRQn = 31,
  I2C1_ER_IRQn = 32,
  I2C2_EV_IRQn = 33,
  I2C2_ER_IRQn = 34,
  SPI2_IRQn = 36,
  USART1_IRQn = 37,
  USART2_IRQn = 38,
  USART3_IRQn = 39,
  EXTI15_10_IRQn = 40,
  RTC_Alarm_IRQn = 41,
  USBWakeUp_IRQn = 42,
  SPI3_IRQn = 51,
  TIM6_DAC_IRQn = 54,
  COMP2_IRQn = 64,
  COMP4_6_IRQn = 65,
  I2C3_EV_IRQn = 72,
  I2C3_ER_IRQn = 73,
  USB_HP_IRQn = 74,
  USB_LP_IRQn = 75,
  USBWakeUp_RMP_IRQn = 76,
  FPU_IRQn = 81,
} IRQn_Type;





# 1 "Drivers/CMSIS/Include/core_cm4.h" 1
# 34 "Drivers/CMSIS/Include/core_cm4.h"
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 1 3 4
# 9 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 1 3 4
# 12 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 1 3 4







# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\features.h" 1 3 4
# 28 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\features.h" 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\_newlib_version.h" 1 3 4
# 29 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\features.h" 2 3 4
# 9 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 2 3 4
# 27 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4

# 27 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 41 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 63 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 89 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 120 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 146 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 168 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 186 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 200 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 2 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 1 3 4
# 49 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 3 4
       
       
       
       
       
       
       
# 201 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 3 4
       
       
       
       
       
       
       
# 14 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 2 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_stdint.h" 1 3 4
# 20 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 130 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long int intmax_t;
# 139 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long unsigned int uintmax_t;
# 10 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 2 3 4
# 35 "Drivers/CMSIS/Include/core_cm4.h" 2
# 63 "Drivers/CMSIS/Include/core_cm4.h"
# 1 "Drivers/CMSIS/Include/cmsis_version.h" 1
# 64 "Drivers/CMSIS/Include/core_cm4.h" 2
# 162 "Drivers/CMSIS/Include/core_cm4.h"
# 1 "Drivers/CMSIS/Include/cmsis_compiler.h" 1
# 48 "Drivers/CMSIS/Include/cmsis_compiler.h"
# 1 "Drivers/CMSIS/Include/cmsis_gcc.h" 1
# 29 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  
# 74 "Drivers/CMSIS/Include/cmsis_gcc.h"
 struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 129 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 181 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 205 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 277 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 301 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 331 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 382 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 412 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 766 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 782 "Drivers/CMSIS/Include/cmsis_gcc.h"
  return(0U);

}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 805 "Drivers/CMSIS/Include/cmsis_gcc.h"
  (void)fpscr;

}
# 866 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 900 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 919 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 934 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 954 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 981 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;






  uint32_t s = (4U * 8U) - 1U;

  result = value;
  for (value >>= 1U; value != 0U; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;

  return result;
}
# 1299 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SSAT(int32_t val, uint32_t sat)
{
  if ((sat >= 1U) && (sat <= 32U))
  {
    const int32_t max = (int32_t)((1U << (sat - 1U)) - 1U);
    const int32_t min = -1 - max ;
    if (val > max)
    {
      return max;
    }
    else if (val < min)
    {
      return min;
    }
  }
  return val;
}
# 1324 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __USAT(int32_t val, uint32_t sat)
{
  if (sat <= 31U)
  {
    const uint32_t max = ((1U << sat) - 1U);
    if (val > (int32_t)max)
    {
      return max;
    }
    else if (val < 0)
    {
      return 0U;
    }
  }
  return (uint32_t)val;
}
# 2083 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic pop
# 49 "Drivers/CMSIS/Include/cmsis_compiler.h" 2
# 163 "Drivers/CMSIS/Include/core_cm4.h" 2
# 259 "Drivers/CMSIS/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 298 "Drivers/CMSIS/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 316 "Drivers/CMSIS/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:1;
    uint32_t ICI_IT_1:6;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t ICI_IT_2:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 371 "Drivers/CMSIS/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 406 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RSERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 440 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 719 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 759 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 811 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[29U];
  volatile uint32_t IWR;
  volatile const uint32_t IRR;
  volatile uint32_t IMCR;
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 914 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1061 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1319 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
} FPU_Type;
# 1425 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1657 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 1688 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1705 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1724 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 1743 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1762 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1777 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1794 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1816 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
}
# 1838 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] >> (8U - 4U)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 4U)));
  }
}
# 1863 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1890 "Drivers/CMSIS/Include/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 1913 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  vectors[(int32_t)IRQn + 16] = vector;
}
# 1928 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return vectors[(int32_t)IRQn + 16];
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 1981 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2022 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 4U) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2052 "Drivers/CMSIS/Include/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 2064 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2085 "Drivers/CMSIS/Include/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2105 "Drivers/CMSIS/Include/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 136 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f302x8.h" 2
# 1 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/system_stm32f3xx.h" 1
# 58 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/system_stm32f3xx.h"
extern uint32_t SystemCoreClock;
extern const uint8_t AHBPrescTable[16];
extern const uint8_t APBPrescTable[8];
# 87 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/system_stm32f3xx.h"
extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
# 137 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f302x8.h" 2
# 147 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f302x8.h"
typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IER;
  volatile uint32_t CR;
  volatile uint32_t CFGR;
  uint32_t RESERVED0;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  uint32_t RESERVED1;
  volatile uint32_t TR1;
  volatile uint32_t TR2;
  volatile uint32_t TR3;
  uint32_t RESERVED2;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t SQR4;
  volatile uint32_t DR;
  uint32_t RESERVED3;
  uint32_t RESERVED4;
  volatile uint32_t JSQR;
  uint32_t RESERVED5[4];
  volatile uint32_t OFR1;
  volatile uint32_t OFR2;
  volatile uint32_t OFR3;
  volatile uint32_t OFR4;
  uint32_t RESERVED6[4];
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  uint32_t RESERVED7[4];
  volatile uint32_t AWD2CR;
  volatile uint32_t AWD3CR;
  uint32_t RESERVED8;
  uint32_t RESERVED9;
  volatile uint32_t DIFSEL;
  volatile uint32_t CALFACT;

} ADC_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
  uint32_t RESERVED;
  volatile uint32_t CCR;
  volatile uint32_t CDR;

} ADC_Common_TypeDef;




typedef struct
{
  volatile uint32_t TIR;
  volatile uint32_t TDTR;
  volatile uint32_t TDLR;
  volatile uint32_t TDHR;
} CAN_TxMailBox_TypeDef;




typedef struct
{
  volatile uint32_t RIR;
  volatile uint32_t RDTR;
  volatile uint32_t RDLR;
  volatile uint32_t RDHR;
} CAN_FIFOMailBox_TypeDef;




typedef struct
{
  volatile uint32_t FR1;
  volatile uint32_t FR2;
} CAN_FilterRegister_TypeDef;




typedef struct
{
  volatile uint32_t MCR;
  volatile uint32_t MSR;
  volatile uint32_t TSR;
  volatile uint32_t RF0R;
  volatile uint32_t RF1R;
  volatile uint32_t IER;
  volatile uint32_t ESR;
  volatile uint32_t BTR;
  uint32_t RESERVED0[88];
  CAN_TxMailBox_TypeDef sTxMailBox[3];
  CAN_FIFOMailBox_TypeDef sFIFOMailBox[2];
  uint32_t RESERVED1[12];
  volatile uint32_t FMR;
  volatile uint32_t FM1R;
  uint32_t RESERVED2;
  volatile uint32_t FS1R;
  uint32_t RESERVED3;
  volatile uint32_t FFA1R;
  uint32_t RESERVED4;
  volatile uint32_t FA1R;
  uint32_t RESERVED5[8];
  CAN_FilterRegister_TypeDef sFilterRegister[28];
} CAN_TypeDef;




typedef struct
{
  volatile uint32_t CSR;
} COMP_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
} COMP_Common_TypeDef;





typedef struct
{
  volatile uint32_t DR;
  volatile uint8_t IDR;
  uint8_t RESERVED0;
  uint16_t RESERVED1;
  volatile uint32_t CR;
  uint32_t RESERVED2;
  volatile uint32_t INIT;
  volatile uint32_t POL;
} CRC_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SWTRIGR;
  volatile uint32_t DHR12R1;
  volatile uint32_t DHR12L1;
  volatile uint32_t DHR8R1;
  volatile uint32_t RESERVED0;
  volatile uint32_t RESERVED1;
  volatile uint32_t RESERVED2;
  volatile uint32_t DHR12RD;
  volatile uint32_t DHR12LD;
  volatile uint32_t DHR8RD;
  volatile uint32_t DOR1;
  volatile uint32_t RESERVED3;
  volatile uint32_t SR;
} DAC_TypeDef;





typedef struct
{
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
  volatile uint32_t APB1FZ;
  volatile uint32_t APB2FZ;
}DBGMCU_TypeDef;





typedef struct
{
  volatile uint32_t CCR;
  volatile uint32_t CNDTR;
  volatile uint32_t CPAR;
  volatile uint32_t CMAR;
} DMA_Channel_TypeDef;

typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IFCR;
} DMA_TypeDef;





typedef struct
{
  volatile uint32_t IMR;
  volatile uint32_t EMR;
  volatile uint32_t RTSR;
  volatile uint32_t FTSR;
  volatile uint32_t SWIER;
  volatile uint32_t PR;
  uint32_t RESERVED1;
  uint32_t RESERVED2;
  volatile uint32_t IMR2;
  volatile uint32_t EMR2;
  volatile uint32_t RTSR2;
  volatile uint32_t FTSR2;
  volatile uint32_t SWIER2;
  volatile uint32_t PR2;
}EXTI_TypeDef;





typedef struct
{
  volatile uint32_t ACR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t AR;
  uint32_t RESERVED;
  volatile uint32_t OBR;
  volatile uint32_t WRPR;

} FLASH_TypeDef;




typedef struct
{
  volatile uint16_t RDP;
  volatile uint16_t USER;
  volatile uint16_t Data0;
  volatile uint16_t Data1;
  volatile uint16_t WRP0;
  volatile uint16_t WRP1;
} OB_TypeDef;





typedef struct
{
  volatile uint32_t MODER;
  volatile uint32_t OTYPER;
  volatile uint32_t OSPEEDR;
  volatile uint32_t PUPDR;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t LCKR;
  volatile uint32_t AFR[2];
  volatile uint32_t BRR;
}GPIO_TypeDef;





typedef struct
{
  volatile uint32_t CSR;
} OPAMP_TypeDef;





typedef struct
{
  volatile uint32_t CFGR1;
       uint32_t RESERVED;
  volatile uint32_t EXTICR[4];
  volatile uint32_t CFGR2;
} SYSCFG_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t OAR1;
  volatile uint32_t OAR2;
  volatile uint32_t TIMINGR;
  volatile uint32_t TIMEOUTR;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t PECR;
  volatile uint32_t RXDR;
  volatile uint32_t TXDR;
}I2C_TypeDef;





typedef struct
{
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
  volatile uint32_t WINR;
} IWDG_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CSR;
} PWR_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t APB2RSTR;
  volatile uint32_t APB1RSTR;
  volatile uint32_t AHBENR;
  volatile uint32_t APB2ENR;
  volatile uint32_t APB1ENR;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  volatile uint32_t AHBRSTR;
  volatile uint32_t CFGR2;
  volatile uint32_t CFGR3;
} RCC_TypeDef;





typedef struct
{
  volatile uint32_t TR;
  volatile uint32_t DR;
  volatile uint32_t CR;
  volatile uint32_t ISR;
  volatile uint32_t PRER;
  volatile uint32_t WUTR;
  uint32_t RESERVED0;
  volatile uint32_t ALRMAR;
  volatile uint32_t ALRMBR;
  volatile uint32_t WPR;
  volatile uint32_t SSR;
  volatile uint32_t SHIFTR;
  volatile uint32_t TSTR;
  volatile uint32_t TSDR;
  volatile uint32_t TSSSR;
  volatile uint32_t CALR;
  volatile uint32_t TAFCR;
  volatile uint32_t ALRMASSR;
  volatile uint32_t ALRMBSSR;
  uint32_t RESERVED7;
  volatile uint32_t BKP0R;
  volatile uint32_t BKP1R;
  volatile uint32_t BKP2R;
  volatile uint32_t BKP3R;
  volatile uint32_t BKP4R;
  volatile uint32_t BKP5R;
  volatile uint32_t BKP6R;
  volatile uint32_t BKP7R;
  volatile uint32_t BKP8R;
  volatile uint32_t BKP9R;
  volatile uint32_t BKP10R;
  volatile uint32_t BKP11R;
  volatile uint32_t BKP12R;
  volatile uint32_t BKP13R;
  volatile uint32_t BKP14R;
  volatile uint32_t BKP15R;
  volatile uint32_t BKP16R;
  volatile uint32_t BKP17R;
  volatile uint32_t BKP18R;
  volatile uint32_t BKP19R;
} RTC_TypeDef;






typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t CRCPR;
  volatile uint32_t RXCRCR;
  volatile uint32_t TXCRCR;
  volatile uint32_t I2SCFGR;
  volatile uint32_t I2SPR;
} SPI_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RCR;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t BDTR;
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
  volatile uint32_t OR;
  volatile uint32_t CCMR3;
  volatile uint32_t CCR5;
  volatile uint32_t CCR6;
} TIM_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t IER;
  volatile uint32_t ICR;
  volatile uint32_t ISR;
  volatile uint32_t IOHCR;
  uint32_t RESERVED1;
  volatile uint32_t IOASCR;
  uint32_t RESERVED2;
  volatile uint32_t IOSCR;
  uint32_t RESERVED3;
  volatile uint32_t IOCCR;
  uint32_t RESERVED4;
  volatile uint32_t IOGCSR;
  volatile uint32_t IOGXCR[8];
} TSC_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t BRR;
  volatile uint32_t GTPR;
  volatile uint32_t RTOR;
  volatile uint32_t RQR;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint16_t RDR;
  uint16_t RESERVED1;
  volatile uint16_t TDR;
  uint16_t RESERVED2;
} USART_TypeDef;





typedef struct
{
  volatile uint16_t EP0R;
  volatile uint16_t RESERVED0;
  volatile uint16_t EP1R;
  volatile uint16_t RESERVED1;
  volatile uint16_t EP2R;
  volatile uint16_t RESERVED2;
  volatile uint16_t EP3R;
  volatile uint16_t RESERVED3;
  volatile uint16_t EP4R;
  volatile uint16_t RESERVED4;
  volatile uint16_t EP5R;
  volatile uint16_t RESERVED5;
  volatile uint16_t EP6R;
  volatile uint16_t RESERVED6;
  volatile uint16_t EP7R;
  volatile uint16_t RESERVED7[17];
  volatile uint16_t CNTR;
  volatile uint16_t RESERVED8;
  volatile uint16_t ISTR;
  volatile uint16_t RESERVED9;
  volatile uint16_t FNR;
  volatile uint16_t RESERVEDA;
  volatile uint16_t DADDR;
  volatile uint16_t RESERVEDB;
  volatile uint16_t BTABLE;
  volatile uint16_t RESERVEDC;
  volatile uint16_t LPMCSR;
  volatile uint16_t RESERVEDD;
} USB_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;
# 129 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f3xx.h" 2
# 164 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f3xx.h"
typedef enum
{
  RESET = 0U,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0U,
  ENABLE = !DISABLE
} FunctionalState;


typedef enum
{
  SUCCESS = 0U,
  ERROR = !SUCCESS
} ErrorStatus;
# 213 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f3xx.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h" 1
# 214 "Drivers/CMSIS/Device/ST/STM32F3xx/Include/stm32f3xx.h" 2
# 31 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_def.h" 2



# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 1 3 4
# 149 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4

# 149 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 216 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 328 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef unsigned int wchar_t;
# 426 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 35 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_def.h" 2







# 41 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_def.h"
typedef enum
{
  HAL_OK = 0x00U,
  HAL_ERROR = 0x01U,
  HAL_BUSY = 0x02U,
  HAL_TIMEOUT = 0x03
} HAL_StatusTypeDef;




typedef enum
{
  HAL_UNLOCKED = 0x00U,
  HAL_LOCKED = 0x01
} HAL_LockTypeDef;
# 30 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc.h" 2
# 251 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc.h"
typedef struct
{
  uint32_t PLLState;


  uint32_t PLLSource;


  uint32_t PLLMUL;







} RCC_PLLInitTypeDef;




typedef struct
{
  uint32_t OscillatorType;


  uint32_t HSEState;



  uint32_t HSEPredivValue;



  uint32_t LSEState;


  uint32_t HSIState;


  uint32_t HSICalibrationValue;


  uint32_t LSIState;


  RCC_PLLInitTypeDef PLL;

} RCC_OscInitTypeDef;




typedef struct
{
  uint32_t ClockType;


  uint32_t SYSCLKSource;


  uint32_t AHBCLKDivider;


  uint32_t APB1CLKDivider;


  uint32_t APB2CLKDivider;

} RCC_ClkInitTypeDef;
# 1678 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc_ex.h" 1
# 396 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc_ex.h"
typedef struct
{
  uint32_t PeriphClockSelection;


  uint32_t RTCClockSelection;


  uint32_t Usart1ClockSelection;


  uint32_t I2c1ClockSelection;


  uint32_t I2c2ClockSelection;


  uint32_t I2c3ClockSelection;


  uint32_t Adc1ClockSelection;


  uint32_t I2sClockSelection;


  uint32_t Tim1ClockSelection;


  uint32_t Tim15ClockSelection;


  uint32_t Tim16ClockSelection;


  uint32_t Tim17ClockSelection;


  uint32_t USBClockSelection;


}RCC_PeriphCLKInitTypeDef;
# 3800 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
void HAL_RCCEx_GetPeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
uint32_t HAL_RCCEx_GetPeriphCLKFreq(uint32_t PeriphClk);
# 1679 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc.h" 2
# 1690 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc.h"
HAL_StatusTypeDef HAL_RCC_DeInit(void);
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);
# 1703 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_rcc.h"
void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);
void HAL_RCC_EnableCSS(void);

void HAL_RCC_NMI_IRQHandler(void);

void HAL_RCC_CSSCallback(void);
void HAL_RCC_DisableCSS(void);
uint32_t HAL_RCC_GetSysClockFreq(void);
uint32_t HAL_RCC_GetHCLKFreq(void);
uint32_t HAL_RCC_GetPCLK1Freq(void);
uint32_t HAL_RCC_GetPCLK2Freq(void);
void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency);
# 199 "Inc/stm32f3xx_hal_conf.h" 2



# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_gpio.h" 1
# 47 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_gpio.h"
typedef struct
{
  uint32_t Pin;


  uint32_t Mode;


  uint32_t Pull;


  uint32_t Speed;


  uint32_t Alternate;

}GPIO_InitTypeDef;




typedef enum
{
  GPIO_PIN_RESET = 0U,
  GPIO_PIN_SET
}GPIO_PinState;
# 242 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_gpio.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_gpio_ex.h" 1
# 243 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_gpio.h" 2
# 255 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_gpio.h"
void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init);
void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);
# 267 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_gpio.h"
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
void HAL_GPIO_TogglePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
# 203 "Inc/stm32f3xx_hal_conf.h" 2



# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_exti.h" 1
# 49 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_exti.h"
typedef enum
{
  HAL_EXTI_COMMON_CB_ID = 0x00U
} EXTI_CallbackIDTypeDef;




typedef struct
{
  uint32_t Line;
  void (* PendingCallback)(void);
} EXTI_HandleTypeDef;




typedef struct
{
  uint32_t Line;

  uint32_t Mode;

  uint32_t Trigger;

  uint32_t GPIOSel;


} EXTI_ConfigTypeDef;
# 363 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_exti.h"
HAL_StatusTypeDef HAL_EXTI_SetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);
HAL_StatusTypeDef HAL_EXTI_GetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);
HAL_StatusTypeDef HAL_EXTI_ClearConfigLine(EXTI_HandleTypeDef *hexti);
HAL_StatusTypeDef HAL_EXTI_RegisterCallback(EXTI_HandleTypeDef *hexti, EXTI_CallbackIDTypeDef CallbackID, void (*pPendingCbfn)(void));
HAL_StatusTypeDef HAL_EXTI_GetHandle(EXTI_HandleTypeDef *hexti, uint32_t ExtiLine);
# 377 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_exti.h"
void HAL_EXTI_IRQHandler(EXTI_HandleTypeDef *hexti);
uint32_t HAL_EXTI_GetPending(EXTI_HandleTypeDef *hexti, uint32_t Edge);
void HAL_EXTI_ClearPending(EXTI_HandleTypeDef *hexti, uint32_t Edge);
void HAL_EXTI_GenerateSWI(EXTI_HandleTypeDef *hexti);
# 207 "Inc/stm32f3xx_hal_conf.h" 2



# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_dma.h" 1
# 48 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_dma.h"
typedef struct
{
  uint32_t Direction;



  uint32_t PeriphInc;


  uint32_t MemInc;


  uint32_t PeriphDataAlignment;


  uint32_t MemDataAlignment;


  uint32_t Mode;




  uint32_t Priority;

} DMA_InitTypeDef;




typedef enum
{
  HAL_DMA_STATE_RESET = 0x00U,
  HAL_DMA_STATE_READY = 0x01U,
  HAL_DMA_STATE_BUSY = 0x02U,
  HAL_DMA_STATE_TIMEOUT = 0x03
}HAL_DMA_StateTypeDef;




typedef enum
{
  HAL_DMA_FULL_TRANSFER = 0x00U,
  HAL_DMA_HALF_TRANSFER = 0x01
}HAL_DMA_LevelCompleteTypeDef;




typedef enum
{
  HAL_DMA_XFER_CPLT_CB_ID = 0x00U,
  HAL_DMA_XFER_HALFCPLT_CB_ID = 0x01U,
  HAL_DMA_XFER_ERROR_CB_ID = 0x02U,
  HAL_DMA_XFER_ABORT_CB_ID = 0x03U,
  HAL_DMA_XFER_ALL_CB_ID = 0x04
}HAL_DMA_CallbackIDTypeDef;




typedef struct __DMA_HandleTypeDef
{
  DMA_Channel_TypeDef *Instance;

  DMA_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  HAL_DMA_StateTypeDef State;

  void *Parent;

  void (* XferCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferHalfCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferErrorCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferAbortCallback)( struct __DMA_HandleTypeDef * hdma);

  volatile uint32_t ErrorCode;

  DMA_TypeDef *DmaBaseAddress;

  uint32_t ChannelIndex;
} DMA_HandleTypeDef;
# 355 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_dma.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_dma_ex.h" 1
# 356 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_dma.h" 2
# 366 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_DeInit (DMA_HandleTypeDef *hdma);
# 376 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Start (DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *hdma, uint32_t CompleteLevel, uint32_t Timeout);
void HAL_DMA_IRQHandler(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_RegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID, void (* pCallback)( DMA_HandleTypeDef * _hdma));
HAL_StatusTypeDef HAL_DMA_UnRegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID);
# 392 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_dma.h"
HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef *hdma);
uint32_t HAL_DMA_GetError(DMA_HandleTypeDef *hdma);
# 211 "Inc/stm32f3xx_hal_conf.h" 2



# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_cortex.h" 1
# 260 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_cortex.h"
void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
void HAL_NVIC_EnableIRQ(IRQn_Type IRQn);
void HAL_NVIC_DisableIRQ(IRQn_Type IRQn);
void HAL_NVIC_SystemReset(void);
uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb);
# 277 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_cortex.h"
uint32_t HAL_NVIC_GetPriorityGrouping(void);
void HAL_NVIC_GetPriority(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority);
uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn);
void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource);
void HAL_SYSTICK_IRQHandler(void);
void HAL_SYSTICK_Callback(void);
# 215 "Inc/stm32f3xx_hal_conf.h" 2
# 246 "Inc/stm32f3xx_hal_conf.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash.h" 1
# 71 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash.h"
typedef enum
{
  FLASH_PROC_NONE = 0U,
  FLASH_PROC_PAGEERASE = 1U,
  FLASH_PROC_MASSERASE = 2U,
  FLASH_PROC_PROGRAMHALFWORD = 3U,
  FLASH_PROC_PROGRAMWORD = 4U,
  FLASH_PROC_PROGRAMDOUBLEWORD = 5U
} FLASH_ProcedureTypeDef;




typedef struct
{
  volatile FLASH_ProcedureTypeDef ProcedureOnGoing;

  volatile uint32_t DataRemaining;

  volatile uint32_t Address;

  volatile uint64_t Data;

  HAL_LockTypeDef Lock;

  volatile uint32_t ErrorCode;

} FLASH_ProcessTypeDef;
# 304 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash_ex.h" 1
# 137 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash_ex.h"
typedef struct
{
  uint32_t TypeErase;


  uint32_t PageAddress;


  uint32_t NbPages;


} FLASH_EraseInitTypeDef;




typedef struct
{
  uint32_t OptionType;


  uint32_t WRPState;


  uint32_t WRPPage;


  uint8_t RDPLevel;


  uint8_t USERConfig;
# 180 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash_ex.h"
  uint32_t DATAAddress;


  uint8_t DATAData;

} FLASH_OBProgramInitTypeDef;
# 436 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *PageError);
HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit);
# 447 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_OBErase(void);
HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit);
void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit);
uint32_t HAL_FLASHEx_OBGetUserData(uint32_t DATAAdress);
# 305 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash.h" 2
# 315 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint64_t Data);


void HAL_FLASH_IRQHandler(void);

void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);
# 332 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Launch(void);
# 346 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash.h"
uint32_t HAL_FLASH_GetError(void);
# 360 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_flash.h"
HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout);
# 247 "Inc/stm32f3xx_hal_conf.h" 2
# 270 "Inc/stm32f3xx_hal_conf.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h" 1
# 48 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
typedef struct
{
  uint32_t Timing;



  uint32_t OwnAddress1;


  uint32_t AddressingMode;


  uint32_t DualAddressMode;


  uint32_t OwnAddress2;


  uint32_t OwnAddress2Masks;


  uint32_t GeneralCallMode;


  uint32_t NoStretchMode;


} I2C_InitTypeDef;
# 108 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
typedef enum
{
  HAL_I2C_STATE_RESET = 0x00U,
  HAL_I2C_STATE_READY = 0x20U,
  HAL_I2C_STATE_BUSY = 0x24U,
  HAL_I2C_STATE_BUSY_TX = 0x21U,
  HAL_I2C_STATE_BUSY_RX = 0x22U,
  HAL_I2C_STATE_LISTEN = 0x28U,
  HAL_I2C_STATE_BUSY_TX_LISTEN = 0x29U,

  HAL_I2C_STATE_BUSY_RX_LISTEN = 0x2AU,

  HAL_I2C_STATE_ABORT = 0x60U,
  HAL_I2C_STATE_TIMEOUT = 0xA0U,
  HAL_I2C_STATE_ERROR = 0xE0U

} HAL_I2C_StateTypeDef;
# 148 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
typedef enum
{
  HAL_I2C_MODE_NONE = 0x00U,
  HAL_I2C_MODE_MASTER = 0x10U,
  HAL_I2C_MODE_SLAVE = 0x20U,
  HAL_I2C_MODE_MEM = 0x40U

} HAL_I2C_ModeTypeDef;
# 186 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
typedef struct __I2C_HandleTypeDef
{
  I2C_TypeDef *Instance;

  I2C_InitTypeDef Init;

  uint8_t *pBuffPtr;

  uint16_t XferSize;

  volatile uint16_t XferCount;

  volatile uint32_t XferOptions;


  volatile uint32_t PreviousState;

  HAL_StatusTypeDef(*XferISR)(struct __I2C_HandleTypeDef *hi2c, uint32_t ITFlags, uint32_t ITSources);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_I2C_StateTypeDef State;

  volatile HAL_I2C_ModeTypeDef Mode;

  volatile uint32_t ErrorCode;

  volatile uint32_t AddrEventCount;
# 236 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
} I2C_HandleTypeDef;
# 568 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c_ex.h" 1
# 95 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c_ex.h"
HAL_StatusTypeDef HAL_I2CEx_ConfigAnalogFilter(I2C_HandleTypeDef *hi2c, uint32_t AnalogFilter);
HAL_StatusTypeDef HAL_I2CEx_ConfigDigitalFilter(I2C_HandleTypeDef *hi2c, uint32_t DigitalFilter);
HAL_StatusTypeDef HAL_I2CEx_EnableWakeUp(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2CEx_DisableWakeUp(I2C_HandleTypeDef *hi2c);
void HAL_I2CEx_EnableFastModePlus(uint32_t ConfigFastModePlus);
void HAL_I2CEx_DisableFastModePlus(uint32_t ConfigFastModePlus);
# 569 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h" 2
# 579 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_DeInit(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MspInit(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MspDeInit(I2C_HandleTypeDef *hi2c);
# 601 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Slave_Receive(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_I2C_IsDeviceReady(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout);


HAL_StatusTypeDef HAL_I2C_Master_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Master_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Write_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Read_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);

HAL_StatusTypeDef HAL_I2C_Master_Seq_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Master_Seq_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Transmit_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Receive_IT(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_EnableListen_IT(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_DisableListen_IT(I2C_HandleTypeDef *hi2c);
HAL_StatusTypeDef HAL_I2C_Master_Abort_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress);


HAL_StatusTypeDef HAL_I2C_Master_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Master_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Slave_Receive_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Write_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_I2C_Mem_Read_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);

HAL_StatusTypeDef HAL_I2C_Master_Seq_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Master_Seq_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Receive_DMA(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
# 645 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef *hi2c);
void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode);
void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c);
void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef *hi2c);
# 665 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_i2c.h"
HAL_I2C_StateTypeDef HAL_I2C_GetState(I2C_HandleTypeDef *hi2c);
HAL_I2C_ModeTypeDef HAL_I2C_GetMode(I2C_HandleTypeDef *hi2c);
uint32_t HAL_I2C_GetError(I2C_HandleTypeDef *hi2c);
# 271 "Inc/stm32f3xx_hal_conf.h" 2
# 294 "Inc/stm32f3xx_hal_conf.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_pwr.h" 1
# 156 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_pwr.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_pwr_ex.h" 1
# 52 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_pwr_ex.h"
typedef struct
{
  uint32_t PVDLevel;


  uint32_t Mode;

}PWR_PVDTypeDef;
# 284 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_pwr_ex.h"
void HAL_PWR_ConfigPVD(PWR_PVDTypeDef *sConfigPVD);
void HAL_PWR_EnablePVD(void);
void HAL_PWR_DisablePVD(void);
void HAL_PWR_PVD_IRQHandler(void);
void HAL_PWR_PVDCallback(void);
# 157 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_pwr.h" 2
# 169 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_pwr.h"
void HAL_PWR_DeInit(void);
# 180 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_pwr.h"
void HAL_PWR_EnableBkUpAccess(void);
void HAL_PWR_DisableBkUpAccess(void);


void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPinx);
void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPinx);


void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t STOPEntry);
void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SLEEPEntry);
void HAL_PWR_EnterSTANDBYMode(void);

void HAL_PWR_EnableSleepOnExit(void);
void HAL_PWR_DisableSleepOnExit(void);
void HAL_PWR_EnableSEVOnPend(void);
void HAL_PWR_DisableSEVOnPend(void);
# 295 "Inc/stm32f3xx_hal_conf.h" 2
# 318 "Inc/stm32f3xx_hal_conf.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h" 1
# 47 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
typedef struct
{
  uint32_t Prescaler;


  uint32_t CounterMode;


  uint32_t Period;



  uint32_t ClockDivision;


  uint32_t RepetitionCounter;
# 71 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
  uint32_t AutoReloadPreload;

} TIM_Base_InitTypeDef;




typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;


  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCFastMode;




  uint32_t OCIdleState;



  uint32_t OCNIdleState;


} TIM_OC_InitTypeDef;




typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;


  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCIdleState;



  uint32_t OCNIdleState;



  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICFilter;

} TIM_OnePulse_InitTypeDef;




typedef struct
{
  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICPrescaler;


  uint32_t ICFilter;

} TIM_IC_InitTypeDef;




typedef struct
{
  uint32_t EncoderMode;


  uint32_t IC1Polarity;


  uint32_t IC1Selection;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t IC2Polarity;


  uint32_t IC2Selection;


  uint32_t IC2Prescaler;


  uint32_t IC2Filter;

} TIM_Encoder_InitTypeDef;




typedef struct
{
  uint32_t ClockSource;

  uint32_t ClockPolarity;

  uint32_t ClockPrescaler;

  uint32_t ClockFilter;

} TIM_ClockConfigTypeDef;




typedef struct
{
  uint32_t ClearInputState;

  uint32_t ClearInputSource;

  uint32_t ClearInputPolarity;

  uint32_t ClearInputPrescaler;

  uint32_t ClearInputFilter;

} TIM_ClearInputConfigTypeDef;






typedef struct
{
  uint32_t MasterOutputTrigger;


  uint32_t MasterOutputTrigger2;


  uint32_t MasterSlaveMode;






} TIM_MasterConfigTypeDef;




typedef struct
{
  uint32_t SlaveMode;

  uint32_t InputTrigger;

  uint32_t TriggerPolarity;

  uint32_t TriggerPrescaler;

  uint32_t TriggerFilter;


} TIM_SlaveConfigTypeDef;






typedef struct
{
  uint32_t OffStateRunMode;

  uint32_t OffStateIDLEMode;

  uint32_t LockLevel;

  uint32_t DeadTime;

  uint32_t BreakState;

  uint32_t BreakPolarity;

  uint32_t BreakFilter;


  uint32_t Break2State;

  uint32_t Break2Polarity;

  uint32_t Break2Filter;


  uint32_t AutomaticOutput;

} TIM_BreakDeadTimeConfigTypeDef;




typedef enum
{
  HAL_TIM_STATE_RESET = 0x00U,
  HAL_TIM_STATE_READY = 0x01U,
  HAL_TIM_STATE_BUSY = 0x02U,
  HAL_TIM_STATE_TIMEOUT = 0x03U,
  HAL_TIM_STATE_ERROR = 0x04U
} HAL_TIM_StateTypeDef;




typedef enum
{
  HAL_TIM_ACTIVE_CHANNEL_1 = 0x01U,
  HAL_TIM_ACTIVE_CHANNEL_2 = 0x02U,
  HAL_TIM_ACTIVE_CHANNEL_3 = 0x04U,
  HAL_TIM_ACTIVE_CHANNEL_4 = 0x08U,

  HAL_TIM_ACTIVE_CHANNEL_5 = 0x10U,


  HAL_TIM_ACTIVE_CHANNEL_6 = 0x20U,

  HAL_TIM_ACTIVE_CHANNEL_CLEARED = 0x00U
} HAL_TIM_ActiveChannel;







typedef struct

{
  TIM_TypeDef *Instance;
  TIM_Base_InitTypeDef Init;
  HAL_TIM_ActiveChannel Channel;
  DMA_HandleTypeDef *hdma[7];

  HAL_LockTypeDef Lock;
  volatile HAL_TIM_StateTypeDef State;
# 378 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
} TIM_HandleTypeDef;
# 2090 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h" 1
# 48 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
typedef struct
{
  uint32_t IC1Polarity;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t Commutation_Delay;

} TIM_HallSensor_InitTypeDef;
# 189 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Init(TIM_HandleTypeDef *htim, TIM_HallSensor_InitTypeDef *sConfig);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_DeInit(TIM_HandleTypeDef *htim);

void HAL_TIMEx_HallSensor_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIMEx_HallSensor_MspDeInit(TIM_HandleTypeDef *htim);


HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_IT(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_IT(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_DMA(TIM_HandleTypeDef *htim);
# 214 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_OCN_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 234 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_PWMN_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 253 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
# 268 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                              uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent_IT(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                                 uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent_DMA(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                                  uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization(TIM_HandleTypeDef *htim,
                                                        TIM_MasterConfigTypeDef *sMasterConfig);
HAL_StatusTypeDef HAL_TIMEx_ConfigBreakDeadTime(TIM_HandleTypeDef *htim,
                                                TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig);

HAL_StatusTypeDef HAL_TIMEx_GroupChannel5(TIM_HandleTypeDef *htim, uint32_t Channels);

HAL_StatusTypeDef HAL_TIMEx_RemapConfig(TIM_HandleTypeDef *htim, uint32_t Remap);
# 291 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
void HAL_TIMEx_CommutCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_CommutHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef *htim);

void HAL_TIMEx_Break2Callback(TIM_HandleTypeDef *htim);
# 306 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
HAL_TIM_StateTypeDef HAL_TIMEx_HallSensor_GetState(TIM_HandleTypeDef *htim);
# 320 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim_ex.h"
void TIMEx_DMACommutationCplt(DMA_HandleTypeDef *hdma);
void TIMEx_DMACommutationHalfCplt(DMA_HandleTypeDef *hdma);
# 2091 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h" 2
# 2102 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop_IT(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Base_Stop_DMA(TIM_HandleTypeDef *htim);
# 2124 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_OC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_OC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2146 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2168 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_IC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_IC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_IC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2190 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OnePulse_Init(TIM_HandleTypeDef *htim, uint32_t OnePulseMode);
HAL_StatusTypeDef HAL_TIM_OnePulse_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OnePulse_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel);

HAL_StatusTypeDef HAL_TIM_OnePulse_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
# 2209 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_Encoder_Init(TIM_HandleTypeDef *htim, TIM_Encoder_InitTypeDef *sConfig);
HAL_StatusTypeDef HAL_TIM_Encoder_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Encoder_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1,
                                            uint32_t *pData2, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2232 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim);
# 2242 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef *sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef *sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_IC_InitTypeDef *sConfig, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OnePulse_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef *sConfig,
                                                 uint32_t OutputChannel, uint32_t InputChannel);
HAL_StatusTypeDef HAL_TIM_ConfigOCrefClear(TIM_HandleTypeDef *htim, TIM_ClearInputConfigTypeDef *sClearInputConfig,
                                           uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim, TIM_ClockConfigTypeDef *sClockSourceConfig);
HAL_StatusTypeDef HAL_TIM_ConfigTI1Input(TIM_HandleTypeDef *htim, uint32_t TI1_Selection);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro_IT(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                              uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_MultiWriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                                   uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength,
                                                   uint32_t DataLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                             uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_MultiReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                                  uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength,
                                                  uint32_t DataLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_GenerateEvent(TIM_HandleTypeDef *htim, uint32_t EventSource);
uint32_t HAL_TIM_ReadCapturedValue(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2276 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PeriodElapsedHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_CaptureHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_PulseFinishedHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_TriggerHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim);
# 2303 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
HAL_TIM_StateTypeDef HAL_TIM_Base_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OC_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_PWM_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_IC_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OnePulse_GetState(TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_Encoder_GetState(TIM_HandleTypeDef *htim);
# 2322 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_tim.h"
void TIM_Base_SetConfig(TIM_TypeDef *TIMx, TIM_Base_InitTypeDef *Structure);
void TIM_TI1_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter);
void TIM_OC2_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);
void TIM_ETR_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ExtTRGPrescaler,
                       uint32_t TIM_ExtTRGPolarity, uint32_t ExtTRGFilter);

void TIM_DMADelayPulseCplt(DMA_HandleTypeDef *hdma);
void TIM_DMADelayPulseHalfCplt(DMA_HandleTypeDef *hdma);
void TIM_DMAError(DMA_HandleTypeDef *hdma);
void TIM_DMACaptureCplt(DMA_HandleTypeDef *hdma);
void TIM_DMACaptureHalfCplt(DMA_HandleTypeDef *hdma);
void TIM_CCxChannelCmd(TIM_TypeDef *TIMx, uint32_t Channel, uint32_t ChannelState);
# 319 "Inc/stm32f3xx_hal_conf.h" 2







# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h" 1
# 47 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
typedef struct
{
  uint32_t BaudRate;
# 59 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
  uint32_t WordLength;


  uint32_t StopBits;


  uint32_t Parity;






  uint32_t Mode;


  uint32_t HwFlowCtl;



  uint32_t OverSampling;


  uint32_t OneBitSampling;




} UART_InitTypeDef;




typedef struct
{
  uint32_t AdvFeatureInit;



  uint32_t TxPinLevelInvert;


  uint32_t RxPinLevelInvert;


  uint32_t DataInvert;



  uint32_t Swap;


  uint32_t OverrunDisable;


  uint32_t DMADisableonRxError;


  uint32_t AutoBaudRateEnable;


  uint32_t AutoBaudRateMode;



  uint32_t MSBFirst;

} UART_AdvFeatureInitTypeDef;
# 167 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
typedef uint32_t HAL_UART_StateTypeDef;




typedef enum
{
  UART_CLOCKSOURCE_PCLK1 = 0x00U,
  UART_CLOCKSOURCE_PCLK2 = 0x01U,
  UART_CLOCKSOURCE_HSI = 0x02U,
  UART_CLOCKSOURCE_SYSCLK = 0x04U,
  UART_CLOCKSOURCE_LSE = 0x08U,
  UART_CLOCKSOURCE_UNDEFINED = 0x10U
} UART_ClockSourceTypeDef;




typedef struct __UART_HandleTypeDef
{
  USART_TypeDef *Instance;

  UART_InitTypeDef Init;

  UART_AdvFeatureInitTypeDef AdvancedInit;

  uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  volatile uint16_t RxXferCount;

  uint16_t Mask;

  void (*RxISR)(struct __UART_HandleTypeDef *huart);

  void (*TxISR)(struct __UART_HandleTypeDef *huart);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_UART_StateTypeDef gState;



  volatile HAL_UART_StateTypeDef RxState;


  volatile uint32_t ErrorCode;
# 241 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
} UART_HandleTypeDef;
# 1365 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
# 1 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart_ex.h" 1
# 47 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart_ex.h"
typedef struct
{
  uint32_t WakeUpEvent;




  uint16_t AddressLength;


  uint8_t Address;
} UART_WakeUpTypeDef;
# 109 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart_ex.h"
HAL_StatusTypeDef HAL_RS485Ex_Init(UART_HandleTypeDef *huart, uint32_t Polarity, uint32_t AssertionTime,
                                   uint32_t DeassertionTime);
# 120 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart_ex.h"
void HAL_UARTEx_WakeupCallback(UART_HandleTypeDef *huart);
# 132 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart_ex.h"
HAL_StatusTypeDef HAL_UARTEx_StopModeWakeUpSourceConfig(UART_HandleTypeDef *huart, UART_WakeUpTypeDef WakeUpSelection);
HAL_StatusTypeDef HAL_UARTEx_EnableStopMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UARTEx_DisableStopMode(UART_HandleTypeDef *huart);

HAL_StatusTypeDef HAL_MultiProcessorEx_AddressLength_Set(UART_HandleTypeDef *huart, uint32_t AddressLength);
# 1366 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h" 2
# 1378 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_LIN_Init(UART_HandleTypeDef *huart, uint32_t BreakDetectLength);
HAL_StatusTypeDef HAL_MultiProcessor_Init(UART_HandleTypeDef *huart, uint8_t Address, uint32_t WakeUpMethod);
HAL_StatusTypeDef HAL_UART_DeInit(UART_HandleTypeDef *huart);
void HAL_UART_MspInit(UART_HandleTypeDef *huart);
void HAL_UART_MspDeInit(UART_HandleTypeDef *huart);
# 1402 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Transmit_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_DMAPause(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAResume(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAStop(UART_HandleTypeDef *huart);

HAL_StatusTypeDef HAL_UART_Abort(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortTransmit(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortReceive(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_Abort_IT(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortTransmit_IT(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortReceive_IT(UART_HandleTypeDef *huart);

void HAL_UART_IRQHandler(UART_HandleTypeDef *huart);
void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortTransmitCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortReceiveCpltCallback(UART_HandleTypeDef *huart);
# 1438 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
void HAL_UART_ReceiverTimeout_Config(UART_HandleTypeDef *huart, uint32_t TimeoutValue);
HAL_StatusTypeDef HAL_UART_EnableReceiverTimeout(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DisableReceiverTimeout(UART_HandleTypeDef *huart);

HAL_StatusTypeDef HAL_LIN_SendBreak(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_EnableMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_DisableMuteMode(UART_HandleTypeDef *huart);
void HAL_MultiProcessor_EnterMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableTransmitter(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableReceiver(UART_HandleTypeDef *huart);
# 1458 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart);
uint32_t HAL_UART_GetError(UART_HandleTypeDef *huart);
# 1476 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal_uart.h"
HAL_StatusTypeDef UART_SetConfig(UART_HandleTypeDef *huart);
HAL_StatusTypeDef UART_CheckIdleState(UART_HandleTypeDef *huart);
HAL_StatusTypeDef UART_WaitOnFlagUntilTimeout(UART_HandleTypeDef *huart, uint32_t Flag, FlagStatus Status,
                                              uint32_t Tickstart, uint32_t Timeout);
void UART_AdvFeatureConfig(UART_HandleTypeDef *huart);
# 327 "Inc/stm32f3xx_hal_conf.h" 2
# 31 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h" 2
# 61 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h"
typedef enum
{
  HAL_TICK_FREQ_10HZ = 100U,
  HAL_TICK_FREQ_100HZ = 10U,
  HAL_TICK_FREQ_1KHZ = 1U,
  HAL_TICK_FREQ_DEFAULT = HAL_TICK_FREQ_1KHZ
} HAL_TickFreqTypeDef;
# 878 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h"
HAL_StatusTypeDef HAL_Init(void);
HAL_StatusTypeDef HAL_DeInit(void);
void HAL_MspInit(void);
void HAL_MspDeInit(void);
HAL_StatusTypeDef HAL_InitTick (uint32_t TickPriority);
# 891 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h"
extern volatile uint32_t uwTick;
extern uint32_t uwTickPrio;
extern HAL_TickFreqTypeDef uwTickFreq;
# 903 "Drivers/STM32F3xx_HAL_Driver/Inc/stm32f3xx_hal.h"
void HAL_IncTick(void);
void HAL_Delay(uint32_t Delay);
void HAL_SuspendTick(void);
void HAL_ResumeTick(void);
uint32_t HAL_GetTick(void);
uint32_t HAL_GetTickPrio(void);
HAL_StatusTypeDef HAL_SetTickFreq(HAL_TickFreqTypeDef Freq);
HAL_TickFreqTypeDef HAL_GetTickFreq(void);
uint32_t HAL_GetHalVersion(void);
uint32_t HAL_GetREVID(void);
uint32_t HAL_GetDEVID(void);
uint32_t HAL_GetUIDw0(void);
uint32_t HAL_GetUIDw1(void);
uint32_t HAL_GetUIDw2(void);
void HAL_DBGMCU_EnableDBGSleepMode(void);
void HAL_DBGMCU_DisableDBGSleepMode(void);
void HAL_DBGMCU_EnableDBGStopMode(void);
void HAL_DBGMCU_DisableDBGStopMode(void);
void HAL_DBGMCU_EnableDBGStandbyMode(void);
void HAL_DBGMCU_DisableDBGStandbyMode(void);
# 188 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 2
# 208 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_OC1_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);
static void TIM_OC3_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);
static void TIM_OC4_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);

static void TIM_OC5_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);


static void TIM_OC6_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);

static void TIM_TI1_ConfigInputStage(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICFilter);
static void TIM_TI2_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection,
                              uint32_t TIM_ICFilter);
static void TIM_TI2_ConfigInputStage(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICFilter);
static void TIM_TI3_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection,
                              uint32_t TIM_ICFilter);
static void TIM_TI4_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection,
                              uint32_t TIM_ICFilter);
static void TIM_ITRx_SetConfig(TIM_TypeDef *TIMx, uint32_t InputTriggerSource);
static void TIM_DMAPeriodElapsedCplt(DMA_HandleTypeDef *hdma);
static void TIM_DMAPeriodElapsedHalfCplt(DMA_HandleTypeDef *hdma);
static void TIM_DMATriggerCplt(DMA_HandleTypeDef *hdma);
static void TIM_DMATriggerHalfCplt(DMA_HandleTypeDef *hdma);
static HAL_StatusTypeDef TIM_SlaveTimer_SetConfig(TIM_HandleTypeDef *htim,
                                                  TIM_SlaveConfigTypeDef *sSlaveConfig);
# 272 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim)
{

  if (htim == 
# 275 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
             ((void *)0)
# 275 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                 )
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_RESET)
  {

    htim->Lock = HAL_UNLOCKED;
# 303 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
    HAL_TIM_Base_MspInit(htim);

  }


  htim->State = HAL_TIM_STATE_BUSY;


  TIM_Base_SetConfig(htim->Instance, &htim->Init);


  htim->State = HAL_TIM_STATE_READY;

  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_Base_DeInit(TIM_HandleTypeDef *htim)
{

  ((void)0U);

  htim->State = HAL_TIM_STATE_BUSY;


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);
# 343 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
  HAL_TIM_Base_MspDeInit(htim);



  htim->State = HAL_TIM_STATE_RESET;


  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}






__attribute__((weak)) void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}







HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim)
{
  uint32_t tmpsmcr;


  ((void)0U);


  htim->State = HAL_TIM_STATE_BUSY;


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim)
{

  ((void)0U);


  htim->State = HAL_TIM_STATE_BUSY;


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim)
{
  uint32_t tmpsmcr;


  ((void)0U);


  ((htim)->Instance->DIER |= ((0x1UL << (0U))));


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_Base_Stop_IT(TIM_HandleTypeDef *htim)
{

  ((void)0U);

  ((htim)->Instance->DIER &= ~((0x1UL << (0U))));


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 490 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Base_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length)
{
  uint32_t tmpsmcr;


  ((void)0U);

  if (htim->State == HAL_TIM_STATE_BUSY)
  {
    return HAL_BUSY;
  }
  else if (htim->State == HAL_TIM_STATE_READY)
  {
    if ((pData == 
# 503 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
                 ((void *)0)
# 503 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                     ) && (Length > 0U))
    {
      return HAL_ERROR;
    }
    else
    {
      htim->State = HAL_TIM_STATE_BUSY;
    }
  }
  else
  {

  }


  htim->hdma[((uint16_t) 0x0000)]->XferCpltCallback = TIM_DMAPeriodElapsedCplt;
  htim->hdma[((uint16_t) 0x0000)]->XferHalfCpltCallback = TIM_DMAPeriodElapsedHalfCplt;


  htim->hdma[((uint16_t) 0x0000)]->XferErrorCallback = TIM_DMAError ;


  if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0000)], (uint32_t)pData, (uint32_t)&htim->Instance->ARR, Length) != HAL_OK)
  {
    return HAL_ERROR;
  }


  ((htim)->Instance->DIER |= ((0x1UL << (8U))));


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_Base_Stop_DMA(TIM_HandleTypeDef *htim)
{

  ((void)0U);


  ((htim)->Instance->DIER &= ~((0x1UL << (8U))));

  (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0000)]);


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}
# 604 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OC_Init(TIM_HandleTypeDef *htim)
{

  if (htim == 
# 607 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
             ((void *)0)
# 607 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                 )
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_RESET)
  {

    htim->Lock = HAL_UNLOCKED;
# 635 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
    HAL_TIM_OC_MspInit(htim);

  }


  htim->State = HAL_TIM_STATE_BUSY;


  TIM_Base_SetConfig(htim->Instance, &htim->Init);


  htim->State = HAL_TIM_STATE_READY;

  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_OC_DeInit(TIM_HandleTypeDef *htim)
{

  ((void)0U);

  htim->State = HAL_TIM_STATE_BUSY;


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);
# 675 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
  HAL_TIM_OC_MspDeInit(htim);



  htim->State = HAL_TIM_STATE_RESET;


  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}






__attribute__((weak)) void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}
# 731 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OC_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  uint32_t tmpsmcr;


  ((void)0U);


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    ((htim)->Instance->BDTR|=((0x1UL << (15U))));
  }


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 772 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->BDTR &= ~((0x1UL << (15U))); } } } while(0);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 804 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  uint32_t tmpsmcr;


  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (1U))));
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (2U))));
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (3U))));
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (4U))));
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    ((htim)->Instance->BDTR|=((0x1UL << (15U))));
  }


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 876 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (1U))));
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (2U))));
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (3U))));
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (4U))));
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->BDTR &= ~((0x1UL << (15U))); } } } while(0);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 944 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
{
  uint32_t tmpsmcr;


  ((void)0U);

  if (htim->State == HAL_TIM_STATE_BUSY)
  {
    return HAL_BUSY;
  }
  else if (htim->State == HAL_TIM_STATE_READY)
  {
    if ((pData == 
# 957 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
                 ((void *)0)
# 957 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                     ) && (Length > 0U))
    {
      return HAL_ERROR;
    }
    else
    {
      htim->State = HAL_TIM_STATE_BUSY;
    }
  }
  else
  {

  }

  switch (Channel)
  {
    case 0x00000000U:
    {

      htim->hdma[((uint16_t) 0x0001)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0001)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0001)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0001)], (uint32_t)pData, (uint32_t)&htim->Instance->CCR1, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }


      ((htim)->Instance->DIER |= ((0x1UL << (9U))));
      break;
    }

    case 0x00000004U:
    {

      htim->hdma[((uint16_t) 0x0002)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0002)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0002)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0002)], (uint32_t)pData, (uint32_t)&htim->Instance->CCR2, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }


      ((htim)->Instance->DIER |= ((0x1UL << (10U))));
      break;
    }

    case 0x00000008U:
    {

      htim->hdma[((uint16_t) 0x0003)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0003)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0003)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0003)], (uint32_t)pData, (uint32_t)&htim->Instance->CCR3, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (11U))));
      break;
    }

    case 0x0000000CU:
    {

      htim->hdma[((uint16_t) 0x0004)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0004)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0004)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0004)], (uint32_t)pData, (uint32_t)&htim->Instance->CCR4, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (12U))));
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    ((htim)->Instance->BDTR|=((0x1UL << (15U))));
  }


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 1086 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (9U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0001)]);
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (10U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0002)]);
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (11U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0003)]);
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (12U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0004)]);
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->BDTR &= ~((0x1UL << (15U))); } } } while(0);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}
# 1183 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim)
{

  if (htim == 
# 1186 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
             ((void *)0)
# 1186 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                 )
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_RESET)
  {

    htim->Lock = HAL_UNLOCKED;
# 1214 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
    HAL_TIM_PWM_MspInit(htim);

  }


  htim->State = HAL_TIM_STATE_BUSY;


  TIM_Base_SetConfig(htim->Instance, &htim->Init);


  htim->State = HAL_TIM_STATE_READY;

  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim)
{

  ((void)0U);

  htim->State = HAL_TIM_STATE_BUSY;


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);
# 1254 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
  HAL_TIM_PWM_MspDeInit(htim);



  htim->State = HAL_TIM_STATE_RESET;


  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}






__attribute__((weak)) void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}
# 1310 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  uint32_t tmpsmcr;


  ((void)0U);


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    ((htim)->Instance->BDTR|=((0x1UL << (15U))));
  }


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 1351 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->BDTR &= ~((0x1UL << (15U))); } } } while(0);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}
# 1386 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_PWM_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  uint32_t tmpsmcr;

  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (1U))));
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (2U))));
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (3U))));
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (4U))));
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    ((htim)->Instance->BDTR|=((0x1UL << (15U))));
  }


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 1457 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_PWM_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (1U))));
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (2U))));
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (3U))));
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (4U))));
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->BDTR &= ~((0x1UL << (15U))); } } } while(0);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 1525 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_PWM_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
{
  uint32_t tmpsmcr;


  ((void)0U);

  if (htim->State == HAL_TIM_STATE_BUSY)
  {
    return HAL_BUSY;
  }
  else if (htim->State == HAL_TIM_STATE_READY)
  {
    if ((pData == 
# 1538 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
                 ((void *)0)
# 1538 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                     ) && (Length > 0U))
    {
      return HAL_ERROR;
    }
    else
    {
      htim->State = HAL_TIM_STATE_BUSY;
    }
  }
  else
  {

  }

  switch (Channel)
  {
    case 0x00000000U:
    {

      htim->hdma[((uint16_t) 0x0001)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0001)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0001)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0001)], (uint32_t)pData, (uint32_t)&htim->Instance->CCR1, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }


      ((htim)->Instance->DIER |= ((0x1UL << (9U))));
      break;
    }

    case 0x00000004U:
    {

      htim->hdma[((uint16_t) 0x0002)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0002)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0002)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0002)], (uint32_t)pData, (uint32_t)&htim->Instance->CCR2, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (10U))));
      break;
    }

    case 0x00000008U:
    {

      htim->hdma[((uint16_t) 0x0003)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0003)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0003)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0003)], (uint32_t)pData, (uint32_t)&htim->Instance->CCR3, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (11U))));
      break;
    }

    case 0x0000000CU:
    {

      htim->hdma[((uint16_t) 0x0004)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0004)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0004)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0004)], (uint32_t)pData, (uint32_t)&htim->Instance->CCR4, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (12U))));
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    ((htim)->Instance->BDTR|=((0x1UL << (15U))));
  }


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 1666 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_PWM_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (9U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0001)]);
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (10U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0002)]);
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (11U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0003)]);
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (12U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0004)]);
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->BDTR &= ~((0x1UL << (15U))); } } } while(0);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}
# 1763 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *htim)
{

  if (htim == 
# 1766 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
             ((void *)0)
# 1766 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                 )
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_RESET)
  {

    htim->Lock = HAL_UNLOCKED;
# 1794 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
    HAL_TIM_IC_MspInit(htim);

  }


  htim->State = HAL_TIM_STATE_BUSY;


  TIM_Base_SetConfig(htim->Instance, &htim->Init);


  htim->State = HAL_TIM_STATE_READY;

  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_IC_DeInit(TIM_HandleTypeDef *htim)
{

  ((void)0U);

  htim->State = HAL_TIM_STATE_BUSY;


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);
# 1834 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
  HAL_TIM_IC_MspDeInit(htim);



  htim->State = HAL_TIM_STATE_RESET;


  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}






__attribute__((weak)) void HAL_TIM_IC_MspInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}
# 1887 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_IC_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  uint32_t tmpsmcr;


  ((void)0U);


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 1919 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_IC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 1945 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_IC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  uint32_t tmpsmcr;


  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (1U))));
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (2U))));
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (3U))));
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER |= ((0x1UL << (4U))));
      break;
    }

    default:
      break;
  }

  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 2010 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_IC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (1U))));
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (2U))));
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (3U))));
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (4U))));
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 2072 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_IC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
{
  uint32_t tmpsmcr;


  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_BUSY)
  {
    return HAL_BUSY;
  }
  else if (htim->State == HAL_TIM_STATE_READY)
  {
    if ((pData == 
# 2086 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
                 ((void *)0)
# 2086 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                     ) && (Length > 0U))
    {
      return HAL_ERROR;
    }
    else
    {
      htim->State = HAL_TIM_STATE_BUSY;
    }
  }
  else
  {

  }

  switch (Channel)
  {
    case 0x00000000U:
    {

      htim->hdma[((uint16_t) 0x0001)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0001)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0001)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0001)], (uint32_t)&htim->Instance->CCR1, (uint32_t)pData, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (9U))));
      break;
    }

    case 0x00000004U:
    {

      htim->hdma[((uint16_t) 0x0002)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0002)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0002)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0002)], (uint32_t)&htim->Instance->CCR2, (uint32_t)pData, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (10U))));
      break;
    }

    case 0x00000008U:
    {

      htim->hdma[((uint16_t) 0x0003)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0003)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0003)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0003)], (uint32_t)&htim->Instance->CCR3, (uint32_t)pData, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (11U))));
      break;
    }

    case 0x0000000CU:
    {

      htim->hdma[((uint16_t) 0x0004)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0004)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0004)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0004)], (uint32_t)&htim->Instance->CCR4, (uint32_t)pData, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (12U))));
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000001U);


  tmpsmcr = htim->Instance->SMCR & (0x10007UL << (0U));
  if (!(((tmpsmcr) == ((0x00000004U) | (0x00000002U))) || ((tmpsmcr) == (0x00010000U))))
  {
    ((htim)->Instance->CR1|=((0x1UL << (0U))));
  }


  return HAL_OK;
}
# 2207 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_IC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);
  ((void)0U);

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (9U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0001)]);
      break;
    }

    case 0x00000004U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (10U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0002)]);
      break;
    }

    case 0x00000008U:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (11U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0003)]);
      break;
    }

    case 0x0000000CU:
    {

      ((htim)->Instance->DIER &= ~((0x1UL << (12U))));
      (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0004)]);
      break;
    }

    default:
      break;
  }


  TIM_CCxChannelCmd(htim->Instance, Channel, 0x00000000U);


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}
# 2302 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OnePulse_Init(TIM_HandleTypeDef *htim, uint32_t OnePulseMode)
{

  if (htim == 
# 2305 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
             ((void *)0)
# 2305 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                 )
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_RESET)
  {

    htim->Lock = HAL_UNLOCKED;
# 2334 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
    HAL_TIM_OnePulse_MspInit(htim);

  }


  htim->State = HAL_TIM_STATE_BUSY;


  TIM_Base_SetConfig(htim->Instance, &htim->Init);


  htim->Instance->CR1 &= ~(0x1UL << (3U));


  htim->Instance->CR1 |= OnePulseMode;


  htim->State = HAL_TIM_STATE_READY;

  return HAL_OK;
}






HAL_StatusTypeDef HAL_TIM_OnePulse_DeInit(TIM_HandleTypeDef *htim)
{

  ((void)0U);

  htim->State = HAL_TIM_STATE_BUSY;


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);
# 2380 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
  HAL_TIM_OnePulse_MspDeInit(htim);



  htim->State = HAL_TIM_STATE_RESET;


  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}






__attribute__((weak)) void HAL_TIM_OnePulse_MspInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_OnePulse_MspDeInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}
# 2431 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OnePulse_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{

  (void)OutputChannel;
# 2445 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
  TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000001U);
  TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000001U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    ((htim)->Instance->BDTR|=((0x1UL << (15U))));
  }


  return HAL_OK;
}
# 2467 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{

  (void)OutputChannel;







  TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000000U);
  TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000000U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->BDTR &= ~((0x1UL << (15U))); } } } while(0);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 2503 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OnePulse_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{

  (void)OutputChannel;
# 2518 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
  ((htim)->Instance->DIER |= ((0x1UL << (1U))));


  ((htim)->Instance->DIER |= ((0x1UL << (2U))));

  TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000001U);
  TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000001U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    ((htim)->Instance->BDTR|=((0x1UL << (15U))));
  }


  return HAL_OK;
}
# 2545 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{

  (void)OutputChannel;


  ((htim)->Instance->DIER &= ~((0x1UL << (1U))));


  ((htim)->Instance->DIER &= ~((0x1UL << (2U))));






  TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000000U);
  TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000000U);

  if ((((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((htim->Instance) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))) != RESET)
  {

    do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->BDTR &= ~((0x1UL << (15U))); } } } while(0);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 2615 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Encoder_Init(TIM_HandleTypeDef *htim, TIM_Encoder_InitTypeDef *sConfig)
{
  uint32_t tmpsmcr;
  uint32_t tmpccmr1;
  uint32_t tmpccer;


  if (htim == 
# 2622 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
             ((void *)0)
# 2622 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                 )
  {
    return HAL_ERROR;
  }


  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_RESET)
  {

    htim->Lock = HAL_UNLOCKED;
# 2659 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
    HAL_TIM_Encoder_MspInit(htim);

  }


  htim->State = HAL_TIM_STATE_BUSY;


  htim->Instance->SMCR &= ~((0x10007UL << (0U)) | (0x1UL << (14U)));


  TIM_Base_SetConfig(htim->Instance, &htim->Init);


  tmpsmcr = htim->Instance->SMCR;


  tmpccmr1 = htim->Instance->CCMR1;


  tmpccer = htim->Instance->CCER;


  tmpsmcr |= sConfig->EncoderMode;


  tmpccmr1 &= ~((0x3UL << (0U)) | (0x3UL << (8U)));
  tmpccmr1 |= (sConfig->IC1Selection | (sConfig->IC2Selection << 8U));


  tmpccmr1 &= ~((0x3UL << (2U)) | (0x3UL << (10U)));
  tmpccmr1 &= ~((0xFUL << (4U)) | (0xFUL << (12U)));
  tmpccmr1 |= sConfig->IC1Prescaler | (sConfig->IC2Prescaler << 8U);
  tmpccmr1 |= (sConfig->IC1Filter << 4U) | (sConfig->IC2Filter << 12U);


  tmpccer &= ~((0x1UL << (1U)) | (0x1UL << (5U)));
  tmpccer &= ~((0x1UL << (3U)) | (0x1UL << (7U)));
  tmpccer |= sConfig->IC1Polarity | (sConfig->IC2Polarity << 4U);


  htim->Instance->SMCR = tmpsmcr;


  htim->Instance->CCMR1 = tmpccmr1;


  htim->Instance->CCER = tmpccer;


  htim->State = HAL_TIM_STATE_READY;

  return HAL_OK;
}







HAL_StatusTypeDef HAL_TIM_Encoder_DeInit(TIM_HandleTypeDef *htim)
{

  ((void)0U);

  htim->State = HAL_TIM_STATE_BUSY;


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);
# 2739 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
  HAL_TIM_Encoder_MspDeInit(htim);



  htim->State = HAL_TIM_STATE_RESET;


  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}






__attribute__((weak)) void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_Encoder_MspDeInit(TIM_HandleTypeDef *htim)
{

  (void)htim;




}
# 2791 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Encoder_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);


  switch (Channel)
  {
    case 0x00000000U:
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000001U);
      break;
    }

    case 0x00000004U:
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000001U);
      break;
    }

    default :
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000001U);
      TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000001U);
      break;
    }
  }

  ((htim)->Instance->CR1|=((0x1UL << (0U))));


  return HAL_OK;
}
# 2835 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Encoder_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);



  switch (Channel)
  {
    case 0x00000000U:
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000000U);
      break;
    }

    case 0x00000004U:
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000000U);
      break;
    }

    default :
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000000U);
      TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000000U);
      break;
    }
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  return HAL_OK;
}
# 2881 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Encoder_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);



  switch (Channel)
  {
    case 0x00000000U:
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000001U);
      ((htim)->Instance->DIER |= ((0x1UL << (1U))));
      break;
    }

    case 0x00000004U:
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000001U);
      ((htim)->Instance->DIER |= ((0x1UL << (2U))));
      break;
    }

    default :
    {
      TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000001U);
      TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000001U);
      ((htim)->Instance->DIER |= ((0x1UL << (1U))));
      ((htim)->Instance->DIER |= ((0x1UL << (2U))));
      break;
    }
  }


  ((htim)->Instance->CR1|=((0x1UL << (0U))));


  return HAL_OK;
}
# 2931 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);



  if (Channel == 0x00000000U)
  {
    TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000000U);


    ((htim)->Instance->DIER &= ~((0x1UL << (1U))));
  }
  else if (Channel == 0x00000004U)
  {
    TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000000U);


    ((htim)->Instance->DIER &= ~((0x1UL << (2U))));
  }
  else
  {
    TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000000U);
    TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000000U);


    ((htim)->Instance->DIER &= ~((0x1UL << (1U))));
    ((htim)->Instance->DIER &= ~((0x1UL << (2U))));
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}
# 2985 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Encoder_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1,
                                            uint32_t *pData2, uint16_t Length)
{

  ((void)0U);

  if (htim->State == HAL_TIM_STATE_BUSY)
  {
    return HAL_BUSY;
  }
  else if (htim->State == HAL_TIM_STATE_READY)
  {
    if ((((pData1 == 
# 2997 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
                    ((void *)0)
# 2997 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                        ) || (pData2 == 
# 2997 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
                                        ((void *)0)
# 2997 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                                            ))) && (Length > 0U))
    {
      return HAL_ERROR;
    }
    else
    {
      htim->State = HAL_TIM_STATE_BUSY;
    }
  }
  else
  {

  }

  switch (Channel)
  {
    case 0x00000000U:
    {

      htim->hdma[((uint16_t) 0x0001)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0001)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0001)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0001)], (uint32_t)&htim->Instance->CCR1, (uint32_t)pData1, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (9U))));


      ((htim)->Instance->CR1|=((0x1UL << (0U))));


      TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000001U);
      break;
    }

    case 0x00000004U:
    {

      htim->hdma[((uint16_t) 0x0002)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0002)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0002)]->XferErrorCallback = TIM_DMAError;

      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0002)], (uint32_t)&htim->Instance->CCR2, (uint32_t)pData2, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->DIER |= ((0x1UL << (10U))));


      ((htim)->Instance->CR1|=((0x1UL << (0U))));


      TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000001U);
      break;
    }

    case 0x0000003CU:
    {

      htim->hdma[((uint16_t) 0x0001)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0001)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0001)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0001)], (uint32_t)&htim->Instance->CCR1, (uint32_t)pData1, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }


      htim->hdma[((uint16_t) 0x0002)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0002)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0002)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0002)], (uint32_t)&htim->Instance->CCR2, (uint32_t)pData2, Length) != HAL_OK)
      {
        return HAL_ERROR;
      }

      ((htim)->Instance->CR1|=((0x1UL << (0U))));


      TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000001U);
      TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000001U);


      ((htim)->Instance->DIER |= ((0x1UL << (9U))));

      ((htim)->Instance->DIER |= ((0x1UL << (10U))));
      break;
    }

    default:
      break;
  }

  return HAL_OK;
}
# 3120 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{

  ((void)0U);



  if (Channel == 0x00000000U)
  {
    TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000000U);


    ((htim)->Instance->DIER &= ~((0x1UL << (9U))));
    (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0001)]);
  }
  else if (Channel == 0x00000004U)
  {
    TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000000U);


    ((htim)->Instance->DIER &= ~((0x1UL << (10U))));
    (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0002)]);
  }
  else
  {
    TIM_CCxChannelCmd(htim->Instance, 0x00000000U, 0x00000000U);
    TIM_CCxChannelCmd(htim->Instance, 0x00000004U, 0x00000000U);


    ((htim)->Instance->DIER &= ~((0x1UL << (9U))));
    ((htim)->Instance->DIER &= ~((0x1UL << (10U))));
    (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0001)]);
    (void)HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0002)]);
  }


  do { if (((htim)->Instance->CCER & ((uint32_t)((0x1UL << (0U)) | (0x1UL << (4U)) | (0x1UL << (8U)) | (0x1UL << (12U))))) == 0UL) { if(((htim)->Instance->CCER & ((uint32_t)((0x1UL << (2U)) | (0x1UL << (6U)) | (0x1UL << (10U))))) == 0UL) { (htim)->Instance->CR1 &= ~((0x1UL << (0U))); } } } while(0);


  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}
# 3186 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim)
{

  if ((((htim)->Instance->SR &((0x1UL << (1U)))) == ((0x1UL << (1U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (1U)))) == ((0x1UL << (1U)))) ? SET : RESET) != RESET)
    {
      {
        ((htim)->Instance->SR = ~((0x1UL << (1U))));
        htim->Channel = HAL_TIM_ACTIVE_CHANNEL_1;


        if ((htim->Instance->CCMR1 & (0x3UL << (0U))) != 0x00U)
        {



          HAL_TIM_IC_CaptureCallback(htim);

        }

        else
        {




          HAL_TIM_OC_DelayElapsedCallback(htim);
          HAL_TIM_PWM_PulseFinishedCallback(htim);

        }
        htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
      }
    }
  }

  if ((((htim)->Instance->SR &((0x1UL << (2U)))) == ((0x1UL << (2U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (2U)))) == ((0x1UL << (2U)))) ? SET : RESET) != RESET)
    {
      ((htim)->Instance->SR = ~((0x1UL << (2U))));
      htim->Channel = HAL_TIM_ACTIVE_CHANNEL_2;

      if ((htim->Instance->CCMR1 & (0x3UL << (8U))) != 0x00U)
      {



        HAL_TIM_IC_CaptureCallback(htim);

      }

      else
      {




        HAL_TIM_OC_DelayElapsedCallback(htim);
        HAL_TIM_PWM_PulseFinishedCallback(htim);

      }
      htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
    }
  }

  if ((((htim)->Instance->SR &((0x1UL << (3U)))) == ((0x1UL << (3U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (3U)))) == ((0x1UL << (3U)))) ? SET : RESET) != RESET)
    {
      ((htim)->Instance->SR = ~((0x1UL << (3U))));
      htim->Channel = HAL_TIM_ACTIVE_CHANNEL_3;

      if ((htim->Instance->CCMR2 & (0x3UL << (0U))) != 0x00U)
      {



        HAL_TIM_IC_CaptureCallback(htim);

      }

      else
      {




        HAL_TIM_OC_DelayElapsedCallback(htim);
        HAL_TIM_PWM_PulseFinishedCallback(htim);

      }
      htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
    }
  }

  if ((((htim)->Instance->SR &((0x1UL << (4U)))) == ((0x1UL << (4U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (4U)))) == ((0x1UL << (4U)))) ? SET : RESET) != RESET)
    {
      ((htim)->Instance->SR = ~((0x1UL << (4U))));
      htim->Channel = HAL_TIM_ACTIVE_CHANNEL_4;

      if ((htim->Instance->CCMR2 & (0x3UL << (8U))) != 0x00U)
      {



        HAL_TIM_IC_CaptureCallback(htim);

      }

      else
      {




        HAL_TIM_OC_DelayElapsedCallback(htim);
        HAL_TIM_PWM_PulseFinishedCallback(htim);

      }
      htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
    }
  }

  if ((((htim)->Instance->SR &((0x1UL << (0U)))) == ((0x1UL << (0U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (0U)))) == ((0x1UL << (0U)))) ? SET : RESET) != RESET)
    {
      ((htim)->Instance->SR = ~((0x1UL << (0U))));



      HAL_TIM_PeriodElapsedCallback(htim);

    }
  }

  if ((((htim)->Instance->SR &((0x1UL << (7U)))) == ((0x1UL << (7U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (7U)))) == ((0x1UL << (7U)))) ? SET : RESET) != RESET)
    {
      ((htim)->Instance->SR = ~((0x1UL << (7U))));



      HAL_TIMEx_BreakCallback(htim);

    }
  }


  if ((((htim)->Instance->SR &((0x1UL << (8U)))) == ((0x1UL << (8U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (7U)))) == ((0x1UL << (7U)))) ? SET : RESET) != RESET)
    {
      ((htim)->Instance->SR = ~((0x1UL << (8U))));



      HAL_TIMEx_Break2Callback(htim);

    }
  }


  if ((((htim)->Instance->SR &((0x1UL << (6U)))) == ((0x1UL << (6U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (6U)))) == ((0x1UL << (6U)))) ? SET : RESET) != RESET)
    {
      ((htim)->Instance->SR = ~((0x1UL << (6U))));



      HAL_TIM_TriggerCallback(htim);

    }
  }

  if ((((htim)->Instance->SR &((0x1UL << (5U)))) == ((0x1UL << (5U)))) != RESET)
  {
    if (((((htim)->Instance->DIER & ((0x1UL << (5U)))) == ((0x1UL << (5U)))) ? SET : RESET) != RESET)
    {
      ((htim)->Instance->SR = ~((0x1UL << (5U))));



      HAL_TIMEx_CommutCallback(htim);

    }
  }
}
# 3419 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OC_ConfigChannel(TIM_HandleTypeDef *htim,
                                           TIM_OC_InitTypeDef *sConfig,
                                           uint32_t Channel)
{

  ((void)0U);
  ((void)0U);
  ((void)0U);


  do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);

  htim->State = HAL_TIM_STATE_BUSY;

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((void)0U);


      TIM_OC1_SetConfig(htim->Instance, sConfig);
      break;
    }

    case 0x00000004U:
    {

      ((void)0U);


      TIM_OC2_SetConfig(htim->Instance, sConfig);
      break;
    }

    case 0x00000008U:
    {

      ((void)0U);


      TIM_OC3_SetConfig(htim->Instance, sConfig);
      break;
    }

    case 0x0000000CU:
    {

      ((void)0U);


      TIM_OC4_SetConfig(htim->Instance, sConfig);
      break;
    }


    case 0x00000010U:
    {

      ((void)0U);


      TIM_OC5_SetConfig(htim->Instance, sConfig);
      break;
    }



    case 0x00000014U:
    {

      ((void)0U);


      TIM_OC6_SetConfig(htim->Instance, sConfig);
      break;
    }


    default:
      break;
  }

  htim->State = HAL_TIM_STATE_READY;

  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}
# 3523 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_IC_InitTypeDef *sConfig, uint32_t Channel)
{

  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);


  do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);

  htim->State = HAL_TIM_STATE_BUSY;

  if (Channel == 0x00000000U)
  {

    TIM_TI1_SetConfig(htim->Instance,
                      sConfig->ICPolarity,
                      sConfig->ICSelection,
                      sConfig->ICFilter);


    htim->Instance->CCMR1 &= ~(0x3UL << (2U));


    htim->Instance->CCMR1 |= sConfig->ICPrescaler;
  }
  else if (Channel == 0x00000004U)
  {

    ((void)0U);

    TIM_TI2_SetConfig(htim->Instance,
                      sConfig->ICPolarity,
                      sConfig->ICSelection,
                      sConfig->ICFilter);


    htim->Instance->CCMR1 &= ~(0x3UL << (10U));


    htim->Instance->CCMR1 |= (sConfig->ICPrescaler << 8U);
  }
  else if (Channel == 0x00000008U)
  {

    ((void)0U);

    TIM_TI3_SetConfig(htim->Instance,
                      sConfig->ICPolarity,
                      sConfig->ICSelection,
                      sConfig->ICFilter);


    htim->Instance->CCMR2 &= ~(0x3UL << (2U));


    htim->Instance->CCMR2 |= sConfig->ICPrescaler;
  }
  else
  {

    ((void)0U);

    TIM_TI4_SetConfig(htim->Instance,
                      sConfig->ICPolarity,
                      sConfig->ICSelection,
                      sConfig->ICFilter);


    htim->Instance->CCMR2 &= ~(0x3UL << (10U));


    htim->Instance->CCMR2 |= (sConfig->ICPrescaler << 8U);
  }

  htim->State = HAL_TIM_STATE_READY;

  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}
# 3623 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim,
                                            TIM_OC_InitTypeDef *sConfig,
                                            uint32_t Channel)
{

  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);


  do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);

  htim->State = HAL_TIM_STATE_BUSY;

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((void)0U);


      TIM_OC1_SetConfig(htim->Instance, sConfig);


      htim->Instance->CCMR1 |= (0x1UL << (3U));


      htim->Instance->CCMR1 &= ~(0x1UL << (2U));
      htim->Instance->CCMR1 |= sConfig->OCFastMode;
      break;
    }

    case 0x00000004U:
    {

      ((void)0U);


      TIM_OC2_SetConfig(htim->Instance, sConfig);


      htim->Instance->CCMR1 |= (0x1UL << (11U));


      htim->Instance->CCMR1 &= ~(0x1UL << (10U));
      htim->Instance->CCMR1 |= sConfig->OCFastMode << 8U;
      break;
    }

    case 0x00000008U:
    {

      ((void)0U);


      TIM_OC3_SetConfig(htim->Instance, sConfig);


      htim->Instance->CCMR2 |= (0x1UL << (3U));


      htim->Instance->CCMR2 &= ~(0x1UL << (2U));
      htim->Instance->CCMR2 |= sConfig->OCFastMode;
      break;
    }

    case 0x0000000CU:
    {

      ((void)0U);


      TIM_OC4_SetConfig(htim->Instance, sConfig);


      htim->Instance->CCMR2 |= (0x1UL << (11U));


      htim->Instance->CCMR2 &= ~(0x1UL << (10U));
      htim->Instance->CCMR2 |= sConfig->OCFastMode << 8U;
      break;
    }


    case 0x00000010U:
    {

      ((void)0U);


      TIM_OC5_SetConfig(htim->Instance, sConfig);


      htim->Instance->CCMR3 |= (0x1UL << (3U));


      htim->Instance->CCMR3 &= ~(0x1UL << (2U));
      htim->Instance->CCMR3 |= sConfig->OCFastMode;
      break;
    }



    case 0x00000014U:
    {

      ((void)0U);


      TIM_OC6_SetConfig(htim->Instance, sConfig);


      htim->Instance->CCMR3 |= (0x1UL << (11U));


      htim->Instance->CCMR3 &= ~(0x1UL << (10U));
      htim->Instance->CCMR3 |= sConfig->OCFastMode << 8U;
      break;
    }


    default:
      break;
  }

  htim->State = HAL_TIM_STATE_READY;

  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}
# 3776 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_OnePulse_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef *sConfig,
                                                 uint32_t OutputChannel, uint32_t InputChannel)
{
  TIM_OC_InitTypeDef temp1;


  ((void)0U);
  ((void)0U);

  if (OutputChannel != InputChannel)
  {

    do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);

    htim->State = HAL_TIM_STATE_BUSY;


    temp1.OCMode = sConfig->OCMode;
    temp1.Pulse = sConfig->Pulse;
    temp1.OCPolarity = sConfig->OCPolarity;
    temp1.OCNPolarity = sConfig->OCNPolarity;
    temp1.OCIdleState = sConfig->OCIdleState;
    temp1.OCNIdleState = sConfig->OCNIdleState;

    switch (OutputChannel)
    {
      case 0x00000000U:
      {
        ((void)0U);

        TIM_OC1_SetConfig(htim->Instance, &temp1);
        break;
      }
      case 0x00000004U:
      {
        ((void)0U);

        TIM_OC2_SetConfig(htim->Instance, &temp1);
        break;
      }
      default:
        break;
    }

    switch (InputChannel)
    {
      case 0x00000000U:
      {
        ((void)0U);

        TIM_TI1_SetConfig(htim->Instance, sConfig->ICPolarity,
                          sConfig->ICSelection, sConfig->ICFilter);


        htim->Instance->CCMR1 &= ~(0x3UL << (2U));


        htim->Instance->SMCR &= ~(0x7UL << (4U));
        htim->Instance->SMCR |= ((0x1UL << (4U)) | (0x4UL << (4U)));


        htim->Instance->SMCR &= ~(0x10007UL << (0U));
        htim->Instance->SMCR |= ((0x00000004U) | (0x00000002U));
        break;
      }
      case 0x00000004U:
      {
        ((void)0U);

        TIM_TI2_SetConfig(htim->Instance, sConfig->ICPolarity,
                          sConfig->ICSelection, sConfig->ICFilter);


        htim->Instance->CCMR1 &= ~(0x3UL << (10U));


        htim->Instance->SMCR &= ~(0x7UL << (4U));
        htim->Instance->SMCR |= ((0x2UL << (4U)) | (0x4UL << (4U)));


        htim->Instance->SMCR &= ~(0x10007UL << (0U));
        htim->Instance->SMCR |= ((0x00000004U) | (0x00000002U));
        break;
      }

      default:
        break;
    }

    htim->State = HAL_TIM_STATE_READY;

    do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

    return HAL_OK;
  }
  else
  {
    return HAL_ERROR;
  }
}
# 3920 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                              uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength)
{
  return HAL_TIM_DMABurst_MultiWriteStart(htim, BurstBaseAddress, BurstRequestSrc, BurstBuffer, BurstLength,
                                          ((BurstLength) >> 8U) + 1U);
}
# 3971 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_DMABurst_MultiWriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                                   uint32_t BurstRequestSrc, uint32_t *BurstBuffer,
                                                   uint32_t BurstLength, uint32_t DataLength)
{

  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_BUSY)
  {
    return HAL_BUSY;
  }
  else if (htim->State == HAL_TIM_STATE_READY)
  {
    if ((BurstBuffer == 
# 3988 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
                       ((void *)0)
# 3988 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                           ) && (BurstLength > 0U))
    {
      return HAL_ERROR;
    }
    else
    {
      htim->State = HAL_TIM_STATE_BUSY;
    }
  }
  else
  {

  }
  switch (BurstRequestSrc)
  {
    case (0x1UL << (8U)):
    {

      htim->hdma[((uint16_t) 0x0000)]->XferCpltCallback = TIM_DMAPeriodElapsedCplt;
      htim->hdma[((uint16_t) 0x0000)]->XferHalfCpltCallback = TIM_DMAPeriodElapsedHalfCplt;


      htim->hdma[((uint16_t) 0x0000)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0000)], (uint32_t)BurstBuffer,
                           (uint32_t)&htim->Instance->DMAR, DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (9U)):
    {

      htim->hdma[((uint16_t) 0x0001)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0001)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0001)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0001)], (uint32_t)BurstBuffer,
                           (uint32_t)&htim->Instance->DMAR, DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (10U)):
    {

      htim->hdma[((uint16_t) 0x0002)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0002)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0002)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0002)], (uint32_t)BurstBuffer,
                           (uint32_t)&htim->Instance->DMAR, DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (11U)):
    {

      htim->hdma[((uint16_t) 0x0003)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0003)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0003)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0003)], (uint32_t)BurstBuffer,
                           (uint32_t)&htim->Instance->DMAR, DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (12U)):
    {

      htim->hdma[((uint16_t) 0x0004)]->XferCpltCallback = TIM_DMADelayPulseCplt;
      htim->hdma[((uint16_t) 0x0004)]->XferHalfCpltCallback = TIM_DMADelayPulseHalfCplt;


      htim->hdma[((uint16_t) 0x0004)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0004)], (uint32_t)BurstBuffer,
                           (uint32_t)&htim->Instance->DMAR, DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (13U)):
    {

      htim->hdma[((uint16_t) 0x0005)]->XferCpltCallback = TIMEx_DMACommutationCplt;
      htim->hdma[((uint16_t) 0x0005)]->XferHalfCpltCallback = TIMEx_DMACommutationHalfCplt;


      htim->hdma[((uint16_t) 0x0005)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0005)], (uint32_t)BurstBuffer,
                           (uint32_t)&htim->Instance->DMAR, DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (14U)):
    {

      htim->hdma[((uint16_t) 0x0006)]->XferCpltCallback = TIM_DMATriggerCplt;
      htim->hdma[((uint16_t) 0x0006)]->XferHalfCpltCallback = TIM_DMATriggerHalfCplt;


      htim->hdma[((uint16_t) 0x0006)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0006)], (uint32_t)BurstBuffer,
                           (uint32_t)&htim->Instance->DMAR, DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    default:
      break;
  }


  htim->Instance->DCR = (BurstBaseAddress | BurstLength);

  ((htim)->Instance->DIER |= (BurstRequestSrc));

  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}







HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc)
{
  HAL_StatusTypeDef status = HAL_OK;

  ((void)0U);


  switch (BurstRequestSrc)
  {
    case (0x1UL << (8U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0000)]);
      break;
    }
    case (0x1UL << (9U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0001)]);
      break;
    }
    case (0x1UL << (10U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0002)]);
      break;
    }
    case (0x1UL << (11U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0003)]);
      break;
    }
    case (0x1UL << (12U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0004)]);
      break;
    }
    case (0x1UL << (13U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0005)]);
      break;
    }
    case (0x1UL << (14U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0006)]);
      break;
    }
    default:
      break;
  }

  if (HAL_OK == status)
  {

    ((htim)->Instance->DIER &= ~(BurstRequestSrc));
  }


  return status;
}
# 4244 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                             uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength)
{
  return HAL_TIM_DMABurst_MultiReadStart(htim, BurstBaseAddress, BurstRequestSrc, BurstBuffer, BurstLength,
                                         ((BurstLength) >> 8U) + 1U);
}
# 4295 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_DMABurst_MultiReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                                  uint32_t BurstRequestSrc, uint32_t *BurstBuffer,
                                                  uint32_t BurstLength, uint32_t DataLength)
{

  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);
  ((void)0U);

  if (htim->State == HAL_TIM_STATE_BUSY)
  {
    return HAL_BUSY;
  }
  else if (htim->State == HAL_TIM_STATE_READY)
  {
    if ((BurstBuffer == 
# 4312 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c" 3 4
                       ((void *)0)
# 4312 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
                           ) && (BurstLength > 0U))
    {
      return HAL_ERROR;
    }
    else
    {
      htim->State = HAL_TIM_STATE_BUSY;
    }
  }
  else
  {

  }
  switch (BurstRequestSrc)
  {
    case (0x1UL << (8U)):
    {

      htim->hdma[((uint16_t) 0x0000)]->XferCpltCallback = TIM_DMAPeriodElapsedCplt;
      htim->hdma[((uint16_t) 0x0000)]->XferHalfCpltCallback = TIM_DMAPeriodElapsedHalfCplt;


      htim->hdma[((uint16_t) 0x0000)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0000)], (uint32_t)&htim->Instance->DMAR, (uint32_t)BurstBuffer,
                           DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (9U)):
    {

      htim->hdma[((uint16_t) 0x0001)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0001)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0001)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0001)], (uint32_t)&htim->Instance->DMAR, (uint32_t)BurstBuffer,
                           DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (10U)):
    {

      htim->hdma[((uint16_t) 0x0002)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0002)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0002)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0002)], (uint32_t)&htim->Instance->DMAR, (uint32_t)BurstBuffer,
                           DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (11U)):
    {

      htim->hdma[((uint16_t) 0x0003)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0003)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0003)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0003)], (uint32_t)&htim->Instance->DMAR, (uint32_t)BurstBuffer,
                           DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (12U)):
    {

      htim->hdma[((uint16_t) 0x0004)]->XferCpltCallback = TIM_DMACaptureCplt;
      htim->hdma[((uint16_t) 0x0004)]->XferHalfCpltCallback = TIM_DMACaptureHalfCplt;


      htim->hdma[((uint16_t) 0x0004)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0004)], (uint32_t)&htim->Instance->DMAR, (uint32_t)BurstBuffer,
                           DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (13U)):
    {

      htim->hdma[((uint16_t) 0x0005)]->XferCpltCallback = TIMEx_DMACommutationCplt;
      htim->hdma[((uint16_t) 0x0005)]->XferHalfCpltCallback = TIMEx_DMACommutationHalfCplt;


      htim->hdma[((uint16_t) 0x0005)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0005)], (uint32_t)&htim->Instance->DMAR, (uint32_t)BurstBuffer,
                           DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    case (0x1UL << (14U)):
    {

      htim->hdma[((uint16_t) 0x0006)]->XferCpltCallback = TIM_DMATriggerCplt;
      htim->hdma[((uint16_t) 0x0006)]->XferHalfCpltCallback = TIM_DMATriggerHalfCplt;


      htim->hdma[((uint16_t) 0x0006)]->XferErrorCallback = TIM_DMAError ;


      if (HAL_DMA_Start_IT(htim->hdma[((uint16_t) 0x0006)], (uint32_t)&htim->Instance->DMAR, (uint32_t)BurstBuffer,
                           DataLength) != HAL_OK)
      {
        return HAL_ERROR;
      }
      break;
    }
    default:
      break;
  }


  htim->Instance->DCR = (BurstBaseAddress | BurstLength);


  ((htim)->Instance->DIER |= (BurstRequestSrc));

  htim->State = HAL_TIM_STATE_READY;


  return HAL_OK;
}







HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc)
{
  HAL_StatusTypeDef status = HAL_OK;

  ((void)0U);


  switch (BurstRequestSrc)
  {
    case (0x1UL << (8U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0000)]);
      break;
    }
    case (0x1UL << (9U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0001)]);
      break;
    }
    case (0x1UL << (10U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0002)]);
      break;
    }
    case (0x1UL << (11U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0003)]);
      break;
    }
    case (0x1UL << (12U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0004)]);
      break;
    }
    case (0x1UL << (13U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0005)]);
      break;
    }
    case (0x1UL << (14U)):
    {
      status = HAL_DMA_Abort_IT(htim->hdma[((uint16_t) 0x0006)]);
      break;
    }
    default:
      break;
  }

  if (HAL_OK == status)
  {

    ((htim)->Instance->DIER &= ~(BurstRequestSrc));
  }


  return status;
}
# 4547 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_GenerateEvent(TIM_HandleTypeDef *htim, uint32_t EventSource)
{

  ((void)0U);
  ((void)0U);


  do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);


  htim->State = HAL_TIM_STATE_BUSY;


  htim->Instance->EGR = EventSource;


  htim->State = HAL_TIM_STATE_READY;

  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);


  return HAL_OK;
}
# 4587 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_ConfigOCrefClear(TIM_HandleTypeDef *htim,
                                           TIM_ClearInputConfigTypeDef *sClearInputConfig,
                                           uint32_t Channel)
{

  ((void)0U);
  ((void)0U);


  do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);

  htim->State = HAL_TIM_STATE_BUSY;

  switch (sClearInputConfig->ClearInputSource)
  {
    case 0x00000000U:
    {


      ((htim->Instance->SMCR) &= ~(((0x1UL << (3U)) | (0xFUL << (8U)) | (0x3UL << (12U)) | (0x1UL << (14U)) | (0x1UL << (15U)))));



      break;
    }

    case 0x00000002U:
    {

      ((htim->Instance->SMCR) &= ~((0x1UL << (3U))));
    }
    break;


    case 0x00000001U:
    {

      ((void)0U);
      ((void)0U);
      ((void)0U);


      if (sClearInputConfig->ClearInputPrescaler != 0x00000000U)
      {
        htim->State = HAL_TIM_STATE_READY;
        do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);
        return HAL_ERROR;
      }

      TIM_ETR_SetConfig(htim->Instance,
                        sClearInputConfig->ClearInputPrescaler,
                        sClearInputConfig->ClearInputPolarity,
                        sClearInputConfig->ClearInputFilter);



      ((htim->Instance->SMCR) |= ((0x1UL << (3U))));

      break;
    }

    default:
      break;
  }

  switch (Channel)
  {
    case 0x00000000U:
    {
      if (sClearInputConfig->ClearInputState != (uint32_t)DISABLE)
      {

        ((htim->Instance->CCMR1) |= ((0x1UL << (7U))));
      }
      else
      {

        ((htim->Instance->CCMR1) &= ~((0x1UL << (7U))));
      }
      break;
    }
    case 0x00000004U:
    {
      if (sClearInputConfig->ClearInputState != (uint32_t)DISABLE)
      {

        ((htim->Instance->CCMR1) |= ((0x1UL << (15U))));
      }
      else
      {

        ((htim->Instance->CCMR1) &= ~((0x1UL << (15U))));
      }
      break;
    }
    case 0x00000008U:
    {
      if (sClearInputConfig->ClearInputState != (uint32_t)DISABLE)
      {

        ((htim->Instance->CCMR2) |= ((0x1UL << (7U))));
      }
      else
      {

        ((htim->Instance->CCMR2) &= ~((0x1UL << (7U))));
      }
      break;
    }
    case 0x0000000CU:
    {
      if (sClearInputConfig->ClearInputState != (uint32_t)DISABLE)
      {

        ((htim->Instance->CCMR2) |= ((0x1UL << (15U))));
      }
      else
      {

        ((htim->Instance->CCMR2) &= ~((0x1UL << (15U))));
      }
      break;
    }

    case 0x00000010U:
    {
      if (sClearInputConfig->ClearInputState != (uint32_t)DISABLE)
      {

        ((htim->Instance->CCMR3) |= ((0x1UL << (7U))));
      }
      else
      {

        ((htim->Instance->CCMR3) &= ~((0x1UL << (7U))));
      }
      break;
    }


    case 0x00000014U:
    {
      if (sClearInputConfig->ClearInputState != (uint32_t)DISABLE)
      {

        ((htim->Instance->CCMR3) |= ((0x1UL << (15U))));
      }
      else
      {

        ((htim->Instance->CCMR3) &= ~((0x1UL << (15U))));
      }
      break;
    }

    default:
      break;
  }

  htim->State = HAL_TIM_STATE_READY;

  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}
# 4760 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim, TIM_ClockConfigTypeDef *sClockSourceConfig)
{
  uint32_t tmpsmcr;


  do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);

  htim->State = HAL_TIM_STATE_BUSY;


  ((void)0U);


  tmpsmcr = htim->Instance->SMCR;
  tmpsmcr &= ~((0x10007UL << (0U)) | (0x7UL << (4U)));
  tmpsmcr &= ~((0xFUL << (8U)) | (0x3UL << (12U)) | (0x1UL << (14U)) | (0x1UL << (15U)));
  htim->Instance->SMCR = tmpsmcr;

  switch (sClockSourceConfig->ClockSource)
  {
    case (0x1UL << (12U)):
    {
      ((void)0U);
      break;
    }

    case ((0x1UL << (4U)) | (0x2UL << (4U)) | (0x4UL << (4U))):
    {

      ((void)0U);


      ((void)0U);
      ((void)0U);
      ((void)0U);


      TIM_ETR_SetConfig(htim->Instance,
                        sClockSourceConfig->ClockPrescaler,
                        sClockSourceConfig->ClockPolarity,
                        sClockSourceConfig->ClockFilter);


      tmpsmcr = htim->Instance->SMCR;
      tmpsmcr |= (((0x00000004U) | (0x00000002U) | (0x00000001U)) | ((0x1UL << (4U)) | (0x2UL << (4U)) | (0x4UL << (4U))));

      htim->Instance->SMCR = tmpsmcr;
      break;
    }

    case (0x2UL << (12U)):
    {

      ((void)0U);


      ((void)0U);
      ((void)0U);
      ((void)0U);


      TIM_ETR_SetConfig(htim->Instance,
                        sClockSourceConfig->ClockPrescaler,
                        sClockSourceConfig->ClockPolarity,
                        sClockSourceConfig->ClockFilter);

      htim->Instance->SMCR |= (0x1UL << (14U));
      break;
    }

    case ((0x1UL << (4U)) | (0x4UL << (4U))):
    {

      ((void)0U);


      ((void)0U);
      ((void)0U);

      TIM_TI1_ConfigInputStage(htim->Instance,
                               sClockSourceConfig->ClockPolarity,
                               sClockSourceConfig->ClockFilter);
      TIM_ITRx_SetConfig(htim->Instance, ((0x1UL << (4U)) | (0x4UL << (4U))));
      break;
    }

    case ((0x2UL << (4U)) | (0x4UL << (4U))):
    {

      ((void)0U);


      ((void)0U);
      ((void)0U);

      TIM_TI2_ConfigInputStage(htim->Instance,
                               sClockSourceConfig->ClockPolarity,
                               sClockSourceConfig->ClockFilter);
      TIM_ITRx_SetConfig(htim->Instance, ((0x2UL << (4U)) | (0x4UL << (4U))));
      break;
    }

    case (0x4UL << (4U)):
    {

      ((void)0U);


      ((void)0U);
      ((void)0U);

      TIM_TI1_ConfigInputStage(htim->Instance,
                               sClockSourceConfig->ClockPolarity,
                               sClockSourceConfig->ClockFilter);
      TIM_ITRx_SetConfig(htim->Instance, (0x4UL << (4U)));
      break;
    }

    case 0x00000000U:
    case (0x1UL << (4U)):
    case (0x2UL << (4U)):
    case ((0x1UL << (4U)) | (0x2UL << (4U))):
    {

      ((void)0U);

      TIM_ITRx_SetConfig(htim->Instance, sClockSourceConfig->ClockSource);
      break;
    }

    default:
      break;
  }
  htim->State = HAL_TIM_STATE_READY;

  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}
# 4912 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_ConfigTI1Input(TIM_HandleTypeDef *htim, uint32_t TI1_Selection)
{
  uint32_t tmpcr2;


  ((void)0U);
  ((void)0U);


  tmpcr2 = htim->Instance->CR2;


  tmpcr2 &= ~(0x1UL << (7U));


  tmpcr2 |= TI1_Selection;


  htim->Instance->CR2 = tmpcr2;

  return HAL_OK;
}
# 4944 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig)
{

  ((void)0U);
  ((void)0U);
  ((void)0U);

  do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);

  htim->State = HAL_TIM_STATE_BUSY;

  if (TIM_SlaveTimer_SetConfig(htim, sSlaveConfig) != HAL_OK)
  {
    htim->State = HAL_TIM_STATE_READY;
    do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);
    return HAL_ERROR;
  }


  ((htim)->Instance->DIER &= ~((0x1UL << (6U))));


  ((htim)->Instance->DIER &= ~((0x1UL << (14U))));

  htim->State = HAL_TIM_STATE_READY;

  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}
# 4984 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro_IT(TIM_HandleTypeDef *htim,
                                                TIM_SlaveConfigTypeDef *sSlaveConfig)
{

  ((void)0U);
  ((void)0U);
  ((void)0U);

  do{ if((htim)->Lock == HAL_LOCKED) { return HAL_BUSY; } else { (htim)->Lock = HAL_LOCKED; } }while (0U);

  htim->State = HAL_TIM_STATE_BUSY;

  if (TIM_SlaveTimer_SetConfig(htim, sSlaveConfig) != HAL_OK)
  {
    htim->State = HAL_TIM_STATE_READY;
    do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);
    return HAL_ERROR;
  }


  ((htim)->Instance->DIER |= ((0x1UL << (6U))));


  ((htim)->Instance->DIER &= ~((0x1UL << (14U))));

  htim->State = HAL_TIM_STATE_READY;

  do{ (htim)->Lock = HAL_UNLOCKED; }while (0U);

  return HAL_OK;
}
# 5027 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
uint32_t HAL_TIM_ReadCapturedValue(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  uint32_t tmpreg = 0U;

  switch (Channel)
  {
    case 0x00000000U:
    {

      ((void)0U);


      tmpreg = htim->Instance->CCR1;

      break;
    }
    case 0x00000004U:
    {

      ((void)0U);


      tmpreg = htim->Instance->CCR2;

      break;
    }

    case 0x00000008U:
    {

      ((void)0U);


      tmpreg = htim->Instance->CCR3;

      break;
    }

    case 0x0000000CU:
    {

      ((void)0U);


      tmpreg = htim->Instance->CCR4;

      break;
    }

    default:
      break;
  }

  return tmpreg;
}
# 5111 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
__attribute__((weak)) void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_PeriodElapsedHalfCpltCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_IC_CaptureHalfCpltCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_PWM_PulseFinishedHalfCpltCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_TriggerHalfCpltCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}






__attribute__((weak)) void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim)
{

  (void)htim;




}
# 5781 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
HAL_TIM_StateTypeDef HAL_TIM_Base_GetState(TIM_HandleTypeDef *htim)
{
  return htim->State;
}






HAL_TIM_StateTypeDef HAL_TIM_OC_GetState(TIM_HandleTypeDef *htim)
{
  return htim->State;
}






HAL_TIM_StateTypeDef HAL_TIM_PWM_GetState(TIM_HandleTypeDef *htim)
{
  return htim->State;
}






HAL_TIM_StateTypeDef HAL_TIM_IC_GetState(TIM_HandleTypeDef *htim)
{
  return htim->State;
}






HAL_TIM_StateTypeDef HAL_TIM_OnePulse_GetState(TIM_HandleTypeDef *htim)
{
  return htim->State;
}






HAL_TIM_StateTypeDef HAL_TIM_Encoder_GetState(TIM_HandleTypeDef *htim)
{
  return htim->State;
}
# 5853 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
void TIM_DMAError(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;




  HAL_TIM_ErrorCallback(htim);

}






void TIM_DMADelayPulseCplt(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;

  if (hdma == htim->hdma[((uint16_t) 0x0001)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_1;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0002)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_2;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0003)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_3;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0004)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_4;
  }
  else
  {

  }




  HAL_TIM_PWM_PulseFinishedCallback(htim);


  htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
}






void TIM_DMADelayPulseHalfCplt(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;

  if (hdma == htim->hdma[((uint16_t) 0x0001)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_1;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0002)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_2;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0003)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_3;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0004)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_4;
  }
  else
  {

  }




  HAL_TIM_PWM_PulseFinishedHalfCpltCallback(htim);


  htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
}






void TIM_DMACaptureCplt(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;

  if (hdma == htim->hdma[((uint16_t) 0x0001)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_1;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0002)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_2;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0003)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_3;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0004)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_4;
  }
  else
  {

  }




  HAL_TIM_IC_CaptureCallback(htim);


  htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
}






void TIM_DMACaptureHalfCplt(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;

  if (hdma == htim->hdma[((uint16_t) 0x0001)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_1;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0002)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_2;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0003)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_3;
  }
  else if (hdma == htim->hdma[((uint16_t) 0x0004)])
  {
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_4;
  }
  else
  {

  }




  HAL_TIM_IC_CaptureHalfCpltCallback(htim);


  htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
}






static void TIM_DMAPeriodElapsedCplt(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;




  HAL_TIM_PeriodElapsedCallback(htim);

}






static void TIM_DMAPeriodElapsedHalfCplt(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;




  HAL_TIM_PeriodElapsedHalfCpltCallback(htim);

}






static void TIM_DMATriggerCplt(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;




  HAL_TIM_TriggerCallback(htim);

}






static void TIM_DMATriggerHalfCplt(DMA_HandleTypeDef *hdma)
{
  TIM_HandleTypeDef *htim = (TIM_HandleTypeDef *)((DMA_HandleTypeDef *)hdma)->Parent;

  htim->State = HAL_TIM_STATE_READY;




  HAL_TIM_TriggerHalfCpltCallback(htim);

}







void TIM_Base_SetConfig(TIM_TypeDef *TIMx, TIM_Base_InitTypeDef *Structure)
{
  uint32_t tmpcr1;
  tmpcr1 = TIMx->CR1;


  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) (0x40000000UL + 0x00000000UL)))))
  {

    tmpcr1 &= ~((0x1UL << (4U)) | (0x3UL << (5U)));
    tmpcr1 |= Structure->CounterMode;
  }

  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) (0x40000000UL + 0x00000000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))))
  {

    tmpcr1 &= ~(0x3UL << (8U));
    tmpcr1 |= (uint32_t)Structure->ClockDivision;
  }


  (((tmpcr1)) = ((((((tmpcr1))) & (~((0x1UL << (7U))))) | (Structure->AutoReloadPreload))));

  TIMx->CR1 = tmpcr1;


  TIMx->ARR = (uint32_t)Structure->Period ;


  TIMx->PSC = Structure->Prescaler;

  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))))
  {

    TIMx->RCR = Structure->RepetitionCounter;
  }



  TIMx->EGR = (0x1UL << (0U));
}







static void TIM_OC1_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
{
  uint32_t tmpccmrx;
  uint32_t tmpccer;
  uint32_t tmpcr2;


  TIMx->CCER &= ~(0x1UL << (0U));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;


  tmpccmrx = TIMx->CCMR1;


  tmpccmrx &= ~(0x1007UL << (4U));
  tmpccmrx &= ~(0x3UL << (0U));

  tmpccmrx |= OC_Config->OCMode;


  tmpccer &= ~(0x1UL << (1U));

  tmpccer |= OC_Config->OCPolarity;

  if (((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) && (((0x00000000U) == 0x00000000U) || ((0x00000000U) == 0x00000004U) || ((0x00000000U) == 0x00000008U))) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) && ((0x00000000U) == 0x00000000U)) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) && ((0x00000000U) == 0x00000000U)) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL))) && ((0x00000000U) == 0x00000000U))))
  {

    ((void)0U);


    tmpccer &= ~(0x1UL << (3U));

    tmpccer |= OC_Config->OCNPolarity;

    tmpccer &= ~(0x1UL << (2U));
  }

  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))))
  {

    ((void)0U);
    ((void)0U);


    tmpcr2 &= ~(0x1UL << (8U));
    tmpcr2 &= ~(0x1UL << (9U));

    tmpcr2 |= OC_Config->OCIdleState;

    tmpcr2 |= OC_Config->OCNIdleState;
  }


  TIMx->CR2 = tmpcr2;


  TIMx->CCMR1 = tmpccmrx;


  TIMx->CCR1 = OC_Config->Pulse;


  TIMx->CCER = tmpccer;
}







void TIM_OC2_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
{
  uint32_t tmpccmrx;
  uint32_t tmpccer;
  uint32_t tmpcr2;


  TIMx->CCER &= ~(0x1UL << (4U));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;


  tmpccmrx = TIMx->CCMR1;


  tmpccmrx &= ~(0x1007UL << (12U));
  tmpccmrx &= ~(0x3UL << (8U));


  tmpccmrx |= (OC_Config->OCMode << 8U);


  tmpccer &= ~(0x1UL << (5U));

  tmpccer |= (OC_Config->OCPolarity << 4U);

  if (((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) && (((0x00000004U) == 0x00000000U) || ((0x00000004U) == 0x00000004U) || ((0x00000004U) == 0x00000008U))) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) && ((0x00000004U) == 0x00000000U)) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) && ((0x00000004U) == 0x00000000U)) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL))) && ((0x00000004U) == 0x00000000U))))
  {
    ((void)0U);


    tmpccer &= ~(0x1UL << (7U));

    tmpccer |= (OC_Config->OCNPolarity << 4U);

    tmpccer &= ~(0x1UL << (6U));

  }

  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))))
  {

    ((void)0U);
    ((void)0U);


    tmpcr2 &= ~(0x1UL << (10U));

    tmpcr2 &= ~(0x1UL << (11U));


    tmpcr2 |= (OC_Config->OCIdleState << 2U);

    tmpcr2 |= (OC_Config->OCNIdleState << 2U);
  }


  TIMx->CR2 = tmpcr2;


  TIMx->CCMR1 = tmpccmrx;


  TIMx->CCR2 = OC_Config->Pulse;


  TIMx->CCER = tmpccer;
}







static void TIM_OC3_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
{
  uint32_t tmpccmrx;
  uint32_t tmpccer;
  uint32_t tmpcr2;


  TIMx->CCER &= ~(0x1UL << (8U));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;


  tmpccmrx = TIMx->CCMR2;


  tmpccmrx &= ~(0x1007UL << (4U));
  tmpccmrx &= ~(0x3UL << (0U));

  tmpccmrx |= OC_Config->OCMode;


  tmpccer &= ~(0x1UL << (9U));

  tmpccer |= (OC_Config->OCPolarity << 8U);

  if (((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) && (((0x00000008U) == 0x00000000U) || ((0x00000008U) == 0x00000004U) || ((0x00000008U) == 0x00000008U))) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) && ((0x00000008U) == 0x00000000U)) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) && ((0x00000008U) == 0x00000000U)) || (((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL))) && ((0x00000008U) == 0x00000000U))))
  {
    ((void)0U);


    tmpccer &= ~(0x1UL << (11U));

    tmpccer |= (OC_Config->OCNPolarity << 8U);

    tmpccer &= ~(0x1UL << (10U));
  }


  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))))
  {

    ((void)0U);
    ((void)0U);


    tmpcr2 &= ~(0x1UL << (12U));
    tmpcr2 &= ~(0x1UL << (13U));

    tmpcr2 |= (OC_Config->OCIdleState << 4U);

    tmpcr2 |= (OC_Config->OCNIdleState << 4U);
  }



  TIMx->CR2 = tmpcr2;


  TIMx->CCMR2 = tmpccmrx;


  TIMx->CCR3 = OC_Config->Pulse;


  TIMx->CCER = tmpccer;
}







static void TIM_OC4_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
{
  uint32_t tmpccmrx;
  uint32_t tmpccer;
  uint32_t tmpcr2;


  TIMx->CCER &= ~(0x1UL << (12U));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;


  tmpccmrx = TIMx->CCMR2;


  tmpccmrx &= ~(0x1007UL << (12U));
  tmpccmrx &= ~(0x3UL << (8U));


  tmpccmrx |= (OC_Config->OCMode << 8U);


  tmpccer &= ~(0x1UL << (13U));

  tmpccer |= (OC_Config->OCPolarity << 12U);


  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))))
  {

    ((void)0U);


    tmpcr2 &= ~(0x1UL << (14U));


    tmpcr2 |= (OC_Config->OCIdleState << 6U);
  }



  TIMx->CR2 = tmpcr2;


  TIMx->CCMR2 = tmpccmrx;


  TIMx->CCR4 = OC_Config->Pulse;


  TIMx->CCER = tmpccer;
}
# 6448 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_OC5_SetConfig(TIM_TypeDef *TIMx,
                              TIM_OC_InitTypeDef *OC_Config)
{
  uint32_t tmpccmrx;
  uint32_t tmpccer;
  uint32_t tmpcr2;


  TIMx->CCER &= ~(0x1UL << (16U));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;

  tmpccmrx = TIMx->CCMR3;


  tmpccmrx &= ~((0x1007UL << (4U)));

  tmpccmrx |= OC_Config->OCMode;


  tmpccer &= ~(0x1UL << (17U));

  tmpccer |= (OC_Config->OCPolarity << 16U);

  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))))
  {

    tmpcr2 &= ~(0x1UL << (16U));

    tmpcr2 |= (OC_Config->OCIdleState << 8U);
  }

  TIMx->CR2 = tmpcr2;


  TIMx->CCMR3 = tmpccmrx;


  TIMx->CCR5 = OC_Config->Pulse;


  TIMx->CCER = tmpccer;
}
# 6503 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_OC6_SetConfig(TIM_TypeDef *TIMx,
                              TIM_OC_InitTypeDef *OC_Config)
{
  uint32_t tmpccmrx;
  uint32_t tmpccer;
  uint32_t tmpcr2;


  TIMx->CCER &= ~(0x1UL << (20U));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;

  tmpccmrx = TIMx->CCMR3;


  tmpccmrx &= ~((0x1007UL << (12U)));

  tmpccmrx |= (OC_Config->OCMode << 8U);


  tmpccer &= (uint32_t)~(0x1UL << (21U));

  tmpccer |= (OC_Config->OCPolarity << 20U);

  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004400UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004800UL)))))
  {

    tmpcr2 &= ~(0x1UL << (18U));

    tmpcr2 |= (OC_Config->OCIdleState << 10U);
  }


  TIMx->CR2 = tmpcr2;


  TIMx->CCMR3 = tmpccmrx;


  TIMx->CCR6 = OC_Config->Pulse;


  TIMx->CCER = tmpccer;
}
# 6558 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static HAL_StatusTypeDef TIM_SlaveTimer_SetConfig(TIM_HandleTypeDef *htim,
                                                  TIM_SlaveConfigTypeDef *sSlaveConfig)
{
  uint32_t tmpsmcr;
  uint32_t tmpccmr1;
  uint32_t tmpccer;


  tmpsmcr = htim->Instance->SMCR;


  tmpsmcr &= ~(0x7UL << (4U));

  tmpsmcr |= sSlaveConfig->InputTrigger;


  tmpsmcr &= ~(0x10007UL << (0U));

  tmpsmcr |= sSlaveConfig->SlaveMode;


  htim->Instance->SMCR = tmpsmcr;


  switch (sSlaveConfig->InputTrigger)
  {
    case ((0x1UL << (4U)) | (0x2UL << (4U)) | (0x4UL << (4U))):
    {

      ((void)0U);
      ((void)0U);
      ((void)0U);
      ((void)0U);

      TIM_ETR_SetConfig(htim->Instance,
                        sSlaveConfig->TriggerPrescaler,
                        sSlaveConfig->TriggerPolarity,
                        sSlaveConfig->TriggerFilter);
      break;
    }

    case (0x4UL << (4U)):
    {

      ((void)0U);
      ((void)0U);

      if(sSlaveConfig->SlaveMode == ((0x00000004U) | (0x00000001U)))
      {
        return HAL_ERROR;
      }


      tmpccer = htim->Instance->CCER;
      htim->Instance->CCER &= ~(0x1UL << (0U));
      tmpccmr1 = htim->Instance->CCMR1;


      tmpccmr1 &= ~(0xFUL << (4U));
      tmpccmr1 |= ((sSlaveConfig->TriggerFilter) << 4U);


      htim->Instance->CCMR1 = tmpccmr1;
      htim->Instance->CCER = tmpccer;
      break;
    }

    case ((0x1UL << (4U)) | (0x4UL << (4U))):
    {

      ((void)0U);
      ((void)0U);
      ((void)0U);


      TIM_TI1_ConfigInputStage(htim->Instance,
                               sSlaveConfig->TriggerPolarity,
                               sSlaveConfig->TriggerFilter);
      break;
    }

    case ((0x2UL << (4U)) | (0x4UL << (4U))):
    {

      ((void)0U);
      ((void)0U);
      ((void)0U);


      TIM_TI2_ConfigInputStage(htim->Instance,
                               sSlaveConfig->TriggerPolarity,
                               sSlaveConfig->TriggerFilter);
      break;
    }

    case 0x00000000U:
    case (0x1UL << (4U)):
    case (0x2UL << (4U)):
    case ((0x1UL << (4U)) | (0x2UL << (4U))):
    {

      ((void)0U);
      break;
    }

    default:
      break;
  }
  return HAL_OK;
}
# 6689 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
void TIM_TI1_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection,
                       uint32_t TIM_ICFilter)
{
  uint32_t tmpccmr1;
  uint32_t tmpccer;


  TIMx->CCER &= ~(0x1UL << (0U));
  tmpccmr1 = TIMx->CCMR1;
  tmpccer = TIMx->CCER;


  if ((((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00002C00UL))) || ((TIMx) == ((TIM_TypeDef *) (0x40000000UL + 0x00000000UL))) || ((TIMx) == ((TIM_TypeDef *) ((0x40000000UL + 0x00010000UL) + 0x00004000UL)))) != RESET)
  {
    tmpccmr1 &= ~(0x3UL << (0U));
    tmpccmr1 |= TIM_ICSelection;
  }
  else
  {
    tmpccmr1 |= (0x1UL << (0U));
  }


  tmpccmr1 &= ~(0xFUL << (4U));
  tmpccmr1 |= ((TIM_ICFilter << 4U) & (0xFUL << (4U)));


  tmpccer &= ~((0x1UL << (1U)) | (0x1UL << (3U)));
  tmpccer |= (TIM_ICPolarity & ((0x1UL << (1U)) | (0x1UL << (3U))));


  TIMx->CCMR1 = tmpccmr1;
  TIMx->CCER = tmpccer;
}
# 6736 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_TI1_ConfigInputStage(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICFilter)
{
  uint32_t tmpccmr1;
  uint32_t tmpccer;


  tmpccer = TIMx->CCER;
  TIMx->CCER &= ~(0x1UL << (0U));
  tmpccmr1 = TIMx->CCMR1;


  tmpccmr1 &= ~(0xFUL << (4U));
  tmpccmr1 |= (TIM_ICFilter << 4U);


  tmpccer &= ~((0x1UL << (1U)) | (0x1UL << (3U)));
  tmpccer |= TIM_ICPolarity;


  TIMx->CCMR1 = tmpccmr1;
  TIMx->CCER = tmpccer;
}
# 6779 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_TI2_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection,
                              uint32_t TIM_ICFilter)
{
  uint32_t tmpccmr1;
  uint32_t tmpccer;


  TIMx->CCER &= ~(0x1UL << (4U));
  tmpccmr1 = TIMx->CCMR1;
  tmpccer = TIMx->CCER;


  tmpccmr1 &= ~(0x3UL << (8U));
  tmpccmr1 |= (TIM_ICSelection << 8U);


  tmpccmr1 &= ~(0xFUL << (12U));
  tmpccmr1 |= ((TIM_ICFilter << 12U) & (0xFUL << (12U)));


  tmpccer &= ~((0x1UL << (5U)) | (0x1UL << (7U)));
  tmpccer |= ((TIM_ICPolarity << 4U) & ((0x1UL << (5U)) | (0x1UL << (7U))));


  TIMx->CCMR1 = tmpccmr1 ;
  TIMx->CCER = tmpccer;
}
# 6819 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_TI2_ConfigInputStage(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICFilter)
{
  uint32_t tmpccmr1;
  uint32_t tmpccer;


  TIMx->CCER &= ~(0x1UL << (4U));
  tmpccmr1 = TIMx->CCMR1;
  tmpccer = TIMx->CCER;


  tmpccmr1 &= ~(0xFUL << (12U));
  tmpccmr1 |= (TIM_ICFilter << 12U);


  tmpccer &= ~((0x1UL << (5U)) | (0x1UL << (7U)));
  tmpccer |= (TIM_ICPolarity << 4U);


  TIMx->CCMR1 = tmpccmr1 ;
  TIMx->CCER = tmpccer;
}
# 6862 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_TI3_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection,
                              uint32_t TIM_ICFilter)
{
  uint32_t tmpccmr2;
  uint32_t tmpccer;


  TIMx->CCER &= ~(0x1UL << (8U));
  tmpccmr2 = TIMx->CCMR2;
  tmpccer = TIMx->CCER;


  tmpccmr2 &= ~(0x3UL << (0U));
  tmpccmr2 |= TIM_ICSelection;


  tmpccmr2 &= ~(0xFUL << (4U));
  tmpccmr2 |= ((TIM_ICFilter << 4U) & (0xFUL << (4U)));


  tmpccer &= ~((0x1UL << (9U)) | (0x1UL << (11U)));
  tmpccer |= ((TIM_ICPolarity << 8U) & ((0x1UL << (9U)) | (0x1UL << (11U))));


  TIMx->CCMR2 = tmpccmr2;
  TIMx->CCER = tmpccer;
}
# 6910 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_TI4_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection,
                              uint32_t TIM_ICFilter)
{
  uint32_t tmpccmr2;
  uint32_t tmpccer;


  TIMx->CCER &= ~(0x1UL << (12U));
  tmpccmr2 = TIMx->CCMR2;
  tmpccer = TIMx->CCER;


  tmpccmr2 &= ~(0x3UL << (8U));
  tmpccmr2 |= (TIM_ICSelection << 8U);


  tmpccmr2 &= ~(0xFUL << (12U));
  tmpccmr2 |= ((TIM_ICFilter << 12U) & (0xFUL << (12U)));


  tmpccer &= ~((0x1UL << (13U)) | (0x1UL << (15U)));
  tmpccer |= ((TIM_ICPolarity << 12U) & ((0x1UL << (13U)) | (0x1UL << (15U))));


  TIMx->CCMR2 = tmpccmr2;
  TIMx->CCER = tmpccer ;
}
# 6953 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
static void TIM_ITRx_SetConfig(TIM_TypeDef *TIMx, uint32_t InputTriggerSource)
{
  uint32_t tmpsmcr;


  tmpsmcr = TIMx->SMCR;

  tmpsmcr &= ~(0x7UL << (4U));

  tmpsmcr |= (InputTriggerSource | ((0x00000004U) | (0x00000002U) | (0x00000001U)));

  TIMx->SMCR = tmpsmcr;
}
# 6983 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
void TIM_ETR_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ExtTRGPrescaler,
                       uint32_t TIM_ExtTRGPolarity, uint32_t ExtTRGFilter)
{
  uint32_t tmpsmcr;

  tmpsmcr = TIMx->SMCR;


  tmpsmcr &= ~((0xFUL << (8U)) | (0x3UL << (12U)) | (0x1UL << (14U)) | (0x1UL << (15U)));


  tmpsmcr |= (uint32_t)(TIM_ExtTRGPrescaler | (TIM_ExtTRGPolarity | (ExtTRGFilter << 8U)));


  TIMx->SMCR = tmpsmcr;
}
# 7015 "Drivers/STM32F3xx_HAL_Driver/Src/stm32f3xx_hal_tim.c"
void TIM_CCxChannelCmd(TIM_TypeDef *TIMx, uint32_t Channel, uint32_t ChannelState)
{
  uint32_t tmp;


  ((void)0U);
  ((void)0U);

  tmp = (0x1UL << (0U)) << (Channel & 0x1FU);


  TIMx->CCER &= ~tmp;


  TIMx->CCER |= (uint32_t)(ChannelState << (Channel & 0x1FU));
}
