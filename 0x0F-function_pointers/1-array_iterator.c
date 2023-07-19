#include "function_pointers.h"

/**
 * array_iterator - executes a function at each
 * iteration of an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: executed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
