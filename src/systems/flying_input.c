#include "../../include/systems/horizontal_input.h"
#include<gb/gb.h>

void system_flying_input(KodamaState * state)
{
    if(state->remaining_fly > 0)
    {
        // can use observer pattern to avoid doing this every time
        state->state = K_S_FLYING;
        if(joypad() & J_A)
        {
            state->remaining_fly--;
            state->y -= 2;
        }
    }
}