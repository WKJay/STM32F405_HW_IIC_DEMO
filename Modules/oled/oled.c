/*************************************************
 Copyright (c) 2022
 All rights reserved.
 File name:     oled.c
 Description:
 History:
 1. Version:
    Date:       2022-07-06
    Author:     WKJay
    Modify:
*************************************************/
#include <stdint.h>
#include <string.h>
#include "main.h"
#include "oled_hw.h"
#include "oled.h"
#include "ascii16.h"

// 64*128
#define OLED_H 64
#define OLED_V 128

#define OLED_X 128
#define OLED_Y 64

#define MAX_OLED_PAGES   OLED_V / 8
#define MAX_OLED_COLUMNS OLED_H

enum {
    OLED_DRAW_TYPE_CLEAR = 0,
    OLED_DRAW_TYPE_FILL = 1,
};

static uint8_t oled_buffer[MAX_OLED_PAGES][MAX_OLED_COLUMNS] = {0};

void oled_init(void) {
    i2c_hw_init();
    oled_reset();

    oled_write_cmd(0xAE);  // set display display ON/OFF,AFH/AEH

    oled_write_cmd(0xDC);  // set display start line
    oled_write_cmd(0x00);  //

    oled_write_cmd(0x81);  // set contrast control
    oled_write_cmd(0x2F);

    oled_write_cmd(0x20);  // set memory addressing mode: 20H page addressing mode

    oled_write_cmd(0xA0);  // set segment re-map
    oled_write_cmd(0xA4);  // entire display on: A4H:OFF/A5H:ON

    oled_write_cmd(0xA6);  // set normal/inverse display: A6H:normal/A7H:inverse

    oled_write_cmd(0xA8);  // set multiplex ratio
    oled_write_cmd(0x3F);  // 1/64duty

    oled_write_cmd(0xC0);  // set com output scan direction

    oled_write_cmd(0xD3);  // set display  offset
    oled_write_cmd(0x60);  // 60

    oled_write_cmd(0xD5);  // set display  clock divide ratio/oscillator frequency
    oled_write_cmd(0x51);  // 105Hz

    oled_write_cmd(0xD9);  // Dis-charge /Pre-charge Period Mode Set
    oled_write_cmd(0x22);  //

    oled_write_cmd(0xDB);  // set vcomh deselect level
    oled_write_cmd(0x35);

    oled_write_cmd(0xAD);  // DC-DC Control Mode Set
    oled_write_cmd(0x8A);  // disable charge pump,external VPP=9.0V

    oled_write_cmd(0xAF);  //--turn on oled panel
}

void oled_clear(void) {
    for (uint8_t i = 0; i < MAX_OLED_PAGES; i++) {
        for (uint8_t j = 0; j < MAX_OLED_COLUMNS; j++) {
            oled_buffer[i][j] = 0x00;
        }
    }
}
void oled_refresh(void) {
    uint8_t page = 0xB0;
    for (uint8_t i = 0; i < MAX_OLED_PAGES; i++) {
        oled_write_cmd(page++);
        oled_write_cmd(0x00);
        oled_write_cmd(0x10);

        oled_write_data_stream(&oled_buffer[i][0], MAX_OLED_COLUMNS);
    }
    return;
}

static void xy_2_pagecol(uint8_t x, uint8_t y, uint8_t *p_page, uint8_t *p_col, uint8_t *p_d) {
    *p_page = x / 8;
    *p_col = OLED_Y - 1 - y;
    *p_d = x % 8;
}

// draw dot
// x:0~127
// y:0~63
// type:1 fill 0,clear
void oled_draw_point(uint8_t x, uint8_t y, uint8_t type) {
    uint8_t page, col, d, temp = 0;
    if (x > OLED_X || y > OLED_Y) {
        return;  // out of range
    }
    xy_2_pagecol(x, y, &page, &col, &d);
    temp = 1 << d;
    if (type == OLED_DRAW_TYPE_FILL) {
        oled_buffer[page][col] |= temp;
    } else if (type == OLED_DRAW_TYPE_CLEAR) {
        oled_buffer[page][col] &= (~temp);
    }
    return;
}

