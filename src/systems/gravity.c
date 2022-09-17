#include "../../include/systems/gravity.h"

void system_gravity(KodamaState * state)
{
    state->position.y += 1;
}