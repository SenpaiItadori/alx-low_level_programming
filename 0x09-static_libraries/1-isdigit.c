#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the one to be checked
 * Return: 1 ifdigit , 0 else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
