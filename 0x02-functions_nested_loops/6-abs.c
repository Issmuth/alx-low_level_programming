#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @a: number to be computed
 * Return: negative multiple if negative
 * positive multiple if positive
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	} else if (a < 0)
	{
		return (-a);
	}
	return (0);
	
}

