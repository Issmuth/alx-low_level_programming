#include "main.h"

/**
 * swap_int - swap the values on two variables
 * @a:value to be swapped
 * @b:value to be swapped
 * Return: NULL
 */

void swap_int(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
