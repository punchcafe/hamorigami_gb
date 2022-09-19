#ifndef SYSTEM_BONSAI_UPDATE_H
#define SYSTEM_BONSAI_UPDATE_H

#include "../bonsai_state.h"

typedef struct {
    unsigned short ticks;
} BonsaiUpdateState;

void _system_bonsai_update_hit_points(BonsaiState * state)
{
    if(state->water_level < 10) {
        state->hp -= 4;
    } else if(state->water_level < 30){
        state->hp-=2;
    } else if(state->water_level < 60){
        state->hp++;
    } else if(state->water_level < 80){
        state->hp -= 2;
    } else {
        state->hp -= 4;
    }

}

void _system_bonsai_update_level_up(BonsaiState * state)
{
    // TODO make more level specific
    state->level++;
    state->level_time_remaining = 15;
}

void _system_bonsai_update_water_level(BonsaiState * state)
{
    state->water_level--;
}

void system_bonsai_update(BonsaiUpdateState * proc_state, BonsaiState * state)
{
    if(state->hp == 0 || state->level == 1)
    {
        while(1)
        {

        }
        // TODO: add win observer and lose observer
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
    state->water_level--;
    proc_state->ticks = 0;
}
#endif