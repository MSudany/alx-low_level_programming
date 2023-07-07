#include "hash_tables.h"

/**
 * hash_table_print - ...
 * @ht: hash table
 *
 * Return: Always nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char x = 0;

	if (ht && ht->array && ht->size)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] &&
			    ht->array[i]->value &&
			    ht->array[i]->key)
			{
				if (x == 1)
					printf(", ");

				printf("'%s': '%s'", ht->array[i]->key,
				ht->array[i]->value);
				x = 1;
			}
		}
		printf("}\n");
	}
}

