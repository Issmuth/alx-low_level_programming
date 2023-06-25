#include "main.h"
#include <string.h>

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

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if(s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	if (n >= len2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			k = len1 + 1;
			ptr[k] = s2[j];
			k++;
		}
	} else
	{	
		for (j = 0; j < n; j++)
		{
			k = len1 + 1;
			ptr[k] = s2[j];
			k++;
		}
	}
	return (ptr);
}
