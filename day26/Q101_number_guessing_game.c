#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1, guess, attempts = 0;
    printf("Number Guessing Game (1-100)\n");
    do {
        printf("Enter guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess < secret) printf("Too low!\n");
        else if (guess > secret) printf("Too high!\n");
        else printf("Correct! Attempts: %d\n", attempts);
    } while (guess != secret);
    return 0;
}
