#include "../../include/systems/rainsprite_behaviour.h"
#include <gb/gb.h>

void _system_rainsprite_behaviour_falling_rain(RainspriteState * state)
{
    if(vec_y(&state->position) > 132)
    {
        vec_set_y(&state->position, 132);
        state->has_landed = 0x01;
    }
    state->position.y += 3;
}

void _system_rainsprite_behaviour_explode(RainspriteState * state)
{}

void _system_rainsprite_behaviour_walk(RainspriteState * state, BonsaiState * bonsai_state)
{
    int delta_x = vec_x(&bonsai_state->position) > vec_x(&state->position) ? 1 : -1;
    Vector delta = {delta_x, 0};
    vec_add(&state->position, &delta);
    if(bonsai_state_inside_bonsai(bonsai_state, &state->position))
    {
        state->is_exploding = 0x01;
    }
}

void system_rainsprite_behaviour(RainspriteState * state, BonsaiState * bonsai_state){
    if(!state->has_landed){
        _system_rainsprite_behaviour_falling_rain(state);
    } else if(state->is_exploding) {
        _system_rainsprite_behaviour_explode(state);
    } else {
        _system_rainsprite_behaviour_walk(state, bonsai_state);
    }
}