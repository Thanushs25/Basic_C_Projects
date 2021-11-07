#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nGuesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    for (nGuesses = 1; guess != number; nGuesses++)
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Greater number please\n");
        }
        else
        {
            printf("Yayy you got it!\nYou took %d attempts", nGuesses);
        }
    }

    return 0;
}
