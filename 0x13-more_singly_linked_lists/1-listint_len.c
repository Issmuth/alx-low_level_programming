#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
