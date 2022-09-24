#include "../../include/systems/rainsprite_behaviour.h"
#include <gb/gb.h>

void _system_rainsprite_behaviour_falling_rain(RainspriteState * state)
{
    if(vec_y(&state->position) > 132)
    {
        vec_set_y(&state->position, 132);
        state->state = R_S_MOVING;
    }
    state->position.y += 3;
}

void _system_rainsprite_behaviour_channeling(RainspriteState * state, BonsaiState * bonsai_state)
{
    state->counter--;
    if(state->counter == 0)
    {
        bonsai_state_increase_level(bonsai_state, 2);
        state->counter = 60;
    }
}

void _system_rainsprite_behaviour_walk(RainspriteState * state, BonsaiState * bonsai_state)
{
    int delta_x = vec_x(&bonsai_state->position) > vec_x(&state->position) ? 1 : -1;
    Vector delta = {delta_x, 0};
    vec_add(&state->position, &delta);
    if(bonsai_state_inside_bonsai(bonsai_state, &state->position))
    {
        state->state = R_S_CHANNELING;
    }
}

void _system_rainsprite_behaviour_single_sprite(RainspriteState * state, BonsaiState * bonsai_state){
    switch(state->state)
    {
        case R_S_FALLING:
            _system_rainsprite_behaviour_falling_rain(state);
            break;
        case R_S_CHANNELING:
            _system_rainsprite_behaviour_channeling(state, bonsai_state);
            break;
        case R_S_MOVING:
            _system_rainsprite_behaviour_walk(state, bonsai_state);
            break;
        default:
            break;
    }
}

void system_rainsprite_behaviour(RainspriteInstance * rainsprites, BonsaiState * bonsai_state){
    // TODO: add kodama is_striking check here and do collision resolution
    for(unsigned char i=0; i<RAINSPRITE_MAX_SPRITES; i++)
    {
        if(rainsprites[i].alive)
        {
            _system_rainsprite_behaviour_single_sprite(&rainsprites[i].state, bonsai_state);
        }
    }
}

void system_rainsprite_behaviour_add_sprite(RainspriteInstance * rainsprites, int x_start, int y_start)
{
    for(unsigned char i=0; i<RAINSPRITE_MAX_SPRITES; i++)
    {
        if(!rainsprites[i].alive)
        {
            rainsprite_state_init(&rainsprites[i].state, i+10, x_start, y_start);
            rainsprites[i].alive = 0x01;
            return;
        }
    }
}