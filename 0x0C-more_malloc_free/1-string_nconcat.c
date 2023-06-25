#include "main.h"

/**
 * string_nconcat - concactenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of s2 to concatenate
 *
 * Return: concactenated string literal
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1 = i;

	for (j = 0; s2[j] != '\0'; j++)
		len2 = j;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	k = len1 + 1;

	if (n >= len2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			ptr[k] = s2[j];
			k++;
		}
	} else
	{	
		for (j = 0; j < n; j++)
		{
			ptr[k] = s2[j];
			k++;
		}
	}

	return (ptr);
}
