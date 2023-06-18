#include <stdio.h>

/**
 * jack_bauer - prints every complete 24 hours
 * in the hh:mm format each minute on a new line
 *
 * Return: NULL
*/

void jack_bauer(void)
{
	int a,b,c,d;

	for(a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if(a == 2 && b == 4){
				break;
			} else
			{
				for(c = 0; c < 6; c++)
				{
					for(d = 0; d < 10; d++)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(':');
						putchar(c + '0');
						putchar(d + '0');
						putchar('\n');
					}
				}
			}
		}
	}
}
