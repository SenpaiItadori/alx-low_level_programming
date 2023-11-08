#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 *
 * Return: the encode string
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char code[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numcode[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == code[j])
			{
				str[i] = numcode[j];
			}
		}
		i++;
	}

	return (str);
}
