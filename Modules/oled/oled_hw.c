/*************************************************
 Copyright (c) 2022
 All rights reserved.
 File name:     oled_hw.c
 Description:
 History:
 1. Version:
    Date:       2022-07-06
    Author:     WKJay
    Modify:
*************************************************/
#include <stdint.h>
#include <string.h>
#include "stm32f4xx_hal.h"
#include "oled.h"
#include "main.h"

extern I2C_HandleTypeDef hi2c2;

#if I2C_USE_DMA
extern DMA_HandleTypeDef hdma_i2c2_tx;
#endif

void delay_ms(uint32_t ms) { HAL_Delay(ms); }

int i2c_hw_init(void) {
#if I2C_USE_DMA
    __HAL_RCC_DMA1_CLK_ENABLE();
#endif
    HAL_I2C_DeInit(&hi2c2);
    hi2c2.Instance = I2C2;
    hi2c2.Init.ClockSpeed = 400000;
    hi2c2.Init.DutyCycle = I2C_DUTYCYCLE_2;
    hi2c2.Init.OwnAddress1 = 0;
    hi2c2.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
    hi2c2.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
    hi2c2.Init.OwnAddress2 = 0;
    hi2c2.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
    hi2c2.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
    if (HAL_I2C_Init(&hi2c2) != HAL_OK) {
        return -1;
    }

#if I2C_USE_DMA
    HAL_NVIC_SetPriority(DMA1_Stream7_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(DMA1_Stream7_IRQn);
#endif

    return 0;
}

void i2c_hw_reset(void) {
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = GPIO_PIN_10 | GPIO_PIN_11;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_OD;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10 | GPIO_PIN_11, GPIO_PIN_SET);

    if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_10) == GPIO_PIN_RESET ||
        HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_11) == GPIO_PIN_RESET) {
        delay_ms(10);
    }

    GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
    hi2c2.Instance->CR1 |= I2C_CR1_SWRST;
    hi2c2.Instance->CR1 &= ~I2C_CR1_SWRST;
    i2c_hw_init();
}

void oled_reset(void) {
    HAL_GPIO_WritePin(OLED_RST_GPIO_Port, OLED_RST_Pin, GPIO_PIN_RESET);
    delay_ms(100);
    HAL_GPIO_WritePin(OLED_RST_GPIO_Port, OLED_RST_Pin, GPIO_PIN_SET);
    delay_ms(100);
}

void oled_write_cmd(uint8_t cmd) {
    uint8_t _data[2] = {0x00, cmd};
#if I2C_USE_DMA
    if (HAL_I2C_Mem_Write_DMA(&hi2c2, 0x78, 0x00, I2C_MEMADD_SIZE_8BIT, &_data[1], 2) != HAL_OK) {
        i2c_hw_init();
    }
    while (hi2c2.XferCount > 0)
        ;
    SET_BIT(hi2c2.Instance->CR1, I2C_CR1_STOP);
    hi2c2.State = HAL_I2C_STATE_READY;
    hi2c2.Mode = HAL_I2C_MODE_NONE;
#else
    if (HAL_I2C_Master_Transmit(&hi2c2, 0x78, _data, 2, 100) != HAL_OK) {
        i2c_hw_init();
    }
#endif
}

void oled_write_data(uint8_t data) {
    uint8_t _data[2] = {0x40, data};
#if I2C_USE_DMA
    if (HAL_I2C_Mem_Write_DMA(&hi2c2, 0x78, 0x40, I2C_MEMADD_SIZE_8BIT, &_data[1], 2) != HAL_OK) {
        i2c_hw_init();
    }
    while (hi2c2.XferCount > 0)
        ;
    SET_BIT(hi2c2.Instance->CR1, I2C_CR1_STOP);
    hi2c2.State = HAL_I2C_STATE_READY;
    hi2c2.Mode = HAL_I2C_MODE_NONE;
#else
    if (HAL_I2C_Master_Transmit(&hi2c2, 0x78, _data, 2, 100) != HAL_OK) {
        i2c_hw_init();
    }
#endif
}

void oled_write_data_stream(uint8_t *data, uint32_t len) {
    uint8_t _data[128];

    if (len > (sizeof(_data) - 1)) {
        return;
    }
    _data[0] = 0x40;
    memcpy(&_data[1], data, len);

#if I2C_USE_DMA
    if (HAL_I2C_Mem_Write_DMA(&hi2c2, 0x78, 0x40, I2C_MEMADD_SIZE_8BIT, &_data[1], len + 1) !=
        HAL_OK) {
        i2c_hw_init();
    }
    while (hi2c2.XferCount > 0)
        ;
    SET_BIT(hi2c2.Instance->CR1, I2C_CR1_STOP);
    hi2c2.State = HAL_I2C_STATE_READY;
    hi2c2.Mode = HAL_I2C_MODE_NONE;
#else
    if (HAL_I2C_Master_Transmit(&hi2c2, 0x78, _data, len + 1, 100) != HAL_OK) {
        i2c_hw_init();
    }
#endif
}
