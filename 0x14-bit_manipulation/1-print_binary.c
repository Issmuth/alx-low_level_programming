#include "main.h"

/**
 * print_binary - prints binary form of
 * an integer
 * @n: integer to be converted
 */
void print_binary(unsigned long int n)
{
	int i = 63, j = 0;
	unsigned long int pos;

	for (i = 63; i >= 0; i--)
	{
		pos = n >> i;

		if (pos & 1)
		{
			_putchar('1');
			j++;
		} else if (j)
		{
			_putchar('0');
		}
	}
	if (!j)
		_putchar('0');
}
