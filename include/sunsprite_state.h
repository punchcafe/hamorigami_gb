#ifndef SUNSPRITE_STATE
#define SUNSPRITE_STATE

#include "./util/vec.h"

typedef struct {
    Vector position;
    unsigned short sprite_num;
    unsigned char is_exploding;
    unsigned short explosion_countdown;
} SunspriteState;

void sunsprite_state_init(SunspriteState * state, unsigned short sprite_num, unsigned int x_start, unsigned int y_start);
#endif