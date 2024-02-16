#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is literally the key dawg
 * @size: is the size of the array of the hash table
 *
 * Return: returns the index at which the key-value pair should be in the array
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
