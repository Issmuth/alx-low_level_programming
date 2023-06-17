#include <stdio.h>

/**
 * main - print out single digit numbers
 * of base ten followed by a new line
 *
 * Return: 0 when succesful 1 otherwise
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
