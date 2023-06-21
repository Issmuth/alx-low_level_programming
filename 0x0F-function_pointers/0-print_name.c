#include "function_pointers.h"
#include "stdlib.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to function that
 * takes characters and returns nothing
 */
void print_name(char *name, void (*f) (char *))
{
	if (!f || !name)
	{
		f(name);
	}
}
