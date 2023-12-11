#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a listint_t list
 * @head: the listint_t list
 * @n: the data to be stored int the added node
 *
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
