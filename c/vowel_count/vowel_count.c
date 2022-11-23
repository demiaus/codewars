#include <stddef.h>
#include <stdio.h>

size_t get_count(const char *s) {

    size_t count = 0;
    const char *vowels = "aeiou";

    while (*s != '\0') {
        const char *v = vowels;
        while (*v != '\0') {
            if (*v == *s) {
                count++;
                break;
            }
            v++;
        }
        s++;
    }

    return count;
}

int main(void) {

    printf("%lu\n", get_count("aoeuhtn"));

    return 0;
}