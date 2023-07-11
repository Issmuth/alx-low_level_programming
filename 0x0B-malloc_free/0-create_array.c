#include "main.h"

/**
 * create_array - returns pointer to the array
 * @size: size of array
 * @c: character
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	ptr[size - 2] = '\0';
	return (ptr);
}
