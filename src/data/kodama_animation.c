// ######## STRIKE
// SPRITES: 1 TOP LEFT, 2 TOP RIGHT... 5 BROOM
#include "../../include/kodama_animation.h"
#include <gb/gb.h>

#define KODAMA_RUN_SPRITE_OFFSET 60
#define KODAMA_NORMAL_SPRITE_OFFSET KODAMA_RUN_SPRITE_OFFSET + 14
#define KODAMA_FLYING_SPRITE_OFFSET KODAMA_NORMAL_SPRITE_OFFSET + 16
#define KODAMA_STRIKING_SPRITE_OFFSET KODAMA_FLYING_SPRITE_OFFSET + 16
#define EMPTY_TILE 0
// STRIKING_TILES

const unsigned char kodama_striking_pallette [] = {
  // 32#
  0x00,0x00,0x18,0x00,0x10,0x08,0x11,0x08,
  0x2B,0x1C,0x55,0x2E,0x6C,0x0B,0x04,0x03,
  0x05,0x03,0x04,0x03,0x02,0x01,0x01,0x00,
  0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,
  // 33
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,
  0xC8,0x30,0x84,0x78,0x00,0xFC,0x00,0xFC,
  0x84,0xFC,0x48,0xFC,0x04,0xF8,0x88,0x70,
  0x10,0xE0,0x00,0xE0,0x00,0xE0,0x10,0xE0,
  // 34
  0x07,0x00,0x07,0x00,0x0E,0x01,0x0E,0x01,
  0x0E,0x01,0x0C,0x03,0x08,0x07,0x08,0x07,
  0x08,0x07,0x0C,0x03,0x0C,0x03,0x06,0x01,
  0x07,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  // 35
  0x11,0xE0,0x33,0xC0,0x37,0xC0,0x1F,0xE0,
  0x27,0xF8,0x10,0xFF,0x08,0xFF,0x0C,0xF7,
  0x0A,0xF5,0x28,0xD3,0x05,0xF9,0x44,0xB8,
  0x0E,0xF0,0x86,0x78,0xF2,0x0C,0x1E,0x00,
  // 38
  0xC0,0x00,0xE0,0x10,0xF0,0x08,0xF8,0x04,
  0xB8,0x46,0xD7,0x28,0x7B,0x84,0x17,0xE8,
  0x09,0xF6,0x01,0xFE,0x01,0xFE,0x01,0xFE,
  0x41,0xBE,0x03,0x3C,0x16,0x08,0x06,0x08,
  // 40
  0x00,0x00,0x18,0x00,0x10,0x08,0x11,0x08,
  0x2B,0x1C,0x55,0x2E,0x6C,0x0B,0x04,0x03,
  0x05,0x03,0x04,0x03,0x02,0x01,0x01,0x00,
  0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,
  // 41
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,
  0xC8,0x30,0x84,0x78,0x00,0xFC,0xC4,0xFC,
  0x48,0xFC,0x48,0xFC,0x04,0xF8,0x88,0x70,
  0x10,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,
  // 42
  0x07,0x00,0x07,0x00,0x0E,0x01,0x0E,0x01,
  0x0E,0x01,0x0C,0x03,0x08,0x07,0x08,0x07,
  0x08,0x07,0x0C,0x03,0x0C,0x03,0x06,0x01,
  0x07,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  // 43
  0x00,0xE0,0x30,0xC0,0x30,0xC0,0x10,0xE0,
  0x20,0xF8,0x10,0xFC,0x4F,0xBD,0x0D,0xF7,
  0x0E,0xF7,0x0A,0xF3,0x05,0xF9,0x05,0xF9,
  0x17,0xE9,0x86,0x78,0xF2,0x0C,0x1E,0x00,
  // 46
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFE,0x00,0x9C,0x60,
  0x66,0x98,0x18,0xE6,0x44,0xF8,0x28,0xFE,
  0xA0,0xFC,0x90,0xF8,0xD0,0xF8,0xC0,0xF0
};

const unsigned char kodama_striking_sprite_1_anim [] = {
    KODAMA_STRIKING_SPRITE_OFFSET,
    KODAMA_STRIKING_SPRITE_OFFSET + 10
};

const unsigned char kodama_striking_sprite_2_anim [] = {
    KODAMA_STRIKING_SPRITE_OFFSET + 2,
    KODAMA_STRIKING_SPRITE_OFFSET + 12
};

