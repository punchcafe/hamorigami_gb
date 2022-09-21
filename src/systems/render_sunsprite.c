#include "../../include/systems/render_sunsprite.h"
#include <gb/gb.h>

void system_render_sunsprite(SunspriteInstance * instances){
    for(unsigned short i = 0; i < SUNSPRITE_MAX_SPRITES; i++)
    {
        if(instances[i].alive)
        {
            SunspriteState * state = &instances[i].state;
            move_sprite(state->sprite_num,vec_x(&state->position),vec_y(&state->position));
        }
    }
}