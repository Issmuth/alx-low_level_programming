#include "main.h"



/**
 * more_numbers - ...
 */

void more_numbers(void)
{
	int i, j;
	char *num;

	for (j = 0; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				if (i == 10)
					num = "10";
				else if (i == 11)
					num = "11";
				else if (i == 12)
					num = "12";
				else if (i == 13)
					num = "13";
				else
					num = "14";
				while (*num)
					_putchar(*num++);
			}
		}
		_putchar('\n');
	}
}
