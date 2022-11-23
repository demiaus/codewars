int score(const int dice[5]) {

    int eyes[6] = { 0 };
    int threes[6] = {1000, 200, 300, 400, 500, 600};
    int ones[6] = {100, 0, 0, 0, 50, 0};
    int score = 0;

    for (int i = 0; i < 5; i++) {
        eyes[dice[i]-1]++;
    }

    for (int i = 0; i < 6; i++) {
        if (eyes[i] >= 3) {
            eyes[i] = eyes[i] -3;
            score += threes[i];
        }
        while (eyes[i]) {
            eyes[i]--;
            score += ones[i];
        }
    }

    return score;
}

int main(void) {

    const int dice[5] = {2, 4, 4, 5, 4}; 

    printf("%d\n", score(dice));

    return 0;
}