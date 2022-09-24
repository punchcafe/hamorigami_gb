#include "../../include/systems/render_kodama.h"
#include "../../include/util/vec.h"
#include "../../include/kodama_animation.h"
#include<gb/gb.h>

extern KodamaAnimation kodama_run_animation;
extern KodamaAnimation kodama_normal_animation;
extern KodamaAnimation kodama_flying_animation;

#define KODAMA_SPRITE_OFFSET 1

unsigned char anim_tick = 0;
unsigned char delay_counter = 0;

void kodama_animation_bump_frame(KodamaAnimation * animation, unsigned char frame)
{
    for(unsigned char i = 0; i < 4; i++)
    {
        set_sprite_tile(KODAMA_SPRITE_OFFSET + i, animation->frames[i][frame]);
    }
}

KodamaAnimation * current_animation(KodamaState * state)
{
    if(state->is_striking)
    {
        // TODO: update with striking
        return &kodama_normal_animation;
    }
    switch(state->state)
    {
        case K_S_FLYING:
            return  &kodama_flying_animation;
        default:
            if(vec_x(&state->velocity) == 0)
            {
                return &kodama_normal_animation;
            }
            return &kodama_run_animation;
    }
}

void system_render_kodama(KodamaState * state)
{
    // TODO: extract this to handle animation change
    if(delay_counter > 20)
    {
        delay_counter = 0;
        // set to always running for test
        anim_tick = (anim_tick + 1) % kodama_run_animation.loop_size;
        KodamaAnimation * next_anim = current_animation(state);
        kodama_animation_bump_frame(next_anim, anim_tick); 
    }
    delay_counter++;
    Vector * position = &(state->position);

    if(state->facing == K_F_LEFT)
    {
        // TODO: optimise so only done once per direction change
        set_sprite_prop(1, get_sprite_prop(0) | S_FLIPX);
        set_sprite_prop(2, get_sprite_prop(0) | S_FLIPX);
        set_sprite_prop(3, get_sprite_prop(0) | S_FLIPX);
        set_sprite_prop(4, get_sprite_prop(0) | S_FLIPX);

        move_sprite(2,vec_x(position),vec_y(position));
        move_sprite(1,vec_x(position)+8,vec_y(position));
        move_sprite(4,vec_x(position),vec_y(position)+16);
        move_sprite(3,vec_x(position)+8,vec_y(position)+16);
    } else {
        // TODO: optimise so only done once per direction change
        set_sprite_prop(1, get_sprite_prop(0) & ~S_FLIPX);
        set_sprite_prop(2, get_sprite_prop(0) & ~S_FLIPX);
        set_sprite_prop(3, get_sprite_prop(0) & ~S_FLIPX);
        set_sprite_prop(4, get_sprite_prop(0) & ~S_FLIPX);

        move_sprite(1,vec_x(position),vec_y(position));
        move_sprite(2,vec_x(position)+8,vec_y(position));
        move_sprite(3,vec_x(position),vec_y(position)+16);
        move_sprite(4,vec_x(position)+8,vec_y(position)+16);
    }
}

