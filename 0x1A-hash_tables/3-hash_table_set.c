#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table where the value is going to be added/appended
 * @key: key/index present in hash table
 * @value: value associated with the key
 *
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *pre;
	unsigned long int index;

	if (ht && ht->array && ht->size && key != NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);

		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;

		index = key_index((const unsigned char *)key, ht->size);

		/*List is empty*/
		if (ht->array[index] == NULL)
		{
			ht->array[index] = new_node;
			return (1);
		}

		/*Insertion to the end of a list*/
		pre = ht->array[index];
		while (1)
		{
			if (pre->next == NULL)
			{
				pre->next = new_node;
				break;
			}
			pre = pre->next;
		}
		return (1);
	}
	return (0);
}

