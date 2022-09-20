#include "../../include/systems/render_kodama.h"
#include "../../include/util/vec.h"
#include<gb/gb.h>

void system_render_kodama(KodamaState * state)
{
    Vector * position = &(state->position);
    if(state->facing == K_F_LEFT)
    {
        // TODO: optimise so only done once per direction change
        set_sprite_prop(1, get_sprite_prop(0) | S_FLIPX);
        set_sprite_prop(2, get_sprite_prop(0) | S_FLIPX);
        set_sprite_prop(3, get_sprite_prop(0) | S_FLIPX);
        set_sprite_prop(4, get_sprite_prop(0) | S_FLIPX);

        move_sprite(2,vec_x(position),vec_y(position));
        move_sprite(1,vec_x(position)+8,vec_y(position));
        move_sprite(4,vec_x(position),vec_y(position)+16);
        move_sprite(3,vec_x(position)+8,vec_y(position)+16);
    } else {
        // TODO: optimise so only done once per direction change
        set_sprite_prop(1, get_sprite_prop(0) & ~S_FLIPX);
        set_sprite_prop(2, get_sprite_prop(0) & ~S_FLIPX);
        set_sprite_prop(3, get_sprite_prop(0) & ~S_FLIPX);
        set_sprite_prop(4, get_sprite_prop(0) & ~S_FLIPX);

        move_sprite(1,vec_x(position),vec_y(position));
        move_sprite(2,vec_x(position)+8,vec_y(position));
        move_sprite(3,vec_x(position),vec_y(position)+16);
        move_sprite(4,vec_x(position)+8,vec_y(position)+16);
    }
}

