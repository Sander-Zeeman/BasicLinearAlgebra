#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../include/Vector.h"
#include "../include/Vector_Calc.h"
#include "../include/Vector_Helpers.h"

Vec2 *create_Vec2(const float x, const float y) {
    Vec2 *v = malloc(sizeof(Vec2));
    v->x = x;
    v->y = y;
    return v;
}

void print_Vec2(const Vec2 v) {
    printf("{%f, %f}\n", v.x, v.y);
}

float length_Vec2(const Vec2 v) {
    float sq_dist = v.x*v.x + v.y*v.y;
    return sqrt(sq_dist);
}

void norm_Vec2(Vec2 *v) {
    float len = length_Vec2(*v);
    divn_Vec2(v, len);
}

void addn_Vec2(Vec2 *v, const float n) {
    v->x += n;
    v->y += n;
}

void subn_Vec2(Vec2 *v, const float n) {
    v->x -= n;
    v->y -= n;
}

void multn_Vec2(Vec2 *v, const float n) {
    v->x *= n;
    v->y *= n;
}

void divn_Vec2(Vec2 *v, const float n) {
    v->x /= n;
    v->y /= n;
}

void add_Vec2(Vec2 *v1, const Vec2 v2) {
    v1->x += v2.x;
    v1->y += v2.y;
}

void sub_Vec2(Vec2 *v1, const Vec2 v2) {
    v1->x -= v2.x;
    v1->y -= v2.y;
}

void mult_Vec2(Vec2 *v1, const Vec2 v2) {
    v1->x *= v2.x;
    v1->y *= v2.y;
}

void div_Vec2(Vec2 *v1, const Vec2 v2) {
    v1->x /= v2.x;
    v1->y /= v2.y;
}