#include <stdlib.h>

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {

    int *ret_array = malloc(n1 * sizeof(int));
    *z = 0;

    for (size_t i = 0; i < n1; i++) {
        char found = 0;
        for (size_t j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            ret_array[*z] = arr1[i];
            (*z)++;
        }
    }

    ret_array = realloc(ret_array, *z * sizeof(int));   // Save memory :3

    return ret_array;
}

int main(void) {

    const int arr1[3] = {1, 2, 3};
    const int arr2[2] = {1, 2};
    size_t z;

    int *array = array_diff(arr1, 3, arr2, 2, &z);

    return 0;
}