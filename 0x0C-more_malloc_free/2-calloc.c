#include "main.h"

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if ((char *) ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		((char *) ptr)[i] = '\0';

	return (ptr);
}
