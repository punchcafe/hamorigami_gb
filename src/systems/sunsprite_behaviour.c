#include "../../include/systems/sunsprite_behaviour.h"
#include <gb/gb.h>

void system_sunsprite_behaviour(SunspriteState * state, BonsaiState * bonsai_state){
    int delta_x = vec_x(&bonsai_state->position) > vec_x(&state->position) ? 1 : -1;
    int delta_y = vec_y(&bonsai_state->position) > vec_y(&state->position) ? 1 : -1;
    Vector delta = {delta_x, delta_y};
    vec_add(&state->position, &delta);
}