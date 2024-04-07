#include "main.h"

/**
 * print_most_numbers - prints numbers
 */

void print_most_numbers(void)
{
	char num = '0';
	int i = 0;

	for (i = 0; i < 10; i++)
		if ((i != 2) && (i != 4))
			_putchar(num++);

	_putchar('\n');
}
