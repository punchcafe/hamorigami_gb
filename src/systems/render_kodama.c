#include "../../include/systems/render_kodama.h"
#include<gb/gb.h>

void system_render_kodama(KodamaState * state)
{
    move_sprite(1,state->x,state->y);
    move_sprite(2,state->x+8,state->y);
    move_sprite(3,state->x,state->y+16);
    move_sprite(4,state->x+8,state->y+16);
}

