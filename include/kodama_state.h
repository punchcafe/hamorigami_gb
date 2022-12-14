#ifndef KODAMA_STATE
#define KODAMA_STATE

#define KODAMA_WIDTH 16
#define KODAMA_HALF_WIDTH 8
#define KODAMA_WIDTH 16
#define KODAMA_HALF_HEIGHT 16

#include "./util/vec.h"

typedef enum {
    K_S_MOVING, K_S_FLYING 
} KodamaStates;


typedef enum {
    K_F_LEFT, K_F_RIGHT 
} KodamaFacing;

typedef struct {
    Vector position;
    Vector velocity;
    unsigned char remaining_fly;
    KodamaStates state;

    unsigned char is_striking;
    // Hitbox is Cached here instead of being derived each time.
    int hb_x_left;
    int hb_x_right;
    int hb_y_up;
    int hb_y_down;

    // Cached so only has to be calculated once per cycle instead of rederived
    KodamaFacing facing;

} KodamaState;


// TODO: use functions to move state around

void kodama_state_land(KodamaState * state);
#endif