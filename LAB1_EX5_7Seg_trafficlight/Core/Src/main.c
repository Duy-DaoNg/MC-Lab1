/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void display7SEGRow(int num){
	  if(num == 0){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, SET);
	  }
	  if(num == 1){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, SET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, SET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, SET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, SET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, SET);
	  }
	  if(num == 2){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, SET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, SET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, RESET);
	  }
	  if(num == 3){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, SET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, SET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, RESET);
	  }
	  if(num == 4){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, SET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, SET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, SET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, RESET);
	  }
	  if(num == 5){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, SET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, SET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, RESET);
	  }
	  if(num == 6){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, SET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, RESET);
	  }
	  if(num == 7){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, SET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, SET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, SET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, SET);
	  }
	  if(num == 8){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, RESET);
	  }
	  if(num == 9){
		  HAL_GPIO_WritePin(SEG_ar_GPIO_Port, SEG_ar_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_br_GPIO_Port, SEG_br_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_cr_GPIO_Port, SEG_cr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_dr_GPIO_Port, SEG_dr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_er_GPIO_Port, SEG_er_Pin, SET);
		  HAL_GPIO_WritePin(SEG_fr_GPIO_Port, SEG_fr_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_gr_GPIO_Port, SEG_gr_Pin, RESET);
	  }
}
void display7SEGCol(int num){
	  if(num == 0){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, SET);
	  }
	  if(num == 1){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, SET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, SET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, SET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, SET);
	  }
	  if(num == 2){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, SET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, SET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
	  }
	  if(num == 3){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, SET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
	  }
	  if(num == 4){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, SET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, SET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
	  }
	  if(num == 5){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, SET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
	  }
	  if(num == 6){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, SET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
	  }
	  if(num == 7){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, SET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, SET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, SET);
	  }
	  if(num == 8){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
	  }
	  if(num == 9){
		  HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
		  HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, RESET);
		  HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
	  }
  }
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

	  /*
	   * Col state:      Red -         Green - Yellow
	   * Row state: Green - Yellow -         Red
	   * 1: Red
	   * 2: Green
	   * 3: Yellow
	   */
    int RedTime = 5;
    int GreenTime = 3;
    int YellowTime = 2;
    int rowState = 2;
    int colState = 1;
    int curTimeRow = GreenTime-1;
    int curTimeCol = RedTime-1;
    while (1)
    {

  	  /* Set State and Time for Row and Col Traffic Lights */
    	if(curTimeRow <= -1){
    		rowState++;
    		if(rowState >= 4) rowState = 1;
    		if(rowState == 1) curTimeRow = RedTime-1;
    		if(rowState == 2) curTimeRow = GreenTime-1;
    		if(rowState == 3) curTimeRow = YellowTime-1;
    	}
    	if(curTimeCol <= -1){
    		colState++;
    		if(colState >= 4) colState = 1;
    		if(colState == 1) curTimeCol = RedTime-1;
    		if(colState == 2) curTimeCol = GreenTime-1;
    		if(colState == 3) curTimeCol = YellowTime-1;

    	}

    	/* Set state for led */
    	if(rowState == 1){
    		  HAL_GPIO_WritePin(ROW_RED_GPIO_Port, ROW_RED_Pin, RESET);
    		  HAL_GPIO_WritePin(ROW_YELLOW_GPIO_Port, ROW_YELLOW_Pin, SET);
    		  HAL_GPIO_WritePin(ROW_GREEN_GPIO_Port, ROW_GREEN_Pin, SET);
    	}
    	if(rowState == 2){
    		  HAL_GPIO_WritePin(ROW_RED_GPIO_Port, ROW_RED_Pin, SET);
    		  HAL_GPIO_WritePin(ROW_YELLOW_GPIO_Port, ROW_YELLOW_Pin, SET);
    		  HAL_GPIO_WritePin(ROW_GREEN_GPIO_Port, ROW_GREEN_Pin, RESET);
    	}
    	if(rowState == 3){
    		  HAL_GPIO_WritePin(ROW_RED_GPIO_Port, ROW_RED_Pin, SET);
    		  HAL_GPIO_WritePin(ROW_YELLOW_GPIO_Port, ROW_YELLOW_Pin, RESET);
    		  HAL_GPIO_WritePin(ROW_GREEN_GPIO_Port, ROW_GREEN_Pin, SET);
    	}
    	if(colState == 1){
    		  HAL_GPIO_WritePin(COL_RED_GPIO_Port, COL_RED_Pin, RESET);
    		  HAL_GPIO_WritePin(COL_YELLOW_GPIO_Port, COL_YELLOW_Pin, SET);
    		  HAL_GPIO_WritePin(COL_GREEN_GPIO_Port, COL_GREEN_Pin, SET);
    	}
    	if(colState == 2){
    		  HAL_GPIO_WritePin(COL_RED_GPIO_Port, COL_RED_Pin, SET);
    		  HAL_GPIO_WritePin(COL_YELLOW_GPIO_Port, COL_YELLOW_Pin, SET);
    		  HAL_GPIO_WritePin(COL_GREEN_GPIO_Port, COL_GREEN_Pin, RESET);
    	}
    	if(colState == 3){
    		  HAL_GPIO_WritePin(COL_RED_GPIO_Port, COL_RED_Pin, SET);
    		  HAL_GPIO_WritePin(COL_YELLOW_GPIO_Port, COL_YELLOW_Pin, RESET);
    		  HAL_GPIO_WritePin(COL_GREEN_GPIO_Port, COL_GREEN_Pin, SET);
    	}

    	/* Display on 7-Segment Leds */
		  display7SEGRow(curTimeRow--);
		  display7SEGCol(curTimeCol--);
		  HAL_Delay(1000);

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, ROW_RED_Pin|ROW_YELLOW_Pin|ROW_GREEN_Pin|COL_RED_Pin
                          |COL_YELLOW_Pin|COL_GREEN_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SEG_a_Pin|SEG_b_Pin|SEG_c_Pin|SEG_dr_Pin
                          |SEG_er_Pin|SEG_fr_Pin|SEG_gr_Pin|SEG_d_Pin
                          |SEG_e_Pin|SEG_f_Pin|SEG_g_Pin|SEG_ar_Pin
                          |SEG_br_Pin|SEG_cr_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : ROW_RED_Pin ROW_YELLOW_Pin ROW_GREEN_Pin COL_RED_Pin
                           COL_YELLOW_Pin COL_GREEN_Pin */
  GPIO_InitStruct.Pin = ROW_RED_Pin|ROW_YELLOW_Pin|ROW_GREEN_Pin|COL_RED_Pin
                          |COL_YELLOW_Pin|COL_GREEN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SEG_a_Pin SEG_b_Pin SEG_c_Pin SEG_dr_Pin
                           SEG_er_Pin SEG_fr_Pin SEG_gr_Pin SEG_d_Pin
                           SEG_e_Pin SEG_f_Pin SEG_g_Pin SEG_ar_Pin
                           SEG_br_Pin SEG_cr_Pin */
  GPIO_InitStruct.Pin = SEG_a_Pin|SEG_b_Pin|SEG_c_Pin|SEG_dr_Pin
                          |SEG_er_Pin|SEG_fr_Pin|SEG_gr_Pin|SEG_d_Pin
                          |SEG_e_Pin|SEG_f_Pin|SEG_g_Pin|SEG_ar_Pin
                          |SEG_br_Pin|SEG_cr_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
