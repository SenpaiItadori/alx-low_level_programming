#include<stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incomming : (\n");

	i = 0;/*right here*/

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
