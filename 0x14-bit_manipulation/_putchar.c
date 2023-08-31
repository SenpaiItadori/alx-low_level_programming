#include "main.h"

/**
 * _putchar - prints a char to stdout
 * @c: the cahr to be printed
 *
 * Return: the numer of chars written
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
