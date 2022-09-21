#include "../../include/systems/render_sunsprite.h"
#include <gb/gb.h>

// implicit 3 frames per animation

extern unsigned char sunsprite_normal_frames [];
extern unsigned char sunsprite_dying_frames [];
extern unsigned char sunsprite_channeling_frames [];

typedef struct 
{
    unsigned short ticks;
    unsigned short current_frame;
} InstanceRenderData;
// Set up parrallel Instance Render Data array 

void system_render_sunsprite(SunspriteInstance * instances){
    for(unsigned short i = 0; i < SUNSPRITE_MAX_SPRITES; i++)
    {
        if(instances[i].alive)
        {
            SunspriteState * state = &instances[i].state;
            move_sprite(state->sprite_num,vec_x(&state->position),vec_y(&state->position));
        }
    }
}