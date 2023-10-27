#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if a random number is positive ,0 or negative
 * Return: the number followed by a statement and new line at stdout
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
