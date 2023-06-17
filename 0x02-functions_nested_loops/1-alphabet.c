#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: nothing
 */

void main(void)
{
	int a = 49;

	while (a < 75)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
