#include <stdio.h>

/**
 * main - prints the alphabet in lower case except q and e
 *
 * Return: always success 0
 */

int main(void)
{
	char a = 'a';
	
	while (a <= 'z')
	{
		if (a != 'e' || a != 'q')
		{
			putchar(a);
		} else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
