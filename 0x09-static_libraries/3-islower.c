#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * or not then returns a value accordingly
 *@c: character to check
 * Return: 1 if the argument is
 * lowercase and 0 if otherwise
*/

int _islower(int c)
{
	return (c  >= 'a' && c  < 'z');
}
