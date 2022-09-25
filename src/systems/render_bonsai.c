#include "../../include/systems/render_bonsai.h"
#include "../../include/game_state.h"
#include <gb/gb.h>

extern unsigned char background_index_array [];

void _system_render_bonsai_state_icons(BonsaiState * state)
{
    unsigned char temp_array [1];
    if(state->water_level < 12){
        temp_array[0] = BONSAI_FIRE_ICON_INDEX;
    } else if(state->water_level < 18){
        temp_array[0] = BONSAI_OK_ICON_INDEX;
    } else {
        temp_array[0] = BONSAI_WATER_ICON_INDEX;
    }
    set_bkg_tiles(12, 14, 1, 1, temp_array);
}

void system_render_bonsai(BonsaiRenderState * render_state, BonsaiState * bonsai_state)
{
    if(!(render_state->last_level_rendered == bonsai_state->level))
    {
        unsigned int pattern_offset = (bonsai_state->level) * 360;
        render_state->last_level_rendered = bonsai_state->level;
        set_bkg_tiles(0, 0, 20, 18, &background_index_array[pattern_offset]);
    }
    _system_render_bonsai_state_icons(bonsai_state);
}

void system_render_bonsai_result(GameState game_state)
{
    if(game_state == G_S_WIN)
    {
        set_bkg_tiles(0, 0, 20, 18, &background_index_array[1080]);

    } else {
        set_bkg_tiles(0, 0, 20, 18, &background_index_array[1440]);
    }
}
