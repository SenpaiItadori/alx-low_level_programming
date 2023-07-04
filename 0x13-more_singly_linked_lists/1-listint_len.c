#include "lists.h"

/**
 * listint_len - returns the number of elsments in a linked listint_t list
 * @h: the listint_t list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
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
