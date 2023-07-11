#include "main.h"
/**
 * str_concat - concactenates two strings
 * @s1: string one
 * @s2: second string
 *
 * Return: concactenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = NULL;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	str = malloc (sizeof(char) * (i + j + 1));

	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	for (l = 0; l <  j; l++)
	{
		str[k] = s2[l];
		k++;
	}
	
	return (str);
}
		
		
