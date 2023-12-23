#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t));
	if (!(ht->array))
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
