// https://www.codewars.com/kata/5541f58a944b85ce6d00006a
//
// 5 kyu Product of consecutive Fib numbers
//
// Given a number, say prod (for product), we search two Fibonacci numbers F(n) and F(n+1) verifying
//
//       F(n) * F(n+1) = prod.
//
// Your function productFib takes an integer (prod) and returns an array:
//
// [F(n), F(n+1), true] or {F(n), F(n+1), 1} or (F(n), F(n+1), True)
//
// depending on the language if F(n) * F(n+1) = prod.
//
// If you don't find two consecutive F(n) verifying
//      F(n) * F(n+1) = prod
// you will return
//
// [F(n), F(n+1), false] or {F(n), F(n+1), 0} or (F(n), F(n+1), False)
//
// F(n) being the smallest one such as F(n) * F(n+1) > prod.

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ull;

unsigned long long *productFib(ull prod) {

    unsigned long long first = 0, second = 1;

    while (first * second < prod) {
        second = first + second;
        first = second - first;
    }

    ull *result = malloc(3*sizeof(ull));
    if (!result) {
        return NULL;
    }

    result[0] = first;
    result[1] = second;

    if (first * second == prod) {
        result[2] = 1;
    }

    return result;
}

int main(void) {

    uul *prod = productFib(1222);

    for (int i = 0; i < 3; i++) {
        printf("%d, ", )
    }
}
