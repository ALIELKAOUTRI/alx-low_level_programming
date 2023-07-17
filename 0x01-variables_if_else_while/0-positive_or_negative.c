#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    srand(time(NULL));  /* Initialize the random number generator */

    int n;
    n = rand() % 100;  /* Generate a random number between 0 and 99 */

    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n == 0) {
        printf("%d is zero\n", n);
    } else if (n < 0) {
        printf("%d is negative\n", n);
    }

    return 0;
}
