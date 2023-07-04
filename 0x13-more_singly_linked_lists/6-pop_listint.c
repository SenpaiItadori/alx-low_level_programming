#include "lists.h"

/**
 * pop_listint - removes the head of a listint list
 * @head: the list to have the head deleted
 * Return: the value of head->n or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *yes;
	int value;

	if (*head == NULL)
		return (0);

	yes = *head;
	value = (*head)->n;
	*head = (*head)->next;

	free(yes);

	return (value);
}
