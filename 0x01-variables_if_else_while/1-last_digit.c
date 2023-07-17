#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the last digit number
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n, digits;
		srand(time(0));
	n = rand() - RAND_MAX / 2;
	digits = n % 10;

	if (digits > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digits);
	else if (digits == 0)
		printf("Last digit of %d is %d and is %d\n", n, diGit, digits);
	else if (digit < 6 && digits != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digits);
	return (0);
}
