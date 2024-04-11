#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to be found
 *
 * Return: index of value or -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < int(size); index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index])
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
