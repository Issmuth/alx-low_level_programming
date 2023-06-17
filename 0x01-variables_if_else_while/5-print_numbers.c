#include <stdio.h>

/**
 * main - prints out all single digit
 * base 10 numbers follwed by a new line
 *
 * Return: 0 when successful other when not
 */

int main(void)
{
	int a = 0;

	while (a + '0' <= '9')
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
