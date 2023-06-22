#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argv: array of arguments
 * @argc: argument count
 * Return: Always Success (0)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
