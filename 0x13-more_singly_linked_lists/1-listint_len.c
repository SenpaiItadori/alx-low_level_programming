#include "lists.h"

/**
 * listint_len - returns the number of elemnts in a linkd lsiint_t list
 * @h: a pointer to the contents of listint_t
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
