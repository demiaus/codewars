#include <stdlib.h>

int find_outlier(const int *values, size_t count) {

    int parity;

    if      (( values[0] & 1 ) == ( values[1] & 1 ))  { parity =  values[0] & 1; }
    else if (( values[1] & 1 ) == ( values[2] & 1 ))  { parity =  values[1] & 1; }
    else                                              { parity =  values[2] & 1; }
    while   ((*values    & 1 ) ==   parity         )  {           values++     ; }

    return    *values;
}

int main(void) {

    const int a[] = {5, 7, 1, 2, 1};
    int i = find_outlier( a, 5);

    printf("%d!!!\n", i);

    return 0;
}