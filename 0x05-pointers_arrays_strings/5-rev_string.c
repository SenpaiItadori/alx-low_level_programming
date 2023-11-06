#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 */

void rev_string(char *s)
{
	int len = 0, i;
	char temp, temp2;

	while (s[len])
		len++;

	len = len - 1;
	if (len % 2 == 0)
	{
		for (i = 0; i < len / 2; i++)
		{
			temp = s[i];
			temp2 = s[len - i];
			s[i] = temp2;
			s[len - i] = temp;
		}
	}
	else
	{
		for (i = 0; i < (len / 2 + 1); i++)
		{
			temp = s[i];
			temp2 = s[len - i];
			s[i] = temp2;
			s[len - i] = temp;

		}
	}
}
