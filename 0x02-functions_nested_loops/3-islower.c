#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * or not then returns a value accordingly
 *
 * Return: 1 if the argument is 
 * lowercase and 0 if otherwise
*/

int _islower(int c)
{
	if(c  >= 'A' && c  <= 'Z')
	{
		return (0);
	} else
	{
		return (1);
	}
}
