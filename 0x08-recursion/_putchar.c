#include "main.h"

/**
 * my own putchar function
 * which means no need for a description
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
