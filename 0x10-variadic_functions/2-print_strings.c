#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string placed inbetween the strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";

		printf("%s", s);

		if (separator != NULL)
		{
			if (i + 1 == n)
				continue;

			printf("%s", separator);
		}
	}
	printf("\n");
}
