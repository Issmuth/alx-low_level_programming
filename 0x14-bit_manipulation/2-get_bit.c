#include "main.h"

/**
 * get_bit - retrieves bit at certain index
 * @n: decimal pased
 * @index: index to retrieve bit at
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);

	return (bit & 1);
}
