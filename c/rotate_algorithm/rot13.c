#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define DEBUG 0
#define VERBOSE 0

int main(int argc, char **argv) {

    unsigned short upper_index = 65; // 'A' ascii value
    unsigned short lower_index = 97; // 'a' ascii value
    unsigned short rot = 13;

    if (DEBUG) {
        int argc = 3;
        char *argv[] = {"program.c", "hello", "uryyb"};
    }

    if (argc == 1) {
        printf("No message, exiting...\n");
        return 0;
    }

    if (VERBOSE) {
        printf("Original message:\n");
        for (unsigned short i = 1; i < argc; i++) {
            printf("%s ", argv[i]);
        }
    printf("\nApplying rot-%d:\n", rot);
    }

    for (unsigned i = 1; i < argc; i++) {
        for (unsigned j = 0; j < strlen(argv[i]); j++) {
            char c = argv[i][j];
            if (isalpha(c)) {
                if (isupper(c)) {
                    c = ((c - upper_index + rot) % 26) + upper_index;
                } else {
                    c = ((c - lower_index + rot) % 26) + lower_index;
                }
            }
            putchar(c);
        }
        printf(" ");
    }
    printf("\n");

    return 0;
}