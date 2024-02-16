#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key and it connot be an empty string
 * @value: is the value associated with the key, must be duped and can be empty
 *
 * Return: 1 if successful, 0 if otherwise
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position, i = 0;
	char *cpy;
	hash_node_t *curr, *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy = strdup(value);
	if (cpy == NULL)
		return (0);

	position = key_index((const unsigned char *)key, ht->size);

	for (i = position; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpy;
			return (1);
		}
	}
	tmp = ht->array[position];
	curr = malloc(sizeof(hash_node_t));
	if (curr == NULL)
		return (0);

	curr->key = strdup(key);
	curr->value = cpy;
	curr->next = NULL;

	if (ht->array[position] == NULL)
		ht->array[position] = curr;
	while (tmp != NULL)
		tmp = tmp->next;

	tmp = curr;
	ht->array[position] = tmp;
	return (1);
}
