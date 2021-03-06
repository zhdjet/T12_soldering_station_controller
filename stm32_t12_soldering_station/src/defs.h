/*
 * defs.h
 *
 *  Created on: 16.09.2019
 *      Author: NitjsefniDrakkainen
 */

#ifndef __DEFS_H__
#define __DEFS_H__

#define SSD1306_USE_I2C

/*
 * Pinout definitions
 */

//ADC
#define ADC_TIP_PIN								GPIO_Pin_1
#define ADC_CUR_PIN								GPIO_Pin_2
#define ADC_AMB_IN_PIN							GPIO_Pin_3
#define ADC_AMB_HANDLE_PIN						GPIO_Pin_4
#define ADC1_PORT								GPIOA

//I2C
#define I2C1_SCL								GPIO_Pin_6
#define I2C1_SDA								GPIO_Pin_7
#define I2C1_PORT								GPIOB

//Timer channel 2 PWM output pin
#define TIP_PWM_PIN								GPIO_Pin_3
#define TIP_PWM_PORT							GPIOB

//Digital inputs
#define ENCODER_PIN_A							GPIO_Pin_9
#define ENCODER_PIN_B							GPIO_Pin_8
#define HANDLE_SLEEP_SWITCH						GPIO_Pin_12
#define ENC_AB_SW_PORT							GPIOB

#define ENCODER_PIN_C							GPIO_Pin_13
#define ENC_C_PORT								GPIOC

#ifdef DEBUG
#pragma message "debug configuration"

#define USART1_TX_PIN 							GPIO_Pin_9
#define USART1_RX_PIN 							GPIO_Pin_10
#define USART1_PORT								GPIOA
#endif

/*
 * ADC Channels definitions
 */
#define ADC_CHANNELS_NUM						5

#define ADC_TIP_TEMERATURE_SENSE				ADC_Channel_1
#define ADC_TIP_CURRENT_SENSE					ADC_Channel_2
#define ADC_INTERNAL_AMBIENT_T_SENSE			ADC_Channel_3
#define ADC_EXTERNAL_AMBIENT_T_SENSE			ADC_Channel_4
#define ADC_MCU_TEMPERATURE_SENSE				ADC_Channel_16

#define ADC_TIP_TEMERATURE_VAL					0
#define ADC_TIP_CURRENT_VAL						1
#define ADC_INTERNAL_AMBIENT_T_VAL				2
#define ADC_EXTERNAL_AMBIENT_T_VAL				3
#define ADC_MCU_TEMPERATURE_VAL					4

/*
 * Timers definitions
 */

#define TIP_PWM_TIMER							TIM2
#define TIP_PWM_TIMER_PRESCALER					0
#define TIP_PWM_TIMER_PERIOD					1799 //~40kHz timer frequency


#endif /* __DEFS_H__ */
