#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments
 * @n: fixed argument
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, arg;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	while (i < n)
	{
		arg = va_arg(ap, int);
		sum += arg;
		i++;
	}
	va_end(ap);

	return (sum);
}
