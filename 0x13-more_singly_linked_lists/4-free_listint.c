#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *iterate;

	if (head == NULL)
		return;

	while (head)
	{
		iterate = head->next;
		free(head);
		head = iterate;
	}
}
