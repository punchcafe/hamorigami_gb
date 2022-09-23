#include "../../include/systems/render_rainsprite.h"
#include "../../include/instance_render_state.h"
#include <gb/gb.h>

extern unsigned char rainsprite_normal_frames [];
extern unsigned char rainsprite_dying_frames [];
extern unsigned char rainsprite_falling_frames [];
extern unsigned char rainsprite_channeling_frames [];

void system_render_rainsprite(RainspriteInstance * instances, InstanceRenderState * render_states){
    
    // TODO: Have single animation clock
    for(unsigned short i = 0; i < RAINSPRITE_MAX_SPRITES; i++)
    {
        // TODO: from here to switch can be extracted for generic functionality
        if(instances[i].alive)
        {
            RainspriteState * state = &instances[i].state;
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
                case R_S_DYING:
                    set_sprite_tile(state->sprite_num, rainsprite_dying_frames[render_state->current_frame]);
                    render_state->current_frame = (render_state->current_frame + 1) % 4; //number of frames in one cycle for both channeling and normal
                    break;
                case R_S_CHANNELING:
                    set_sprite_tile(state->sprite_num, rainsprite_channeling_frames[render_state->current_frame]);
                    render_state->current_frame = (render_state->current_frame + 1) % 4; //number of frames in one cycle for both channeling and normal
                    break;
                case R_S_MOVING:
                    set_sprite_tile(state->sprite_num, rainsprite_normal_frames[render_state->current_frame]);
                    render_state->current_frame = (render_state->current_frame + 1) % 4; //number of frames in one cycle for both channeling and normal
                    break;
                    // Look at all this copypasta to clean up
                case R_S_FALLING:
                    set_sprite_tile(state->sprite_num, rainsprite_falling_frames[render_state->current_frame]);
                    render_state->current_frame = (render_state->current_frame + 1) % 4; //number of frames in one cycle for both channeling and normal
                    break;
                default:
                    break;
            }
        }
    }
}