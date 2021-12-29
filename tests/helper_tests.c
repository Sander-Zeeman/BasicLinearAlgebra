#include "tests.h"
#include "Vector.h"
#include "Vector_Helpers.h"

void length_Vec2_test() {
    Vec2 *v = create_Vec2(3.0, 4.0);
    float length = length_Vec2(*v);
    assert(float_check(5.0, length) && "Vec2: Length");    
    free(v);
}

void norm_Vec2_test() {
    Vec2 *v = create_Vec2(3.0, 4.0);
    norm_Vec2(v);
    float length = length_Vec2(*v);
    assert(float_check(1.0, length) && "Vec2: Norm");
    free(v);
}

void length_Vec3_test() {
    Vec3 *v = create_Vec3(2.0, 3.0, 6.0);
    float length = length_Vec3(*v);
    assert(float_check(7.0, length) && "Vec3: Length");    
    free(v);
}

void norm_Vec3_test() {
    Vec3 *v = create_Vec3(3.0, 4.0, 5.0);
    norm_Vec3(v);
    float length = length_Vec3(*v);
    assert(float_check(1.0, length) && "Vec3: Norm");
    free(v);
}



void helper_tests() {
    length_Vec2_test();
    norm_Vec2_test();

    length_Vec3_test();
    norm_Vec3_test();
}