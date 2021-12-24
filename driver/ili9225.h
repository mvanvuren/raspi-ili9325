#ifndef __ILI9225_H__
#define __ILI9225_H__

extern void (*DrawPixel)(TFT_t * dev, uint16_t x, uint16_t y, uint16_t color);
extern void (*DrawMultiPixels)(TFT_t * dev, uint16_t x, uint16_t y, uint16_t size, uint16_t * colors);
extern void (*DrawFillRect)(TFT_t * dev, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color);
extern void (*DisplayOff)(TFT_t * dev);
extern void (*DisplayOn)(TFT_t * dev);
extern void (*InversionOff)(TFT_t * dev);
extern void (*InversionOn)(TFT_t * dev);

void ili9225_lcdInit(TFT_t * dev, int width, int height, int offsetx, int offsety);
void ili9225_lcdDrawPixel(TFT_t * dev, uint16_t x, uint16_t y, uint16_t color);
void ili9225_lcdDrawFillRect(TFT_t * dev, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color);
void ili9225_lcdDisplayOff(TFT_t * dev);
void ili9225_lcdDisplayOn(TFT_t * dev);
void ili9225_lcdInversionOff(TFT_t * dev);
void ili9225_lcdInversionOn(TFT_t * dev);

#endif

