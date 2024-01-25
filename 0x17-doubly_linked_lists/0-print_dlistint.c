#include "lists.h"

/**
 * print_dlistint - prints all the elements of  a dlistint_t list
 * @h: the dlistint doubly linked list
 *
 * Return: the number of nodes in the dlistint list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
