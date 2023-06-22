#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * initialized with a specific char
 * @size: size of array
 * @c: char initialized
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char * arr;

	if (size == 0)
		return (NULL);

	arr = (char*)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	return (arr);
}
