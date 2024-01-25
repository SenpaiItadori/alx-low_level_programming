#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: a pointer to the address of a dlistint_t linked list
 * @index: the position of the node to be deleted
 *
 * Return: 1 if it succeeded -1 if it failed to delete node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr;

	while (*head != NULL)
	{
		if (i == index)
		{
			if (index == 0)
			{
				curr = (*head);
				(*head)->next->prev = NULL;
				free(curr);
			}
			else
			{
				curr = *head;
				(*head)->prev->next = (*head)->next;
				(*head)->next->prev = (*head)->prev;
				free(curr);
			}
			while ((*head)->prev != NULL)
				*head = (*head)->prev;
			return (1);
		}
		i++;
		*head = (*head)->next;
	}
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	return (-1);
}
