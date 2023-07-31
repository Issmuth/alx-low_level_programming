#include "lists.h"

/**
 * add_nodeint_end - adds new node
 * at the end of the list
 * @head: pointer to the head node
 * @n: value for the new node
 *
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (old->next)
		old = old->next;

	old->next = new;

	return (new);
}
