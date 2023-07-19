#include "main.h"
/**
 * set_zero - sets the allcoted memory to zero
 * @membs: each memory to be set zero
 * @ptr: pointer to the array
 *
 */

void set_zero(unsigned int membs, char *ptr)
{
	unsigned int i;

	for (i = 0; i < membs; i++)
		ptr[i] = 0;
}

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);


	if (ptr == NULL)
	{
		return (NULL);
	}

	set_zero((nmemb * size), ptr);

	return (ptr);
}
