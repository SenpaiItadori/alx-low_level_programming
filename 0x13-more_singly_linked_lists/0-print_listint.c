#include "lists.h"

/**
 * print_listint - prints all the elements of a listyint_t list
 * @h: the listint_t list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
