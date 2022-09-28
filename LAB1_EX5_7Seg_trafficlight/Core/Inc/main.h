/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define ROW_RED_Pin GPIO_PIN_1
#define ROW_RED_GPIO_Port GPIOA
#define ROW_YELLOW_Pin GPIO_PIN_2
#define ROW_YELLOW_GPIO_Port GPIOA
#define ROW_GREEN_Pin GPIO_PIN_3
#define ROW_GREEN_GPIO_Port GPIOA
#define COL_RED_Pin GPIO_PIN_4
#define COL_RED_GPIO_Port GPIOA
#define COL_YELLOW_Pin GPIO_PIN_5
#define COL_YELLOW_GPIO_Port GPIOA
#define COL_GREEN_Pin GPIO_PIN_6
#define COL_GREEN_GPIO_Port GPIOA
#define SEG_a_Pin GPIO_PIN_0
#define SEG_a_GPIO_Port GPIOB
#define SEG_b_Pin GPIO_PIN_1
#define SEG_b_GPIO_Port GPIOB
#define SEG_c_Pin GPIO_PIN_2
#define SEG_c_GPIO_Port GPIOB
#define SEG_dr_Pin GPIO_PIN_10
#define SEG_dr_GPIO_Port GPIOB
#define SEG_er_Pin GPIO_PIN_11
#define SEG_er_GPIO_Port GPIOB
#define SEG_fr_Pin GPIO_PIN_12
#define SEG_fr_GPIO_Port GPIOB
#define SEG_gr_Pin GPIO_PIN_13
#define SEG_gr_GPIO_Port GPIOB
#define SEG_d_Pin GPIO_PIN_3
#define SEG_d_GPIO_Port GPIOB
#define SEG_e_Pin GPIO_PIN_4
#define SEG_e_GPIO_Port GPIOB
#define SEG_f_Pin GPIO_PIN_5
#define SEG_f_GPIO_Port GPIOB
#define SEG_g_Pin GPIO_PIN_6
#define SEG_g_GPIO_Port GPIOB
#define SEG_ar_Pin GPIO_PIN_7
#define SEG_ar_GPIO_Port GPIOB
#define SEG_br_Pin GPIO_PIN_8
#define SEG_br_GPIO_Port GPIOB
#define SEG_cr_Pin GPIO_PIN_9
#define SEG_cr_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
