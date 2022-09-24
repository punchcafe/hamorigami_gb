#ifndef SUNSPRITE_STATE
#define SUNSPRITE_STATE

#include "./util/vec.h"

typedef enum {S_S_DYING, S_S_CHANNELING, S_S_MOVING} SunspriteStates;

typedef struct {
    Vector position;
    unsigned char sprite_num;
    SunspriteStates state;
    unsigned char explosion_countdown;
} SunspriteState;

void sunsprite_state_init(SunspriteState * state, unsigned char sprite_num, unsigned char x_start, unsigned char y_start);
#endif