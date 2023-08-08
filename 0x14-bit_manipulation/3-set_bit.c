#include "main.h"

/**
 * set_bit - set the bit to 1 at index
 * @n: points to the integer at hand
 * @index: position where the bit is set
 *
 * Return: 1 if successful -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
