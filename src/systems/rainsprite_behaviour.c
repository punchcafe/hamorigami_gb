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

void _system_rainsprite_behaviour_explode(RainspriteState * state, BonsaiState * bonsai_state)
{
    state->explosion_countdown--;
    if(state->explosion_countdown == 0)
    {
        bonsai_state->water_level+= 2;
        state->explosion_countdown = 60;
    }
}

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

void _system_rainsprite_behaviour_single_sprite(RainspriteState * state, BonsaiState * bonsai_state){
    if(!state->has_landed){
        _system_rainsprite_behaviour_falling_rain(state);
    } else if(state->is_exploding) {
        _system_rainsprite_behaviour_explode(state, bonsai_state);
    } else {
        _system_rainsprite_behaviour_walk(state, bonsai_state);
    }
}

void system_rainsprite_behaviour(RainspriteInstance * rainsprites, BonsaiState * bonsai_state){
    // TODO: add kodama is_striking check here and do collision resolution
    for(int i=0; i<RAINSPRITE_MAX_SPRITES; i++)
    {
        if(rainsprites[i].alive)
        {
            _system_rainsprite_behaviour_single_sprite(&rainsprites[i].state, bonsai_state);
        }
    }
}

void system_rainsprite_behaviour_add_sprite(RainspriteInstance * rainsprites, int x_start, int y_start)
{
    for(int i=0; i<RAINSPRITE_MAX_SPRITES; i++)
    {
        if(!rainsprites[i].alive)
        {
            rainsprite_state_init(&rainsprites[i].state, i+10, x_start, y_start);
            rainsprites[i].alive = 0x01;
            return;
        }
    }
}