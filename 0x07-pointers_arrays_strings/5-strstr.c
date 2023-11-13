#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 *
 * Return: a pointer to the start of the located str or NULL if failed
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int  i, len = 0, j;

	for (i = 0; haystack[i]; i++)
	{
		if (j == strlen(needle))
		{
			i--;
			return (haystack + i);
		}
		for (j = 0; needle[j]; j++)
		{
			if (j == 0)
				len = i;
			if (haystack[len] != needle[j])
				break;
			len = len + 1;
		}
	}
	return (NULL);
}
