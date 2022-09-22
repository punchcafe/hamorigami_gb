#ifndef SUNSPRITE_STATE
#define SUNSPRITE_STATE

#include "./util/vec.h"

typedef enum {S_S_DYING, S_S_CHANNELING, S_S_MOVING} SunspriteStates;

typedef struct {
    Vector position;
    unsigned short sprite_num;
    SunspriteStates state;
    unsigned short explosion_countdown;
} SunspriteState;

void sunsprite_state_init(SunspriteState * state, unsigned short sprite_num, unsigned short x_start, unsigned short y_start);
#endif