#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to character varibles which stores the string
 * Return: NULL
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
