#ifndef BONSAI_STATE
#define BONSAI_STATE

// Actually half-width
#define BONSAI_WIDTH 32
#define BONSAI_HEIGHT 32

#define BONSAI_STATE_MAX_HP 140

#define BONSAI_MAX_WATER_LEVEL 30

#include "./util/vec.h"

typedef struct {
    Vector position;
    unsigned char level;
    unsigned char level_time_remaining;
    unsigned char water_level;
    // Accumulated change to water level over a single cycle.
    short water_level_delta;
    unsigned char hp;
    // precalculated caching
    unsigned char x_left;
    unsigned char x_right;
    unsigned char y_up;
    unsigned char y_down;
    unsigned char half_width;
    unsigned char half_height;
} BonsaiState;

void bonsai_state_init(BonsaiState * state);

void bonsai_state_increase_level(BonsaiState * state, unsigned char delta);

void bonsai_state_decrease_level(BonsaiState * state, unsigned char delta);

void bonsai_state_apply_delta(BonsaiState * state);

unsigned char bonsai_state_inside_bonsai(BonsaiState * state, Vector * vec);

unsigned char bonsai_state_update_size(BonsaiState * state, unsigned char half_width, unsigned char half_height);
#endif