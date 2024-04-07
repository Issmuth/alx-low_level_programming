#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character
 *
 * Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	int isupper = 0;
	int asc = c;

	if (asc > 64 && asc < 91)
		isupper = 1;

	return (isupper);
}
