#ifndef SYSTEM_BONSAI_UPDATE_H
#define SYSTEM_BONSAI_UPDATE_H

#include "../bonsai_state.h"
#include "../game_state.h"

// TODO: extract
// includes level 0
#define BONSAI_TOTAL_LEVELS 2
unsigned char level_second_durations [] = {20, 30, 45};
unsigned char bonsai_half_widths [] = {16, 24, 32};
unsigned char bonsai_half_heights [] = {16, 24, 32};


typedef struct {
    unsigned char ticks;
} BonsaiUpdateState;

void _system_bonsai_decrease_hp_by(BonsaiState * state, unsigned char amount)
{
    if(state->hp < amount)
    {
        state->hp = 0;
    } else {
        state->hp -= amount;
    }
}

void _system_bonsai_update_hit_points(BonsaiState * state)
{
    if(state->water_level < 6) {
        _system_bonsai_decrease_hp_by(state, 4);
    } else if(state->water_level < 12){
        _system_bonsai_decrease_hp_by(state, 2);
    } else if(state->water_level < 18){
        if(state->hp < BONSAI_STATE_MAX_HP) state->hp++;
    } else if(state->water_level < 24){
        _system_bonsai_decrease_hp_by(state, 2);
    } else {
        _system_bonsai_decrease_hp_by(state, 4);
    }

}

void _system_bonsai_update_level_up(BonsaiState * state)
{
    // TODO make more level specific
    unsigned char new_level = state->level + 1;
    state->level = new_level;
    state->level_time_remaining = level_second_durations[new_level];
    bonsai_state_update_size(state, bonsai_half_widths[new_level], bonsai_half_heights[new_level]);
}

void _system_bonsai_update_water_level(BonsaiState * state)
{
    bonsai_state_decrease_level(state, 1);
}


void system_bonsai_update_init(BonsaiUpdateState * proc_state, BonsaiState * state)
{
    state->level = 0;
    state->level_time_remaining = level_second_durations[0];
    bonsai_state_update_size(state, bonsai_half_widths[0], bonsai_half_heights[0]);
}

void system_bonsai_update(BonsaiUpdateState * proc_state, BonsaiState * state, GameState * game_state)
{
    if(state->hp == 0 )
    {
        *game_state= G_S_LOSE;
        return; 
    }
    if(state->level > BONSAI_TOTAL_LEVELS)
    {
        *game_state= G_S_WIN;
        return; 
    }

    if(proc_state->ticks != 60)
    // To tick roughly once per second
    {
        proc_state->ticks++;
        return;
    }
    state->level_time_remaining--;
    _system_bonsai_update_hit_points(state);
    _system_bonsai_update_water_level(state);
    if(state->level_time_remaining == 0)
    {
        _system_bonsai_update_level_up(state);
    }
    proc_state->ticks = 0;
}
#endif