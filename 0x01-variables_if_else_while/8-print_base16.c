#include <stdio.h>

/**
 * main - prints all the base 16 numbers
 * in lowercase followed by a new line
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a = 0, b = 49;

	while (a + '0' <= '9')
	{
		putchar(a + '0');
		a++;
	}
	while (b + '0' <= 'f')
	{
		putchar(b + '0');
		b++;
	}
	putchar('\n');
	return (0);
}
