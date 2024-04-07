#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character
 *
 * Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	isupper = 0;
	if (atoi(c) > 64 && atoi(c) < 91)
		isupper = 1;

	return (isupper);
}
