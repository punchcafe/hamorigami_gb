#ifndef BONSAI_STATE
#define BONSAI_STATE

#define BONSAI_WIDTH 16
#define BONSAI_HEIGHT 32

#include "./util/vec.h"

typedef struct {
    Vector position;
    // precalculated caching
    unsigned int x_left;
    unsigned int x_right;
    unsigned int y_up;
    unsigned int y_down;
} BonsaiState;

void bonsai_state_init(BonsaiState * state);

unsigned char bonsai_state_inside_bonsai(BonsaiState * state, Vector * vec);
#endif