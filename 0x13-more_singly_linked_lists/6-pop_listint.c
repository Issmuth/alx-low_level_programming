#include "lists.h"

/**
 * pop_listint - delets head node
 * @head: pointer to the head node
 *
 * Return: data of deleted node
 */

int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;

	return (n);
}
