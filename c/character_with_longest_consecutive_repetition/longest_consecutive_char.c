//  return the character with longest consecutive repetition
//  if the string is empty, return a null terminator: '\0'
//  assign the count of repetitions to the provided pointer *n

#include <stddef.h>
#include <stdio.h>

char longest_repetition(const char *s, size_t *n) {

    char winner = '\0';
    char current_c = '\0';
    size_t current_l = 0;
    size_t l = 0;

    while (*s != '\0') {
        current_c = *s;
        while (*s == current_c) {
            s++;
            current_l++;
        }
        if (current_l > l) {
            l = current_l;
            winner = *(s - 1);
        }
        current_l = 0;
    }
    *n = l;
    return winner;
}

int main(void) {

    char *list[] = {"aabbbcddddddddee",
                    "aaaaaaaabbc",
                    "sdgggsdfggasggggg",
                    ""};
    size_t n = 0;

    for (int i = 0; i < 4; i++) {
        char c = longest_repetition(list[i], &n);
        printf("Char %c: %lu\n", c, n); 
    }

    return 0;
}