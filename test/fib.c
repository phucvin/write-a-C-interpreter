#include <stdio.h>

int fib(int n) {
    if (n < 2) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    printf("fib(40) = %d\n", fib(40));
    return 0;
}
