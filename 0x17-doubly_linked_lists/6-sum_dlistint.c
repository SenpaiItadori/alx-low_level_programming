#include"lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: the linked list
 * Return: the sum or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int i = 0;

	if (head == NULL)
		return (0);
	while (curr != NULL)
	{
		i = i + curr->n;
		curr = curr->next;
	}
	return (i);
}
