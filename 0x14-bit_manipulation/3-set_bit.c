#include "main.h"

/**
 * set_bit - alters the value of bit at
 * index
 * @index: index to be altered at
 * @n: pointer to integer
 *
 * Return: ..
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n |= (1 << index);
	return (1);
}
