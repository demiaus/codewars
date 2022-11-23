#include <stdio.h>
#include <math.h>
#ifndef M_PI
   #define M_PI 3.14159265358979323846
#endif

typedef struct {
    double x;
    double y;
} C;

long long rectangle_rotation(int a, int b) {

    int x = a / 2;
    int y = b / 2;
    double h = sqrt(pow(x, 2) + pow(y, 2));

    double angle = 45;
    double rad = angle * M_PI / 180;




    return 0;
}

int main(void) {

    long long dots = rectangle_rotation(6, 4);

    printf("Dots: %lld\n", dots);
    return 0;
}