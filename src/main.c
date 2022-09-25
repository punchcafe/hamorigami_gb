#include "../include/kodama_state.h"
#include "../include/sunsprite_state.h"
#include "../include/rainsprite_state.h"
#include "../include/game_state.h"
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
#include "../include/systems/cleanup_dying.h"
#include "../include/systems/kodama_facing.h"
#include "../include/systems/translate_velocity.h"
#include "../include/systems/clamp_velocity.h"
#include "../include/systems/render_sunsprite.h"
#include "../include/systems/render_rainsprite.h"
#include "../include/systems/render_bonsai.h"
#include "../include/systems/sunsprite_behaviour.h"
#include "../include/systems/rainsprite_behaviour.h"
#include "../include/systems/bonsai_update.h"
#include "../include/systems/bonsai_apply_water_delta.h"
#include "../include/constants/animation_constants.h"

#include "../external/include/gbt_player.h"

//extern const unsigned char * const music_track_Data[];

#include<gb/gb.h>

extern const SpriteFactoryCommand sprite_commands [];
extern const unsigned char sprite_commands_size;

extern const unsigned char sunsprite_tile_data [];
extern const unsigned char rainsprite_tile_data [];
extern unsigned char kodama_run_pallette[];

unsigned char bonsai_state_icons[] =
{
  0x00,0x7E,0x00,0xFF,0x24,0xDB,0x24,0xDB,
  0x42,0xBD,0x3C,0xC3,0x00,0x7E,0x00,0x04,
  0x00,0x7E,0x0E,0xF1,0x1E,0xEF,0x76,0x9D,
  0xF3,0xEF,0x60,0x9F,0x00,0x7E,0x00,0x04,
  0x08,0x7E,0x24,0xFF,0x56,0xFF,0x4A,0xF7,
  0x7E,0xE7,0x1C,0xFF,0x00,0x7E,0x00,0x04
};


KodamaState kodama_state = {{30, 120}, {0,0}, 50};
SunspriteInstance sunsprite_instances [SUNSPRITE_MAX_SPRITES];
InstanceRenderState sunsprite_render_states [SUNSPRITE_MAX_SPRITES];
RainspriteInstance rainsprite_instances [RAINSPRITE_MAX_SPRITES];
InstanceRenderState rainsprite_render_states [SUNSPRITE_MAX_SPRITES];
// TODO: extract instantion of level 1 duration to function calls
BonsaiState bonsai_state = {{80, 120}, 0, 10, 50, 200};
BonsaiUpdateState bonsai_update_state = {0};
BonsaiRenderState render_bonsai_state = {BONSAI_TOTAL_LEVELS + 1}; // Larger than possible 
SystemKodamaStrikeState kodama_strike_state = {0};


extern SpriteFactoryState sprite_factory_state;

extern void _kodama_animation_setup_pattern_table();

extern const unsigned char * const game_main_loop_Data[];
extern const unsigned char * const menu_loop_Data[];

void setup_music_main()
{
  gbt_play(game_main_loop_Data, 1, 6);
  gbt_loop(1);
}

void setup_end_music()
{
  gbt_play(menu_loop_Data, 1, 6);
  gbt_loop(1);
}

void setup_sprites_render()
{
  set_sprite_data(SUNSPRITE_PATTERN_OFFSET, 14, sunsprite_tile_data);
  set_sprite_data(RAINSPRITE_PATTERN_OFFSET, 30, rainsprite_tile_data);
  _kodama_animation_setup_pattern_table();
}

extern void setup_background();

GameState game_state = G_S_PLAYING;

int main()
{
    setup_background();
    setup_music_main();
    setup_sprites_render();

    set_bkg_data(BONSAI_STATE_ICON_OFFSET, 3, bonsai_state_icons);

    bonsai_state_init(&bonsai_state);
    system_bonsai_update_init(&bonsai_update_state, &bonsai_state);
    SHOW_SPRITES;
    SHOW_BKG;
    SPRITES_8x16;
    while(game_state == G_S_PLAYING)
    {
        wait_vbl_done();
        gbt_update();
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
        system_cleanup_dying(rainsprite_instances, sunsprite_instances);
        system_render_kodama(&kodama_state);
        system_render_bonsai(&render_bonsai_state, &bonsai_state);
        system_sunsprite_behaviour(sunsprite_instances, &bonsai_state);
        system_rainsprite_behaviour(rainsprite_instances, &bonsai_state);
        system_render_rainsprite(rainsprite_instances, rainsprite_render_states);
        system_render_sunsprite(sunsprite_instances, sunsprite_render_states);
        system_bonsai_update(&bonsai_update_state, &bonsai_state, &game_state);
        system_bonsai_apply_water_delta(&bonsai_state);
    }
    for (unsigned char i = 0; i < SUNSPRITE_MAX_SPRITES; i++)
    {
      sunsprite_instances[i].state.state = S_S_DYING;
      rainsprite_instances[i].state.state = R_S_DYING;
    }
    system_render_bonsai_result(&game_state);
    kodama_state.velocity.x = 0;
    setup_end_music();
    while(1)
    {
        wait_vbl_done();
        gbt_update();
        system_cleanup_dying(rainsprite_instances, sunsprite_instances);
        system_gravity(&kodama_state);
        system_kodama_facing(&kodama_state);
        system_clamp_velocity(&kodama_state);
        system_translate_velocity(&kodama_state);
        system_catch_landing(&kodama_state);
        system_render_kodama(&kodama_state);
        system_render_rainsprite(rainsprite_instances, rainsprite_render_states);
        system_render_sunsprite(sunsprite_instances, sunsprite_render_states);
    }
    
}