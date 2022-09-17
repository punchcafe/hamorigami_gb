#include "../../include/systems/horizontal_input.h"
#include "../../include/util/vec.h"

#include<gb/gb.h>

void system_horizontal_input(KodamaState * state)
{
    unsigned char input = joypad();
    if(input & J_LEFT)
    {
        vec_set_x(&state->velocity, -2);
    } else if(input & J_RIGHT)
    {
        vec_set_x(&state->velocity, 2);
    } else {
        vec_set_x(&state->velocity, 0);
    }

}