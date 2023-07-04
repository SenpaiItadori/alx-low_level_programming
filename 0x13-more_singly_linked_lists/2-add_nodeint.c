#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint-t list
 * @head: a pointer to the address of the listint_t list
 * @n: value of n in a listint_t node
 * Return: the address of the new elements or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;

	*head = new_node;

	return (*head);
}
