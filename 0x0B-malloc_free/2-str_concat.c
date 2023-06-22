#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concactenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a memory that has
 * s1 followed by s2 and terminated by null
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0, len2 = 0, c, d, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	s = malloc(sizeof(char) * (len1 + len2 + 2));

	if (s == NULL)
		return (NULL);

	for (c = 0; c < len1; c++)
		s[c] = s1[c];

	for (d = len1; d < (len1 + len2); d++)
	{
		s[d] = s2[i];
		i++;
	}
	return (s);
}
