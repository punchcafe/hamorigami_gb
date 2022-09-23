#ifndef RAINSPRITE_STATE
#define RAINSPRITE_STATE

#include "./util/vec.h"

typedef enum {R_S_DYING, R_S_CHANNELING, R_S_MOVING, R_S_FALLING} RainspriteStates;

typedef struct {
    Vector position;
    unsigned short sprite_num;
    RainspriteStates state;
    unsigned short counter;
} RainspriteState;

void rainsprite_state_init(RainspriteState * state, unsigned short sprite_num, unsigned short starting_x, unsigned short starting_y);
#endif