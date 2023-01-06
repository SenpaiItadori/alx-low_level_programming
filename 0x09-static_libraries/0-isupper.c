#include "main.h"

/**
 * _isupper - checks to see if character is uppercase
 * @c: the character
 * Return: 1 if c is uppercase, 0 if else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
