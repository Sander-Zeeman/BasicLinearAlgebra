#include "tests.h"
#include "Vector.h"
#include "Vector_Calc.h"
#include "Vector_Helpers.h"

void divn_Vec2_test() {
    Vec2 *v = create_Vec2(8.5, 4.0);
    divn_Vec2(v, 5);
    assert(float_check(1.7, v->x) && "Vec2: Divn in X component.");
    assert(float_check(0.8, v->y) && "Vec2: Divn in Y component.");
    free(v);
}

void div_Vec2_test() {
    Vec2 *v = create_Vec2(2.1, 2.5);
    Vec2 *n = create_Vec2(0.7, 0.25);
    div_Vec2(v, *n);
    assert(float_check(3.0, v->x) && "Vec2: Div in X component.");
    assert(float_check(10.0, v->y) && "Vec2: Div in Y component.");    
    free(v);
    free(n);    
}

void divn_Vec3_test() {
    Vec3 *v = create_Vec3(8.5, 4.0, 1.5);
    divn_Vec3(v, 5);
    assert(float_check(1.7, v->x) && "Vec3: Divn in X component.");
    assert(float_check(0.8, v->y) && "Vec3: Divn in Y component.");
    assert(float_check(0.3, v->z) && "Vec3: Divn in Z component.");
    free(v);
}

void div_Vec3_test() {
    Vec3 *v = create_Vec3(2.1, 2.5, 3.2);
    Vec3 *n = create_Vec3(0.7, 0.25, 0.8);
    div_Vec3(v, *n);
    assert(float_check(3.0, v->x) && "Vec3: Div in X component.");
    assert(float_check(10.0, v->y) && "Vec3: Div in Y component.");    
    assert(float_check(4.0, v->z) && "Vec3: Div in Z component.");    
    free(v);
    free(n);    
}

void div_tests() {
    divn_Vec2_test();
    div_Vec2_test();

    divn_Vec3_test();
    div_Vec3_test();
}