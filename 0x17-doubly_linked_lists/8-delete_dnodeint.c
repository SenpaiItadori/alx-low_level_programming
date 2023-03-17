#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: a double pointer to the list the node is to be added
 * @index: the given positin of the node to be removed
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head, *new;
	unsigned int i = 0;

	if (curr == NULL)
		return (-1);
	new = curr->next;
	while (curr->next != NULL)
	{
		if ((i + 1) == index)
		{
			new->prev = curr->prev;
			new->next = curr->next->next;
			curr->next->next->prev = new;
			curr->next = new;
			return (1);
		}
		else
		{
			i++;
			curr = curr->next;
		}
	}
	return (-1);
}
