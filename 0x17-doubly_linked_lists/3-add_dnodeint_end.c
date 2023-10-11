#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: double pointer to the head
 * @n: value
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	while ((*head)->next)
		*head = (*head)->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = *head;
	if (*head)
	{
		(*head)->next = new_node;
	} else
		*head = new_node;

	return (new_node);
}
