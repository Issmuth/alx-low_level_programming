#include "main.h"

/**
 * _puts_recursion - prints a string
 *  followed by a new line
 *  @s: character pointer variable
 *  Return: NULL
 */

void _puts_recursion(char *s)
{
	int static a = 0;

	if (s[a] != '\0')
	{
		putchar(s[a]);
		a++;
		_puts_recusrion(*s);
	}

}
