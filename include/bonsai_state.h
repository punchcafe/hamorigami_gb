#ifndef BONSAI_STATE
#define BONSAI_STATE

// Actually half-width
#define BONSAI_WIDTH 32
#define BONSAI_HEIGHT 32

#include "./util/vec.h"

typedef struct {
    Vector position;
    unsigned short level;
    unsigned int level_time_remaining;
    unsigned int water_level;
    unsigned int hp;
    // precalculated caching
    unsigned int x_left;
    unsigned int x_right;
    unsigned int y_up;
    unsigned int y_down;
    unsigned int half_width;
    unsigned int half_height;
} BonsaiState;

void bonsai_state_init(BonsaiState * state);

unsigned char bonsai_state_inside_bonsai(BonsaiState * state, Vector * vec);

unsigned char bonsai_state_update_size(BonsaiState * state, unsigned short half_width, unsigned short half_height);
#endif