// https://www.codewars.com/kata/59377c53e66267c8f6000027/train/c

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *alphabet_war(const char *fight) {

    int len = strlen(fight);
    int score = 0; // left is negative, right is positive
    short flag; // flag for match found
    char *left = "sbpw"; // letter strength is their index + 1
    char *right = "zdqm";
    int army_s = 4; // size of armies (must be equal)

    for (int i = 0; i < len; i++) {

        flag = 0;
        char c = fight[i];

        for (int j = 1; j <= army_s; j++) {
            if (left[j-1] == c) {
                score -= j;
                flag = 1;
                break;
            }
        }

        if (flag) {
            continue;
        }

        for (int k = 1; k <= army_s; k++) {
            if (right[k-1] == c) {
                score += k;
                break;
            }
        }
    }

    if (score < 0) {
        return "Left side wins!";
    }
    if (score > 0) {
        return "Right side wins!";
    }
    else {
        return "Let's fight again!";
    }

}

int main(void) {

    printf("%s\n", alphabet_war("wwwwww"));

}