#include <stdlib.h>

char *DuplicateEncoder(char *input) {

    unsigned char len = 0;          // Max input length is 255
    char freqs[128 - ' '] = { 0 };  // Save a 'whopping' 32 bytes with that substraction

    for (unsigned char i = 0; input[i]; i++, len++) {
        freqs[(input[i] | ('a' - 'A')) - ' ']++;
    } // Will not work, if the input has '@', sorry :3

    char *output = calloc(len + 1, 1);

    for (unsigned char i = 0; i < len; i++) {
        output[i] = freqs[(input[i] | ('a' - 'A')) - ' '] < 2 ? '(' : ')';
    }

    return output;
}

int main(void) {

    return 0;
}