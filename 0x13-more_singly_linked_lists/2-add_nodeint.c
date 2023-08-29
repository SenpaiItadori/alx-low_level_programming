#include "lists.h"

/**
 * add_nodeint - adds a new node at the head of a listint_t list
 * @head: a pointer to the address of the listint_t list
 * @n: the data to be added to the list
 *
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (*head);
}
