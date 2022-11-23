unsigned long long square_digits(unsigned n) {

    unsigned long long result = 0;
    char digit_index = 0;

    while (n) {
        char digit = n % 10;
        unsigned long long square = digit * digit;
        char sq_digits = square < 10 ? 1 : 2;
        for (char i = 0; i < digit_index; i++) square = square * 10;
        digit_index += sq_digits == 1 ? 1 : 2;
        result += square;
        n /= 10;
    }

    return result;
}

int main(void) {

    unsigned long long n = square_digits(1);

    return 0;
}