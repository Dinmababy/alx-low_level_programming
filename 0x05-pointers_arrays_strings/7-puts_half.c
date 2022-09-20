#include "main.h"
/**
*put_half - prints the second half of a string
*@str: string to use
* Return: 0
*/

void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(Str[i]);
}
_putchar('\n');
}
