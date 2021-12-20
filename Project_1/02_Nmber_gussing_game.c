#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, n_guess = 1;
    srand(time(0));
    num = rand() % 100 + 1; // Generates a random number between 1 to 100.

    // Keep running the loop until the number is guessed.
    
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Some lower number please\n");
        }
        else if (guess < num)
        {
            printf("Some higher number please\n");
        }
        else
        {
            printf("Congrats you guessed it in %d attempts\n", n_guess);
        }
        n_guess++;

    } while (guess != num);

    return 0;
}