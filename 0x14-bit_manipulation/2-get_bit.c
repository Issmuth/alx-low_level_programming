#include "main.h"

/**
 * get_bit - returns the bit at
 * specified point
 * @n: value used
 * @index: point of bit returned
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);

	temp = n >> index;
	return (temp & 1);
}
