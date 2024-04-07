#include "main.h"

/**
 * print_diagonal - prints linei
 * @n: ...
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
	}

	_putchar('\n');
}
