#include "main.h"

/**
 * _isdigit - ...
 * @c: ...
 *
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
	int isdigit = 0;
	int asc = c;

	if (asc > 47 && asc < 58)
		isdigit = 1;

	return (isdigit);
}
