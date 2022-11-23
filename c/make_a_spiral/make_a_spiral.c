#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

    int n = 10;
    int *table[n];

    for (int i = 0; i < n; ++i) {
        int *array = calloc(n, sizeof(int));
        table[i] = array;
    }

    bool cont = true;
    int dir[4] = {1, n, -1, -n};
    int i = 0;

    while(cont) {
        table[i] = 1;
    }

    return 0;
}
