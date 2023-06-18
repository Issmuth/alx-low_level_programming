#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a charater from the string
 * Return: numeric size of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		*(s + 1);
	}
	return (a);
}
