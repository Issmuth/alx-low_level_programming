#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 49;

	while (a < 75)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
	return (0);
}
