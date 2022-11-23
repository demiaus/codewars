// https://www.codewars.com/kata/57a1d5ef7cb1f3db590002af
// Create function fib that returns n'th element of Fibonacci sequence (classic programming task)
#include <stdio.h>

int fib(int n) {

    int num = 1, prev = 0, tmp;

    while (--n > 0) {
        tmp = num;
        num += prev;
        prev = tmp;
    }

    return num;
}

int main(void) {

    for (int i = 1; i < 20; ++i)
        printf("%d: %d\n", i , fib(i));

    return 0;
}
