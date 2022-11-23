#include <sys/types.h>
#include <string.h>
#include <stdio.h>

ssize_t find_short(const char *s)
{
    ssize_t shortest, current, len;
    len = shortest = strlen(s);
    current = 0;

    for (int i = 0; i <= len; i++)
    {
        if ((s[i] == ' ') || (s[i] == '\0')) {
            if (current < shortest)
            {
                shortest = current;
                current = 0;
            }
        }
        else {
            current++;
        }
    }
    
    return shortest;
}

    int main(void)
    {

        printf("%ld\n", find_short("Let's travel abroad shall we"));
    }