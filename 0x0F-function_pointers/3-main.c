#include "3-calc.h"

/**
 * main - simple calculator
 * @argv: array of arguments
 * @argc: argument count
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	printf("%d\n", func(argv[1], argv[3]));
	return (0);
}
