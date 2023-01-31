#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: a pointer to the linked list
 * @index: the nth node of the listint_t linked list/ the index of the node
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

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
