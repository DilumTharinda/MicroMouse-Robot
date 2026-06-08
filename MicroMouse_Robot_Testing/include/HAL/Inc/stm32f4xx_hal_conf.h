#ifndef __STM32F4xx_HAL_CONF_H
#define __STM32F4xx_HAL_CONF_H

/* Enabled HAL modules */
#define HAL_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_FLASH_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED      // for PWM motors
#define HAL_ADC_MODULE_ENABLED      // for sensors
#define HAL_UART_MODULE_ENABLED     // for debugging

/* BlackPill crystal = 25MHz */
#define HSE_VALUE                   25000000U
#define HSE_STARTUP_TIMEOUT         100U
#define HSI_VALUE                   16000000U
#define LSE_VALUE                   32768U
#define LSE_STARTUP_TIMEOUT         5000U
#define VDD_VALUE                   3300U
#define TICK_INT_PRIORITY           0x0FUL
#define USE_RTOS                    0U
#define USE_HAL_ADC_REGISTER_CALLBACKS   0U
#define USE_HAL_TIM_REGISTER_CALLBACKS   0U
#define USE_HAL_UART_REGISTER_CALLBACKS  0U

/* HAL includes */
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_dma.h"
#include "stm32f4xx_hal_cortex.h"
#include "stm32f4xx_hal_flash.h"
#include "stm32f4xx_hal_pwr.h"
#include "stm32f4xx_hal_tim.h"
#include "stm32f4xx_hal_adc.h"
#include "stm32f4xx_hal_uart.h"

#endif