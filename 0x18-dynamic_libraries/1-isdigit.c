#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: the character to br checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
