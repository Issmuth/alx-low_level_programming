#include "lists.h"

/**
 * dlist_len - returns the number of elements
 * int the linked list
 * @h: head node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
