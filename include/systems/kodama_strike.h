#ifndef KODAMA_STRIKE_H
#define KODAMA_STRIKE_H
#include "../kodama_state.h"

typedef struct {
    unsigned char y_displace;
    unsigned char cooldown;
} SystemKodamaStrikeState;

void system_kodama_strike(SystemKodamaStrikeState * proc_state, KodamaState * state);
#endif