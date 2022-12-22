#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - caps every single first character of a word in string scr
 * @src: the string to be modified
 * Return: the modified string
 */

char *cap_string(char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			if ((src[i - 1] == ' ') || (src[i - 1] == '\t') || (src[i - 1] == '\n'))
			{
				src[i] -= 32;
			}
			if ((src[i - 1] == ';') || (src[i - 1] == ',') || (src[i - 1] == '.'))
			{
				src[i] -= 32;
			}
			if ((src[i - 1] == '!') || (src[i - 1] == '?') || (src[i - 1] == '"'))
			{
				src[i] -= 32;
			}
			if ((src[i - 1] == '(') || (src[i - 1] == ')') || (src[i - 1] == '{'))
			{
				src[i] -= 32;
			}
			if (src[i - 1] == '}')
				src[i] -= 32;
		}
		i++;
	}
	return (src);
}
