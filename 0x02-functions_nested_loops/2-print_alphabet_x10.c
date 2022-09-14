#include "main.h"

/**
*main-main block
*Description:print -putchar in a new line
*Return:this program returns zero
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
