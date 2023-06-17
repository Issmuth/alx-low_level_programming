#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: NULL
 */

void print_alphabet_x10(void)
{
	int a = 49;
	int static b = 0;

	if(b < 10)
	{
		while(a < 75)
		{
			_putchar(a + '0');
			a++;
		}
		_putchar('\n');
		b++;
		print_alphabet_x10();
	}
}
