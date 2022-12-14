#include<stdio.h>

/**
 * main -prints sum of all the multiples of three and five below 1024
 * Return: i have no idea but if i were to guess i would say the result
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
