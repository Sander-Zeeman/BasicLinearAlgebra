#!/usr/bin/sh

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -std=c17 -pedantic -O2"

$CC $CFLAGS -I ../include -c ../src/*.c -lm
$CC $CFLAGS -shared -o libLinAlg.so *.o

rm -f *.o

mv libLinAlg.so /usr/local/lib
mkdir -p /usr/local/include/LinAlg
cp ../include/* /usr/local/include/LinAlg