/* https://www.codewars.com/kata/54c27a33fb7da0db0100040e

A square of squares

You like building blocks. You especially like building blocks that are squares.
And what you even like more, is to arrange them into a square of square building blocks!

However, sometimes, you can't arrange them into a square. Instead, you end up with an ordinary rectangle!
Those blasted things! If you just had a way to know, whether you're currently working in vain… Wait!
That's it! You just have to check if your number of building blocks is a perfect square.

Task

Given an integral number, determine if it's a square number:

    In mathematics, a square number or perfect square is an integer that is the square of an integer;
    in other words, it is the product of some integer with itself.

The tests will always use some integral number, so don't worry about that in dynamic typed languages.

*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_square(int n) {

    int root = sqrt(n);
 
    return n == root * root;
}

// bool is_square(int n) {

    // int m = n;
    // unsigned i = 1;

    // while (n <= m * m) {
        // m = n / i++;
        // if (n == m * m) {
            // printf("%d is a square number (%d * %d)\n", n, m, m);
            // return true;
        // }
    // }

    // return false;
// }

int main(void) {

    for (int i = -10000; i <= 10000; i++) {
        if(is_square(i)) {
            printf("%d is 2 a square number\n", i);
        }
    }

    return 0;

}