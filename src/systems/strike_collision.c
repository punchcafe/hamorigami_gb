#include "../../include/systems/strike_collision.h"

#define SPRITE_HALF_HEIGHT 8
#define SPRITE_HALF_WIDTH 8
#define KODAMA_SPRITE_MIN_Y_DIST_NO_COLLISION KODAMA_HALF_HEIGHT + SPRITE_HALF_HEIGHT
#define KODAMA_SPRITE_MIN_X_DIST_NO_COLLISION KODAMA_HALF_WIDTH + SPRITE_HALF_WIDTH

unsigned char _system_strike_collision_check(Vector * position, KodamaState * kodama_state)
{
    // TODO: error, use hitbox instead
    // NOTE! here we rely on the implicit fact that rain sprites and sun sprites are the same size.
    int x_sep = vec_x(position) - vec_x(&kodama_state->position);
    if(x_sep < 0) x_sep = x_sep * -1;
    if(x_sep < KODAMA_SPRITE_MIN_X_DIST_NO_COLLISION)
    {
        int y_sep = vec_y(position) - vec_y(&kodama_state->position);
        if(y_sep < 0) y_sep = y_sep * -1;
        if(y_sep < KODAMA_SPRITE_MIN_Y_DIST_NO_COLLISION)
        {
            return 0x01;
        }
    }
    return 0x00;
}


void system_strike_collision(KodamaState * kodama_state, 
                            SunspriteInstance * sunsprites, 
                            RainspriteInstance * rainsprites)
{
    // If need be, can put this in the individual sunsprite behaviour functions for performance
    for(unsigned short i=0; i<SUNSPRITE_MAX_SPRITES; i++)
    {
        if(sunsprites[i].alive)
        {
            if(kodama_state->is_striking)
            {
                if(_system_strike_collision_check(&sunsprites[i].state.position, kodama_state))
                {
                    sunsprites[i].state.state = S_S_DYING;
                    sunsprites[i].state.explosion_countdown = 0;
                }
            }
        }
    }
    for(unsigned short i=0; i<RAINSPRITE_MAX_SPRITES; i++)
    {
        if(rainsprites[i].alive)
        {
            if(kodama_state->is_striking)
            {
                if(_system_strike_collision_check(&rainsprites[i].state.position, kodama_state))
                {
                    rainsprites[i].state.state = R_S_DYING;
                    rainsprites[i].state.counter = 0;
                }
            }
        }
    }
}