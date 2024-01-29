#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 is c is uppercase , 0 otherwise
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	return (0);
}
