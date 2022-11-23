#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long long first;
    long long scd;
} Pair;

Pair **removNb(long long n, int *length);

int main(void) {

    int length = 0;
    Pair **pairs = NULL;

    for ( long long i = 1; i < 1000; i++) {

        pairs = removNb(i, &length);
        
        if (length) {
            printf("\n%lld\n%lld : %lld\n", i, pairs[length-1]->first, pairs[length-1]->scd);
        }
    }

    for (int i = length - 1; i >= 0; i--) {
        free(pairs[i]);
    }
    free(pairs);

    return 0;
}

Pair **removNb(long long n, int *length) {

    Pair **pairs = NULL;
    *length = 0;        // Never trust input
    long long sum = n * (n + 1LL) / 2LL;
    long long a = 6;
    long long b;

    while (a <= n) {
        a++;
        b = (sum - a) / (a + 1);
        if (b > n || a == b) {
            continue;
        }
        if ( sum == b * a + a + b) {
            (*length)++;
            pairs = calloc(*length, sizeof(Pair*));
            Pair *pair = calloc(1, sizeof(Pair));
            pair->first = a;
            pair->scd = b;
            pairs[*length-1] = pair;
        }
    }
    return pairs;
}

