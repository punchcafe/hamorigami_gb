#ifndef SUNSPRITE_BEHAVIOUR_H
#define SUNSPRITE_BEHAVIOUR_H

#include "../bonsai_state.h"
#include "../sunsprite_state.h"
#include "../sunsprite_instance.h"

void system_sunsprite_behaviour(SunspriteInstance * sunsprites, BonsaiState * bonsai_state);

void system_sunsprite_behaviour_add_sprite(SunspriteInstance * sunsprites, int x_start, int y_start);

#endif