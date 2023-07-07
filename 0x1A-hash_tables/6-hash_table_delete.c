#include "hash_tables.h"

/**
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *curr;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			temp = curr;
			curr = curr->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

