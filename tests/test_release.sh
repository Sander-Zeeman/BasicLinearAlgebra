#!/usr/bin/sh

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -std=c17 -pedantic"

$CC $CFLAGS -I /usr/local/include/LinAlg -c *.c
$CC $CFLAGS -o tests *.o -lLinAlg -lm

rm -f *.o

./tests

rm ./tests