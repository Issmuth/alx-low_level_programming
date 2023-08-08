#include "main.h"

/**
 * print_binary - prints binary form of
 * a number
 * @n: number to be converted
 * @index: 
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int shifted;

	for (i = 63; i >= 0; i--)
	{
		shifted = n >> i;

		if (shifted & 1)
		{
			write(1, "1", 1);
			count++;
		}
		else if (count)
			write(1, "0", 1);
	}
	if (!count)
		write(1, "0", 1);
}
