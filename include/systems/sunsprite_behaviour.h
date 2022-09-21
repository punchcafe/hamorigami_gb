#ifndef SUNSPRITE_BEHAVIOUR_H
#define SUNSPRITE_BEHAVIOUR_H

#include "../bonsai_state.h"
#include "../sunsprite_state.h"
#include "../kodama_state.h"

#define SUNSPRITE_MAX_SPRITES 20

typedef struct {
    unsigned char alive;
    SunspriteState state;
} SunspriteInstance;

void system_sunsprite_behaviour(SunspriteInstance * sunsprites, BonsaiState * bonsai_state, KodamaState * kodama_state);

void system_sunsprite_behaviour_add_sprite(SunspriteInstance * sunsprites, int x_start, int y_start);

#endif