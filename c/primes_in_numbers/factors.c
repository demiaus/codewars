#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* factors(int num) {

    unsigned i = 2;
    unsigned hits;
    char *string = calloc(256, 1);
    char substring[80] = { 0 };

    while (num > 1) {
        hits = 0;
        while (num % i == 0) {
            hits++;
            num /= i;
        }
        if (hits > 0) {
            if (hits > 1) {
                sprintf(substring, "(%d**%d)", i, hits);
            } else {
                sprintf(substring, "(%d)", i);
            }
            strcat(string, substring);
        }
        i++;
    }

    return string;
}

int main(void) {

    clock_t begin = clock();

    for (int i = 2; i < 100; i++) {
        char *string = factors(i);
        printf("%d: %s\n", i, string);
        free(string);
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time spent: %lf\n", time_spent);

    return 0;
}
