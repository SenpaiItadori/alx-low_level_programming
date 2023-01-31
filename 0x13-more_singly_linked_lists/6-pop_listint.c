#include "lists.h"

/**
 * deletes the head node of a listint_t list and returns the head nodes data
 * @head: a double pointer to the listint_t list
 * Return: the head nodes data(n)
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *curr = *head;

	if (*head == NULL)
		return (0);
	i = curr->n;
	*head = (*head)->next;
	free(curr);

	return (i);
}
