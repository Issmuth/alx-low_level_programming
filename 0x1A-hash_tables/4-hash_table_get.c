#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated
 * to a key in the hash table
 *
 * @ht: ...
 * @key: ...
 * Return: value or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *iterator;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *) key);
	iterator = ht->array[index];
	while (iterator)
	{
		if (!(strcmp(iterator->key, key)))
			return (iterator->value);
		iterator = iterator->next;
	}
	return (NULL);
}
