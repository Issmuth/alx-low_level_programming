#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a certain index posiotion
 * @head: pointer to head node pointer
 * @idx: index position
 * @n: value of node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *prev_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; prev_node != NULL && i < idx; i++)
		prev_node = prev_node->next;

	if (prev_node == NULL)
		return (NULL);

	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}
