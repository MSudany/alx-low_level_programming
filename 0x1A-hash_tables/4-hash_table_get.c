#include "hash_tables.h"

/**
 * hash_table_get - returns the value associated with a key
 * @ht: hash table
 * @key: key to look for
 *
 * Return: value associated with the key or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht && key && ht->array && ht->size && strlen(key))
	{
		index = key_index((const unsigned char *)key, ht->size);
		if (index < ht->size)
			return (ht->array[index]->value);
		return (NULL);
	}
	return (NULL);
}

