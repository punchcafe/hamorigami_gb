#include "../../include/systems/render_sunsprite.h"
#include <gb/gb.h>

// implicit 3 frames per animation for not dying animations

extern unsigned char sunsprite_normal_frames [];
extern unsigned char sunsprite_dying_frames [];
extern unsigned char sunsprite_channeling_frames [];

void system_render_sunsprite(SunspriteInstance * instances, InstanceRenderState * render_states){
    // TODO: Have single animation clock
    for(unsigned char i = 0; i < SUNSPRITE_MAX_SPRITES; i++)
    {
        if(instances[i].alive)
        {
            SunspriteState * state = &instances[i].state;
            InstanceRenderState * render_state = &render_states[i];
            move_sprite(state->sprite_num,vec_x(&state->position),vec_y(&state->position));
            if(render_state->last_enum_state != state->state)
            {
                render_state->ticks = 0;
                render_state->last_enum_state = state->state;
                render_state->current_frame = 0;
                continue;
                // Return early so we don't check tickets
            }
            if(render_state->ticks < 20)
            {
                render_state->ticks++;
                continue;
            }
            render_state->ticks = 0;
         //number of frames in one cycle for both channeling and normal
            switch(state->state){
                case S_S_DYING:
                    if(render_state->current_frame < 3)
                    {
                        set_sprite_tile(state->sprite_num, sunsprite_dying_frames[render_state->current_frame]);
                        render_state->current_frame = (render_state->current_frame + 1);
                    }
                    break;
                case S_S_CHANNELING:
                    set_sprite_tile(state->sprite_num, sunsprite_channeling_frames[render_state->current_frame]);
                    render_state->current_frame = (render_state->current_frame + 1) % 4; //number of frames in one cycle for both channeling and normal
                    break;
                case S_S_MOVING:
                    set_sprite_tile(state->sprite_num, sunsprite_normal_frames[render_state->current_frame]);
                    render_state->current_frame = (render_state->current_frame + 1) % 4; //number of frames in one cycle for both channeling and normal
                    break;
                default:
                    break;
            }
        }
    }
}