#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a double pointer to the list the node is to be added
 * @idx: the given position the new node is to occupy
 * @n: the value of the node
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	while (curr != NULL)
	{
		if ((i + 1) == idx)
		{
			new->prev = curr;
			new->next = curr->next;
			curr->next->prev = new;
			curr->next = new;
			return (new);
		}
		else
		{
			i++;
			curr = curr->next;
		}
	}
	return (NULL);
}
