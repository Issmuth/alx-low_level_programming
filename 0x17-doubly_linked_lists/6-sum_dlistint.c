#include "lists.h"

/**
 * sum_dlistint - sums all elements of the list
 * @head: pointer to head node
 *
 * Return: sum of elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
