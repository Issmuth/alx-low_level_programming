#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_itereator - executes a function on
 * each element of an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!array || !action)
		return;

	for(i=0; i < size; i++)
	{
		action(array[i]);
	}
}