#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head node
 * @index: ...
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
