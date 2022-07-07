#ifndef __OLED_H__
#define __OLED_H__

#include <stdint.h>
#define I2C_USE_DMA 1

void oled_init(void);

void oled_clear(void);
void oled_refresh(void);

void oled_draw_point(uint8_t x, uint8_t y, uint8_t type);
void oled_draw_hline(uint8_t x, uint8_t y, uint8_t len);
void oled_fill(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t type);
void oled_show_char16(uint8_t x, uint8_t y, uint8_t chr);
void oled_show_char12(uint8_t x, uint8_t y, uint8_t chr);
void oled_show_string16(uint8_t x, uint8_t y, char *pStr);
void oled_show_string12(uint8_t x, uint8_t y, char *pStr);


#endif /* __OLED_H__ */
