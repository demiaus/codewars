//solution must allocate all required memory
//and return a free-able buffer to the caller.

#include <stdlib.h>
#include <string.h>

char *disemvowel(const char *str)
{
    const char *vowels = "AEIOUaeiou";
    unsigned v_count = 0;
    unsigned in_len = strlen(str);

    char *output = calloc(in_len + 1, 1);

    for (unsigned i = 0; i < in_len; i++) {
        char v_flag = 0;
        for (unsigned j = 0; j < 10; j++) {
            if (str[i] == vowels[j]) {
                v_count++;
                v_flag = 1;
                break;
            }
        }
        if (!v_flag) {
            output[i - v_count] = str[i];
        }
    }

    output = realloc(output, in_len + 1 - v_count);
    return output;
}

int main(void) {

    printf("%s\n", disemvowel("Haista kaavittu"));

    return 0;
}