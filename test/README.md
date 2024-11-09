cd ..

gcc -o xc xc.c

./xc hello.c

./xc -s hello.c > hello.bc

time ./xc test/fib.c

> take longer than 30s