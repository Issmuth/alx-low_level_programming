#include "main.h"

/**
 * flip_bits - flips required to get a
 * number
 * @n: initial number
 * @m: final number
 *
 * Return: number of flips required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t flip_count = 0, i;
	unsigned long int j;

	j = (sizeof(unsigned long int) * 8);

	for (i = 0; i < j; i++)
	{
		if ((n & 1) != (m & 1))
			flip_count++;

		m = m >> 1;
		n = n >> 1;
	}
	return (flip_count);
}
