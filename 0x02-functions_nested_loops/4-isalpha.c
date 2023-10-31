#include "main.h"

/**
 * _isalpha - checks for n alphabet char
 * @c: the char to be checked
 *
 * Return: 1 if c is alphabetical , 0 otherwise
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
