#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to character where the string is stored
 */

void print_rev(char *s)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = a; b > 0; b--)
	{
		putchar(s[b]);
	}
}
