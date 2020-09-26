#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, guess, nguess = 1;
    srand(time(0));
    n = rand() % 100 + 1;
    printf("Your Random number is %d\n", n);

    do
    {
        printf("Enter your Guess number btw 1 to 100 \n ");
        scanf("%d", &guess);
        if (guess < n)
        {
            printf("Enter Higher number Please\n");
        }
        else if (guess > n)
        {
            printf("Enter Lower number Please\n");
        }
        else
        {
            printf("You guess the no. in %d Attempt.\n", nguess);
        }

        nguess++;

    } while (guess != n);

    return 0;
}