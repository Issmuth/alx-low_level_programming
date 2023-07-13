#include "main.h"

/**
 * string_nconcat - concactenates strings
 * @s1: string one
 * @s2: string two
 * @n: n bytes of string to concactenate
 *
 * Return: pointer to the new strig
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n < j)
	{
		ptr = malloc(sizeof(char) * (i + n + 1));
	} else
	{
		ptr = malloc(sizeof(char) * (i + j + 1));
	}

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ptr[k] = s1[k];

	if (n < j)
	{
		for (k = 0; k < n; k++)
			ptr[i++] = s2[k];
	} else
	{
		for (k = 0; k < j; k++)
			ptr[i++] = s2[k];
	}

	return (ptr);
}
