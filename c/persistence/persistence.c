#include <stdio.h>

int persistence(int n);

int main(void) {

    for (int i = 1000; i > 9; i--) {
        printf("Persistence of %d is %d\n", i, persistence(i));
    }
}

int persistence (int n) {

    if (n < 10) {
        return 0;
    }

    int rem = 1, prod = 1, pers = 0;

    while (n >= 10) {
        while (n != 0) {
            rem = n % 10;
            prod *= rem;
            n /= 10;
        }
        pers++;
        n = prod;
        prod = 1;
    }

    return pers;

}