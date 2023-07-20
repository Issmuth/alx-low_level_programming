#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: type of argument passed
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, k = 0;
	char *d;

	while (!format)
		return;
	va_start(ap, format);
	i = strlen(format);
	while (k < (i + 1))
	{
		switch (format[k])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				d = va_arg(ap, char *);
				if (d == NULL)
					d = "(nil)";
				printf("%s", d);
				break;
			default:
				k++;
				continue;
		}
		if (k + 1 == i)
		{
			k++;
			continue;
		}
		printf(", ");
		k++;
	}
	printf("\n");
}
