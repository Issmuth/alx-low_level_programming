#include "main.h"

/**
 * _isalpha - checks if the character is either
 * lowercase or uppercase alphabet and returns an integer
 *@c: character to check
 * Return - 1 if it's an alphabet 0 otherwise
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
