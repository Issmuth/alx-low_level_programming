#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the adress of head
 */

void free_listint2(listint_t **head)
{
	listint_t *iterate;

	if (*head == NULL)
		return;

	while (*head)
	{
		iterate = (*head)->next;
		free(*head);
		*head = iterate;
	}
}
