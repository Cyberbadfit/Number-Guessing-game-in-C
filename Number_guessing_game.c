#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guessing = 0;
    int guessed_number;

    do
    {
        printf("Guess the number\n");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Guess the lower number!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Guess the higher number!\n");
        }
        else
        {
            printf("Congrates!!!!\n");
        }

        no_of_guessing++;

    } while (guessed_number != randomNumber);
    printf("You guessed the number %d guesses\n", no_of_guessing);
    printf("Developed by >>CYBERBADFIT");

    return 0;
}