const unsigned char kodama_striking_sprite_3_anim [] = {
    KODAMA_STRIKING_SPRITE_OFFSET + 4,
    KODAMA_STRIKING_SPRITE_OFFSET + 14
};

const unsigned char kodama_striking_sprite_4_anim [] = {
    KODAMA_STRIKING_SPRITE_OFFSET + 6,
    KODAMA_STRIKING_SPRITE_OFFSET + 16
};

const unsigned char kodama_striking_sprite_5_anim [] = {
    KODAMA_STRIKING_SPRITE_OFFSET + 8,
    KODAMA_STRIKING_SPRITE_OFFSET + 18
};

const unsigned char * kodama_striking_animation_tiles [] = {
    kodama_striking_sprite_1_anim, 
    kodama_striking_sprite_2_anim,
    kodama_striking_sprite_3_anim,
    kodama_striking_sprite_4_anim,
    kodama_striking_sprite_5_anim 
}; 

const KodamaAnimation kodama_striking_animation = {2, kodama_striking_animation_tiles};

// FLYING_TILES

const unsigned char kodama_flying_sprite_1_anim [] = {
    KODAMA_FLYING_SPRITE_OFFSET,
    KODAMA_FLYING_SPRITE_OFFSET + 8
};

const unsigned char kodama_flying_sprite_2_anim [] = {
    KODAMA_FLYING_SPRITE_OFFSET + 2,
    KODAMA_FLYING_SPRITE_OFFSET + 10
};

const unsigned char kodama_flying_sprite_3_anim [] = {
    KODAMA_FLYING_SPRITE_OFFSET + 4,
    KODAMA_FLYING_SPRITE_OFFSET + 12
};

const unsigned char kodama_flying_sprite_4_anim [] = {
    KODAMA_FLYING_SPRITE_OFFSET + 6,
    KODAMA_FLYING_SPRITE_OFFSET + 14
};

const unsigned char kodama_flying_sprite_5_anim [] = {
    EMPTY_TILE,
    EMPTY_TILE 
};

const unsigned char * kodama_flying_animation_tiles [] = {
    kodama_flying_sprite_1_anim, 
    kodama_flying_sprite_2_anim,
    kodama_flying_sprite_3_anim,
    kodama_flying_sprite_4_anim,
    kodama_flying_sprite_5_anim 
}; 

const KodamaAnimation kodama_flying_animation = {2, kodama_flying_animation_tiles};

const unsigned char kodama_flying_pallette [] = {
  // 48
  0x00,0x00,0x71,0x0E,0x39,0x06,0x0F,0x03,
  0x01,0x03,0x07,0x04,0x07,0x00,0x00,0x07,
  0x09,0x07,0x0A,0x07,0x08,0x07,0x04,0x43,
  0x03,0x60,0x00,0x31,0x08,0x19,0x0F,0x0C,
  // 49
  0x00,0x00,0x6E,0x90,0x5C,0xA0,0xB0,0xC0,
  0x00,0x00,0x90,0x60,0x08,0xF0,0x00,0xF8,
  0x88,0xF8,0x90,0xF8,0x90,0xF8,0x08,0xF0,
  0x10,0xE0,0x20,0xC0,0x00,0xC0,0x00,0xC0,
  // 50
  0x07,0x00,0x06,0x01,0x06,0x01,0x04,0x03,
  0x04,0x03,0x05,0x02,0x08,0x07,0x08,0x07,
  0x0D,0x02,0x08,0x07,0x0A,0x05,0x0D,0x02,
  0x0E,0x01,0x03,0x00,0x03,0x00,0x01,0x00,
  // 51
  0x60,0x80,0xA0,0x40,0x10,0xE0,0x10,0xE0,
  0x10,0xE0,0x10,0xE0,0x4C,0xBA,0x1E,0xE8,
  0x5E,0xAC,0x1C,0xEA,0xBC,0x4C,0x58,0xAC,
  0xBC,0x50,0xF8,0x28,0xC0,0x00,0x80,0x00,
  // 56
  0x00,0x00,0x45,0x3A,0x22,0x1D,0x0B,0x07,
  0x01,0x03,0x07,0x04,0x07,0x00,0x00,0x07,
  0x09,0x07,0x0A,0x07,0x08,0x07,0x04,0x43,
  0x03,0x60,0x00,0x31,0x08,0x19,0x0F,0x0C,
  // 57
  0x00,0x00,0xFE,0x01,0xF8,0x04,0xA0,0xD0,
  0x00,0x00,0x90,0x60,0x08,0xF0,0x00,0xF8,
  0x88,0xF8,0x90,0xF8,0x90,0xF8,0x08,0xF0,
  0x10,0xE0,0x20,0xC0,0x00,0xC0,0x00,0xC0,
  // 58
  0x07,0x00,0x06,0x01,0x06,0x01,0x04,0x03,
  0x04,0x03,0x04,0x03,0x08,0x07,0x0A,0x05,
  0x0D,0x02,0x08,0x07,0x0A,0x05,0x0D,0x02,
  0x0E,0x01,0x03,0x00,0x03,0x00,0x01,0x00,
  // 59
  0x60,0x80,0xA0,0x40,0x10,0xE0,0x10,0xE0,
  0x10,0xE0,0x10,0xE0,0x2C,0xDA,0x1E,0xE8,
  0x5E,0xAC,0x1C,0xEA,0xBC,0x4C,0x58,0xAC,
  0xBC,0x50,0xF8,0x28,0xC0,0x00,0x80,0x00
};

