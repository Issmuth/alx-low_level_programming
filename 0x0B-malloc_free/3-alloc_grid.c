#include "main.h"

/**
 * alloc_grid - returns pointer to a 2 dimesional
 * array of integers
 * @width: width
 * @height:height
 *
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 \\ height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height: i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			free(ptr);

			for (j = o; j <= i; j++)
				free(arr[j]);

			return (NULL);
		}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
