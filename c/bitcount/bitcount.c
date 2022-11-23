#include <stddef.h>
#include <stdio.h>

size_t countBits(unsigned value);

int main(void) {
    
    for (int i = 0; i < 32; i++) {
        printf("Number of ones in bit representation of %d is %ld\n", i, countBits(i));
    }
}

size_t countBits(unsigned value) {

    size_t ones = 0;
    size_t bytes = sizeof(int) * 8;
    unsigned mask = 1;

    for (unsigned i = 0; i < bytes; i++) {
        if (value & mask) {
            ones++;
        }
        mask <<= 1;
    }

    return ones;
}