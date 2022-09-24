#include "../../include/systems/sunsprite_behaviour.h"
#include "../../include/kodama_state.h"
#include <gb/gb.h>


void _system_sunsprite_behaviour_single_sprite(SunspriteState * state, BonsaiState * bonsai_state){
    if(state->state == S_S_DYING)
    {
        return;
    }
    if(state->state == S_S_CHANNELING)
    {
        state->explosion_countdown--;
        if(state->explosion_countdown == 0)
        {
            bonsai_state->water_level--;
            state->explosion_countdown = 60;
            // do explosion
        }
        return;
    }
    int delta_x = vec_x(&bonsai_state->position) > vec_x(&state->position) ? 1 : -1;
    int delta_y = vec_y(&bonsai_state->position) > vec_y(&state->position) ? 1 : -1;
    Vector delta = {delta_x, delta_y};
    vec_add(&state->position, &delta);
    if(bonsai_state_inside_bonsai(bonsai_state, &state->position))
    {
        state->state = S_S_CHANNELING;
    }
}

void system_sunsprite_behaviour_add_sprite(SunspriteInstance * sunsprites, int x_start, int y_start)
{
    for(unsigned short i=0; i<SUNSPRITE_MAX_SPRITES; i++)
    {
        if(!sunsprites[i].alive)
        {
            sunsprite_state_init(&sunsprites[i].state, i+6, x_start, y_start);
            sunsprites[i].alive = 0x01;
            return;
        }
    }
}

void system_sunsprite_behaviour(SunspriteInstance * sunsprites, BonsaiState * bonsai_state)
{
    // TODO: make this a kodama strike system which runs through all sprite types
    for(unsigned short i=0; i<SUNSPRITE_MAX_SPRITES; i++)
    {
        if(sunsprites[i].alive)
        {
            _system_sunsprite_behaviour_single_sprite(&sunsprites[i].state, bonsai_state);
        }
    }
}