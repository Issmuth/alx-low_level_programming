#include <stdio.h>

/**
 * main - print all the possible combination
 * of single digit number
 *
 * Return: 0 when successful
 */

int main(void)
{
	int a = 0, b = 0;

	while (a + '0' <= '9')
	{
		putchar(a + '0');
		while (b <= a)
		{
			if (b != 9)
			{
				putchar(',');
				putchar(' ');
			} else
			{
				break;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
