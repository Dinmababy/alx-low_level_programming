#include "main.h"

/**
*main - print_alphabets_x10
*Description - print_alphabets_x10 print 10 times the alphabet, in lowercase
*Return: 0
*/

void print_alphabet_x10(void)
{
char c, i;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
