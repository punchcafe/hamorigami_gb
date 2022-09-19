#include "../../include/systems/render_bonsai.h"
#include <gb/gb.h>

const unsigned char _bonsai_tiles [] = {
    0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17
    //0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07
};

const unsigned char _temp_bonsai_tiles [] = {
    0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01
};


void _system_render_bonsai_state_icons(BonsaiState * state)
{
    unsigned char temp_array [1];
    if(state->water_level < 30){
        temp_array[0] = BONSAI_FIRE_ICON_INDEX;
    } else if(state->water_level < 60){
        temp_array[0] = BONSAI_OK_ICON_INDEX;
    } else {
        temp_array[0] = BONSAI_WATER_ICON_INDEX;
    }
    set_bkg_tiles(15, 10, 1, 1, temp_array);
}

void system_render_bonsai(BonsaiRenderState * render_state, BonsaiState * bonsai_state)
{
    if(!render_state->already_rendered)
    {
        set_bkg_tiles(bonsai_state->x_left/8, bonsai_state->y_up/8, 4, 4, _temp_bonsai_tiles);
        render_state->already_rendered = 0x01;
    }
    _system_render_bonsai_state_icons(bonsai_state);
}


