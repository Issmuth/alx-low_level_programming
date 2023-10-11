#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: double pointer to head node
 * @idx: index
 * @n: value
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while (i < (idx - 1))
	{
		if (*h == NULL)
			return (NULL);

		*h = (*h)->next;
		i++;
	}
	new_node->n = n;
	temp = (*h)->next;
	(*h)->next = new_node;
	new_node->next = temp;
	new_node->prev = *h;
}
