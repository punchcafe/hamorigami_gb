#include "../../include/constants/animation_constants.h"

const unsigned char sunsprite_normal_frames [] = {
    SUNSPRITE_PATTERN_OFFSET, 
    0x02 + SUNSPRITE_PATTERN_OFFSET,
    0x04 + SUNSPRITE_PATTERN_OFFSET,
    0x02 + SUNSPRITE_PATTERN_OFFSET
};
const unsigned short sunsprite_normal_frame_count = sizeof(sunsprite_normal_frames)  / sizeof(char);

const unsigned char sunsprite_dying_frames [] = {
    0x0a + SUNSPRITE_PATTERN_OFFSET, 
    0x0c + SUNSPRITE_PATTERN_OFFSET,
    0x0e + SUNSPRITE_PATTERN_OFFSET
};

const unsigned short sunsprite_dying_frame_count = sizeof(sunsprite_dying_frames)  / sizeof(char);

const unsigned char sunsprite_channeling_frames [] = {
    0x02 + SUNSPRITE_PATTERN_OFFSET, 
    0x06 + SUNSPRITE_PATTERN_OFFSET,
    0x08 + SUNSPRITE_PATTERN_OFFSET,
    0x06 + SUNSPRITE_PATTERN_OFFSET
};
const unsigned short sunsprite_channeling_frame_count = sizeof(sunsprite_channeling_frames) / sizeof(char);

const unsigned char sunsprite_tile_data[] =
{
  0x00,0x00,0x18,0x00,0x42,0x00,0xDB,0x00,
  0x24,0x18,0x42,0x3C,0xA5,0x5A,0xA5,0x5A,
  0x42,0x3C,0x66,0x18,0x5A,0x24,0x42,0x3C,
  0xA5,0x5A,0x99,0x66,0x66,0x18,0x3C,0x00,
  0x18,0x00,0x42,0x00,0xDB,0x00,0x24,0x18,
  0x42,0x3C,0xA5,0x5A,0xA5,0x5A,0x42,0x3C,
  0x66,0x18,0x5A,0x24,0x42,0x3C,0xA5,0x5A,
  0x99,0x66,0x66,0x18,0x3C,0x00,0x00,0x00,
  0x18,0x00,0x7E,0x00,0xE7,0x18,0x42,0x3C,
  0xA5,0x5A,0xA5,0x5A,0x42,0x3C,0x66,0x18,
  0x5A,0x24,0x42,0x3C,0xA5,0x5A,0x99,0x66,
  0x66,0x18,0x3C,0x00,0x00,0x00,0x00,0x00,
  0x18,0x00,0x42,0x00,0xDB,0x00,0x3C,0x00,
  0x42,0x3C,0xE7,0x18,0xE7,0x18,0x42,0x3C,
  0x7E,0x00,0x5A,0x24,0x66,0x18,0xA5,0x5A,
  0xDB,0x24,0x7E,0x00,0x3C,0x00,0x00,0x00,
  0x18,0x00,0x42,0x00,0xDB,0x00,0x3C,0x00,
  0x7E,0x00,0xE7,0x18,0xE7,0x18,0x7E,0x00,
  0x7E,0x00,0x7E,0x00,0x66,0x18,0xE7,0x18,
  0xFF,0x00,0x7E,0x00,0x3C,0x00,0x00,0x00,
  0x00,0x00,0x18,0x00,0x42,0x00,0x18,0x00,
  0x38,0x04,0x6E,0x10,0x66,0x18,0x5E,0x20,
  0x3C,0x00,0x3C,0x00,0x34,0x08,0x6E,0x10,
  0x7E,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x08,0x00,0x00,0x00,0x81,0x00,
  0x18,0x00,0x34,0x08,0x2C,0x10,0x3C,0x00,
  0x18,0x00,0x08,0x00,0x18,0x00,0x2C,0x10,
  0x34,0x08,0x18,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x10,0x00,0x28,0x10,0x10,0x00,
  0x00,0x00,0x10,0x00,0x48,0x10,0x10,0x00,
  0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char num_sunsprite_tiles = sizeof(sunsprite_tile_data)/(16);