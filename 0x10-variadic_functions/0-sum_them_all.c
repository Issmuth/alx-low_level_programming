#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments
 * @n: fixed argument
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = n, arg;

	if (sum == 0)
		return (0);

	va_start(ap, n);
	while ((arg = va_arg(ap, int)) != 0)
	{
		sum+=arg;
	}
	va_end(ap);

	return (sum);
}
