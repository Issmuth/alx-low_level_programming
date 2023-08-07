#include "lists.h"

/**
 * free_list - frees list
 * @head: list to be freed
 */

void free_list(list_t *head)
{
	list_t *iterate;

	if (head == NULL)
		return;

	while (head)
	{
		iterate = head->next;
		free(head->str);
		free(head);
		head = iterate;
	}
}
