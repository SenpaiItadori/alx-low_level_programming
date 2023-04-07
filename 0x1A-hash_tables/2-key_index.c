#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: size of he array of the hash table
 * Returns: the index at which the key/val pair should be stored in the table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	char **p;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	hash_node_t *placement = malloc(sizeof(hash_node_t));


	if (new_table == NULL)
		return (0);

	p = (char **)key;
	new_table->size = size;
	new_table->array = malloc(size);
	placement->value = "";
	placement->next = NULL;
	for (i = 0; i < size; i++)
	{
		if (new_table->array[i] != NULL)
		{
			if (strcmp((placement->key), *p) == 0)
				return (i);
		}
	}
	return (0);
}
