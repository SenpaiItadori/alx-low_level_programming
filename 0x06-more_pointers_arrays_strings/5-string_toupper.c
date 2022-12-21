#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lower case characters of a string toupper
 * @src: the string to be changed
 * Return: the result of the transformations
 */

char *string_toupper(char *src)
{
	int i;
	i = 0;

	while (src[i])
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] -= 32;
		i++;
	}
	return (src);
}
