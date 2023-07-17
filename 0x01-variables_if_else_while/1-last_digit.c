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
	int n, diGit;
		srand(time(0));
	n = rand() - RAND_MAX / 2;
	diGit = n % 10;

	if (diGit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, diGit);
	else if (diGit == 0)
		printf("Last digit of %d is %d and is %d\n", n, diGit, diGit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, diGit);
	return (0);
}
