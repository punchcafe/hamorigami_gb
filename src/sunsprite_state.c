#include "../include/sunsprite_state.h"
void sunsprite_state_init(SunspriteState * state)
{
    state->is_exploding = 0x00;
    state->explosion_countdown = 180;
}