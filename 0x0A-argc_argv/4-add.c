#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of arguments
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 if success 1 if fail
 */

int main(int argc, char *argv[])
{
	int i, j = 0, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	} else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
