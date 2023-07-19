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
	char op;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = *argv[2];

	if ((op == '/' || op == '%') && argv[3] == 0)
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
	
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
