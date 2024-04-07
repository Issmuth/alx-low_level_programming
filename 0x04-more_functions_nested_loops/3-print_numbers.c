#include "main.h"

/**
 * print_numbers - prints numbers
 */

void print_numbers(void)
{
	char num = '0';
	int i = 0;

	for (i = 0; i < 10; i++)
		_putchar(num++);

	_putchar('\n');
}
