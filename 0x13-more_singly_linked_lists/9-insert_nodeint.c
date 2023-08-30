#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pionter to the address of a listint_t linked list
 * @idx: is the index whre the new node should be added
 * @n: the data(n) of the inserted node
 *
 * Return: the address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *curr = *head, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (head == NULL && i == idx)
	{
		*head = new_node;
		return (new_node);
	}

	if (head == NULL && i != idx)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (curr != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
