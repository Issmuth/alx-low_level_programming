#include "main.h"

/**
 * factorial - calculates the factorial of numbers
 * @n: number to operate on
 *
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if (n > 1)
		return (n * factorial(n - 1));

	return (1);
}
