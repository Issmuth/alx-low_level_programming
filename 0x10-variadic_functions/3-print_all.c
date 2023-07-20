#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: type of argument passed
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, a, k = 0;
	char b;
	float c;
	char *d;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		i++;
	}

	while (k < (i + 1))
	{
		switch (format[k])
		{
			case 'i' :
				a = va_arg(ap, int);
				printf("%d", a);
				break;
			case 'c' :
				b = va_arg(ap, int);
				printf("%c", b);
				break;
			case 'f' :
				c = va_arg(ap, double);
				printf("%f", c);
				break;
			case 's' :
				d = va_arg(ap, char *);
				if (d == NULL)
					d = "(nil)";

				printf("%s", d);
				break;
			default :
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
