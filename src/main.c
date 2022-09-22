#include "../include/kodama_state.h"
#include "../include/sunsprite_state.h"
#include "../include/rainsprite_state.h"
#include "../include/bonsai_state.h"
#include "../include/instance_render_state.h"
#include "../include/systems/render_kodama.h"
#include "../include/systems/gravity.h"
#include "../include/systems/catch_landing.h"
#include "../include/systems/horizontal_input.h"
#include "../include/systems/flying_input.h"
#include "../include/systems/kodama_strike.h"
#include "../include/systems/strike_collision.h"
#include "../include/systems/sprite_factory.h"
#include "../include/systems/kodama_facing.h"
#include "../include/systems/translate_velocity.h"
#include "../include/systems/clamp_velocity.h"
#include "../include/systems/render_sunsprite.h"
#include "../include/systems/render_rainsprite.h"
#include "../include/systems/render_bonsai.h"
#include "../include/systems/sunsprite_behaviour.h"
#include "../include/systems/rainsprite_behaviour.h"
#include "../include/systems/bonsai_update.h"
#include "../include/constants/animation_constants.h"

#include "../external/include/gbt_player.h"

//extern const unsigned char * const music_track_Data[];

#include<gb/gb.h>

extern const SpriteFactoryCommand sprite_commands [];
extern const unsigned int sprite_commands_size;

extern const unsigned char sunsprite_tile_data [];
extern const unsigned char num_sunsprite_tiles;

unsigned char black_square_data [] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

unsigned char platform_tile_data [] = {
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
};

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

unsigned char sunsprite_data[] =
{
  0x18,0x00,0x00,0x18,0xC3,0x00,0x18,0xC3,
  0x24,0x18,0x42,0x3C,0xA5,0x5A,0xA5,0x5A,
  0x42,0x3C,0x66,0x18,0x5A,0x24,0x42,0x3C,
  0xA5,0x5A,0x99,0x66,0x66,0x18,0x00,0x3C
};

unsigned char bonsai_data[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x07,0x0B,0x07,0x07,0x18,0x00,0x1F,
  0x00,0x1F,0x0A,0x05,0x07,0x00,0x00,0x00,
  0x3F,0x00,0x19,0x06,0x0E,0x01,0x01,0x01,
  0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x03,
  0xA8,0xFF,0xFF,0xFF,0xE0,0x1F,0x00,0xFF,
  0x00,0xFF,0x15,0xEA,0x3F,0xC0,0xC0,0xC0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x1E,0x00,0x5C,0x20,0x30,0xC0,0x80,0x80,
  0x00,0x80,0x00,0x80,0x00,0xC0,0x00,0xC0,
  0x15,0xFF,0xFF,0xFF,0x03,0xFC,0x00,0xFF,
  0x00,0xFF,0x54,0xAB,0xFE,0x01,0x01,0x01,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xF0,0xE8,0xF0,0xF0,0x0C,0x00,0xFC,
  0x00,0xFC,0x28,0xD0,0x70,0x80,0x80,0x80
};

unsigned char bonsai_state_icons[] =
{
  0x00,0x7E,0x00,0xFF,0x24,0xDB,0x24,0xDB,
  0x42,0xBD,0x3C,0xC3,0x00,0x7E,0x00,0x04,
  0x00,0x7E,0x0E,0xF1,0x1E,0xEF,0x76,0x9D,
  0xF3,0xEF,0x60,0x9F,0x00,0x7E,0x00,0x04,
  0x08,0x7E,0x24,0xFF,0x56,0xFF,0x4A,0xF7,
  0x7E,0xE7,0x1C,0xFF,0x00,0x7E,0x00,0x04
};

unsigned char rainsprite_data[] =
{
  0x00,0x00,0x00,0x38,0x38,0x4C,0x38,0x4E,
  0x36,0x7E,0x54,0x7E,0x42,0x7E,0x24,0x3C,
  0x10,0x6E,0x18,0x66,0x3C,0xE2,0x5E,0xF7,
  0x6A,0xFF,0xDF,0xF7,0x7E,0x7E,0x3C,0x3C
};


KodamaState kodama_state = {{30, 120}, {0,0}, 50};
SunspriteInstance sunsprite_instances [SUNSPRITE_MAX_SPRITES];
InstanceRenderState sunsprite_render_states [SUNSPRITE_MAX_SPRITES];
RainspriteInstance rainsprite_instances [RAINSPRITE_MAX_SPRITES];
// TODO: extract instantion of level 1 duration to function calls
BonsaiState bonsai_state = {{120, 120}, 0, 10, 50, 200};
BonsaiUpdateState bonsai_update_state = {0};
BonsaiRenderState render_bonsai_state = {BONSAI_TOTAL_LEVELS + 1}; // Larger than possible 
SystemKodamaStrikeState kodama_strike_state = {0};


extern SpriteFactoryState sprite_factory_state;

const unsigned char kodama_data [] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

void setup_sunsprite_render()
{
  set_sprite_data(SUNSPRITE_PATTERN_OFFSET, 14, sunsprite_tile_data);
}

int main()
{
    setup_sunsprite_render();

    for(int i=0; i < 240; i++)
    {
      unsigned char tiles [] = {0x00};
      set_bkg_tiles(i%20, i/16, 1, 1, tiles);
    }
    // TODO: extract setup to functions with constants
    set_sprite_data(0, 8, kodama_sprite_data);
    set_sprite_data(8, 9, sunsprite_data);
    set_sprite_data(10, 11, rainsprite_data);
    set_sprite_data(15, 1, black_square_data);
    set_bkg_data(1, 1, black_square_data);
    set_bkg_data(2, 16, bonsai_data);
    set_bkg_data(BONSAI_STATE_ICON_OFFSET, 3, bonsai_state_icons);
    set_bkg_tiles(0, 17, 31, 1, platform_tile_data);
    set_sprite_tile(1, 0x00);
    set_sprite_tile(2, 0x02);
    set_sprite_tile(3, 0x04);
    set_sprite_tile(4, 0x06);
    // Rainsprite
    set_sprite_tile(10, 0x0b);

    bonsai_state_init(&bonsai_state);
    system_bonsai_update_init(&bonsai_update_state, &bonsai_state);
    // Broom
    set_sprite_tile(20, 0x0f);
    SHOW_SPRITES;
    SHOW_BKG;
    SPRITES_8x16;
    // gbt_play(party_bgm_loop_Data, 1, 7);
    while(1)
    {
        wait_vbl_done();
        // gbt_update();
        system_sprite_factory(&sprite_factory_state, sprite_commands, rainsprite_instances, sunsprite_instances);
        system_gravity(&kodama_state);
        system_horizontal_input(&kodama_state);
        system_flying_input(&kodama_state);
        system_kodama_facing(&kodama_state);
        system_clamp_velocity(&kodama_state);
        system_translate_velocity(&kodama_state);
        system_catch_landing(&kodama_state);
        system_kodama_strike(&kodama_strike_state, &kodama_state);
        system_strike_collision(&kodama_state, sunsprite_instances, rainsprite_instances);
        system_render_kodama(&kodama_state);
        system_render_bonsai(&render_bonsai_state, &bonsai_state);
        system_sunsprite_behaviour(sunsprite_instances, &bonsai_state);
        system_rainsprite_behaviour(rainsprite_instances, &bonsai_state);
        system_render_rainsprite(rainsprite_instances);
        system_render_sunsprite(sunsprite_instances, sunsprite_render_states);
        system_bonsai_update(&bonsai_update_state, &bonsai_state);
    }
}