#include "main.h"

/**
 * sqrt_check - searches for roots
 * @n: number to be operated on
 * @x: initial value
 *
 * Return: root
 */

int sqrt_check(int n, int x)
{
	if (n < 0)
		return (-1);

	if ((x * x) == n)
		return (x);

	if ((x * x) > n)
		return (-1);

	return (sqrt_check(n, (x + 1)));
}

/**
 * _sqrt_recursion - square root operator
 * @n: number to be operated on
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (sqrt_check(n,1);
}


