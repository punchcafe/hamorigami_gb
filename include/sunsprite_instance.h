#ifndef SUNSPRITE_INSTANCE_H
#define SUNSPRITE_INSTANCE_H

#include "./sunsprite_state.h"

#define SUNSPRITE_MAX_SPRITES 6


typedef struct {
    unsigned char alive;
    SunspriteState state;
} SunspriteInstance;


#endif