void oled_draw_hline(uint8_t x, uint8_t y, uint8_t len) {
    uint8_t i = 0;
    for (i = 0; i < len; i++) {
        oled_draw_point(x + i, y, OLED_DRAW_TYPE_FILL);
    }
    return;
}

void oled_draw_vline(uint8_t x, uint8_t y, uint8_t len) {
    uint8_t i = 0;
    for (i = 0; i < len; i++) {
        oled_draw_point(x, y + i, OLED_DRAW_TYPE_FILL);
    }
    return;
}

void oled_fill(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t type) {
    uint8_t i, j;
    for (i = 0; i < w; i++) {
        for (j = 0; j < h; j++) {
            oled_draw_point(x + i, y + j, type);
        }
    }
    return;
}

void oled_highlight(uint8_t x, uint8_t y, uint8_t w, uint8_t h) {
    uint8_t i, j = 0;
    uint8_t page, col, d = 0;
    if ((x + w) > OLED_X || (y + h) > OLED_Y) {
        return;  // out of range
    }
    for (i = 0; i < w; i++) {
        for (j = 0; j < h; j++) {
            xy_2_pagecol(x + i, y + j, &page, &col, &d);
            oled_buffer[page][col] = oled_buffer[page][col] ^ (1 << d);
        }
    }
    return;
}

void oled_show_char16(uint8_t x, uint8_t y, uint8_t chr) {
    uint8_t *p = NULL;
    uint8_t i, j = 0;
    uint8_t temp = 0;
    if ((x + 8) > OLED_X || (y + 16) > OLED_Y) {
        return;  // out of range
    }
    p = get_ascii16_code(chr);
    if (p == NULL) {
        return;
    }
    for (i = 0; i < 16; i++) {
        temp = p[i];  // invoke 1608 font
        for (j = 0; j < 8; j++) {
            if (((temp >> j) & 0x01) == 1) {
                oled_draw_point(x + j, y + i, OLED_DRAW_TYPE_FILL);
            } else {
                oled_draw_point(x + j, y + i, OLED_DRAW_TYPE_CLEAR);
            }
        }
    }
}

void oled_show_char12(uint8_t x, uint8_t y, uint8_t chr) {
    uint8_t *p = NULL;
    uint8_t i, j = 0;
    uint8_t temp = 0;
    if ((x + 8) > OLED_X || (y + 16) > OLED_Y) {
        return;  // out of range
    }
    p = get_ascii12_code(chr);
    if (p == NULL) {
        return;
    }
    for (i = 0; i < 16; i++) {
        temp = p[i];  // invoke 1608 font
        for (j = 0; j < 8; j++) {
            if (((temp >> j) & 0x01) == 1) {
                oled_draw_point(x + j, y + i, OLED_DRAW_TYPE_FILL);
            } else {
                oled_draw_point(x + j, y + i, OLED_DRAW_TYPE_CLEAR);
            }
        }
    }
}

void oled_show_string16(uint8_t x, uint8_t y, char *pStr) {
    uint8_t w = 0;
    int temp = 0;
    int i = 0;
    int size = strlen(pStr);

    for (i = 0; i < size; i++) {
        temp = pStr[i];
        if (temp < 0x80)  // ASCII 0-127
        {
            oled_show_char16(x + w, y, pStr[i]);
            w += 8;
        }
    }
}
void oled_show_string12(uint8_t x, uint8_t y, char *pStr) {
    uint8_t w = 0;
    int temp = 0;
    int i = 0;
    int size = strlen(pStr);

    for (i = 0; i < size; i++) {
        temp = pStr[i];
        if (temp < 0x80)  // ASCII 0-127
        {
            oled_show_char12(x + w, y, pStr[i]);
            w += 6;
        }
    }
}
