#include <stdio.h>

int
digital_root(int n) {

    while (n > 9) {
        n = n % 10 + digital_root(n / 10);
    }

    return n;
}

int
main(void) {

    printf("%d\n", digital_root(942));
}