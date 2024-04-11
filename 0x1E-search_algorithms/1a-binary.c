#include "search_algos.h"

/**
 * binary_search - search using binary algorithm
 *
 * @array: array to search through
 * @size: size of the array
 * @value: value to be searched
 * Return: index of the value -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array:");

		for (i = low; i <= high; i++)
			printf("%s %d", (i == low) ? ":" : ",", array[i]);

		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return ((int)mid);

		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}

