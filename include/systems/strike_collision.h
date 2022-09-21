#ifndef STRIKE_COLLISION_H
#define STRIKE_COLLISION_H

#include "../kodama_state.h"
#include "../sunsprite_instance.h"
#include "../rainsprite_instance.h"

void system_strike_collision(KodamaState * kodama_state, 
                            SunspriteInstance * sunsprite_instances, 
                            RainspriteInstance * rainsprite_instances);
#endif