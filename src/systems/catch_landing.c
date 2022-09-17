#include "../../include/systems/gravity.h"
#include "../../include/util/vec.h"

#define Y_LIMIT 100

void system_catch_landing(KodamaState * state)
{
    if(vec_y(&(state->position)) > Y_LIMIT)
    {
        kodama_state_land(state);
        vec_set_y(&state->position, 100);
    }
}