#include <stdlib.h>

int find_outlier(const int *values, size_t count) {

    int parity = ( values[0] & 1) + (values[1] & 1) + (values[2] & 1) > 1;
    while ((*values & 1) == parity) { values++; }

    return *values;
}