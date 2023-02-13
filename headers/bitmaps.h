#ifndef BITMAPS_H_
#define BITMAPS_H_

// bitmaps.h allows you change what is shown on the display during the startup of GP2040.
// The default image size is 128x64px.
// The default image type is 2 color monotone (black and white).
// Bitmap images can be converted using the Marlin Bitmap Converter (https://marlinfw.org/tools/u8glib/converter.html) choose `Marlin 2.x`, `invert` and `Binary`.
// Copy the output and replace the desired image below.
// `splashImageMain` is the default image.

// Hard coded default
const unsigned char splashImageMain[] = {
    // 'GP2040-CE Main', 128x64px
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xDF,0xC0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xC1,0xFF,0xA0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xCF,0xFE,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xE0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xAB,0xC0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0x00,0xFB,0x83,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x01,0xFF,0x00,0x01,0xF3,0x07,0xFC,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x07,0xFF,0x00,0x03,0xE0,0x3F,0xF4,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x38,0x0A,0xE7,0x80,0x03,0xC0,0x5F,0x80,0x00,
  0x00,0x00,0x00,0x20,0x07,0x81,0xFF,0x39,0xC3,0xC7,0x01,0xD7,0x80,0x3F,0x00,0x00,
  0x00,0x00,0x00,0xE0,0x1F,0xE7,0xFF,0x79,0xC7,0x87,0x9F,0xA7,0x80,0x6E,0x3C,0x00,
  0x00,0x00,0xA0,0xC0,0x3F,0xEA,0xE7,0xF3,0xEF,0x07,0x7F,0xC7,0x01,0xCF,0xFF,0x80,
  0x00,0x03,0x8F,0xFC,0x7F,0xC3,0xC7,0x7F,0xFE,0x0F,0x7E,0x8F,0x87,0xDF,0xFC,0x00,
  0x00,0x0F,0xFF,0xFF,0x73,0xC7,0x87,0xFF,0xDE,0x0E,0x50,0x07,0x1F,0x1F,0xD0,0x00,
  0x00,0x1F,0x57,0xFF,0xE7,0x8F,0x07,0xFF,0x1C,0x3E,0x00,0x0F,0xFF,0x7F,0x00,0x00,
  0x00,0x7E,0x0B,0x8F,0x8F,0x8E,0x0F,0xFF,0x9E,0x7C,0x00,0x07,0xFD,0xFC,0x00,0x00,
  0x00,0x7C,0x37,0x9F,0x1F,0x1E,0x0F,0x87,0x1E,0xF8,0x00,0x07,0xF0,0x30,0x00,0x00,
  0x00,0xF1,0xF7,0xFE,0x1E,0x1C,0x3E,0x0E,0x1F,0xF0,0x00,0x01,0x40,0x28,0x00,0x00,
  0x01,0xEF,0xE7,0xF8,0x3C,0x3E,0x7C,0x0F,0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xFF,0x8F,0xF0,0x7F,0xFE,0xF8,0x0E,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xFF,0xCF,0xC0,0xFF,0xFF,0xF0,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x8B,0xFF,0x01,0xFF,0x8F,0xC0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x87,0xFE,0x01,0xFE,0x0F,0x80,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x1F,0xDE,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0xBF,0x9E,0x01,0xC0,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0xFB,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xE7,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x47,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x0E,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// Split up images for boot animation without a huge byte array.
const unsigned char bootLogoTop[] = {
    // 'gp2040logot', 43x39px
    0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 
    0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x00, 0x0f, 0xff, 
    0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 
    0x00, 0x00, 0x06, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x0f, 0x7f, 0xb0, 0x00, 0x00, 0x1c, 0x0f, 0x33, 
    0x78, 0x00, 0x00, 0x3e, 0x06, 0x60, 0x78, 0x00, 0x00, 0x3e, 0x00, 0xf6, 0x30, 0x00, 0x00, 0x1c, 
    0x06, 0xff, 0x60, 0x00, 0x00, 0x00, 0x0f, 0x6f, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0x06, 0xf0, 0x00, 
    0x00, 0x00, 0x06, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x00, 
    0x00, 0x00, 0x00, 0xc0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0x30, 0x00, 0x00, 0x00, 0x01, 0x80, 
    0x1f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xff, 
    0xc0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x01, 
    0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00
};
const unsigned char bootLogoBottom[] = {
    // 'gp2040logotb', 80x21px
    0x7f, 0xf7, 0xff, 0x0f, 0xfc, 0x0f, 0x83, 0xc3, 0xc1, 0xf0, 0xff, 0xf7, 0xff, 0x9f, 0xfe, 0x3f, 
    0xe3, 0xc3, 0xc7, 0xfc, 0xff, 0xf7, 0xff, 0x9f, 0xfe, 0x7f, 0xf3, 0xc3, 0xcf, 0xfe, 0xff, 0xf7, 
    0xff, 0xdf, 0xfe, 0x7f, 0xf3, 0xc3, 0xcf, 0xfe, 0xf0, 0xf7, 0x87, 0xde, 0x1e, 0xf8, 0xf3, 0xc3, 
    0xcf, 0x1f, 0xf0, 0xf7, 0x87, 0xde, 0x1e, 0xf8, 0xfb, 0xc3, 0xdf, 0x0f, 0xf0, 0x07, 0x87, 0xde, 
    0x1e, 0xf0, 0x7b, 0xc3, 0xdf, 0x0f, 0xf0, 0x07, 0x87, 0xc0, 0x3e, 0xf0, 0x7b, 0xc3, 0xdf, 0x0f, 
    0xf3, 0xf7, 0xff, 0xc0, 0x7e, 0xf0, 0x7b, 0xff, 0xdf, 0x0f, 0xf3, 0xf7, 0xff, 0x81, 0xfc, 0xf0, 
    0x7b, 0xff, 0xdf, 0x0f, 0xf3, 0xf7, 0xff, 0x83, 0xf8, 0xf0, 0x7b, 0xff, 0xdf, 0x0f, 0xf3, 0xf7, 
    0xff, 0x0f, 0xe0, 0xf0, 0x79, 0xff, 0xdf, 0x0f, 0xf0, 0xf7, 0x80, 0x1f, 0xc0, 0xf0, 0x78, 0x03, 
    0xdf, 0x0f, 0xf0, 0xf7, 0x80, 0x1f, 0x80, 0xf0, 0x78, 0x03, 0xdf, 0x0f, 0xf0, 0xf7, 0x80, 0x1e, 
    0x1e, 0xf0, 0x78, 0x03, 0xdf, 0x0f, 0xf0, 0xf7, 0x80, 0x1e, 0x1e, 0xf8, 0xf8, 0x03, 0xdf, 0x1f, 
    0xf0, 0xf7, 0x80, 0x1f, 0xfe, 0x7f, 0xf0, 0x03, 0xcf, 0xfe, 0xff, 0xf7, 0x80, 0x1f, 0xfe, 0x7f, 
    0xf0, 0x03, 0xcf, 0xfe, 0xff, 0xf7, 0x80, 0x1f, 0xfe, 0x3f, 0xe0, 0x03, 0xc7, 0xfc, 0x7f, 0xe7, 
    0x80, 0x1f, 0xfe, 0x1f, 0xc0, 0x03, 0xc3, 0xf8, 0x3f, 0x87, 0x80, 0x1f, 0xfe, 0x0f, 0x80, 0x03, 
    0xc0, 0xf0
};


#endif
