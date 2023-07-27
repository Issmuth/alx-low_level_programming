#include "lists.h"

/**
 * print_list - prints all elements of list
 * @h: pointer to list
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0, l;
	char *s;

	while (h != NULL)
	{
		s = h->str;
		l = h->len;
		if (s == NULL)
		{
			s = "(nil)";
			l = 0;
		}

		printf("[%u] %s\n", l, s);
		h = h->next;
		i++;
	}
	return (i);
}
