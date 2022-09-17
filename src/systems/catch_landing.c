#include "../../include/systems/gravity.h"

#define Y_LIMIT 100

void system_catch_landing(KodamaState * state)
{
    if(state->position.y > 100)
    {
        kodama_state_land(state);
        state->position.y = 100;
    }
}