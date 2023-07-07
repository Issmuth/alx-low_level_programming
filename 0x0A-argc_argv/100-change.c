#include "main.h"

/**
 * main - prints the number
 * cents will be returned as change
 * @argv: array of argument
 * @argc: argument count
 *
 * Return: 0 if success 1 if fail
 */

int main(int argc, char *argv[])
{
	int i, cents, change = 0;

	cents = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} else
	{
		while (cents > 0)
		{
			change += 1;
			if ((cents - 25) >= 0)
			{
				cents -= 25;
				continue;
			}

			if ((cents - 10) >= 0)
			{
				cents -= 10;
				continue;
			}
			
			if ((cents - 5) >= 0)
			{
				cents -+ 5;
				continue;
			}

			if ((cents - 2) >= 0)
			{
				cents -= 2;
				continue;
			}

			if ((cents - 1) >= 0)
			{
				cents -= 1;
				continue;
			}
		}
		printf("%d\n", change);
		return (0);
	}
}
