#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index
 * @head: pointer to head node
 * @index: index of the node to be returned
 *
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, j = 0;
	listint_t *temp_head = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp_head = temp_head->next;
		if (!temp_head && (i + 1) != index)
		{
			j++;
			break;
		}
	}
	if (j == 0)
		return (temp_head);

	return (NULL);
}
