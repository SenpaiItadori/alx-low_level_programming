#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list
 *
 * Return: the number of nodes of the list or NULL if fail
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; h = h->next, i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}

	return (i);
}
