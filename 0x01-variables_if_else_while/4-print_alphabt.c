#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * excluding e and q
 *
 * Return: 0 if successful 1 otherwise
 */

int main(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		if(a != 'e' || a != 'q')
		{
			putchar(a);
		} else
		{
			continue;
		}

	a++;
	}
	putchar('\n');
	return (0);
}	
