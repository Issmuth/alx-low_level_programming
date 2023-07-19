#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of array
 * @cmp: function that compares values
 * 
 * Return: index of the element that cmp does not return 0
 * -1 if no element is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if (!cmp || array)
		return;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			j++;
			break;
		}
	}

	if (j == 0)
		return (-1);

	return (i);
}
