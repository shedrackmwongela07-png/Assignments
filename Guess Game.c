/*
NAME:Shedrack Mwongela
REG NUMBER:CT100/G/23588/24
DATE:10/9/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;

    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 50
    secretNumber = rand() % 50+ 1;

    printf("Welcome to BETIKA KENYA!\n");
    printf("I have chosen a number between 1 and 20.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("too high!\n");
        } else if (guess < secretNumber) {
            printf("too low!\n");
        } else {
            printf("Congratulations! You guessed the number!\n");
        }
    } while (guess != secretNumber);

    return 0;
}