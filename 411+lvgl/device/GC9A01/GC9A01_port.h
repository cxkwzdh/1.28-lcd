/*
 * @FilePath: GC9A01_port.h
 * @Author: ASWaterbenben
 * @Date: 2022-09-09 11:04:18
 * @LastEditors: ASWaterbenben
 * @LastEditTime: 2022-09-09 14:37:16
 * Copyright: 2022 oulidaTech CO.,LTD. All Rights Reserved.
 * @Descripttion: 
 */
#ifndef GC9A01_PORT
#define GC9A01_PORT

#include "gpio.h"

// define GC9A01 DC pin, CS pin, BLK pin enable/disable function
#define     SPI_DC_0    HAL_GPIO_WritePin(LCD_DC_GPIO_Port, LCD_DC_Pin, GPIO_PIN_RESET)
#define     SPI_DC_1    HAL_GPIO_WritePin(LCD_DC_GPIO_Port, LCD_DC_Pin, GPIO_PIN_SET)
#define     SPI_CS_0    HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_RESET)
#define     SPI_CS_1    HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_SET)
#define     SPI_BLK_0    HAL_GPIO_WritePin(LCD_BLK_GPIO_Port, LCD_BLK_Pin, GPIO_PIN_RESET)
#define     SPI_BLK_1    HAL_GPIO_WritePin(LCD_BLK_GPIO_Port, LCD_BLK_Pin, GPIO_PIN_SET)
#define     SPI_RST_0    HAL_GPIO_WritePin(LCD_RES_GPIO_Port, LCD_RES_Pin, GPIO_PIN_RESET)
#define     SPI_RST_1    HAL_GPIO_WritePin(LCD_RES_GPIO_Port, LCD_RES_Pin, GPIO_PIN_SET)

void SPI_SendByte(unsigned char byte);
void TFT_send_cmd(unsigned char o_command);
void TFT_send_data(unsigned char o_data);
void TFT_delay_ms(unsigned int _ms_time);
void TFT_delay_us(unsigned int _us_time);

#endif




