#include "../../include/systems/gravity.h"

#define Y_LIMIT 100

void system_catch_landing(KodamaState * state)
{
    if(state->y > 100)
    {
        state->y = 100;
    }
}