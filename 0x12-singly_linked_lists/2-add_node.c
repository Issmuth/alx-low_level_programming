#include "lists.h"

/**
 * add_node - addes node to the
 * beggining of the list
 *
 * @head: pointer to the first node
 * @str: string element
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *new_node;

	while(str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
