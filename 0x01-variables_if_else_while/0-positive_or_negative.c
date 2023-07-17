#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
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
        printf("%d is positive\n", n);
    } else if (n == 0) {
        printf("%d is zero\n", n);
    } else if (n < 0) {
        printf("%d is negative\n", n);
    }

    return 0;
}
	return (0);
}
