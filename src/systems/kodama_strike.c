#include "../../include/systems/kodama_strike.h"

#include <gb/gb.h>
#include <gb/hardware.h>

void _system_kodama_strike_update_strike(SystemKodamaStrikeState * proc_state, KodamaState * state)
{
    if(proc_state->y_displace >= 16)
    {
        state->is_striking = 0x00;
        proc_state->cooldown = 60;
        // TODO: hide sprite
        return;
    }


    int x_position = vec_x(&state->position);
    int x_left;
    int x_right;
    if(state->facing== K_F_LEFT)
    {
        x_left = x_position - 8;
        x_right = x_position;
    } else {
        x_left = x_position + 16;
        x_right = x_position + 24;
    }

    proc_state->y_displace++;
    state->hb_y_up = vec_y(&state->position) + 8;
    state->hb_y_down = state->hb_y_up + 16;
    state->hb_x_left = x_left;
    state->hb_x_right = x_right;

    move_sprite(20, state->hb_x_left,state->hb_y_up);
}

void system_kodama_strike(SystemKodamaStrikeState * proc_state, KodamaState * state)
{
    if(state->is_striking)
    {
        _system_kodama_strike_update_strike(proc_state, state);
    } else if(proc_state->cooldown != 0) {
        proc_state->cooldown--;
    } else if(joypad() & J_B)
    {
        state->is_striking = 0x01;
        proc_state->y_displace = 0;
    }
}