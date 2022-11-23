#include <stdio.h>

int solution(int number) {
	
    number--;
    int threes = number / 3;
    int fives = number / 5;
    int fifteens = number / 15;

    int three_sum = 3 * (threes * (threes + 1) / 2);
    int five_sum = 5 * (fives * (fives + 1) / 2);
    int fifteen_sum = 15 * (fifteens * (fifteens + 1) / 2);

    int sum = three_sum + five_sum - fifteen_sum;

    return sum;
}

int main(void) {

    for (int i = 0; i < 1000; i++) {
        printf("%d: %d\n", i, solution(i));
    }

    return 0;
}