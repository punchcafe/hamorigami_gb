#include "../../include/systems/clamp_velocity.h"
#include "../../include/util/vec.h"
#include<gb/gb.h>

#define VEL_LIM_POS_X 4 
#define VEL_LIM_NEG_X -4 
#define VEL_LIM_POS_Y 4
#define VEL_LIM_NEG_Y -4

void system_clamp_velocity(KodamaState * state)
{
    int v_x = vec_x(&state->velocity);
    int v_y = vec_y(&state->velocity);
    Vector * velocity = &state->velocity;
    if(v_x > VEL_LIM_POS_X)
    {
        vec_set_x(velocity, VEL_LIM_POS_X);
    }
    if(v_x < VEL_LIM_NEG_X)
    {
        vec_set_x(velocity, VEL_LIM_NEG_X);
    }
    if(v_y > VEL_LIM_POS_X)
    {
        vec_set_y(velocity, VEL_LIM_POS_Y);
    }
    if(v_y < VEL_LIM_NEG_Y)
    {
        vec_set_y(velocity, VEL_LIM_NEG_Y);
    }
}
