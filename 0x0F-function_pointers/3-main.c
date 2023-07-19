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
	int (*f)(int, int);
	char op;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = *argv[2];

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));
	return (0);
}
