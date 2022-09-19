#include "../../include/systems/render_rainsprite.h"
#include <gb/gb.h>

void system_render_rainsprite(RainspriteState * state){
    move_sprite(state->sprite_num,vec_x(&state->position),vec_y(&state->position));
}