#include "../../include/systems/render_rainsprite.h"
#include <gb/gb.h>

void system_render_rainsprite(RainspriteInstance * instances){
    for(unsigned short i = 0; i < RAINSPRITE_MAX_SPRITES; i++)
    {
        if(instances[i].alive)
        {
            RainspriteState * state = &instances[i].state;
            move_sprite(state->sprite_num,vec_x(&state->position),vec_y(&state->position));
        }
    }
}