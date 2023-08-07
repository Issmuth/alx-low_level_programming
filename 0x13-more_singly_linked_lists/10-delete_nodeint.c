#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @index: position of node to be deleted
 * @head: list
 *
 * Return: 1 if succeeded -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_node, *prev_node = *head;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = prev_node->next;
		return (1);
	}

	for (i = 0; prev_node && i < index - 1 ; i++)
		prev_node = prev_node->next;

	if (prev_node == NULL)
		return (-1);

	tmp_node = prev_node->next;
	prev_node->next = tmp_node->next;
	return (1);
}