// STANDING TILES

const unsigned char kodama_normal_sprite_1_anim [] = {
    KODAMA_NORMAL_SPRITE_OFFSET,
    KODAMA_NORMAL_SPRITE_OFFSET
};

const unsigned char kodama_normal_sprite_2_anim [] = {
    KODAMA_NORMAL_SPRITE_OFFSET + 2,
    KODAMA_NORMAL_SPRITE_OFFSET + 2 
};

const unsigned char kodama_normal_sprite_3_anim [] = {
    KODAMA_NORMAL_SPRITE_OFFSET + 4,
    KODAMA_NORMAL_SPRITE_OFFSET + 8 
};

const unsigned char kodama_normal_sprite_4_anim [] = {
    KODAMA_NORMAL_SPRITE_OFFSET + 6,
    KODAMA_NORMAL_SPRITE_OFFSET + 10 
};

const unsigned char kodama_normal_sprite_5_anim [] = {
    EMPTY_TILE,
    EMPTY_TILE 
};

const unsigned char * kodama_normal_animation_tiles [] = {
    kodama_normal_sprite_1_anim, 
    kodama_normal_sprite_2_anim,
    kodama_normal_sprite_3_anim,
    kodama_normal_sprite_4_anim,
    kodama_normal_sprite_5_anim 
}; 

const KodamaAnimation kodama_normal_animation = {2, kodama_normal_animation_tiles};


const unsigned char kodama_normal_pallette [] = {
  // normal.gbr
  // 0
  0x00,0x00,0x18,0x00,0x10,0x08,0x11,0x08,
  0x2B,0x1C,0x55,0x2E,0x6C,0x0B,0x04,0x03,
  0x05,0x03,0x04,0x03,0x02,0x21,0x01,0x30,
  0x00,0x18,0x04,0x0C,0x07,0x06,0x03,0x00,
  // 1 
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,
  0xC8,0x30,0x84,0x78,0x00,0xFC,0xC4,0xFC,
  0x48,0xFC,0x48,0xFC,0x04,0xF8,0x88,0x70,
  0x10,0xE0,0x00,0xE0,0x80,0x60,0x90,0x60,
  // 2
  0x03,0x00,0x02,0x01,0x02,0x01,0x02,0x01,
  0x03,0x00,0x04,0x03,0x04,0x03,0x06,0x01,
  0x04,0x03,0x05,0x02,0x06,0x01,0x07,0x00,
  0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  // 3
  0x10,0xE0,0x08,0xF0,0x48,0xB0,0x08,0xF0,
  0x08,0xF0,0x16,0xED,0x0F,0xF4,0xAF,0x56,
  0x0E,0xF5,0x5E,0xA6,0xAC,0x56,0x5E,0xA8,
  0xFC,0x14,0xE0,0x00,0xC0,0x00,0x00,0x00,
  // 10
  0x03,0x00,0x03,0x00,0x02,0x01,0x02,0x01,
  0x02,0x01,0x04,0x03,0x04,0x03,0x06,0x01,
  0x04,0x03,0x05,0x02,0x06,0x01,0x07,0x00,
  0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,
  // 11
  0x10,0xE0,0x08,0xF0,0x08,0xF0,0x08,0xF0,
  0x08,0xF0,0x46,0xBD,0x0F,0xF4,0xAF,0x56,
  0x0E,0xF5,0x5E,0xA6,0xAC,0x56,0x5E,0xA8,
  0xFC,0x14,0xE0,0x00,0x00,0x00,0x00,0x00
};



