#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the listint_t list
 * @n: the data of the new node to be added
 *
 * Return: the address of the new element of NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *curr;

	curr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (new);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = new;
	curr = curr->next;

	return (curr);
}
