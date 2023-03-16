#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a pointer to the pointer that points to the dlistint_t list
 * @n: the integer to be added to the list
 * Return: the address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (new == NULL)
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
