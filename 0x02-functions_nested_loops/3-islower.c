#include "main.h"

/**
*main - _islower - function to check for lowercase charater
*Descripition:@c is the int that will use for the argument of the function
*Return:0 always
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
