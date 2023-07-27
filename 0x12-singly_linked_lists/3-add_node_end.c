#include "lists.h"

/**
 * add_node_end - adds new node to the end
 * @head: start of the node
 * @str: string to be duplicated
 *
 * Return: adress of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *old_node = *head;
	size_t i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (old_node->next)
		old_node = old_node->next;

	old_node->next = new_node;

	return (new_node);
}
