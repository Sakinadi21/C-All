#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void giveHint(int guess, int secret) {
    if (guess < secret) {
        printf("Too low! Maybe try a number a bit more... ambitious?\n");
    } else if (guess > secret) {
        printf("Too high! Think smaller, like your weekend plans.\n");
    } else {
        printf("Spot on! You're a psychic!\n");
    }
}

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;

    printf("Welcome to the Guess-the-Number game!\n");
    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        giveHint(guess, secretNumber);
    } while (guess != secretNumber);

    printf("You guessed it! The number was %d. Well played!\n", secretNumber);
    return 0;
}

