#include <stdio.h>

/**
 * main - prints out all arguments
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: Always Success (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
