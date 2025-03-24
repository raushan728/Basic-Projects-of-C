#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, userGuess, attempts;
    char choice;

    srand(time(NULL));

    do
    {
        randomNumber = rand() % 100 + 1;
        attempts = 0;

        printf("\nGuess a number between 1 and 100:\n");

        do
        {
            scanf("%d", &userGuess);
            attempts++;

            if (userGuess > randomNumber)
            {
                printf("Try a lower number!\n");
            }
            else if (userGuess < randomNumber)
            {
                printf("Try a higher number!\n");
            }
            else
            {
                printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (userGuess != randomNumber);

        printf("\nDo you want to play again? (Press 'y' to continue, any other key to exit): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for playing!\n");
    return 0;
}
