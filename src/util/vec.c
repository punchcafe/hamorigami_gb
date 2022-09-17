#include "../../include/util/vec.h"

void vec_add(Vector * vec, Vector * other_vector)
{
    vec->x += other_vector->x;
    vec->y += other_vector->y;
}

int vec_x(Vector * vec){
    return vec->x;
}

int vec_y(Vector * vec){
    return vec->y;
}