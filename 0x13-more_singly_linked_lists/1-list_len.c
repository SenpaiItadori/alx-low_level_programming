#include "lists.h"

/**
 * list_len - returns the number of elsments in a linked list_t list
 * @h: the list_t list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	if (h == NULL)
		return (number_of_elements);

	while (h != NULL)
	{
		h = h->next;
		number_of_elements++;
	}

	return (number_of_elements);
}
