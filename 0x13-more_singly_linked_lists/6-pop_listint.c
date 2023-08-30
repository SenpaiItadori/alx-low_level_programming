#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the address of the linked list
 *
 * Return: the head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	int data;

	if (head == NULL)
		return (0);
	curr = *head;
	*head = (*head)->next;
	data = curr->n;
	free(curr);

	return (data);
}
