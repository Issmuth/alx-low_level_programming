#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the sum passed numbers
 * @argv: array of arguments
 * @argc: argument count
 * Return: Always Success (0);
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	
	if (argc == 1)
		printf("0\n");

	for (i = 1; i < (argc - 1); i++)
	{
		if (isdigit(argv[i]) != 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
