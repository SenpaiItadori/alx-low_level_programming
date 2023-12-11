#include "lists.h"

/**
 * pop_listint - deletes a head node of a listint_t linked list
 * @head: the listint_t list
 *
 * Return: the data of the node deleted
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = (*head)->next;
	data = (*head)->n;
	(*head) = curr;

	return (data);
}
