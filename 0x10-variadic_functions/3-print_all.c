#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints any argument
 * @format: list of types of arguments
 * passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned long int i = 0;
	char *s;

	va_start(ap, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");

			printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		if (i != (strlen(format) - 1))
			printf(", ");

		i++;
	}
	printf("\n");
}
