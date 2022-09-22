#include "../include/sunsprite_state.h"
void sunsprite_state_init(SunspriteState * state, unsigned short sprite_num,unsigned short x_start, unsigned short y_start)
{
    state->state = S_S_MOVING;
    state->explosion_countdown = 180;
    state->sprite_num = sprite_num;
    state->position.x = x_start;
    state->position.y = y_start;
}