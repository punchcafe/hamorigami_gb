#ifndef RAINSPRITE_STATE
#define RAINSPRITE_STATE

#include "./util/vec.h"

typedef struct {
    Vector position;
    unsigned short sprite_num;
    unsigned char is_exploding;
    unsigned char has_landed;
} RainspriteState;
#endif