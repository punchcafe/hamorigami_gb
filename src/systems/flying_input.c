#include "../../include/systems/horizontal_input.h"
#include "../../include/util/vec.h"
#include<gb/gb.h>

const Vector _system_flying_input_flying_change = {0, -2};

void system_flying_input(KodamaState * state)
{
    unsigned char pressing_fly = joypad() & J_A;
    if(state->remaining_fly > 0 && pressing_fly)
    {
        state->state = K_S_FLYING;
        state->remaining_fly--;
        vec_add(&state->velocity, &_system_flying_input_flying_change);
    } else {
        state->state = K_S_MOVING;
    }
}