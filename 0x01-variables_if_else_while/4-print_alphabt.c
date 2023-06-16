#include <stdio.h>

/**
 * main - prints the alphabet in lower case except q and e
 *
 * Return: always success 0
 */

int main(void)
{
	int a = 49;
	
	while (a < 75)
	{
		if (a != 53 || a != 66)
		{
			putchar(a + '0');
		} else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
