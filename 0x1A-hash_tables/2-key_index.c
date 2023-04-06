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
	hash_table_t *new_table = malloc(sizeof(hash_table_t));


	if (new_table == NULL)
		return (0);

	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t));
	for (i = 0; i < size; i++)
	{
		if (new_table->array[i] != NULL)
		{
			if (key != NULL)
				return (i);
		}
	}
	return (0);
}
