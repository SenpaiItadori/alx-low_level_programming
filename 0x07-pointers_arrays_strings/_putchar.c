#include "main.h"

/**
 * this is my own putchar function
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
