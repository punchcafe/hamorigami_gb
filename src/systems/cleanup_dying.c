#include "../../include/systems/cleanup_dying.h"
#include <gb/gb.h>

void system_cleanup_dying(RainspriteInstance * rainsprite_instances, SunspriteInstance * sunsprite_instances)
{
    // Implicit: rely on both having same size for now
    for(unsigned char i=0; i<SUNSPRITE_MAX_SPRITES; i++)
    {
        if(sunsprite_instances[i].alive && sunsprite_instances[i].state.state == S_S_DYING)
        {
            if(sunsprite_instances[i].state.explosion_countdown < 58)
            {
                sunsprite_instances[i].state.explosion_countdown++;
            } else {
                sunsprite_instances[i].state.explosion_countdown = 0;
                sunsprite_instances[i].alive = 0x00;
                move_sprite(sunsprite_instances[i].state.sprite_num, 0, 0);
            }
        }
        if(rainsprite_instances[i].alive && rainsprite_instances[i].state.state == R_S_DYING)
        {
            if(rainsprite_instances[i].state.counter < 58)
            {
                rainsprite_instances[i].state.counter++;
            } else {
                rainsprite_instances[i].state.counter = 0;
                rainsprite_instances[i].alive = 0x00;
                move_sprite(rainsprite_instances[i].state.sprite_num, 0, 0);
            }
        }
    }
}