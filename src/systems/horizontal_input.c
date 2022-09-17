#include "../../include/systems/horizontal_input.h"
#include "../../include/util/vec.h"

#include<gb/gb.h>

const Vector _system_horizontal_input_left_input = {-1, 0};
const Vector _system_horizontal_input_right_input = {1, 0};

void system_horizontal_input(KodamaState * state)
{
    unsigned char input = joypad();
    if(input & J_LEFT)
    {
        vec_add(&state->position, &_system_horizontal_input_left_input);
    }
    if(input & J_RIGHT)
    {
        vec_add(&state->position, &_system_horizontal_input_right_input);
    }
}