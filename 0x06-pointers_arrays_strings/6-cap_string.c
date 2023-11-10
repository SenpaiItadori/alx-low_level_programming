#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @str: the string with the words to be caped
 *
 * Return: a pointer to a string wth caped letters
 */

char *cap_string(char *str)
{
	int i = 0, j = 0;
	char except[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			for (j = 0; j < 13; j++)
			{
				if (str[i - 1] == except[j] || i == 0)
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}

	return (str);
}
