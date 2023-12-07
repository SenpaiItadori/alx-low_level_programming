#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: a pointer to the address of the list_t list
 * @str: the information of the new nopde
 *
 * Return: the address of the new node or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
