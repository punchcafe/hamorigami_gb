#include "../include/bonsai_state.h"

void bonsai_state_init(BonsaiState * state)
{
    state->x_left = vec_x(&state->position) - BONSAI_WIDTH;
    state->x_right = vec_x(&state->position) + BONSAI_WIDTH;
    state->y_up = vec_y(&state->position) - BONSAI_HEIGHT;
    state->y_down = vec_y(&state->position) + BONSAI_HEIGHT;
    state->hp = 100;
    state->water_level = 17;
    state->water_level_delta = 0;
}

unsigned char bonsai_state_inside_bonsai(BonsaiState * state, Vector * vec)
{
    int x = vec_x(vec);
    int y = vec_y(vec);
    return (x > state->x_left && x < state->x_right) && (y > state->y_up && y < state->y_down);
}

void bonsai_state_increase_level(BonsaiState * state, unsigned char delta)
{
    state->water_level_delta += delta;
}

void bonsai_state_decrease_level(BonsaiState * state, unsigned char delta)
{
    state->water_level_delta -= delta;
}

void bonsai_state_apply_delta(BonsaiState * state)
{
    if(state->water_level_delta < 0)
    {
        short abs_delta = state->water_level_delta * -1;
        if(state->water_level < abs_delta)
        {
            state->water_level = 0;
        } else {
            state->water_level -= abs_delta;
        }
    } else {
        if((BONSAI_MAX_WATER_LEVEL - state->water_level) < state->water_level_delta)
        {
            state->water_level = BONSAI_MAX_WATER_LEVEL;
        } else {
            state->water_level += state->water_level_delta;
        }
    }
    state->water_level_delta = 0;
}

unsigned char bonsai_state_update_size(BonsaiState * state, unsigned char half_width, unsigned char half_height)
{
    state->x_left = vec_x(&state->position) - half_width;
    state->x_right = vec_x(&state->position) + half_width;
    state->y_up = vec_y(&state->position) - half_height * 2;
    // y down doesn't change as we only grow up and out
    state->half_width = half_width;
    state->half_height = half_height;
}
