#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strup - returns a pointer to memory
 * where a copy of given string is stored
 * @str: string that is copied
 * Return: pointer of to address where
 * copied string is stored
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, len = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len]!= '\0')
		len++;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
