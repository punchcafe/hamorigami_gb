#include "../../include/systems/render_kodama.h"
#include "../../include/util/vec.h"
#include<gb/gb.h>

void system_translate_velocity(KodamaState * state)
{
    // Implicit: t = 1;
    vec_add(&state->position, &state->velocity);
}
