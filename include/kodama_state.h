#ifndef KODAMA_STATE
#define KODAMA_STATE

#define KODAMA_WIDTH 16
#define KODAMA_HEIGHT 32

#include "./util/vec.h"

typedef enum {
    K_S_FLYING, K_S_GROUNDED 
} KodamaStates;

typedef struct {
    Vector position;
    Vector velocity;
    unsigned int remaining_fly;
    KodamaStates state;
} KodamaState;


// TODO: use functions to move state around

void kodama_state_land(KodamaState * state);
#endif