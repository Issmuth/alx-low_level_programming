#include "main.h"

/**
 * malloc_checked - alocates a memory using malloc
 * @b: size of memory to allocate
 *
 * Return: a pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
