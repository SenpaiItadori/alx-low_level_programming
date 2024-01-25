#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t linked list
 * @h: the dlistint_t doubly linked list
 *
 * Return: the number of nodes in h
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
