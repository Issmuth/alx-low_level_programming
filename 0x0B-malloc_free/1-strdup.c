#include "main.h"

/**
 * _strdup - returns a pointer to dublipacted string
 * @str: string to be copied
 *
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ptr[j] = str[j];

	return (ptr);
}
