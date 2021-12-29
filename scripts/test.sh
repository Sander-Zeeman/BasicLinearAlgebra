#!/usr/bin/sh

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -std=c17 -pedantic"

$CC $CFLAGS -I ../include -c ../src/*.c -lm

ar rc libTestLinAlg.a *.o
rm -f *.o
ranlib libTestLinAlg.a

./run_tests.sh

rm libTestLinAlg.a