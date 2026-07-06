#include <stdio.h>
#include <string.h>

int main() {
    char questions[5][200] = {
        "Q1: What is 2+2? (a)3 (b)4 (c)5",
        "Q2: Capital of India? (a)Mumbai (b)Delhi (c)Kolkata",
        "Q3: 5*5=? (a)20 (b)25 (c)30",
        "Q4: Which is a prime? (a)4 (b)6 (c)7",
        "Q5: Largest planet? (a)Earth (b)Saturn (c)Jupiter"
    };
    char answers[5] = {'b', 'b', 'b', 'c', 'c'};
    int score = 0;
    char ans;
    printf("=== Quiz Application ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\nYour answer: ", questions[i]);
        scanf(" %c", &ans);
        if (ans == answers[i]) { printf("Correct!\n"); score++; }
        else printf("Wrong! Correct: %c\n", answers[i]);
    }
    printf("Score: %d/5\n", score);
    return 0;
}
