#include "tests.h"
#include "Vector.h"
#include "Vector_Calc.h"
#include "Vector_Helpers.h"

void addn_Vec2_test() {
    Vec2 *v = create_Vec2(0.7, 0.4);
    addn_Vec2(v, 2.1);
    assert(float_check(2.8, v->x) && "Vec2: Addn in X component.");
    assert(float_check(2.5, v->y) && "Vec2: Addn in Y component.");
    free(v);
}

void add_Vec2_test() {
    Vec2 *v = create_Vec2(0.7, 0.4);
    Vec2 *n = create_Vec2(2.1, 2.3);
    add_Vec2(v, *n);
    assert(float_check(2.8, v->x) && "Vec2: Add in X component.");
    assert(float_check(2.7, v->y) && "Vec2: Add in Y component.");    
    free(v);
    free(n);    
}

void addn_Vec3_test() {
    Vec3 *v = create_Vec3(0.7, 0.4, 0.1);
    addn_Vec3(v, 2.1);
    assert(float_check(2.8, v->x) && "Vec3: Addn in X component.");
    assert(float_check(2.5, v->y) && "Vec3: Addn in Y component.");
    assert(float_check(2.2, v->z) && "Vec3: Addn in Z component.");
    free(v);
}

void add_Vec3_test() {
    Vec3 *v = create_Vec3(0.7, 0.4, 0.1);
    Vec3 *n = create_Vec3(2.1, 2.3, 2.5);
    add_Vec3(v, *n);
    assert(float_check(2.8, v->x) && "Vec3: Add in X component.");
    assert(float_check(2.7, v->y) && "Vec3: Add in Y component.");    
    assert(float_check(2.6, v->z) && "Vec3: Add in Z component.");    
    free(v);
    free(n);    
}

void add_tests() {
    addn_Vec2_test();
    add_Vec2_test();

    addn_Vec3_test();
    add_Vec3_test();
}