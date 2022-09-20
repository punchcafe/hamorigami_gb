#ifndef RAINSPRITE_STATE
#define RAINSPRITE_STATE

#include "./util/vec.h"

typedef struct {
    Vector position;
    unsigned short sprite_num;
    unsigned char is_exploding;
    unsigned char has_landed;
    unsigned int explosion_countdown;
} RainspriteState;

void rainsprite_state_init(RainspriteState * state, unsigned short sprite_num, unsigned int starting_x, unsigned int starting_y);
#endif