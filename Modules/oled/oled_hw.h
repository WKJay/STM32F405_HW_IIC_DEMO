#ifndef __OLED_HW_H__
#define __OLED_HW_H__
#include <stdint.h>

int i2c_hw_init(void);

void oled_write_cmd(uint8_t cmd);
void oled_write_data(uint8_t data);
void oled_write_data_stream(uint8_t *data, uint32_t len);

void oled_reset(void);

uint32_t i2c_reset_cnt_get(void);

#endif /* __OLED_HW_H__ */
