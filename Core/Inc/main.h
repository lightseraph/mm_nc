/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DIR51_Pin GPIO_PIN_0
#define DIR51_GPIO_Port GPIOC
#define DIR52_Pin GPIO_PIN_1
#define DIR52_GPIO_Port GPIOC
#define DIR53_Pin GPIO_PIN_2
#define DIR53_GPIO_Port GPIOC
#define DIR54_Pin GPIO_PIN_3
#define DIR54_GPIO_Port GPIOC
#define SPI1_NSS_Pin GPIO_PIN_4
#define SPI1_NSS_GPIO_Port GPIOA
#define DIR33_Pin GPIO_PIN_4
#define DIR33_GPIO_Port GPIOC
#define DIR34_Pin GPIO_PIN_5
#define DIR34_GPIO_Port GPIOC
#define SPI_IRQ_Pin GPIO_PIN_10
#define SPI_IRQ_GPIO_Port GPIOE
#define SPI_IRQ_EXTI_IRQn EXTI15_10_IRQn
#define SYNC0_Pin GPIO_PIN_11
#define SYNC0_GPIO_Port GPIOE
#define SYNC0_EXTI_IRQn EXTI15_10_IRQn
#define SYNC1_Pin GPIO_PIN_12
#define SYNC1_GPIO_Port GPIOE
#define SYNC1_EXTI_IRQn EXTI15_10_IRQn
#define DIR23_Pin GPIO_PIN_14
#define DIR23_GPIO_Port GPIOE
#define DIR24_Pin GPIO_PIN_15
#define DIR24_GPIO_Port GPIOE
#define SPI2_NSS_Pin GPIO_PIN_12
#define SPI2_NSS_GPIO_Port GPIOB
#define DIR42_Pin GPIO_PIN_8
#define DIR42_GPIO_Port GPIOD
#define DIR41_Pin GPIO_PIN_9
#define DIR41_GPIO_Port GPIOD
#define DIR44_Pin GPIO_PIN_10
#define DIR44_GPIO_Port GPIOD
#define DIR43_Pin GPIO_PIN_11
#define DIR43_GPIO_Port GPIOD
#define DIR32_Pin GPIO_PIN_8
#define DIR32_GPIO_Port GPIOC
#define DIR31_Pin GPIO_PIN_9
#define DIR31_GPIO_Port GPIOC
#define DIR22_Pin GPIO_PIN_10
#define DIR22_GPIO_Port GPIOC
#define DIR21_Pin GPIO_PIN_11
#define DIR21_GPIO_Port GPIOC
#define I2C_SDA_Pin GPIO_PIN_6
#define I2C_SDA_GPIO_Port GPIOB
#define I2C_SCL_Pin GPIO_PIN_7
#define I2C_SCL_GPIO_Port GPIOB
#define MOTOR_PWR_Pin GPIO_PIN_1
#define MOTOR_PWR_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
