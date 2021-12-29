#include "tests.h"
#include "Vector.h"
#include "Vector_Calc.h"
#include "Vector_Helpers.h"

void multn_Vec2_test() {
    Vec2 *v = create_Vec2(0.7, 0.4);
    multn_Vec2(v, 2.1);
    assert(float_check(1.47, v->x) && "Vec2: Multn in X component.");
    assert(float_check(0.84, v->y) && "Vec2: Multn in Y component.");
    free(v);
}

void mult_Vec2_test() {
    Vec2 *v = create_Vec2(0.7, 0.4);
    Vec2 *n = create_Vec2(2.1, 2.3);
    mult_Vec2(v, *n);
    assert(float_check(1.47, v->x) && "Vec2: Mult in X component.");
    assert(float_check(0.92, v->y) && "Vec2: Mult in Y component.");    
    free(v);
    free(n);    
}

void multn_Vec3_test() {
    Vec3 *v = create_Vec3(0.7, 0.4, 0.1);
    multn_Vec3(v, 2.1);
    assert(float_check(1.47, v->x) && "Vec3: Multn in X component.");
    assert(float_check(0.84, v->y) && "Vec3: Multn in Y component.");
    assert(float_check(0.21, v->z) && "Vec3: Multn in Z component.");
    free(v);
}

void mult_Vec3_test() {
    Vec3 *v = create_Vec3(0.7, 0.4, 0.1);
    Vec3 *n = create_Vec3(2.1, 2.3, 2.5);
    mult_Vec3(v, *n);
    assert(float_check(1.47, v->x) && "Vec3: Mult in X component.");
    assert(float_check(0.92, v->y) && "Vec3: Mult in Y component.");    
    assert(float_check(0.25, v->z) && "Vec3: Mult in Z component.");    
    free(v);
    free(n);    
}

void mult_tests() {
    multn_Vec2_test();
    mult_Vec2_test();

    multn_Vec3_test();
    mult_Vec3_test();
}