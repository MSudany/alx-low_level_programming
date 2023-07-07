#include "hash_tables.h"

/**
 * key_index - returns the index at which the key/value pair should be stored
 * @key: key to value
 * @size: size of the hash table
 *
 * Return: index where the key value pair is going to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key));
	if (index < size)
		return (index);

	return (-1);
}

