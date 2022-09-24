#ifndef RAINSPRITE_STATE
#define RAINSPRITE_STATE

#include "./util/vec.h"

typedef enum {R_S_DYING, R_S_CHANNELING, R_S_MOVING, R_S_FALLING} RainspriteStates;

typedef struct {
    Vector position;
    unsigned char sprite_num;
    RainspriteStates state;
    unsigned char counter;
} RainspriteState;

void rainsprite_state_init(RainspriteState * state, unsigned char sprite_num, unsigned char starting_x, unsigned char starting_y);
#endif