#include "hash_tables.h"

/**
 * hash_table_print - prints the contents
 * of a hash table
 * @ht: ...
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, notlast = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (notlast)
				printf(", ");

			printf("\'%s\': \'%s\'", temp->key, temp->value);
			temp = temp->next;

			if (notlast == 0)
				notlast = 1;
		}
	}
	printf("}\n");
}
