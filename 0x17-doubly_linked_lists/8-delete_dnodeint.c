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

	if (index == 0)
	{
		if (*head != NULL)
		{
			(*head) = (*head)->next;
			if ((*head)->prev != NULL)
				(*head)->prev = NULL;
		}
		else 
		{
			new = *head;
		}
		return (1);
	}
	while (curr->next != NULL)
	{
		if ((i + 1) == index)
		{
			new = curr->next;
			curr->next = new->next;
			new->next->prev = curr;
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