// RUN TILES

const unsigned char kodama_run_sprite_1_anim [] = {
    KODAMA_RUN_SPRITE_OFFSET,
    KODAMA_RUN_SPRITE_OFFSET + 8 
};

const unsigned char kodama_run_sprite_2_anim [] = {
    KODAMA_RUN_SPRITE_OFFSET + 2,
    KODAMA_RUN_SPRITE_OFFSET + 2 
};

const unsigned char kodama_run_sprite_3_anim [] = {
    KODAMA_RUN_SPRITE_OFFSET + 4,
    KODAMA_RUN_SPRITE_OFFSET + 10 
};

const unsigned char kodama_run_sprite_4_anim [] = {
    KODAMA_RUN_SPRITE_OFFSET + 6,
    KODAMA_RUN_SPRITE_OFFSET + 12 
};

const unsigned char kodama_run_sprite_5_anim [] = {
    EMPTY_TILE,
    EMPTY_TILE 
};

const unsigned char * kodama_run_animation_tiles [] = {
    kodama_run_sprite_1_anim, 
    kodama_run_sprite_2_anim,
    kodama_run_sprite_3_anim,
    kodama_run_sprite_4_anim,
    kodama_run_sprite_5_anim 
}; 

const KodamaAnimation kodama_run_animation = {2, kodama_run_animation_tiles};


const unsigned char kodama_run_pallette[] = {
    // 32
    0x00,0x00,0x60,0x00,0x30,0x00,0x31,0x08,
    0xEB,0x1C,0x55,0x2E,0x0C,0x0B,0x04,0x03,
    0x05,0x03,0x04,0x03,0x02,0x21,0x01,0x30,
    0x00,0x18,0x04,0x0C,0x07,0x06,0x03,0x00,
    // 33
    0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,
    0xC8,0x30,0x84,0x78,0x00,0xFC,0xC4,0xFC,
    0x48,0xFC,0x48,0xFC,0x04,0xF8,0x88,0x70,
    0x10,0xE0,0x00,0xE0,0x80,0x60,0x90,0x60,
    // 34
    0x03,0x00,0x02,0x01,0x02,0x01,0x02,0x01,
    0x02,0x01,0x04,0x03,0x04,0x03,0x06,0x01,
    0x04,0x03,0x05,0x02,0x06,0x01,0x05,0x02,
    0x0F,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,
    // 35 
    0x10,0xE0,0x08,0xF0,0x28,0xD0,0x08,0xF0,
    0x08,0xF0,0x96,0x6D,0x0F,0xF4,0xAF,0x56,
    0x0E,0xF5,0x5E,0xA6,0xBC,0x46,0x7E,0x88,
    0xEC,0x04,0x80,0x00,0x00,0x00,0x00,0x00,
    // 40
    0x00,0x00,0x00,0x00,0x30,0x00,0x81,0x78,
    0x6B,0x1C,0x15,0x0E,0x0C,0x0B,0x04,0x03,
    0x05,0x03,0x04,0x03,0x02,0x21,0x01,0x30,
    0x00,0x18,0x04,0x0C,0x07,0x06,0x03,0x00,
    // 42
    0x03,0x00,0x02,0x01,0x02,0x01,0x02,0x01,
    0x02,0x01,0x04,0x03,0x05,0x02,0x06,0x01,
    0x04,0x03,0x05,0x02,0x06,0x01,0x0D,0x02,
    0x0F,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,
    // 43
    0x10,0xE0,0x08,0xF0,0x08,0xF0,0x48,0xB0,
    0x08,0xF0,0x06,0xFD,0x1F,0xE4,0xAF,0x56,
    0x0E,0xF5,0x5E,0xA6,0xBC,0x46,0x7E,0x88,
    0xCC,0x04,0x00,0x00,0x00,0x00,0x00,0x00
};

void _kodama_animation_setup_pattern_table()
{
    set_sprite_data(KODAMA_RUN_SPRITE_OFFSET, 14, kodama_run_pallette);
    set_sprite_data(KODAMA_NORMAL_SPRITE_OFFSET, 12, kodama_normal_pallette);
    set_sprite_data(KODAMA_FLYING_SPRITE_OFFSET, 16, kodama_flying_pallette);
    set_sprite_data(KODAMA_STRIKING_SPRITE_OFFSET, 16, kodama_striking_pallette);
}