#include "main.h"

/**
 * _pow - power function
 * @base: base of power
 * @exp: exponent
 *
 * Return: result of power function
 */

unsigned int _pow(int base, int exp)
{
	int i = 0;
	unsigned int prod = 1;

	while (i < exp)
	{
		prod *= base;
		i++;
	}
	return (prod);
}
/**
 * binary_to_uint - converts binary to unsigned
 * integer
 * @b: pointer to a string of binary
 *
 * Return: converted uint or 0 if not successful
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	i--;
	for (j = 0; b[i]; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '0')
		{
			j++;
			continue;
		}

		if (b[i] == '1')
		{
			sum += _pow(2, j);
			j++;
		}
	}
	return (sum);
}
