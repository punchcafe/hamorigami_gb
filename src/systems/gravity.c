#include "../../include/systems/gravity.h"
#include "../../include/util/vec.h"

const Vector _system_gravity_gravity_vec = {0, 1};

void system_gravity(KodamaState * state)
{
    vec_add(&state->velocity, &_system_gravity_gravity_vec);
}