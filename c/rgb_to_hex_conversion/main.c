#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int rgb(int r, int g, int b, char *output);

int main(void) {

    char *hex_string = calloc(7, sizeof(char));
    if (!hex_string) {
        return 1;
    }
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int colours[3];
        for (int j = 0; i < 3; i++) {
            colours[i] = rand() % 256;
        }
        printf("RGB values: %d %d %d\n", colours[0], colours[1], colours[2]);
        rgb(colours[0], colours[1], colours[2], hex_string);
        printf("HEX value:  %s\n\n", hex_string);
        sleep(1);
    }

    return 0;
}

int rgb(int r, int g, int b, char *output) {

    r = (r < 0 ? 0 : (r > 255 ? 255 : r)) << 16,
    g = (g < 0 ? 0 : (g > 255 ? 255 : g)) << 8,
    b = b < 0 ? 0 : (b > 255 ? 255 : b);

    int hex = r + g + b;
    int ret = sprintf(output, "%06X", hex);

    if (ret == 6) { 
        ret = 0;
    }

    return ret;
}

