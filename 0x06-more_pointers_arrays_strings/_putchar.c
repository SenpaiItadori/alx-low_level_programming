#include<unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: whatever the fuck
 * Return: 1 (success) , -1 error
 * error is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
