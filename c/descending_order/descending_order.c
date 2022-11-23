#include <inttypes.h>
#include <stdlib.h>

int compar(const void *a, const void *b) {
    return ( *(char*)a - *(char*)b );
}

uint64_t descendingOrder(uint64_t n) {

    unsigned digits = 1;
    uint64_t n_copy = n;
    while (n_copy /= 10) { digits++; }                          // Calculate digits of n
    char *array = calloc(digits, 1);                            // Allocate memory for digit array

    for (unsigned i = 0; i < digits; i++, n /= 10) {            // Put digits in array
        array[i] = n % 10;
    }

    qsort(array, digits, 1, compar);                            // Sort digits array

    for (uint64_t i = 0, j = 1; i < digits; i++, j *= 10) {     // Put digits back into integer
        n_copy += array[i] * j;
    }

    free(array);
    return n_copy;
}

/*
https://www.codewars.com/kata/reviews/603769bbd10cce0001fc98b3/groups/60ff848792c37b0001ab7fc5
*/

// #include <inttypes.h>

// uint64_t descendingOrder(uint64_t n)
// {
  // char  a[10] = "";
  // while (n)
  // {
    // a[n % 10]++;
    // n /= 10;
  // }
  // for (int i = 9; i >= 0; i--)
    // while (a[i]--)
      // n = n * 10 + i; 
  // return n;
// }

int main(void) {

    uint64_t i = descendingOrder(65412345);

    return 0;
}