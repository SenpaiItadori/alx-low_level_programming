#include <stdio.h>

/**
 * main - prints all possible diff combos of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i = 0, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
