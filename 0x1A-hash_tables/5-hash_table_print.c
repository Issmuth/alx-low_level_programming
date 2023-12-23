#include "hash_tables.h"

/**
 * hash_table_print - prints the contents
 * of a hash table
 * @ht: ...
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (i + 1 == ht->size && temp->next == NULL)
			{
				printf("\'%s\': \'%s\'}", temp->key, temp->value);
				break;
			}
			printf("\'%s\': \'%s\', ", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
