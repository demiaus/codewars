#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *multi_table(int num) {

    if (num > 10 || num < 1) {
        return "Only numbers between 1-10, please\n";
    }

    char *table = calloc(122, 1);

    if (!table) {
        return NULL;
    }

    for (int i = 1; i <= 10; i++) {
        char str[14];
        sprintf(str, "%d * %d = %d", i, num, i * num);
        strcat(table, str);
        if (i == 10) {
            break;
        }
        strcat(table, "\n");
    }

    return table;
}

int main(void) {

    puts(multi_table(0));

    return 0;

}