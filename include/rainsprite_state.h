#ifndef RAINSPRITE_STATE
#define RAINSPRITE_STATE

#include "./util/vec.h"

typedef struct {
    Vector position;
    unsigned short sprite_num;
    unsigned char is_exploding;
    unsigned char has_landed;
    unsigned short explosion_countdown;
} RainspriteState;

void rainsprite_state_init(RainspriteState * state, unsigned short sprite_num, unsigned short starting_x, unsigned short starting_y);
#endif