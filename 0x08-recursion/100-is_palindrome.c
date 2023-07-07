#include "main.h"

/**
 * reverse_string - reverses the string
 * @s: string to be reverse
 *
 * Return: reversed string
 */

char* reverse_string( char *s, int i)
{
	char *rev = malloc(sizeof(char));

	if (*s)
	{
		reverse_string((s + 1), (--i));
		rev[i] = *s;
	}

	return (rev);
}

#include "main.h"

/**
 * _strlen_recursion - returns the string length
 * @s: string to be used
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: st
 * ring to be checked
 *
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	char *rev_str = "h";
	int i;

	if (s == NULL)
		return (1);

	i = _strlen_recursion(s);
	rev_str = reverse_string(s, (i + 1));
	printf("%s",rev_str);
	if (rev_str == s)
	{
		return (1);
	} else
	{
		return (0);
	}
}
