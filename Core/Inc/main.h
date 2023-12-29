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
#define EPD51_Pin GPIO_PIN_3
#define EPD51_GPIO_Port GPIOE
#define EPD52_Pin GPIO_PIN_4
#define EPD52_GPIO_Port GPIOE
#define EPD53_Pin GPIO_PIN_5
#define EPD53_GPIO_Port GPIOE
#define EPD54_Pin GPIO_PIN_6
#define EPD54_GPIO_Port GPIOE
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
#define EPD33_Pin GPIO_PIN_2
#define EPD33_GPIO_Port GPIOB
#define EPD34_Pin GPIO_PIN_7
#define EPD34_GPIO_Port GPIOE
#define EPD23_Pin GPIO_PIN_12
#define EPD23_GPIO_Port GPIOE
#define EPD24_Pin GPIO_PIN_13
#define EPD24_GPIO_Port GPIOE
#define DIR23_Pin GPIO_PIN_14
#define DIR23_GPIO_Port GPIOE
#define DIR24_Pin GPIO_PIN_15
#define DIR24_GPIO_Port GPIOE
#define SPI2_NSS_Pin GPIO_PIN_12
#define SPI2_NSS_GPIO_Port GPIOB
#define DIR41_Pin GPIO_PIN_8
#define DIR41_GPIO_Port GPIOD
#define DIR42_Pin GPIO_PIN_9
#define DIR42_GPIO_Port GPIOD
#define DIR43_Pin GPIO_PIN_10
#define DIR43_GPIO_Port GPIOD
#define DIR44_Pin GPIO_PIN_11
#define DIR44_GPIO_Port GPIOD
#define DIR31_Pin GPIO_PIN_8
#define DIR31_GPIO_Port GPIOC
#define DIR32_Pin GPIO_PIN_9
#define DIR32_GPIO_Port GPIOC
#define DIR21_Pin GPIO_PIN_10
#define DIR21_GPIO_Port GPIOC
#define DIR22_Pin GPIO_PIN_11
#define DIR22_GPIO_Port GPIOC
#define EPD21_Pin GPIO_PIN_12
#define EPD21_GPIO_Port GPIOC
#define EPD22_Pin GPIO_PIN_0
#define EPD22_GPIO_Port GPIOD
#define EPD31_Pin GPIO_PIN_1
#define EPD31_GPIO_Port GPIOD
#define EPD32_Pin GPIO_PIN_2
#define EPD32_GPIO_Port GPIOD
#define EPD41_Pin GPIO_PIN_3
#define EPD41_GPIO_Port GPIOD
#define EPD42_Pin GPIO_PIN_4
#define EPD42_GPIO_Port GPIOD
#define EPD43_Pin GPIO_PIN_5
#define EPD43_GPIO_Port GPIOD
#define EPD44_Pin GPIO_PIN_6
#define EPD44_GPIO_Port GPIOD
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
