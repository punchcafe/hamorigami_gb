#ifndef VECTOR_H
#define VECTOR_H
typedef struct {
    int x;
    int y;
} Vector;

void vec_add(Vector * vec, Vector * other_vector);
int vec_x(Vector * vec);
int vec_y(Vector * vec);
void vec_set_x(Vector * vec, int x);
void vec_set_y(Vector * vec, int y);
#endif