#include "main.h"

/**
 * _pow - calculates the power
 * @b: base
 * @p: exponent
 *
 * Return: base to the power of exponent
 */

int _pow(int b, int p)
{
	int power = 1;

	while (p > 0)
	{
		power *= b;
		p--;
	}
	return (power);
}

/**
 * binary_to_uint - converts binary to
 * unsigned integer
 * @b: binary input
 *
 * Return: integer form of binary
 */

unsigned int binary_to_uint(const char *b)
{
	int exponent, i;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	exponent = strlen(b) - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			uint += _pow(2, exponent);
			exponent--;
		} else if (b[i] == '0')
		{
			exponent--;
			continue;
		} else
		{
			return (0);
		}
	}
	return (uint);
}
