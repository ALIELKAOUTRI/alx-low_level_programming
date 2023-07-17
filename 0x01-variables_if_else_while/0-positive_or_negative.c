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
    int n;

    srand(time(NULL));  /* Initialize the random number generator */

    n = rand();

    if (n > 0) {
        printf("%d\n is positive", n);
    } else if (n == 0) {
        printf("%d\n is zero", n);
    } else if (n < 0) {
        printf("%d\n is negative", n);
    }

    return 0;
}

