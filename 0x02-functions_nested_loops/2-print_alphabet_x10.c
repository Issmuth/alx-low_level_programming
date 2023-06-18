#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet int lowercase
 * ten times each on a new line
 *
 * Return: NULL
*/

void print_alphabet_x10(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 49; a < 75; a++)
		{
		_putchar(a + '0');
		}
	_putchar('\n');
	}
}
