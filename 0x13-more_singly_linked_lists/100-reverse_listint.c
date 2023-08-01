#include "lists.h"

/**
 * reverse_listint - reverses the list
 * @head: pointer to the head node
 *
 * Return: address to the new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	prev_node = malloc(sizeof(listint_t));
	if (prev_node == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	next_node = (*head)->next;
	(*head)->next = NULL;
	while (*head)
	{
		*head = prev_node;
		*head = next_node;
		if (*head == NULL)
			continue;

		next_node = (*head)->next;
		(*head)->next = prev_node;
	}
	*head = prev_node;
	return (*head);
}	
