#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define help "-h"
#define help_verbose "--help"
#define default_rot 13

void print_rot(char *string, int rot);
void print_help(void);
int check_opt(char *string, char *opt, char *opt_verbose);

int main(int argc, char **argv) {

    switch (argc) {

        case 1:
            print_help();
            break;
        
        case 2:
            check_opt(argv[1], help, help_verbose) ? print_help() : print_rot(argv[1], default_rot);
            break;

        case 3:
            print_rot(argv[2], atoi(argv[1]));
            break;

        default:
            break;
    }

    return 0;
           
}

void print_rot(char *string, int rot) {

    while (rot < 0) {
        rot += 26;
    }

    for (unsigned i = 0; i < strlen(string); i++) {
        
        char c = string[i];

        if (isalpha(c)) {
            if (isupper(c)) {
                c = ((c - 'A' + rot) % 26) + 'A';
            }
            else {
                c = ((c - 'a' + rot) % 26) + 'a';
            }
        }
        putchar(c);
    }

    printf("\n");
}

int check_opt(char *string, char *opt, char *opt_verbose) {
    
    int ret = 0;

    if (!strcmp(string, opt) || !strcmp(string, opt_verbose)) {
        ret = 1;        
    }

    return ret;
}

void print_help(void) {

    printf("Usage: rot [AMOUNT] [MESSAGE]\n");
    printf("Rotate letters in the MESSAGE by 13 (default) or by AMOUNT\n");
    printf("\n\n%-20s print this help\n", "-h, --help");
}