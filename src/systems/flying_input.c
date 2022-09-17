#include "../../include/systems/horizontal_input.h"
#include "../../include/util/vec.h"
#include<gb/gb.h>

const Vector _system_flying_input_flying_change = {0, -2};

void system_flying_input(KodamaState * state)
{
    if(state->remaining_fly > 0)
    {
        // can use observer pattern to avoid doing this every time
        state->state = K_S_FLYING;
        if(joypad() & J_A)
        {
            state->remaining_fly--;
            vec_add(&state->position, &_system_flying_input_flying_change);
        }
    }
}