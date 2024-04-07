#include "main.h"

/**
 * print_line - prints linei
 * @n: ...
 */

void print_line(int n)
{
	while (n-- && (n > 0))
		_putchar('_');

	_putchar('\n');
}
