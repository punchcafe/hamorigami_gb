#include "../../include/systems/render_sunsprite.h"
#include <gb/gb.h>

void system_render_sunsprite(SunspriteState * state){
    move_sprite(state->sprite_num,vec_x(&state->position),vec_y(&state->position));
}