#include "main.h"

/**
* string_toupper - change all lower case of a string to uppercase
* @chi: pointer for me
* Return: chi
*/

char *string_toupper(char *chi)
{
int i = 0;
while (chi[i] != 0)
{
if (chi[i] >= 97 && chi[i] <= 122)
chi[i] -= 32;
i++;
}
return (chi);
}
