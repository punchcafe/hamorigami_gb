#include "../../include/systems/render_kodama.h"
#include<gb/gb.h>

void system_render_kodama(KodamaState * state)
{
    move_sprite(1,state->x,state->y);
}

