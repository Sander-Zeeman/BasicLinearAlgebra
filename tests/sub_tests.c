#include "tests.h"
#include "Vector.h"
#include "Vector_Calc.h"
#include "Vector_Helpers.h"

void subn_Vec2_test() {
    Vec2 *v = create_Vec2(0.7, 0.4);
    subn_Vec2(v, 2.1);
    assert(float_check(-1.4, v->x) && "Vec2: Subn in X component.");
    assert(float_check(-1.7, v->y) && "Vec2: Subn in Y component.");
    free(v);
}

void sub_Vec2_test() {
    Vec2 *v = create_Vec2(0.7, 0.4);
    Vec2 *n = create_Vec2(2.1, 2.3);
    sub_Vec2(v, *n);
    assert(float_check(-1.4, v->x) && "Vec2: Sub in X component.");
    assert(float_check(-1.9, v->y) && "Vec2: Sub in Y component.");    
    free(v);
    free(n);    
}

void subn_Vec3_test() {
    Vec3 *v = create_Vec3(0.7, 0.4, 0.1);
    subn_Vec3(v, 2.1);
    assert(float_check(-1.4, v->x) && "Vec3: Subn in X component.");
    assert(float_check(-1.7, v->y) && "Vec3: Subn in Y component.");
    assert(float_check(-2.0, v->z) && "Vec3: Subn in Z component.");
    free(v);
}

void sub_Vec3_test() {
    Vec3 *v = create_Vec3(0.7, 0.4, 0.1);
    Vec3 *n = create_Vec3(2.1, 2.3, 2.5);
    sub_Vec3(v, *n);
    assert(float_check(-1.4, v->x) && "Vec3: Sub in X component.");
    assert(float_check(-1.9, v->y) && "Vec3: Sub in Y component.");    
    assert(float_check(-2.4, v->z) && "Vec3: Sub in Z component.");    
    free(v);
    free(n);    
}

void sub_tests() {
    subn_Vec2_test();
    sub_Vec2_test();

    subn_Vec3_test();
    sub_Vec3_test();
}