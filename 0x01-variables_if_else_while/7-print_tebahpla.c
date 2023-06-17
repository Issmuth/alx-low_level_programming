#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 * in reverse order follwed by a new line
 *
 * Return: 0 when successful
 */

int main(void)
{
	int a = 74;

	while (a + '0' >= 'a')
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
