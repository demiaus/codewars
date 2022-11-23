#include <stdlib.h>
// Let's try to manage without string.h and ctype.h for practice

char *accum(const char *source) {

    unsigned in_len = 0;
    const char *s = source;
    while (*s++) in_len++;  // Count input characters
    s = source;             // Return pointer back to start of source

    // Amount of letters in output is n * (n + 1) / 2 == sum of (1, 2, 3...n)
    // Amount of whitespaces in output is in_len - 1
    unsigned out_len = in_len * (in_len + 1) / 2 + in_len - 1;

    // Remember to reserve space for '\0' == out_len + 1
    // Size of char is by definition 1 byte
    char *output = calloc(out_len + 1, 1);
    unsigned out_i = 0;     // Output index

    for (unsigned i = 0; i < in_len; i++, out_i++) {    // Loop through input characters
        for (unsigned j = 0; j <= i; j++, out_i++) {    // Loop through output characters
            char c = s[i];

            // [IF] first character of inner loop:
            // Make bitmask '1101 1111' by complementing 'a' - 'A' (32 == '0010 0000'),
            // and bitwise-AND to turn 6th bit 'off' to CAPITALIZE the character
            // [ELSE]:
            // Bitwise-OR to turn the 6th bit 'on' to lowercase the letter

            if (j == 0) { c &= ~('a' - 'A'); }
            else        { c |=  ('a' - 'A'); }

            output[out_i] = c;
        }
        output[out_i] = '-';    // Append hyphen
    }
  
    output[out_i - 1] = '\0';   // write null character over the last hyphen

    return output;
}
