#include "../include/rainsprite_state.h"
void rainsprite_state_init(RainspriteState * state, unsigned short sprite_num,unsigned int x_start, unsigned int y_start)
{
    state->is_exploding = 0x00;
    state->explosion_countdown = 180;
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