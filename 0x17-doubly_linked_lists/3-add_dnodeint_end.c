#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a double pointer to the memory allocated for the new node
 * @n: the value o the new node
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *curr = *head;

	if (new == NULL)
		return NULL;
	new->next = NULL;
	new->n = n;
	new->prev = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while(curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
	}
	return (new);
}
