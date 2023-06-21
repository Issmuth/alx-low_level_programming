#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array
 * @cmp: pointer to a function used to compare values
 * @array: array to search through
 * @size: size of array
 * Return: index of the found integer in the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x, a = 0;

	if(array && cmp)
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x != 0)
			{
				return (i);
				a++;
			}
		}
			if (a == 0)
			{
				return (-1);
			}
	}
	return (-1);

}
