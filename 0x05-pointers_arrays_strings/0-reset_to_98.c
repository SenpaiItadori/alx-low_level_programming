#include "main.h"

/**
 * reset_t_98 - updates the value of an int via a pointer 
 * @*n: the int to be updated
 * Return: n/a
 */
void reset_to_98(int *n)
{
	int *p = &*n;

		*p = 98;
}
