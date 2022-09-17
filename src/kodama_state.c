#include "../include/kodama_state.h"

void kodama_state_land(KodamaState * state)
{
    state->remaining_fly = 50;
    state->state = K_S_GROUNDED;
}