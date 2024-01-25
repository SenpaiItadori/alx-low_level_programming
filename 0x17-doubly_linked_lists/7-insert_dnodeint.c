#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the address of a dlistint_t linked list
 * @idx: the position in which the new node is to be inserted
 * @n: the data(n) of the new node
 *
 * Return: the address of the new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	while (*h != NULL)
	{
		if (i == idx)
		{
			if (idx == 0)
			{
				new->next = (*h);
				new->prev = NULL;
				*h = new;
				return (new);
			}
			new->prev = (*h)->prev;
			(*h)->prev->next = new;
			new->next = (*h);
			(*h)->prev = new;
			while ((*h)->prev != NULL)
				*h = (*h)->prev;
			return (new);
		}
		i++;
		*h  = (*h)->next;
	}
	return (NULL);
}
