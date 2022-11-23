#include <stddef.h>

int find_odd (size_t length, const int array[length]) {

    int odd = -1;       // Initialize, so compiler stays happy
    char oddity = 0;    // "Boolean" for oddity of int

    for (size_t i = 0; i < length; i++) {
        for (size_t j = 0; j < length; j++) {
            if (j < i && array[i] == array[j]) {    // We don't want to match lower indeces again,
                break;                              // they are counted already
            }
            if (array[i] == array[j]) {
                oddity ^= 1;  // Flips 0 -> 1 or 1 -> 0
            }
        }
        if (oddity) {
            odd = array[i];
            break;
        }
    }

    return odd;
}

/*
https://www.codewars.com/kata/reviews/616aaecd91c65f00012fea4f/groups/616aaece91c65f00012fea53
*/

// int find_odd (size_t length, const int array[length])
// {
  // int odd_int = 0;

  // for (size_t i = 0; i < length; i++)
    // odd_int ^= array[i];

  // return odd_int;
// }

int main(void) {

    const int array[] = {1,2,2,3,3,3,4,3,3,3,2,2,1};
    size_t len = sizeof(array) / sizeof(int);
    int i = find_odd(len, array);

    return 0;
}