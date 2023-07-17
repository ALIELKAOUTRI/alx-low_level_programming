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
    srand(time(NULL));  // Initialize the random number generator

    int n = rand();

    if (n > 0) {
        printf("%d\n is positive\n", n);
    } else if (n == 0) {
        printf("%d\n is zero\n", n);
    } else if (n < 0) {
        printf("%d\n is negative\n", n);
    }

    return 0;
}
