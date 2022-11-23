#include <stdio.h>

int read_file(char *filename);

int main(void) {

    char *filename = "testfile";

    if (read_file(filename)) {
        printf("Opening file \'%s\' failed!\n", filename);
    }

    return 0;
}

int read_file(char *filename) {

    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        return 1;
    }

    char c = getc(f);

    while (c != EOF) {
        putc(c, stdout);
        c = getc(f);
    }

    puts("EOF!!");

    fclose(f);
    return 0;
}