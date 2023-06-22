#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @argv: array of arguments
 * @argc: argument count
 * Return: Always success (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
