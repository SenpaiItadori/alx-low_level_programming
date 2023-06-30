#include "lists.h"

/**
 * print_list - prints al the elements of a list_t list
 * @h: the list_t list
 * Return: the number of list_t nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
