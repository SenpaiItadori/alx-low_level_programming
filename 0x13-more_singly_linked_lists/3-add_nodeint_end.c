#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint-t list
 * @head: a pointer to the address of the listint_t list
 * @n: value of n in a listint_t node
 * Return: the address of the new elements or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *current_node;

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
