#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key:..
 * @value: ...
 *
 * Return: 1 if success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;


	if (!key || !ht)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key =  strdup(key);
	node->value = strdup(value);

	index = hash_djb2((unsigned char *)node->key) % ht->size;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
