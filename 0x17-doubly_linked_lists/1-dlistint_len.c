#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: i honestly dont really know what to call this maybe name of list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
