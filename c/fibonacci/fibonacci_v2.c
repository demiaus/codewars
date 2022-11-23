// https://www.codewars.com/kata/57a1d5ef7cb1f3db590002af
// Create function fib that returns n'th element of Fibonacci sequence (classic programming task)
#include <stdio.h>

int fib(int n) {

    if (n > 1)
        return fib(n-1) + fib(n-2);
    if (n == 1)
        return 1;

    return 0;
}

int main(void) {

    printf("Version 2\n");

    for (int i = 1; i < 20; ++i)
        printf("%d: %d\n", i , fib(i));

    return 0;
}
