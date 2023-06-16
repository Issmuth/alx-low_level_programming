#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always success (0)
 */
int main()
{
	int a;
	char b;

	for (a = 65; a < 92; a++)
	{
		b = a + '0';
		putchar("%c", b);
	}
	return (0);
}
