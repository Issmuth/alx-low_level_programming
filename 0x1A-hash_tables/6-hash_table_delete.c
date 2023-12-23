#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: ...
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *iterator;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		iterator = ht->array[i];
		while (iterator)
		{
			free(iterator->key);
			if (iterator->value)
				free(iterator->value);
			iterator = iterator->next;
		}
		iterator = ht->array[i];
		while (iterator)
		{
			free(iterator);
			iterator = iterator->next;
		}
	}
	free(ht->array);
	free(ht);
}
