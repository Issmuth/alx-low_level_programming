#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet int lowercase
 * ten times each on a new line
 * 
 * Return: NULL
*/

void print_alphabet_x10(void)
{
    for (int b = 0; b < 10; b++)
    {
        for (int a = 17; a < 43; a++){
            putchar(a+'0');
        }
    putchar('\n');
    }
}
