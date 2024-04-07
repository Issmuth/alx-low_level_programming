#include "main.h"

/**
 * print_diagonal - prints linei
 * @n: ...
 */

void print_diagonal(int n)
{
	int i = n, j;

	if (n <= 0)
		_putchar('\n');

	while (n > 0)
	{
		j = n;
		while (i - j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
