#include "main.h"

/**
 * print_line - prints linei
 * @n: ...
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	while (n--)
		_putchar('_');
}
