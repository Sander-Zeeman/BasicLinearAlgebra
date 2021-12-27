#pragma once
#include "Vector.h"

Vec2 *create_Vec2(float x, float y);
iVec2 *create_iVec2(int x, int y);
Vec3 *create_Vec3(float x, float y, float z);
iVec3 *create_iVec3(int x, int y, int z);

void print_Vec2(Vec2 v);
void print_iVec2(iVec2 v);
void print_Vec3(Vec3 v);
void print_iVec3(iVec3 v);

int dist_Vec2(Vec2 v1, Vec2 v2);
int dist_iVec2(iVec2 v1, iVec2 v2);
int dist_Vec3(Vec3 v1, Vec3 v2);
int dist_iVec3(iVec3 v1, iVec3 v2);

void norm_Vec2(Vec2 *v);
void norm_Vec3(Vec3 *v);
