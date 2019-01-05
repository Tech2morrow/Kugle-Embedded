/* Copyright (C) 2018 Thomas Jespersen, TKJ Electronics. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details. 
 *
 * Contact information
 * ------------------------------------------
 * Thomas Jespersen, TKJ Electronics
 * Web      :  http://www.tkjelectronics.com
 * e-mail   :  thomasj@tkjelectronics.com
 * ------------------------------------------
 */
 
#ifndef PRIORITIES_H
#define PRIORITIES_H

/* Define hardware interrupt priorities   (HAL_NVIC_SetPriority)
 * Lower value means higher priority
 * Interrupt priority has to be between 0 - 15
 * Remember to respect the "configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY" in FreeRTOSConfig.h, hence no hardware interrupt calling FreeRTOS functions must have a priority value lower than configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY
 */
#define HIGH_RES_TIMER_TICK_PRIORITY	0		// This timer is also used to generate ticks for any ST HAL library (eg. HAL_Delay)
#define ENCODER_TIMER_OVERFLOW_PRIORITY	1

// Below are periphiral priorities which uses FreeRTOS functions
#define USB_INTERRUPT_PRIORITY		5
#define UART_INTERRUPT_PRIORITY		6
#define SPI_INTERRUPT_PRIORITY		7
#define I2C_INTERRUPT_PRIORITY		8
#define TIMER_INTERRUPT_PRIORITY	9
#define IO_INTERRUPT_PRIORITY		10
#define SMBUS_INTERRUPT_PRIORITY	11



/* Define task priorities in FreeRTOS format
 * Low values denote low priority tasks. The idle task has priority 0 (tskIDLE_PRIORITY)
 * Task priority has to be between 0 - configMAX_PRIORITIES
 */
#define MAIN_TASK_PRIORITY		0
#define TEST_BENCH_PRIORITY		2
#define ATTITUDE_CONTROLLER_PRIORITY	5



#endif