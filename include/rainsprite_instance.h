#ifndef RAINSPRITE_INSTANCE_H
#define RAINSPRITE_INSTANCE_H

#include "./rainsprite_state.h"

#define RAINSPRITE_MAX_SPRITES 20

typedef struct {
    unsigned char alive;
    RainspriteState state;
} RainspriteInstance;


#endif