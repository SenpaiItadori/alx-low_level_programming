#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_ list
 * @head: the linked list address pointer
 * @index: the position of the node to be deleted
 * Return: 1 or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *yes, *current_node = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (current_node->next == NULL)
			return (-1);

		current_node = current_node->next;
	}

	yes = current_node->next;
	current_node->next = yes->next;
	free(yes);
	return (1);
}
