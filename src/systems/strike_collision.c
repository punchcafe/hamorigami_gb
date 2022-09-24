#include "../../include/systems/strike_collision.h"

#define SPRITE_HALF_HEIGHT 8
#define SPRITE_HALF_WIDTH 8
#define KODAMA_SPRITE_MIN_Y_DIST_NO_COLLISION 8 + SPRITE_HALF_HEIGHT
#define KODAMA_SPRITE_MIN_X_DIST_NO_COLLISION 4 + SPRITE_HALF_WIDTH

unsigned char _system_strike_collision_check(Vector * position, int hitbox_x_center, int hitbox_y_center)
{
    int x_sep = vec_x(position) - hitbox_x_center;
    if(x_sep < 0) x_sep = x_sep * -1;
    if(x_sep < KODAMA_SPRITE_MIN_X_DIST_NO_COLLISION)
    {
        int y_sep = vec_y(position) - hitbox_y_center;
        if(y_sep < 0) y_sep = y_sep * -1;
        if(y_sep < KODAMA_SPRITE_MIN_Y_DIST_NO_COLLISION)
        {
            return 0x01;
        }
    }
    return 0x00;
}

void _system_strike_collision_kodama_hitbox_center(KodamaState * kodama_state, Vector * out)
{
    // Kodama position is top left postion of the kodama sprite
    out->y = (vec_y(&kodama_state->position) + 12); // need to ensure no overflow here
    if(kodama_state->facing == K_F_LEFT)
    {
        out->x = (vec_x(&kodama_state->position) - 4); // need to ensure no overflow here
    }  else {
        // Facing right
        out->x = (vec_x(&kodama_state->position) + 22); // 16 + 4, again ensure no overflow
    }
}


void system_strike_collision(KodamaState * kodama_state, 
                            SunspriteInstance * sunsprites, 
                            RainspriteInstance * rainsprites)
{
    // If need be, can put this in the individual sunsprite behaviour functions for performance
    Vector hitbox_center;
    _system_strike_collision_kodama_hitbox_center(kodama_state, &hitbox_center);
    int hitbox_x_center = hitbox_center.x;
    int hitbox_y_center = hitbox_center.y;
    for(unsigned char i=0; i<SUNSPRITE_MAX_SPRITES; i++)
    {
        if(sunsprites[i].alive)
        {
            if(kodama_state->is_striking)
            {
                if(_system_strike_collision_check(&sunsprites[i].state.position, hitbox_x_center, hitbox_y_center))
                {
                    sunsprites[i].state.state = S_S_DYING;
                    sunsprites[i].state.explosion_countdown = 0;
                }
            }
        }
    }
    for(unsigned char i=0; i<RAINSPRITE_MAX_SPRITES; i++)
    {
        if(rainsprites[i].alive)
        {
            if(kodama_state->is_striking)
            {
                if(_system_strike_collision_check(&rainsprites[i].state.position, hitbox_x_center, hitbox_y_center))
                {
                    rainsprites[i].state.state = R_S_DYING;
                    rainsprites[i].state.counter = 0;
                }
            }
        }
    }
}