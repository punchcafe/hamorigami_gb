#include "../../include/systems/horizontal_input.h"
#include<gb/gb.h>

void system_horizontal_input(KodamaState * state)
{
    unsigned char input = joypad();
    if(input & J_LEFT)
    {
        state->x--;
    }
    if(input & J_RIGHT)
    {
        state->x++;
    }
}