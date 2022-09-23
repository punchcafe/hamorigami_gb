#include "../include/rainsprite_state.h"
void rainsprite_state_init(RainspriteState * state, unsigned short sprite_num,unsigned short x_start, unsigned short y_start)
{
    state->state = R_S_FALLING;
    state->counter = 180;
    state->sprite_num = sprite_num;
    state->position.x = x_start;
    state->position.y = y_start;
}

/*
subtract the distances between them.
So, left wall to left wall

So if I calculate center point distances, I can determin if it is colliding

mid_1_x - mid_2_x
mid_1_y - mid_2_y
if(dist_x < half_height_1 + half_height_2)
{
    collision
}
*/