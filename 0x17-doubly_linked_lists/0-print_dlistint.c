#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 * @h: head node of list
 *
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
