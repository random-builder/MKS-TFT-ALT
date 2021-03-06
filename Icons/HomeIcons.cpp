/*
 * HomeIcons.cpp
 *
 * Created: 29/11/2015 12:10:12
 *  Author: David
 */

#include "Icons.h"

extern const uint16_t IconPaletteLight[] =
{
    0x0000, 0x0010, 0x0400, 0x0410, 0x07ff, 0x8000, 0x8400, 0x8410,
    0xc618, 0xf800, 0xffe0, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff
};

extern const uint16_t IconPaletteDark[] =
{
    0x0000, 0x0010, 0x0400, 0x0410, 0x07ff, 0x8000, 0x8400, 0x8410,
    0xc618, 0xf800, 0xffe0, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff
};

#if LARGE_FONT

extern const uint8_t IconHomeAll[] =
{	35, 30,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb,
    0x00, 0x00, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0xbb, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconHomeX[] =
{	35, 30,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb,
    0x00, 0x00, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0xbb, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x7b, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xb7, 0x00, 0x00,
    0x08, 0xbb, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0x80, 0x07, 0x8b, 0xbb, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xb8, 0x7b, 0xbb, 0xbb, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7, 0x00,
    0xbb, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xbb, 0xbb,
    0xb7, 0x00, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0xbb, 0xbb, 0xbb, 0xbb, 0x87, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0x00,
    0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x80, 0x07,
    0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xb7, 0x00, 0x00, 0x08, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00,
    0x00, 0x00, 0x08, 0x70, 0x00, 0x00, 0x00, 0x8b, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconHomeY[] =
{	35, 30,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x77, 0x77, 0x00,
    0xbb, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x8b, 0xbb, 0xbb,
    0xbb, 0xbb, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x78, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xbb, 0xbb, 0xb7, 0x77, 0x77, 0x00,
    0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xb8, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00,
    0x00, 0x00, 0x0b, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconHomeZ[] =
{	35, 30,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb,
    0x00, 0x00, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0b, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0xbb, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x77, 0x00, 0x00, 0x07, 0x77, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x07, 0xbb, 0xbb, 0x00,
    0xbb, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0x7b,
    0xbb, 0xbb, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0x07, 0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0x7b, 0xbb, 0x00,
    0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7,
    0x0b, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0x70, 0x0b, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0x80, 0x00, 0x0b, 0xbb, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x07, 0x77, 0x00, 0x00, 0x08, 0x88, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconHomeU[] =
{	35, 30,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xb7, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0xbb, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0xbb, 0xbb, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xbb, 0xbb, 0x00,
    0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconHomeV[] =
{	35, 30,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xb8, 0x70, 0x00,
    0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0xb8, 0x70, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0xbb, 0xbb, 0xb8, 0x70, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xbb, 0xbb, 0xb8, 0x70, 0x00,
    0xbb, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xbb,
    0xbb, 0xb7, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xbb, 0xbb, 0xb7, 0x00,
    0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xbb, 0xbb,
    0xb8, 0x70, 0x00, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x07,
    0xbb, 0xbb, 0xb8, 0x70, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xb8, 0x70, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x0b, 0xb8, 0x70, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconHomeW[] =
{	35, 30,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00, 0xbb, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0x70, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xbb, 0xbb, 0x00,
    0xbb, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7b,
    0xbb, 0xb7, 0x00, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x07, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0xbb, 0xbb, 0x00, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7b, 0xbb, 0xb7, 0x00,
    0xbb, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x0b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00,
    0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8,
    0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb
};

extern const uint8_t IconBedComp[] =
{	41, 30,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb0, 0x00, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x7b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x08,
    0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x70, 0x07, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xb8, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0xbb, 0x80, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xb8, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x07,
    0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x00, 0x08, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x7b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb0, 0x00, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x07, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x08, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7,
    0x00, 0x7b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb0, 0x00, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x08, 0xbb, 0xbb, 0x70, 0x07, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x8b, 0xbb, 0x00,
    0x08, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x08, 0xbb, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x00, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x0b, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0x08, 0xbb, 0x00,
    0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00,
    0x8b, 0xbb, 0x00, 0x08, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0x08, 0xbb, 0xbb, 0x70, 0x07, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0x80, 0x00, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
    0x00, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb7, 0x00, 0x7b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x08, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x70, 0x07, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x80, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb
};

#else

extern const uint8_t IconHomeAll[] =
{	25, 21,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xb0, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xb8,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xb0, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xb7, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0
};

extern const uint8_t IconHomeX[] =
{	25, 21,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00,
    0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xb0, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xb8,
    0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x7b, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x0b, 0xb7, 0x00, 0x00, 0x8b, 0xb0, 0x08, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb8, 0x07, 0xbb, 0xbb, 0x00, 0x70, 0x00, 0x00, 0x00, 0x0b, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0xbb, 0xbb,
    0xbb, 0x70, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x08, 0xbb, 0xbb, 0x70,
    0x00, 0x0b, 0xb8, 0x00, 0x00, 0x00, 0x7b, 0xbb, 0xbb, 0xbb, 0x87, 0x00,
    0xbb, 0xb7, 0x00, 0x00, 0x0b, 0xbb, 0xb8, 0xbb, 0xbb, 0xb0, 0x0b, 0xbb,
    0xb7, 0x00, 0x00, 0xbb, 0xb7, 0x00, 0x8b, 0xbb, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x0b, 0x80, 0x00, 0x00, 0x7b, 0xb0, 0x0b, 0xbb, 0xbb, 0xb7, 0x00,
    0x70, 0x00, 0x00, 0x00, 0x08, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0
};

extern const uint8_t IconHomeY[] =
{	25, 21,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00,
    0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xb0, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xb8,
    0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x0b, 0x70, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x0b, 0xbb,
    0xb8, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xbb, 0xbb,
    0x88, 0x88, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x78, 0xbb, 0xbb, 0xbb,
    0xb0, 0x0b, 0xb8, 0x00, 0x00, 0x00, 0x07, 0x8b, 0xbb, 0xbb, 0xbb, 0x00,
    0xbb, 0xb7, 0x00, 0x00, 0x08, 0xbb, 0xbb, 0x87, 0x77, 0x70, 0x0b, 0xbb,
    0xb7, 0x00, 0x00, 0xbb, 0xbb, 0x70, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x0b, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x00,
    0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0
};

extern const uint8_t IconHomeZ[] =
{	25, 21,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xb0, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xb8,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xb0, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x77, 0x70, 0x00, 0x07, 0x77, 0x00, 0x70, 0x00, 0x00, 0x00, 0x0b, 0xbb,
    0x00, 0x08, 0xbb, 0xb0, 0x08, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb0, 0x7b,
    0xbb, 0xbb, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0x7b, 0xbb, 0xbb,
    0xb0, 0x0b, 0xb8, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0x00,
    0xbb, 0xb7, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0x80, 0xbb, 0xb0, 0x0b, 0xbb,
    0xb7, 0x00, 0x00, 0xbb, 0xbb, 0x70, 0x0b, 0xbb, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x0b, 0xbb, 0x70, 0x00, 0xbb, 0xb0, 0x0b, 0xbb, 0xbb, 0xb7, 0x00,
    0x77, 0x70, 0x00, 0x07, 0x77, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0
};

extern const uint8_t IconHomeU[] =
{	25, 21,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00,
    0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xb0, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00, 0x00, 0x0b, 0xb8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x0b, 0xbb,
    0xbb, 0xbb, 0xb8, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb7, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xbb,
    0x80, 0x0b, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xbb, 0x00,
    0xbb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xbb, 0x80, 0x0b, 0xbb,
    0xb7, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0xbb, 0xbb, 0xb7,
    0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb8, 0x00, 0x0b, 0xbb, 0xbb, 0xb7, 0x00,
    0xbb, 0xbb, 0xbb, 0xb7, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xb0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0
};

extern const uint8_t IconBedComp[] =
{	25, 21,		// width, height
    0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb0, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x70, 0x8b, 0xbb, 0xb8, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0x07,
    0xbb, 0xb8, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x0b, 0xb8,
    0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x0b, 0x80, 0x00, 0x00, 0x00,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0x80, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x80, 0x7b, 0xbb, 0x80, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xb7, 0x08, 0xbb, 0xbb, 0x8b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x0b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x8b, 0xbb, 0xb8, 0x07, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x8b, 0xbb, 0x70, 0x8b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0x00, 0x8b, 0xb0, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0x00, 0x00, 0x00, 0x8b, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x00,
    0x00, 0x08, 0xb0, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x08,
    0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x08, 0xbb, 0xb7,
    0x08, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb8, 0xbb, 0xbb, 0x80, 0x7b,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x0b, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x00, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xb0, 0x0b, 0xbb, 0xbb, 0xbb, 0xbb, 0xb0

};

#endif

// End
