#include "main.h"

/**
 * main - fills a memory pointed to by a pointer
 * @s: memory location
 * @char: character copied
 * @n: copy count
 *
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
