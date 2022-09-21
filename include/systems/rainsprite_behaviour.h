#ifndef RAINSPRITE_BEHAVIOUR_H
#define RAINSPRITE_BEHAVIOUR_H

#include "../rainsprite_state.h"
#include "../rainsprite_instance.h"
#include "../bonsai_state.h"
#include <gb/gb.h>

void system_rainsprite_behaviour(RainspriteInstance * instances, BonsaiState * bonsai_state);

void system_rainsprite_behaviour_add_sprite(RainspriteInstance * rainsprites, int x_start, int y_start);

#endif