#include <stdio.h>

/**
 *  main - prints the lowercase alphabet in reverse followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 122; num > 96; num--)
		putchar(num);
	putchar(num);

	return (0);
}
