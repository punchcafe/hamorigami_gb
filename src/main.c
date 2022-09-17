#include "../include/kodama_state.h"
#include "../include/systems/render_kodama.h"
#include "../include/systems/gravity.h"
#include "../include/systems/catch_landing.h"
#include "../include/systems/horizontal_input.h"
#include "../include/systems/flying_input.h"
#include "../include/systems/translate_velocity.h"
#include "../include/systems/clamp_velocity.h"
#include<gb/gb.h>

unsigned char kodama_sprite_data[] =
{
  0x18,0x00,0x10,0x08,0x11,0x08,0x2B,0x1C,
  0x55,0x2E,0x6C,0x0B,0x04,0x03,0x05,0x03,
  0x04,0x03,0x02,0x21,0x01,0x30,0x00,0x18,
  0x04,0x0C,0x07,0x06,0x03,0x00,0x03,0x00,
  0x00,0x00,0x00,0x00,0xF0,0x00,0xC8,0x30,
  0x84,0x78,0x00,0xFC,0xC4,0xFC,0x48,0xFC,
  0x48,0xFC,0x04,0xF8,0x88,0x70,0x10,0xE0,
  0x00,0xE0,0x80,0x60,0x90,0x60,0x10,0xE0,
  0x02,0x01,0x02,0x01,0x02,0x01,0x03,0x00,
  0x04,0x03,0x04,0x03,0x06,0x01,0x04,0x03,
  0x05,0x02,0x06,0x01,0x07,0x00,0x01,0x00,
  0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x08,0xF0,0x48,0xB0,0x08,0xF0,0x08,0xF0,
  0x16,0xED,0x0F,0xF4,0xAF,0x56,0x0E,0xF5,
  0x5E,0xA6,0xAC,0x56,0x5E,0xA8,0xFC,0x14,
  0xE0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00
};

KodamaState kodama_state = {{30, 20}, {0,0}, 50};

const unsigned char kodama_data [] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

int main()
{
    set_sprite_data(0, 8, kodama_sprite_data);
    set_sprite_tile(1, 0x00);
    set_sprite_tile(2, 0x02);
    set_sprite_tile(3, 0x04);
    set_sprite_tile(4, 0x06);
    SHOW_SPRITES;
    SPRITES_8x16;
    while(1)
    {
        wait_vbl_done();
        system_gravity(&kodama_state);
        system_horizontal_input(&kodama_state);
        system_flying_input(&kodama_state);
        system_clamp_velocity(&kodama_state);
        system_translate_velocity(&kodama_state);
        system_catch_landing(&kodama_state);
        system_render_kodama(&kodama_state);
    }
}