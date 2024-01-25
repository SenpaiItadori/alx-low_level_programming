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
	dlistint_t *curr = *head;

	if (head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (curr == NULL)
			return (-1);
		curr = curr->next;
	}

	if (curr == *head)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		curr->prev->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = curr->prev;
	}

	free(curr);
	return (1);
}
