#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always success (0)
 */
int main()
{
	int a = 65;
	char b;

	while (a < 92)
	{
		b = a + '0';
		putchar("%c", b);
		a++;
	}
	return (0);
}
