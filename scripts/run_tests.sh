#!/usr/bin/sh

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -std=c17 -pedantic"

$CC $CFLAGS -I ../include -c ../tests/*.c
$CC $CFLAGS -o tests *.o -L. -lTestLinAlg -lm

rm -f *.o

./tests

rm ./tests