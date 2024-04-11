#include "search_algos.h"

/**
 * print_array - prints the array at each
 * @array: array to be printed
 * @begin: ...
 * @end: ...
 */

void print_array(int *array, size_t begin, size_t end)
{
	size_t index;

	printf("Searching in array: ");
	for (index = begin; index < end; index++)
	{
		if (index != end - 1)
			printf("%d, ", array[index]);
		else
			printf("%d\n", array[index]);
	}
}

/**
 * binary_search - finds value using binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, high, low;

	if (!array)
		return (-1);

	high = size;
	low = 0;
	mid = (high + low) / 2;
	while (low <= high)
	{
		print_array(array, low, high);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;

		if (array[mid] < value)
			low = mid + 1;

		mid = (high + low) / 2;
	}

	return (-1);
}
