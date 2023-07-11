#include "main.h"

/**
 * create_array - returns pointer to the array
 * @size: size of array
 * @c: character
 *
 * Return: pointer to the array 
 */

char *create_array(unsigned int size, __attribute__((unused))char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
