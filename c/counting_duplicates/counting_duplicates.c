#include <stddef.h>
#include <stdlib.h>
#include <string.h>

size_t duplicate_count(const char *text) {

    size_t dups = 0;
    unsigned len = strlen(text);
    char *text_c = calloc(len + 1, 1);
    strcpy(text_c, text);

    for (unsigned i = 0; i < len; i++) {
        if (text_c[i] == ' ') {
            continue;
        }
        char c = 32 | text_c[i];
        char flag = 0;
        for (unsigned j = i + 1; j < len; j++) {
            char c2 = 32 | text_c[j];
            if (c == c2) {
                text_c[j] = ' ';
                flag++;
            }
        }
        if (flag) {
            dups++;
        }
    }

    free(text_c);
    return dups;
}

/*
https://www.codewars.com/kata/reviews/5ce99a3750ed1800017991c4/groups/5defb6d58841740001bbc1a3
*/

// size_t duplicate_count(const char* text) {
  // int freq[128] = {0}, dups = 0;
  // while (*text) dups += ++freq[tolower(*text++)] == 2;
  // return dups;
// }

int main(void) {

    size_t d = duplicate_count("aAbB");

    return 0;
}