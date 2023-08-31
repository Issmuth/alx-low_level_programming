#include "main.h"

/**
 * clear_bit - makes bit zero at index
 * @index: given index
 * @n: pointer to integer
 *
 * Return: ..
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
