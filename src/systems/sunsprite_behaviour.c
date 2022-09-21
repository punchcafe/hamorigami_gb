#include "../../include/systems/sunsprite_behaviour.h"
#include "../../include/kodama_state.h"
#include <gb/gb.h>


void _system_sunsprite_behaviour_single_sprite(SunspriteState * state, BonsaiState * bonsai_state){
    if(state->is_exploding)
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
        state->is_exploding = 0x01;
    }
}

#define SUNSPRITE_HALF_HEIGHT 8
#define SUNSPRITE_HALF_WIDTH 8
#define KODAMA_SUNSPRITE_MIN_Y_DIST_NO_COLLISION KODAMA_HALF_HEIGHT + SUNSPRITE_HALF_HEIGHT
#define KODAMA_SUNSPRITE_MIN_X_DIST_NO_COLLISION KODAMA_HALF_WIDTH + SUNSPRITE_HALF_WIDTH

unsigned char _system_sunsprite_behaviour_collision_check(SunspriteState * state, KodamaState * kodama_state)
{
    // TODO: error, use hitbox instead
    int x_sep = vec_x(&state->position) - vec_x(&kodama_state->position);
    if(x_sep < 0) x_sep = x_sep * -1;
    if(x_sep < KODAMA_SUNSPRITE_MIN_X_DIST_NO_COLLISION)
    {
        int y_sep = vec_y(&state->position) - vec_y(&kodama_state->position);
        if(y_sep < 0) y_sep = y_sep * -1;
        if(y_sep < KODAMA_SUNSPRITE_MIN_Y_DIST_NO_COLLISION)
        {
            return 0x01;
        }
    }
    return 0x00;
}

void system_sunsprite_behaviour_add_sprite(SunspriteInstance * sunsprites, int x_start, int y_start)
{
    for(int i=0; i<SUNSPRITE_MAX_SPRITES; i++)
    {
        if(!sunsprites[i].alive)
        {
            sunsprite_state_init(&sunsprites[i].state, i+5, x_start, y_start);
            sunsprites[i].alive = 0x01;
            return;
        }
    }
}

void system_sunsprite_behaviour(SunspriteInstance * sunsprites, BonsaiState * bonsai_state, KodamaState * kodama_state)
{
    for(int i=0; i<SUNSPRITE_MAX_SPRITES; i++)
    {
        if(sunsprites[i].alive)
        {
            _system_sunsprite_behaviour_single_sprite(&sunsprites[i].state, bonsai_state);
            if(kodama_state->is_striking)
            {
                if(_system_sunsprite_behaviour_collision_check(&sunsprites[i].state, kodama_state))
                {
                    sunsprites[i].alive = 0x00;
                    sunsprites[i].state.position.x = 0;
                    // set up observer here
                }
            }
        }
    }
}