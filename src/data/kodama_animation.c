// ######## STRIKE
// SPRITES: 1 TOP LEFT, 2 TOP RIGHT... 5 BROOM
#include "../../include/kodama_animation.h"
#define KODAMA_RUN_SPRITE_OFFSET 74
#define EMPTY_TILE 0

// Brush tile empty

unsigned char kodama_run_sprite_1_anim [] = {
    KODAMA_RUN_SPRITE_OFFSET,
    KODAMA_RUN_SPRITE_OFFSET + 8 
};

unsigned char kodama_run_sprite_2_anim [] = {
    KODAMA_RUN_SPRITE_OFFSET + 2,
    KODAMA_RUN_SPRITE_OFFSET + 2 
};

unsigned char kodama_run_sprite_3_anim [] = {
    KODAMA_RUN_SPRITE_OFFSET + 4,
    KODAMA_RUN_SPRITE_OFFSET + 10 
};

unsigned char kodama_run_sprite_4_anim [] = {
    KODAMA_RUN_SPRITE_OFFSET + 6,
    KODAMA_RUN_SPRITE_OFFSET + 12 
};

unsigned char kodama_run_sprite_5_anim [] = {
    EMPTY_TILE,
    EMPTY_TILE 
};

unsigned char * kodama_run_animation_tiles [] = {
    kodama_run_sprite_1_anim, 
    kodama_run_sprite_2_anim,
    kodama_run_sprite_3_anim,
    kodama_run_sprite_4_anim,
    kodama_run_sprite_5_anim 
}; 

KodamaAnimation kodama_run_animation = {2, kodama_run_animation_tiles};


unsigned char kodama_run_pallette[] = {
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