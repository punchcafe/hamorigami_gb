#include "../../include/systems/render_kodama.h"
#include "../../include/util/vec.h"
#include<gb/gb.h>

void system_render_kodama(KodamaState * state)
{
    Vector * position = &(state->position);
    move_sprite(1,vec_x(position),vec_y(position));
    move_sprite(2,vec_x(position)+8,vec_y(position));
    move_sprite(3,vec_x(position),vec_y(position)+16);
    move_sprite(4,vec_x(position)+8,vec_y(position)+16);
}

