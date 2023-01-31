#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: the double pointer to the linked list
 * @index: the index of the node which should be deleted
 * Return: 1 or -1 in fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *rm;
	unsigned int i;

	if (curr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}
	rm = curr->next;
	curr->next = rm->next;
	free(rm);
	return (1);
}
