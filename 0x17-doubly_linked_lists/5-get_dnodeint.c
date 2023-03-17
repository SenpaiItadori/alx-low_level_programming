#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint linked list
 * @head: pointer to the list
 * @index: is the index of the node
 * Return: the nth node or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	while (curr != NULL)
	{
		if (i == index)
		{
			return (curr);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
