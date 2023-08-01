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

	prev_node = NULL;
	next_node = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
