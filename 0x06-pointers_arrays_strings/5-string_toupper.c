#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a tsring to uppercase
 * @str: the string containing all the letters
 *
 * Return: the new string with the UPPERCASe setting
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
