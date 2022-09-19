#include "../include/bonsai_state.h"

void bonsai_state_init(BonsaiState * state)
{
    state->x_left = vec_x(&state->position) - BONSAI_WIDTH;
    state->x_right = vec_x(&state->position) + BONSAI_WIDTH;
    state->y_up = vec_y(&state->position) - BONSAI_HEIGHT;
    state->y_down = vec_y(&state->position) + BONSAI_HEIGHT;
}

unsigned char bonsai_state_inside_bonsai(BonsaiState * state, Vector * vec)
{
    int x = vec_x(vec);
    int y = vec_y(vec);
    return (x > state->x_left && x < state->x_right) && (y > state->y_up && y < state->y_down);
}