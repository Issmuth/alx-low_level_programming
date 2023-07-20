#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string printed in between numbers
 * @n: passed numbers count
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i + 1 != n)
		{
			if (separator == NULL)
				continue;

			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
