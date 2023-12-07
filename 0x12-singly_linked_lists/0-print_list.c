#include "lists.h"

/**
 * print_list - prints all the elements of a litT_t list
 * @h: the list_t list containing all elements
 *
 * Return: the number if nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		h = h->next;
	}

	return (i);

}
