#include "lists.h"

/**
 * sum_listint - sums all data of the list
 * @head: head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *sum_head = head;

	if (head == NULL)
		return (0);

	while (sum_head)
	{
		sum += sum_head->n;
		sum_head = sum_head->next;
	}
	return (sum);
}
