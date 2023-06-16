#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always success (0)
 */
int main(void)
{
	int a = 49;

	while (a < 75)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
