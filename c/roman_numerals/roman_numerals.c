#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

char *parser(int num);

int main(void) {

    printf("Roman numerals:\n\n");

    for (unsigned short i = 1; i < 4000; i++) {
        char *string = parser(i);
        if (string == NULL) {
            return 1;
        }
        printf("%-5d : %s\n", i, string);
        free(string);
    }

    return 0;
}

char *parser(int num) {

    char *string = malloc(12);
    if (string == NULL) {
        return NULL;
    }

    unsigned short nums[6] = {M, D, C, L, X, I};
    char *letters[6] = {"M", "D", "C", "L", "X", "I"};
    unsigned short amounts[6] = { 0 };
    unsigned short n = num;

    for (unsigned short i = 0; i < 6; i++) {
        amounts[i] = n / nums[i];
        n -= amounts[i] * nums[i];
    }

    

    return string;
}