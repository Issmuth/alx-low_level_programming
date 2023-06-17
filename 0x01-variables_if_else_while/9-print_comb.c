#include <stdio.h>

/**
 * main - print all the possible combination
 * of single digit number
 *
 * Return: 0 when successful
 */

int main(void)
{
	int a = 0;

	while (a + '0' <= '9')
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
