//
// Created by XingfengYang on 2020/7/7.
//

#include <stdint.h>

#ifndef __LIBRARY_LIBGFX_GL2D_H__
#define __LIBRARY_LIBGFX_GL2D_H__

#define FLUENT_PRIMARY_COLOR 0x0b0711
#define FLUENT_PRIMARY_BACK_COLOR 0x171520
#define FLUENT_PRIMARY_FORE_COLOR 0xFFFFFF

void gfx2d_draw_pixel(unsigned char *buffer, int x, int y, uint32_t c);

void gfx2d_draw_rect(unsigned char *buffer, int x1, int y1, int x2, int y2, uint32_t c);

void gfx2d_fill_rect(unsigned char *buffer, int x1, int y1, int x2, int y2, uint32_t c);

void gfx2d_draw_line(unsigned char *buffer, int x1, int y1, int x2, int y2, uint32_t c);

void gfx2d_draw_triangle(unsigned char *buffer, int x1, int y1, int x2, int y2, int x3, int y3, uint32_t c);

void gfx2d_fill_triangle(unsigned char *buffer, int x1, int y1, int x2, int y2, int x3, int y3, uint32_t c);

void gfx2d_draw_circle(unsigned char *buffer, int xc, int yc, int r, uint32_t c);

void gfx2d_fill_circle(unsigned char *buffer, int xc, int yc, int r, uint32_t c);

void gfx2d_draw_ascii(unsigned char *buffer, int x, int y, uint8_t ch, uint32_t color);

void gfx2d_draw_bitmap(unsigned char *buffer, int x, int y, int width, int height, uint32_t *bitmap);

void gfx2d_draw_logo(unsigned char *buffer, int x, int y, uint32_t c);

#endif //__LIBRARY_LIBGFX_GL2D_H__
