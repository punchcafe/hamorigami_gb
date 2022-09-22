#ifndef KODAMA_STRIKE_H
#define KODAMA_STRIKE_H
#include "../kodama_state.h"

typedef struct {
    unsigned short y_displace;
    unsigned short cooldown;
} SystemKodamaStrikeState;

void system_kodama_strike(SystemKodamaStrikeState * proc_state, KodamaState * state);
#endif