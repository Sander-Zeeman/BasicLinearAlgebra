#ifndef VECTOR_2D_H
#define VECTOR_2D_H

#include <stdio.h>

// Declarations

typedef struct {
  int x;
  int y;
} iVector2D;

typedef struct {
  float x;
  float y;
} Vector2D;


// Create

iVector2D createiVector2D(int x, int y) {
  return (iVector2D){ .x=x, .y=y };
}

Vector2D createVector2D(float x, float y) {
  return (Vector2D){ .x=x, .y=y };
}

iVector2D randomiVector2D(iVector2D min_pos, iVector2D max_pos) {
  int x = rand() % (max_pos.x - min_pos.x) + min_pos.x;
  int y = rand() % (max_pos.y - min_pos.y) + min_pos.y;

  return createiVector2D(x, y);
}

Vector2D randomVector2D(Vector2D min_pos, Vector2D max_pos) {
  float x = (float)rand()/RAND_MAX * (max_pos.x - min_pos.x) + min_pos.x;
  float y = (float)rand()/RAND_MAX * (max_pos.y - min_pos.y) + min_pos.y;

  return createVector2D(x, y);
}


// Printing

void printiVector2D(iVector2D v) {
  printf("{%d, %d}\n", v.x, v.y);
}

void printVector2D(Vector2D v) {
  printf("{%f, %f}\n", v.x, v.y);
}


// Addition

iVector2D add2Dic(iVector2D v, int n) {
  v.x += n;
  v.y += n;
  return v;
}

iVector2D add2Dii(iVector2D v1, iVector2D v2) {
  v1.x += v2.x;
  v1.y += v2.y;
  return v1;
}

Vector2D add2Dfc(Vector2D v, float n) {
  v.x += n;
  v.y += n;
}

Vector2D add2Dff(Vector2D v1, Vector2D v2) {
  v1.x += v2.x;
  v1.y += v2.y;
  return v1;
}


// Multiplication

iVector2D mult2Dic(iVector2D v, int n) {
  v.x *= n;
  v.y *= n;
  return v;
}

iVector2D mult2Dii(iVector2D v1, iVector2D v2) {
  v1.x *= v2.x;
  v1.y *= v2.y;
  return v1;
}

Vector2D mult2Dfc(Vector2D v, float n) {
  v.x *= n;
  v.y *= n;
  return v;
}

Vector2D mult2Dff(Vector2D v1, Vector2D v2) {
  v1.x *= v2.x;
  v1.y *= v2.y;
  return v1;
}


#endif
