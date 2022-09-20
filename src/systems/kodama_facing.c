#include "../../include/systems/kodama_facing.h"
#include "../../include/util/vec.h"

void system_kodama_facing(KodamaState * state)
{
    int vel_x = vec_x(&state->velocity);
    if(vel_x != 0)
    {
        // Only update facing if in motion
        state->facing = vec_x(&state->velocity) > 0 ? K_F_RIGHT : K_F_LEFT;
    }
}