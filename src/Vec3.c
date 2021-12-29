#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../include/Vector.h"
#include "../include/Vector_Calc.h"
#include "../include/Vector_Helpers.h"

Vec3 *create_Vec3(const float x, const float y, const float z) {
    Vec3 *v = malloc(sizeof(Vec3));
    v->x = x;
    v->y = y;
    v->z = z;
    return v;
}

void print_Vec3(const Vec3 v) {
    printf("{%f, %f, %f}\n", v.x, v.y, v.z);
}

float length_Vec3(const Vec3 v) {
    float sq_dist = v.x*v.x + v.y*v.y + v.z*v.z;
    return sqrt(sq_dist);
}

void norm_Vec3(Vec3 *v) {
    float len = length_Vec3(*v);
    divn_Vec3(v, len);
}

void addn_Vec3(Vec3 *v, const float n) {
    v->x += n;
    v->y += n;
    v->z += n;
}

void subn_Vec3(Vec3 *v, const float n) {
    v->x -= n;
    v->y -= n;
    v->z -= n;
}

void multn_Vec3(Vec3 *v, const float n) {
    v->x *= n;
    v->y *= n;
    v->z *= n;
}

void divn_Vec3(Vec3 *v, const float n) {
    v->x /= n;
    v->y /= n;
    v->z /= n;
}

void add_Vec3(Vec3 *v1, const Vec3 v2) {
    v1->x += v2.x;
    v1->y += v2.y;
    v1->z += v2.z;
}

void sub_Vec3(Vec3 *v1, const Vec3 v2) {
    v1->x -= v2.x;
    v1->y -= v2.y;
    v1->z -= v2.z;
}

void mult_Vec3(Vec3 *v1, const Vec3 v2) {
    v1->x *= v2.x;
    v1->y *= v2.y;
    v1->z *= v2.z;
}

void div_Vec3(Vec3 *v1, const Vec3 v2) {
    v1->x /= v2.x;
    v1->y /= v2.y;
    v1->z /= v2.z;
}