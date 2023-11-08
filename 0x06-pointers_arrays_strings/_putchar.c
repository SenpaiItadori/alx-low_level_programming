#include "main.h"

/**
 * _putchar - prints a char to stdout
 * @c: the char to be printed to stdout
 *
 * Return: The number of chars printed which is one
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
