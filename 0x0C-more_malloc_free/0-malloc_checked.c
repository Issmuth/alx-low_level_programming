#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: size of memory to be allocated
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (((char *) ptr) == NULL)
		exit(98);

	return (ptr);
}
