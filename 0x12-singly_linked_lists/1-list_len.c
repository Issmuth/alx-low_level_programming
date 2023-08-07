#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer to list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
