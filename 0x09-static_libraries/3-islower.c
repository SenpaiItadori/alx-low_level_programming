#include"main.h"

/**
 * _islower - detecting lowercase crackheads
 * @c: is the crackhead
 * Return: 1 if lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
