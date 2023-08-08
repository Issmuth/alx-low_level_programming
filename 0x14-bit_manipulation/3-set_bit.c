#include "main.h"

/**
 * set_bit - set the bit to 1 at index
 * @n: points to the integer at hand
 * @index: position where the bit is set
 *
 * Return: 1 if successful -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pos = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	while (index > 0)
	{
		pos *= 2;
		index--;
	}
	*n += pos;
	return (1);
}
