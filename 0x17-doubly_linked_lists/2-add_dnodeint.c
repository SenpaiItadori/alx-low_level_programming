#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of a dlistint_t list
 * @head: a double pointer to the memory allocated for the new node
 * @n: the value o the new node
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		(*head)->prev = new;
		(*head) = new;
	}
	return (new);
}
