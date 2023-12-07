#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the list_t list containing all elements
 *
 * Return: the number if nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);

}
