#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two arguments
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 if success 1 if fail
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
