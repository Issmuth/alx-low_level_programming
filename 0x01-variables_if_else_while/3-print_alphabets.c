#include <stdio.h>

/**
 * main - prints the alphabet in lowercase follwed by uppercase
 *
 * Return: Always Successful 0
 */

int main(void)
{
	int a = 49, b = 17;

	while (a < 75)
	{
		putchar(a + '0');
		a++;
	}
	while (b < 43)
	{
		putchar(b + '0');
		b++;
	}
	putchar('\n');
	return (0);
}
