#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all the numeric
 * arguments followed by new a line
 * @separator: string to be printed between numbers
 * @n: number of integers passed as arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int arg;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		arg = va_arg(ap, int);
		printf("%d", arg);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}
	printf("\n");
}
