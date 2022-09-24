#ifndef BONSAI_STATE
#define BONSAI_STATE

// Actually half-width
#define BONSAI_WIDTH 32
#define BONSAI_HEIGHT 32

#define BONSAI_MAX_WATER_LEVEL 100

#include "./util/vec.h"

typedef struct {
    Vector position;
    unsigned short level;
    unsigned short level_time_remaining;
    unsigned short water_level;
    // Accumulated change to water level over a single cycle.
    short water_level_delta;
    unsigned short hp;
    // precalculated caching
    unsigned short x_left;
    unsigned short x_right;
    unsigned short y_up;
    unsigned short y_down;
    unsigned short half_width;
    unsigned short half_height;
} BonsaiState;

void bonsai_state_init(BonsaiState * state);

void bonsai_state_increase_level(BonsaiState * state, unsigned short delta);

void bonsai_state_decrease_level(BonsaiState * state, unsigned short delta);

void bonsai_state_apply_delta(BonsaiState * state);

unsigned char bonsai_state_inside_bonsai(BonsaiState * state, Vector * vec);

unsigned char bonsai_state_update_size(BonsaiState * state, unsigned short half_width, unsigned short half_height);
#endif