#include "../include/rainsprite_state.h"
void rainsprite_state_init(RainspriteState * state, unsigned short sprite_num,unsigned int x_start, unsigned int y_start)
{
    state->is_exploding = 0x00;
    state->explosion_countdown = 180;
    state->sprite_num = sprite_num;
    state->position.x = x_start;
    state->position.y = y_start;
}