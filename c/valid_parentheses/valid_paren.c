#include <stdbool.h>
#include <stdio.h>

bool validParentheses(const char *str_in) {

    char stack[100] = { 0 };
    char index = 0;
 
    while (*str_in != '\0') {
 
        if (*str_in == '(') {
            stack[index] = '(';
            index++;
        } else if (*str_in == ')' && index > 0) {
            index--;
            stack[index] = 0;
        } else if (*str_in == ')') {
            index--;
            break;
        }
        
        str_in++;
    }

    return index == 0;
}

int main(void) {

    char *strings[] = { "  (",
                        ")test",
                        "",
                        "hi())(",
                        "hi(hi)()",
                        "((())()())",
                        "zr(f(sx)n)t"
                        };

    for (int i = 0; i < 7; i++) {
        printf("%s\n", validParentheses(strings[i]) ? "Valid" : "Invalid");
    }

    return 0;
}