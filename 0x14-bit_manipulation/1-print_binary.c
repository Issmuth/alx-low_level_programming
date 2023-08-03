#include "main.h"

/**
 * print_binary - prints binary form of
 * a number
 * @n: number to be converted
 * @index: 
 */

void print_binary(unsigned long int n)
{
	unsigned long int closest_int, i;

	if (n == 0)
		printf("0");

	for (i = 0; n != 0; i++)
	{
		closest_int = pow(2, closest_exp(n));
		n = n - closest_int;
	}
}

unsigned long int closet_exp(unsigned long int n)
{
	unsigned long int exponent = 0;

	while (_pow(2, exponent) <= n)
	{
		if (_pow(2, exponent + 1) > n)


		exponent++;
	}
	return (exponent--);
}
