#include "tests.h"
#include <stdio.h>

bool float_check(float ans, float guess) {
    return ans > guess - 0.001 && ans < guess + 0.001;
}

int main() {
    helper_tests();
    add_tests();
    sub_tests();
    mult_tests();
    div_tests();
    printf("Tests passed successfully!\n");
    return 0;
}