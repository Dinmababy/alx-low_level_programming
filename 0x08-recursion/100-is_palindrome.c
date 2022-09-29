#include "main.h"

/**
*_strlen - returns the length of a string
*@s: a string given by main
*
*Description: This will use recursion and no loops
*to achieve a goal or mimic a function
*Return: it returns the string length
*/

int _strlen(char *s)
{
if (*s == 0)
return (0);
return (1 + _strlen(s + 1));
}
