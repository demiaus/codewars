#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// return must be an allocated string to be freed by the tester

char *likes(size_t n, const char *const names[n])
{
    char *str = NULL;
    char *tmp = NULL;
    unsigned len;
    unsigned others = n - 2;
    unsigned others_digits = 0; 

    switch (n) {
        case 0:
            tmp = "no one likes this";
            len = strlen(tmp);
            str = calloc(len + 1, 1);
            strcpy(str, tmp);
            break;
        case 1:
            tmp = " likes this";
            len = strlen(names[0]) + strlen(tmp);
            str = calloc(len + 1, 1);
            strcat(str, names[0]);
            strcat(str, tmp);
            break;
        case 2:
            len = strlen(names[0]) + strlen(names[1]) + 15;
            str = calloc(len + 1, 1);
            sprintf(str, "%s and %s like this", names[0], names[1]);
            break;
        case 3:
            len = strlen(names[0]) + strlen(names[1]) + strlen(names[2]) + 17;
            str = calloc(len + 1, 1);
            sprintf(str, "%s, %s and %s like this", names[0], names[1], names[2]);
            break;
        default:
            while (others) {
                others /= 10;
                others_digits++;
            }
            len = strlen(names[0]) + strlen(names[1]) + 24 + others_digits;
            others = n - 2;
            str = calloc(len + 1, 1);
            sprintf(str, "%s, %s and %d others like this", names[0], names[1], others);
            break;
    }

    return str;
}

int main(void) {

    const char *names[] = {"iri", "ami", "pikku", "seila", "maikki", "kalle", "johanna", "lauri", "oskar", "kimmo", "verna", "suvi"};
    char *str = likes(12, names);
    puts(str);
    free(str);

    return 0;
}