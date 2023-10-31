#include "main.h"

/**
 * jack_bauer - prints every minute if the day from 0 - 24hrs
 *
 */

void jack_bauer(void)
{
	int i, j, k, n;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if ((i <= 49 && j <= 57) || (i <= 50 && j <= 51))
			{
				for (k = 48; k < 54; k++)
				{
					for (n = 48; n < 58; n++)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(n);
						_putchar('\n');
					}
				}
			}
		}
	}
}
